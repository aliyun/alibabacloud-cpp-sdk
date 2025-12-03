#include <darabonba/Core.hpp>
#include <alibabacloud/Devops20210625.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Devops20210625::Models;
namespace AlibabaCloud
{
namespace Devops20210625
{

AlibabaCloud::Devops20210625::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("devops", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加组成员
 *
 * @param request AddGroupMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGroupMemberResponse
 */
AddGroupMemberResponse Client::addGroupMemberWithOptions(const string &groupId, const AddGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAccessLevel()) {
    body["accessLevel"] = request.accessLevel();
  }

  if (!!request.hasAliyunPks()) {
    body["aliyunPks"] = request.aliyunPks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddGroupMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/members/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGroupMemberResponse>();
}

/**
 * @summary 添加组成员
 *
 * @param request AddGroupMemberRequest
 * @return AddGroupMemberResponse
 */
AddGroupMemberResponse Client::addGroupMember(const string &groupId, const AddGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addGroupMemberWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 添加流水线关联
 *
 * @param request AddPipelineRelationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPipelineRelationsResponse
 */
AddPipelineRelationsResponse Client::addPipelineRelationsWithOptions(const string &organizationId, const string &pipelineId, const AddPipelineRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelObjectIds()) {
    query["relObjectIds"] = request.relObjectIds();
  }

  if (!!request.hasRelObjectType()) {
    query["relObjectType"] = request.relObjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPipelineRelations"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRelations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPipelineRelationsResponse>();
}

/**
 * @summary 添加流水线关联
 *
 * @param request AddPipelineRelationsRequest
 * @return AddPipelineRelationsResponse
 */
AddPipelineRelationsResponse Client::addPipelineRelations(const string &organizationId, const string &pipelineId, const AddPipelineRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addPipelineRelationsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 添加代码库成员
 *
 * @param request AddRepositoryMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRepositoryMemberResponse
 */
AddRepositoryMemberResponse Client::addRepositoryMemberWithOptions(const string &repositoryId, const AddRepositoryMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAccessLevel()) {
    body["accessLevel"] = request.accessLevel();
  }

  if (!!request.hasAliyunPks()) {
    body["aliyunPks"] = request.aliyunPks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddRepositoryMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/members")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRepositoryMemberResponse>();
}

/**
 * @summary 添加代码库成员
 *
 * @param request AddRepositoryMemberRequest
 * @return AddRepositoryMemberResponse
 */
AddRepositoryMemberResponse Client::addRepositoryMember(const string &repositoryId, const AddRepositoryMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addRepositoryMemberWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 添加代码库Webhook
 *
 * @param request AddWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWebhookResponse
 */
AddWebhookResponse Client::addWebhookWithOptions(const string &repositoryId, const AddWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnableSslVerification()) {
    body["enableSslVerification"] = request.enableSslVerification();
  }

  if (!!request.hasMergeRequestsEvents()) {
    body["mergeRequestsEvents"] = request.mergeRequestsEvents();
  }

  if (!!request.hasNoteEvents()) {
    body["noteEvents"] = request.noteEvents();
  }

  if (!!request.hasPushEvents()) {
    body["pushEvents"] = request.pushEvents();
  }

  if (!!request.hasSecretToken()) {
    body["secretToken"] = request.secretToken();
  }

  if (!!request.hasTagPushEvents()) {
    body["tagPushEvents"] = request.tagPushEvents();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddWebhook"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/webhooks/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWebhookResponse>();
}

/**
 * @summary 添加代码库Webhook
 *
 * @param request AddWebhookRequest
 * @return AddWebhookResponse
 */
AddWebhookResponse Client::addWebhook(const string &repositoryId, const AddWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addWebhookWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 取消执行研发阶段流水线
 *
 * @param request CancelExecutionReleaseStageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelExecutionReleaseStageResponse
 */
CancelExecutionReleaseStageResponse Client::cancelExecutionReleaseStageWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const CancelExecutionReleaseStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelExecutionReleaseStage"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "/executions/" , Darabonba::Encode::Encoder::percentEncode(executionNumber) , "%3Acancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelExecutionReleaseStageResponse>();
}

/**
 * @summary 取消执行研发阶段流水线
 *
 * @param request CancelExecutionReleaseStageRequest
 * @return CancelExecutionReleaseStageResponse
 */
CancelExecutionReleaseStageResponse Client::cancelExecutionReleaseStage(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const CancelExecutionReleaseStageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelExecutionReleaseStageWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

/**
 * @summary 关闭代码评审
 *
 * @param request CloseMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseMergeRequestResponse
 */
CloseMergeRequestResponse Client::closeMergeRequestWithOptions(const string &repositoryId, const string &localId, const CloseMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId) , "/close")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseMergeRequestResponse>();
}

/**
 * @summary 关闭代码评审
 *
 * @param request CloseMergeRequestRequest
 * @return CloseMergeRequestResponse
 */
CloseMergeRequestResponse Client::closeMergeRequest(const string &repositoryId, const string &localId, const CloseMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

/**
 * @summary 添加应用成员
 *
 * @param request CreateAppMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppMembersResponse
 */
CreateAppMembersResponse Client::createAppMembersWithOptions(const string &appName, const CreateAppMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasPlayerList()) {
    body["playerList"] = request.playerList();
  }

  if (!!request.hasRoleNames()) {
    body["roleNames"] = request.roleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAppMembers"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/members")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppMembersResponse>();
}

/**
 * @summary 添加应用成员
 *
 * @param request CreateAppMembersRequest
 * @return CreateAppMembersResponse
 */
CreateAppMembersResponse Client::createAppMembers(const string &appName, const CreateAppMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAppMembersWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 创建分支
 *
 * @param request CreateBranchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBranchResponse
 */
CreateBranchResponse Client::createBranchWithOptions(const string &repositoryId, const CreateBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasBranchName()) {
    body["branchName"] = request.branchName();
  }

  if (!!request.hasRef()) {
    body["ref"] = request.ref();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBranch"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/branches")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBranchResponse>();
}

/**
 * @summary 创建分支
 *
 * @param request CreateBranchRequest
 * @return CreateBranchResponse
 */
CreateBranchResponse Client::createBranch(const string &repositoryId, const CreateBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBranchWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建变更
 *
 * @param request CreateChangeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChangeRequestResponse
 */
CreateChangeRequestResponse Client::createChangeRequestWithOptions(const string &appName, const CreateChangeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAppCodeRepoSn()) {
    body["appCodeRepoSn"] = request.appCodeRepoSn();
  }

  if (!!request.hasAutoDeleteBranchWhenEnd()) {
    body["autoDeleteBranchWhenEnd"] = request.autoDeleteBranchWhenEnd();
  }

  if (!!request.hasBranchName()) {
    body["branchName"] = request.branchName();
  }

  if (!!request.hasCreateBranch()) {
    body["createBranch"] = request.createBranch();
  }

  if (!!request.hasOwnerAccountId()) {
    body["ownerAccountId"] = request.ownerAccountId();
  }

  if (!!request.hasOwnerId()) {
    body["ownerId"] = request.ownerId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChangeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/changeRequests")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChangeRequestResponse>();
}

/**
 * @summary 创建变更
 *
 * @param request CreateChangeRequestRequest
 * @return CreateChangeRequestResponse
 */
CreateChangeRequestResponse Client::createChangeRequest(const string &appName, const CreateChangeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChangeRequestWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 添加检查运行记录
 *
 * @param request CreateCheckRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCheckRunResponse
 */
CreateCheckRunResponse Client::createCheckRunWithOptions(const CreateCheckRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasAnnotations()) {
    body["annotations"] = request.annotations();
  }

  if (!!request.hasCompletedAt()) {
    body["completedAt"] = request.completedAt();
  }

  if (!!request.hasConclusion()) {
    body["conclusion"] = request.conclusion();
  }

  if (!!request.hasDetailsUrl()) {
    body["detailsUrl"] = request.detailsUrl();
  }

  if (!!request.hasExternalId()) {
    body["externalId"] = request.externalId();
  }

  if (!!request.hasHeadSha()) {
    body["headSha"] = request.headSha();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasOutput()) {
    body["output"] = request.output();
  }

  if (!!request.hasStartedAt()) {
    body["startedAt"] = request.startedAt();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCheckRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/check_runs/create_check_run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCheckRunResponse>();
}

/**
 * @summary 添加检查运行记录
 *
 * @param request CreateCheckRunRequest
 * @return CreateCheckRunResponse
 */
CreateCheckRunResponse Client::createCheckRun(const CreateCheckRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCheckRunWithOptions(request, headers, runtime);
}

/**
 * @summary 创建评论
 *
 * @param request CreateCommentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCommentResponse
 */
CreateCommentResponse Client::createCommentWithOptions(const CreateCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasCommentType()) {
    body["commentType"] = request.commentType();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasDraft()) {
    body["draft"] = request.draft();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.filePath();
  }

  if (!!request.hasFromPachSetBizId()) {
    body["fromPachSetBizId"] = request.fromPachSetBizId();
  }

  if (!!request.hasLineNumber()) {
    body["lineNumber"] = request.lineNumber();
  }

  if (!!request.hasParentCommentBizId()) {
    body["parentCommentBizId"] = request.parentCommentBizId();
  }

  if (!!request.hasPatchSetBizId()) {
    body["patchSetBizId"] = request.patchSetBizId();
  }

  if (!!request.hasResolved()) {
    body["resolved"] = request.resolved();
  }

  if (!!request.hasToPatchSetBizId()) {
    body["toPatchSetBizId"] = request.toPatchSetBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComment"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/code_reviews/comments/create_comment")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCommentResponse>();
}

/**
 * @summary 创建评论
 *
 * @param request CreateCommentRequest
 * @return CreateCommentResponse
 */
CreateCommentResponse Client::createComment(const CreateCommentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCommentWithOptions(request, headers, runtime);
}

/**
 * @summary 创建提交状态记录
 *
 * @param request CreateCommitStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCommitStatusResponse
 */
CreateCommitStatusResponse Client::createCommitStatusWithOptions(const CreateCommitStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  if (!!request.hasSha()) {
    query["sha"] = request.sha();
  }

  json body = {};
  if (!!request.hasContext()) {
    body["context"] = request.context();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasState()) {
    body["state"] = request.state();
  }

  if (!!request.hasTargetUrl()) {
    body["targetUrl"] = request.targetUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCommitStatus"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/repository/commit_statuses/create_commit_status")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCommitStatusResponse>();
}

/**
 * @summary 创建提交状态记录
 *
 * @param request CreateCommitStatusRequest
 * @return CreateCommitStatusResponse
 */
CreateCommitStatusResponse Client::createCommitStatus(const CreateCommitStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCommitStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 单提交变更多个文件
 *
 * @param request CreateCommitWithMultipleFilesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCommitWithMultipleFilesResponse
 */
CreateCommitWithMultipleFilesResponse Client::createCommitWithMultipleFilesWithOptions(const CreateCommitWithMultipleFilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasActions()) {
    body["actions"] = request.actions();
  }

  if (!!request.hasBranch()) {
    body["branch"] = request.branch();
  }

  if (!!request.hasCommitMessage()) {
    body["commitMessage"] = request.commitMessage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCommitWithMultipleFiles"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/repository/commits/files")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCommitWithMultipleFilesResponse>();
}

/**
 * @summary 单提交变更多个文件
 *
 * @param request CreateCommitWithMultipleFilesRequest
 * @return CreateCommitWithMultipleFilesResponse
 */
CreateCommitWithMultipleFilesResponse Client::createCommitWithMultipleFiles(const CreateCommitWithMultipleFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCommitWithMultipleFilesWithOptions(request, headers, runtime);
}

/**
 * @summary 创建部署密钥
 *
 * @param request CreateDeployKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeployKeyResponse
 */
CreateDeployKeyResponse Client::createDeployKeyWithOptions(const string &repositoryId, const CreateDeployKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasKey()) {
    body["key"] = request.key();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDeployKey"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/keys/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeployKeyResponse>();
}

/**
 * @summary 创建部署密钥
 *
 * @param request CreateDeployKeyRequest
 * @return CreateDeployKeyResponse
 */
CreateDeployKeyResponse Client::createDeployKey(const string &repositoryId, const CreateDeployKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDeployKeyWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建文件
 *
 * @param request CreateFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFileWithOptions(const string &repositoryId, const CreateFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasBranchName()) {
    body["branchName"] = request.branchName();
  }

  if (!!request.hasCommitMessage()) {
    body["commitMessage"] = request.commitMessage();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasEncoding()) {
    body["encoding"] = request.encoding();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.filePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFile"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/files")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileResponse>();
}

/**
 * @summary 创建文件
 *
 * @param request CreateFileRequest
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFile(const string &repositoryId, const CreateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFileWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建标签
 *
 * @param request CreateFlowTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowTagResponse
 */
CreateFlowTagResponse Client::createFlowTagWithOptions(const string &organizationId, const CreateFlowTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColor()) {
    query["color"] = request.color();
  }

  if (!!request.hasFlowTagGroupId()) {
    query["flowTagGroupId"] = request.flowTagGroupId();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlowTag"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowTagResponse>();
}

/**
 * @summary 创建标签
 *
 * @param request CreateFlowTagRequest
 * @return CreateFlowTagResponse
 */
CreateFlowTagResponse Client::createFlowTag(const string &organizationId, const CreateFlowTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFlowTagWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建标签分类
 *
 * @param request CreateFlowTagGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowTagGroupResponse
 */
CreateFlowTagGroupResponse Client::createFlowTagGroupWithOptions(const string &organizationId, const CreateFlowTagGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlowTagGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tagGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowTagGroupResponse>();
}

/**
 * @summary 创建标签分类
 *
 * @param request CreateFlowTagGroupRequest
 * @return CreateFlowTagGroupResponse
 */
CreateFlowTagGroupResponse Client::createFlowTagGroup(const string &organizationId, const CreateFlowTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFlowTagGroupWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建主机组
 *
 * @param request CreateHostGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostGroupResponse
 */
CreateHostGroupResponse Client::createHostGroupWithOptions(const string &organizationId, const CreateHostGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunRegion()) {
    body["aliyunRegion"] = request.aliyunRegion();
  }

  if (!!request.hasEcsLabelKey()) {
    body["ecsLabelKey"] = request.ecsLabelKey();
  }

  if (!!request.hasEcsLabelValue()) {
    body["ecsLabelValue"] = request.ecsLabelValue();
  }

  if (!!request.hasEcsType()) {
    body["ecsType"] = request.ecsType();
  }

  if (!!request.hasEnvId()) {
    body["envId"] = request.envId();
  }

  if (!!request.hasMachineInfos()) {
    body["machineInfos"] = request.machineInfos();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasServiceConnectionId()) {
    body["serviceConnectionId"] = request.serviceConnectionId();
  }

  if (!!request.hasTagIds()) {
    body["tagIds"] = request.tagIds();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateHostGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/hostGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostGroupResponse>();
}

/**
 * @summary 创建主机组
 *
 * @param request CreateHostGroupRequest
 * @return CreateHostGroupResponse
 */
CreateHostGroupResponse Client::createHostGroup(const string &organizationId, const CreateHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createHostGroupWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建代码评审
 *
 * @param request CreateMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMergeRequestResponse
 */
CreateMergeRequestResponse Client::createMergeRequestWithOptions(const string &repositoryId, const CreateMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasCreateFrom()) {
    body["createFrom"] = request.createFrom();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasReviewerIds()) {
    body["reviewerIds"] = request.reviewerIds();
  }

  if (!!request.hasSourceBranch()) {
    body["sourceBranch"] = request.sourceBranch();
  }

  if (!!request.hasSourceProjectId()) {
    body["sourceProjectId"] = request.sourceProjectId();
  }

  if (!!request.hasTargetBranch()) {
    body["targetBranch"] = request.targetBranch();
  }

  if (!!request.hasTargetProjectId()) {
    body["targetProjectId"] = request.targetProjectId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  if (!!request.hasWorkItemIds()) {
    body["workItemIds"] = request.workItemIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMergeRequestResponse>();
}

/**
 * @summary 创建代码评审
 *
 * @param request CreateMergeRequestRequest
 * @return CreateMergeRequestResponse
 */
CreateMergeRequestResponse Client::createMergeRequest(const string &repositoryId, const CreateMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMergeRequestWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建OAuth令牌
 *
 * @param request CreateOAuthTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOAuthTokenResponse
 */
CreateOAuthTokenResponse Client::createOAuthTokenWithOptions(const CreateOAuthTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.clientId();
  }

  if (!!request.hasClientSecret()) {
    body["clientSecret"] = request.clientSecret();
  }

  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasGrantType()) {
    body["grantType"] = request.grantType();
  }

  if (!!request.hasLogin()) {
    body["login"] = request.login();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOAuthToken"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/login/oauth/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOAuthTokenResponse>();
}

/**
 * @summary 创建OAuth令牌
 *
 * @param request CreateOAuthTokenRequest
 * @return CreateOAuthTokenResponse
 */
CreateOAuthTokenResponse Client::createOAuthToken(const CreateOAuthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createOAuthTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 创建流水线。
 *
 * @param request CreatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipelineWithOptions(const string &organizationId, const CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePipeline"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineResponse>();
}

/**
 * @summary 创建流水线。
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const string &organizationId, const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPipelineWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建流水线分组
 *
 * @param request CreatePipelineGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineGroupResponse
 */
CreatePipelineGroupResponse Client::createPipelineGroupWithOptions(const string &organizationId, const CreatePipelineGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePipelineGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineGroupResponse>();
}

/**
 * @summary 创建流水线分组
 *
 * @param request CreatePipelineGroupRequest
 * @return CreatePipelineGroupResponse
 */
CreatePipelineGroupResponse Client::createPipelineGroup(const string &organizationId, const CreatePipelineGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPipelineGroupWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const string &organizationId, const CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomCode()) {
    body["customCode"] = request.customCode();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasTemplateIdentifier()) {
    body["templateIdentifier"] = request.templateIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/projects/createProject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const string &organizationId, const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建代码库Label
 *
 * @param request CreateProjectLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectLabelResponse
 */
CreateProjectLabelResponse Client::createProjectLabelWithOptions(const CreateProjectLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasColor()) {
    body["color"] = request.color();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProjectLabel"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectLabelResponse>();
}

/**
 * @summary 创建代码库Label
 *
 * @param request CreateProjectLabelRequest
 * @return CreateProjectLabelResponse
 */
CreateProjectLabelResponse Client::createProjectLabel(const CreateProjectLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectLabelWithOptions(request, headers, runtime);
}

/**
 * @summary 创建保护分支
 *
 * @param request CreateProtectdBranchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProtectdBranchResponse
 */
CreateProtectdBranchResponse Client::createProtectdBranchWithOptions(const string &repositoryId, const CreateProtectdBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAllowMergeRoles()) {
    body["allowMergeRoles"] = request.allowMergeRoles();
  }

  if (!!request.hasAllowMergeUserIds()) {
    body["allowMergeUserIds"] = request.allowMergeUserIds();
  }

  if (!!request.hasAllowPushRoles()) {
    body["allowPushRoles"] = request.allowPushRoles();
  }

  if (!!request.hasAllowPushUserIds()) {
    body["allowPushUserIds"] = request.allowPushUserIds();
  }

  if (!!request.hasBranch()) {
    body["branch"] = request.branch();
  }

  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  if (!!request.hasMergeRequestSetting()) {
    body["mergeRequestSetting"] = request.mergeRequestSetting();
  }

  if (!!request.hasTestSettingDTO()) {
    body["testSettingDTO"] = request.testSettingDTO();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProtectdBranch"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/protect_branches")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProtectdBranchResponse>();
}

/**
 * @summary 创建保护分支
 *
 * @param request CreateProtectdBranchRequest
 * @return CreateProtectdBranchResponse
 */
CreateProtectdBranchResponse Client::createProtectdBranch(const string &repositoryId, const CreateProtectdBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProtectdBranchWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建推送规则
 *
 * @param request CreatePushRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePushRuleResponse
 */
CreatePushRuleResponse Client::createPushRuleWithOptions(const string &repositoryId, const CreatePushRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasRuleInfos()) {
    body["ruleInfos"] = request.ruleInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePushRule"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/push_rule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePushRuleResponse>();
}

/**
 * @summary 创建推送规则
 *
 * @param request CreatePushRuleRequest
 * @return CreatePushRuleResponse
 */
CreatePushRuleResponse Client::createPushRule(const string &repositoryId, const CreatePushRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPushRuleWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建(导入)代码库
 *
 * @param request CreateRepositoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepositoryResponse
 */
CreateRepositoryResponse Client::createRepositoryWithOptions(const CreateRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasCreateParentPath()) {
    query["createParentPath"] = request.createParentPath();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasSync()) {
    query["sync"] = request.sync();
  }

  json body = {};
  if (!!request.hasAvatarUrl()) {
    body["avatarUrl"] = request.avatarUrl();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGitignoreType()) {
    body["gitignoreType"] = request.gitignoreType();
  }

  if (!!request.hasImportAccount()) {
    body["importAccount"] = request.importAccount();
  }

  if (!!request.hasImportDemoProject()) {
    body["importDemoProject"] = request.importDemoProject();
  }

  if (!!request.hasImportRepoType()) {
    body["importRepoType"] = request.importRepoType();
  }

  if (!!request.hasImportToken()) {
    body["importToken"] = request.importToken();
  }

  if (!!request.hasImportTokenEncrypted()) {
    body["importTokenEncrypted"] = request.importTokenEncrypted();
  }

  if (!!request.hasImportUrl()) {
    body["importUrl"] = request.importUrl();
  }

  if (!!request.hasInitStandardService()) {
    body["initStandardService"] = request.initStandardService();
  }

  if (!!request.hasIsCryptoEnabled()) {
    body["isCryptoEnabled"] = request.isCryptoEnabled();
  }

  if (!!request.hasLocalImportUrl()) {
    body["localImportUrl"] = request.localImportUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasNamespaceId()) {
    body["namespaceId"] = request.namespaceId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.path();
  }

  if (!!request.hasReadmeType()) {
    body["readmeType"] = request.readmeType();
  }

  if (!!request.hasVisibilityLevel()) {
    body["visibilityLevel"] = request.visibilityLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRepository"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepositoryResponse>();
}

/**
 * @summary 创建(导入)代码库
 *
 * @param request CreateRepositoryRequest
 * @return CreateRepositoryResponse
 */
CreateRepositoryResponse Client::createRepository(const CreateRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRepositoryWithOptions(request, headers, runtime);
}

/**
 * @summary 创建代码组
 *
 * @param request CreateRepositoryGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepositoryGroupResponse
 */
CreateRepositoryGroupResponse Client::createRepositoryGroupWithOptions(const CreateRepositoryGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAvatarUrl()) {
    body["avatarUrl"] = request.avatarUrl();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.parentId();
  }

  if (!!request.hasPath()) {
    body["path"] = request.path();
  }

  if (!!request.hasVisibilityLevel()) {
    body["visibilityLevel"] = request.visibilityLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRepositoryGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepositoryGroupResponse>();
}

/**
 * @summary 创建代码组
 *
 * @param request CreateRepositoryGroupRequest
 * @return CreateRepositoryGroupResponse
 */
CreateRepositoryGroupResponse Client::createRepositoryGroup(const CreateRepositoryGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRepositoryGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 插入资源成员
 *
 * @param request CreateResourceMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceMemberResponse
 */
CreateResourceMemberResponse Client::createResourceMemberWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const CreateResourceMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["accountId"] = request.accountId();
  }

  if (!!request.hasRoleName()) {
    body["roleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceType) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceId) , "/members")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceMemberResponse>();
}

/**
 * @summary 插入资源成员
 *
 * @param request CreateResourceMemberRequest
 * @return CreateResourceMemberResponse
 */
CreateResourceMemberResponse Client::createResourceMember(const string &organizationId, const string &resourceType, const string &resourceId, const CreateResourceMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceMemberWithOptions(organizationId, resourceType, resourceId, request, headers, runtime);
}

/**
 * @summary 创建服务授权
 *
 * @param request CreateServiceAuthRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceAuthResponse
 */
CreateServiceAuthResponse Client::createServiceAuthWithOptions(const string &organizationId, const CreateServiceAuthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceAuthType()) {
    query["serviceAuthType"] = request.serviceAuthType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceAuth"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/serviceAuths")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceAuthResponse>();
}

/**
 * @summary 创建服务授权
 *
 * @param request CreateServiceAuthRequest
 * @return CreateServiceAuthResponse
 */
CreateServiceAuthResponse Client::createServiceAuth(const string &organizationId, const CreateServiceAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceAuthWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建服务连接
 *
 * @param request CreateServiceConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceConnectionResponse
 */
CreateServiceConnectionResponse Client::createServiceConnectionWithOptions(const string &organizationId, const CreateServiceConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthType()) {
    body["authType"] = request.authType();
  }

  if (!!request.hasConnectionName()) {
    body["connectionName"] = request.connectionName();
  }

  if (!!request.hasConnectionType()) {
    body["connectionType"] = request.connectionType();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasServiceAuthId()) {
    body["serviceAuthId"] = request.serviceAuthId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceConnection"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/createServiceConnection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceConnectionResponse>();
}

/**
 * @summary 创建服务连接
 *
 * @param request CreateServiceConnectionRequest
 * @return CreateServiceConnectionResponse
 */
CreateServiceConnectionResponse Client::createServiceConnection(const string &organizationId, const CreateServiceConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceConnectionWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建用户名密码类型的证书
 *
 * @param request CreateServiceCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceCredentialResponse
 */
CreateServiceCredentialResponse Client::createServiceCredentialWithOptions(const string &organizationId, const CreateServiceCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.password();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasUsername()) {
    body["username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceCredential"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/serviceCredentials")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceCredentialResponse>();
}

/**
 * @summary 创建用户名密码类型的证书
 *
 * @param request CreateServiceCredentialRequest
 * @return CreateServiceCredentialResponse
 */
CreateServiceCredentialResponse Client::createServiceCredential(const string &organizationId, const CreateServiceCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceCredentialWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建迭代
 *
 * @param request CreateSprintRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSprintResponse
 */
CreateSprintResponse Client::createSprintWithOptions(const string &organizationId, const CreateSprintRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndDate()) {
    body["endDate"] = request.endDate();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasSpaceIdentifier()) {
    body["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasStaffIds()) {
    body["staffIds"] = request.staffIds();
  }

  if (!!request.hasStartDate()) {
    body["startDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSprint"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/sprints/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSprintResponse>();
}

/**
 * @summary 创建迭代
 *
 * @param request CreateSprintRequest
 * @return CreateSprintResponse
 */
CreateSprintResponse Client::createSprint(const string &organizationId, const CreateSprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSprintWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建企业公钥
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSshKeyResponse
 */
CreateSshKeyResponse Client::createSshKeyWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSshKey"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/sshKey")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSshKeyResponse>();
}

/**
 * @summary 创建企业公钥
 *
 * @return CreateSshKeyResponse
 */
CreateSshKeyResponse Client::createSshKey(const string &organizationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSshKeyWithOptions(organizationId, headers, runtime);
}

/**
 * @summary 创建标签Tag
 *
 * @param request CreateTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const string &repositoryId, const CreateTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasMessage()) {
    body["message"] = request.message();
  }

  if (!!request.hasRef()) {
    body["ref"] = request.ref();
  }

  if (!!request.hasTagName()) {
    body["tagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTag"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/tags/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagResponse>();
}

/**
 * @summary 创建标签Tag
 *
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const string &repositoryId, const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTagWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 创建测试用例
 *
 * @param request CreateTestCaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTestCaseResponse
 */
CreateTestCaseResponse Client::createTestCaseWithOptions(const string &organizationId, const CreateTestCaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssignedTo()) {
    body["assignedTo"] = request.assignedTo();
  }

  if (!!request.hasDirectoryIdentifier()) {
    body["directoryIdentifier"] = request.directoryIdentifier();
  }

  if (!!request.hasFieldValueList()) {
    body["fieldValueList"] = request.fieldValueList();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.priority();
  }

  if (!!request.hasSpaceIdentifier()) {
    body["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasTestcaseStepContentInfo()) {
    body["testcaseStepContentInfo"] = request.testcaseStepContentInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTestCase"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/testhub/testcase")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTestCaseResponse>();
}

/**
 * @summary 创建测试用例
 *
 * @param request CreateTestCaseRequest
 * @return CreateTestCaseResponse
 */
CreateTestCaseResponse Client::createTestCase(const string &organizationId, const CreateTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTestCaseWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建SSH Key密钥
 *
 * @param request CreateUserKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserKeyResponse
 */
CreateUserKeyResponse Client::createUserKeyWithOptions(const CreateUserKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasExpireTime()) {
    body["expireTime"] = request.expireTime();
  }

  if (!!request.hasKeyScope()) {
    body["keyScope"] = request.keyScope();
  }

  if (!!request.hasPublicKey()) {
    body["publicKey"] = request.publicKey();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserKey"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v3/user/keys/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserKeyResponse>();
}

/**
 * @summary 创建SSH Key密钥
 *
 * @param request CreateUserKeyRequest
 * @return CreateUserKeyResponse
 */
CreateUserKeyResponse Client::createUserKey(const CreateUserKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserKeyWithOptions(request, headers, runtime);
}

/**
 * @summary 创建变量组
 *
 * @param request CreateVariableGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVariableGroupResponse
 */
CreateVariableGroupResponse Client::createVariableGroupWithOptions(const string &organizationId, const CreateVariableGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.variables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVariableGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/variableGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVariableGroupResponse>();
}

/**
 * @summary 创建变量组
 *
 * @param request CreateVariableGroupRequest
 * @return CreateVariableGroupResponse
 */
CreateVariableGroupResponse Client::createVariableGroup(const string &organizationId, const CreateVariableGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVariableGroupWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 新建工作项
 *
 * @param request CreateWorkitemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkitemResponse
 */
CreateWorkitemResponse Client::createWorkitemWithOptions(const string &organizationId, const CreateWorkitemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssignedTo()) {
    body["assignedTo"] = request.assignedTo();
  }

  if (!!request.hasCategory()) {
    body["category"] = request.category();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDescriptionFormat()) {
    body["descriptionFormat"] = request.descriptionFormat();
  }

  if (!!request.hasFieldValueList()) {
    body["fieldValueList"] = request.fieldValueList();
  }

  if (!!request.hasParent()) {
    body["parent"] = request.parent();
  }

  if (!!request.hasParticipant()) {
    body["participant"] = request.participant();
  }

  if (!!request.hasSpace()) {
    body["space"] = request.space();
  }

  if (!!request.hasSpaceIdentifier()) {
    body["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSpaceType()) {
    body["spaceType"] = request.spaceType();
  }

  if (!!request.hasSprint()) {
    body["sprint"] = request.sprint();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTracker()) {
    body["tracker"] = request.tracker();
  }

  if (!!request.hasVerifier()) {
    body["verifier"] = request.verifier();
  }

  if (!!request.hasWorkitemType()) {
    body["workitemType"] = request.workitemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkitem"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkitemResponse>();
}

/**
 * @summary 新建工作项
 *
 * @param request CreateWorkitemRequest
 * @return CreateWorkitemResponse
 */
CreateWorkitemResponse Client::createWorkitem(const string &organizationId, const CreateWorkitemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkitemWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建一个评论
 *
 * @param request CreateWorkitemCommentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkitemCommentResponse
 */
CreateWorkitemCommentResponse Client::createWorkitemCommentWithOptions(const string &organizationId, const CreateWorkitemCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasFormatType()) {
    body["formatType"] = request.formatType();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.parentId();
  }

  if (!!request.hasWorkitemIdentifier()) {
    body["workitemIdentifier"] = request.workitemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkitemComment"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/comment")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkitemCommentResponse>();
}

/**
 * @summary 创建一个评论
 *
 * @param request CreateWorkitemCommentRequest
 * @return CreateWorkitemCommentResponse
 */
CreateWorkitemCommentResponse Client::createWorkitemComment(const string &organizationId, const CreateWorkitemCommentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkitemCommentWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 登记预计工时
 *
 * @param request CreateWorkitemEstimateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkitemEstimateResponse
 */
CreateWorkitemEstimateResponse Client::createWorkitemEstimateWithOptions(const string &organizationId, const CreateWorkitemEstimateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasRecordUserIdentifier()) {
    body["recordUserIdentifier"] = request.recordUserIdentifier();
  }

  if (!!request.hasSpentTime()) {
    body["spentTime"] = request.spentTime();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasWorkitemIdentifier()) {
    body["workitemIdentifier"] = request.workitemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkitemEstimate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/estimate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkitemEstimateResponse>();
}

/**
 * @summary 登记预计工时
 *
 * @param request CreateWorkitemEstimateRequest
 * @return CreateWorkitemEstimateResponse
 */
CreateWorkitemEstimateResponse Client::createWorkitemEstimate(const string &organizationId, const CreateWorkitemEstimateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkitemEstimateWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 登记实际工时
 *
 * @param request CreateWorkitemRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkitemRecordResponse
 */
CreateWorkitemRecordResponse Client::createWorkitemRecordWithOptions(const string &organizationId, const CreateWorkitemRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActualTime()) {
    body["actualTime"] = request.actualTime();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGmtEnd()) {
    body["gmtEnd"] = request.gmtEnd();
  }

  if (!!request.hasGmtStart()) {
    body["gmtStart"] = request.gmtStart();
  }

  if (!!request.hasRecordUserIdentifier()) {
    body["recordUserIdentifier"] = request.recordUserIdentifier();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasWorkitemIdentifier()) {
    body["workitemIdentifier"] = request.workitemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkitemRecord"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/record")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkitemRecordResponse>();
}

/**
 * @summary 登记实际工时
 *
 * @param request CreateWorkitemRecordRequest
 * @return CreateWorkitemRecordResponse
 */
CreateWorkitemRecordResponse Client::createWorkitemRecord(const string &organizationId, const CreateWorkitemRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkitemRecordWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 创建工作项
 *
 * @param request CreateWorkitemV2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkitemV2Response
 */
CreateWorkitemV2Response Client::createWorkitemV2WithOptions(const string &organizationId, const CreateWorkitemV2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssignedTo()) {
    body["assignedTo"] = request.assignedTo();
  }

  if (!!request.hasCategory()) {
    body["category"] = request.category();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasFieldValueList()) {
    body["fieldValueList"] = request.fieldValueList();
  }

  if (!!request.hasParentIdentifier()) {
    body["parentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasParticipants()) {
    body["participants"] = request.participants();
  }

  if (!!request.hasSpaceIdentifier()) {
    body["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSprintIdentifier()) {
    body["sprintIdentifier"] = request.sprintIdentifier();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasTrackers()) {
    body["trackers"] = request.trackers();
  }

  if (!!request.hasVerifier()) {
    body["verifier"] = request.verifier();
  }

  if (!!request.hasVersions()) {
    body["versions"] = request.versions();
  }

  if (!!request.hasWorkitemTypeIdentifier()) {
    body["workitemTypeIdentifier"] = request.workitemTypeIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkitemV2"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkitemV2Response>();
}

/**
 * @summary 创建工作项
 *
 * @param request CreateWorkitemV2Request
 * @return CreateWorkitemV2Response
 */
CreateWorkitemV2Response Client::createWorkitemV2(const string &organizationId, const CreateWorkitemV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkitemV2WithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 删除应用成员
 *
 * @param request DeleteAppMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppMemberResponse
 */
DeleteAppMemberResponse Client::deleteAppMemberWithOptions(const string &appName, const DeleteAppMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasSubjectId()) {
    query["subjectId"] = request.subjectId();
  }

  if (!!request.hasSubjectType()) {
    query["subjectType"] = request.subjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/members")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppMemberResponse>();
}

/**
 * @summary 删除应用成员
 *
 * @param request DeleteAppMemberRequest
 * @return DeleteAppMemberResponse
 */
DeleteAppMemberResponse Client::deleteAppMember(const string &appName, const DeleteAppMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAppMemberWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 删除分支
 *
 * @param request DeleteBranchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBranchResponse
 */
DeleteBranchResponse Client::deleteBranchWithOptions(const string &repositoryId, const DeleteBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasBranchName()) {
    query["branchName"] = request.branchName();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBranch"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/branches/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBranchResponse>();
}

/**
 * @summary 删除分支
 *
 * @param request DeleteBranchRequest
 * @return DeleteBranchResponse
 */
DeleteBranchResponse Client::deleteBranch(const string &repositoryId, const DeleteBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBranchWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 删除文件
 *
 * @param request DeleteFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFileWithOptions(const string &repositoryId, const DeleteFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasBranchName()) {
    query["branchName"] = request.branchName();
  }

  if (!!request.hasCommitMessage()) {
    query["commitMessage"] = request.commitMessage();
  }

  if (!!request.hasFilePath()) {
    query["filePath"] = request.filePath();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFile"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/files/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileResponse>();
}

/**
 * @summary 删除文件
 *
 * @param request DeleteFileRequest
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFile(const string &repositoryId, const DeleteFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFileWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 删除标签
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowTagResponse
 */
DeleteFlowTagResponse Client::deleteFlowTagWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowTag"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tags/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowTagResponse>();
}

/**
 * @summary 删除标签
 *
 * @return DeleteFlowTagResponse
 */
DeleteFlowTagResponse Client::deleteFlowTag(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFlowTagWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 删除标签分类
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowTagGroupResponse
 */
DeleteFlowTagGroupResponse Client::deleteFlowTagGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowTagGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tagGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowTagGroupResponse>();
}

/**
 * @summary 删除标签分类
 *
 * @return DeleteFlowTagGroupResponse
 */
DeleteFlowTagGroupResponse Client::deleteFlowTagGroup(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFlowTagGroupWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 删除组成员
 *
 * @param request DeleteGroupMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupMemberResponse
 */
DeleteGroupMemberResponse Client::deleteGroupMemberWithOptions(const string &groupId, const DeleteGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasAliyunPk()) {
    query["aliyunPk"] = request.aliyunPk();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasMemberType()) {
    body["memberType"] = request.memberType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteGroupMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/members/remove/aliyun_pk")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupMemberResponse>();
}

/**
 * @summary 删除组成员
 *
 * @param request DeleteGroupMemberRequest
 * @return DeleteGroupMemberResponse
 */
DeleteGroupMemberResponse Client::deleteGroupMember(const string &groupId, const DeleteGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGroupMemberWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 删除主机组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostGroupResponse
 */
DeleteHostGroupResponse Client::deleteHostGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/hostGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostGroupResponse>();
}

/**
 * @summary 删除主机组
 *
 * @return DeleteHostGroupResponse
 */
DeleteHostGroupResponse Client::deleteHostGroup(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHostGroupWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 删除流水线
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipelineWithOptions(const string &organizationId, const string &pipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipeline"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelineResponse>();
}

/**
 * @summary 删除流水线
 *
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipeline(const string &organizationId, const string &pipelineId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePipelineWithOptions(organizationId, pipelineId, headers, runtime);
}

/**
 * @summary 删除流水线分组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineGroupResponse
 */
DeletePipelineGroupResponse Client::deletePipelineGroupWithOptions(const string &organizationId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipelineGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelineGroupResponse>();
}

/**
 * @summary 删除流水线分组
 *
 * @return DeletePipelineGroupResponse
 */
DeletePipelineGroupResponse Client::deletePipelineGroup(const string &organizationId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePipelineGroupWithOptions(organizationId, groupId, headers, runtime);
}

/**
 * @summary 删除流水线关联
 *
 * @param request DeletePipelineRelationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineRelationsResponse
 */
DeletePipelineRelationsResponse Client::deletePipelineRelationsWithOptions(const string &organizationId, const string &pipelineId, const DeletePipelineRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelObjectId()) {
    query["relObjectId"] = request.relObjectId();
  }

  if (!!request.hasRelObjectType()) {
    query["relObjectType"] = request.relObjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipelineRelations"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRelations")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelineRelationsResponse>();
}

/**
 * @summary 删除流水线关联
 *
 * @param request DeletePipelineRelationsRequest
 * @return DeletePipelineRelationsResponse
 */
DeletePipelineRelationsResponse Client::deletePipelineRelations(const string &organizationId, const string &pipelineId, const DeletePipelineRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePipelineRelationsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 删除项目
 *
 * @param request DeleteProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const string &organizationId, const DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/projects/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary 删除项目
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const string &organizationId, const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 删除代码库Label
 *
 * @param request DeleteProjectLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectLabelResponse
 */
DeleteProjectLabelResponse Client::deleteProjectLabelWithOptions(const string &labelId, const DeleteProjectLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProjectLabel"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/labels/" , Darabonba::Encode::Encoder::percentEncode(labelId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectLabelResponse>();
}

/**
 * @summary 删除代码库Label
 *
 * @param request DeleteProjectLabelRequest
 * @return DeleteProjectLabelResponse
 */
DeleteProjectLabelResponse Client::deleteProjectLabel(const string &labelId, const DeleteProjectLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectLabelWithOptions(labelId, request, headers, runtime);
}

/**
 * @summary 删除保护分支
 *
 * @param request DeleteProtectedBranchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProtectedBranchResponse
 */
DeleteProtectedBranchResponse Client::deleteProtectedBranchWithOptions(const string &repositoryId, const string &protectedBranchId, const DeleteProtectedBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProtectedBranch"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/protect_branches/" , Darabonba::Encode::Encoder::percentEncode(protectedBranchId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProtectedBranchResponse>();
}

/**
 * @summary 删除保护分支
 *
 * @param request DeleteProtectedBranchRequest
 * @return DeleteProtectedBranchResponse
 */
DeleteProtectedBranchResponse Client::deleteProtectedBranch(const string &repositoryId, const string &protectedBranchId, const DeleteProtectedBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProtectedBranchWithOptions(repositoryId, protectedBranchId, request, headers, runtime);
}

/**
 * @summary 删除推送规则
 *
 * @param request DeletePushRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePushRuleResponse
 */
DeletePushRuleResponse Client::deletePushRuleWithOptions(const string &repositoryId, const string &pushRuleId, const DeletePushRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePushRule"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/push_rule/" , Darabonba::Encode::Encoder::percentEncode(pushRuleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePushRuleResponse>();
}

/**
 * @summary 删除推送规则
 *
 * @param request DeletePushRuleRequest
 * @return DeletePushRuleResponse
 */
DeletePushRuleResponse Client::deletePushRule(const string &repositoryId, const string &pushRuleId, const DeletePushRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePushRuleWithOptions(repositoryId, pushRuleId, request, headers, runtime);
}

/**
 * @summary 删除代码库
 *
 * @param request DeleteRepositoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepositoryResponse
 */
DeleteRepositoryResponse Client::deleteRepositoryWithOptions(const string &repositoryId, const DeleteRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasReason()) {
    body["reason"] = request.reason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRepository"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/remove")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepositoryResponse>();
}

/**
 * @summary 删除代码库
 *
 * @param request DeleteRepositoryRequest
 * @return DeleteRepositoryResponse
 */
DeleteRepositoryResponse Client::deleteRepository(const string &repositoryId, const DeleteRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRepositoryWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 删除代码组
 *
 * @param request DeleteRepositoryGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepositoryGroupResponse
 */
DeleteRepositoryGroupResponse Client::deleteRepositoryGroupWithOptions(const string &groupId, const DeleteRepositoryGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasReason()) {
    body["reason"] = request.reason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRepositoryGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/remove")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepositoryGroupResponse>();
}

/**
 * @summary 删除代码组
 *
 * @param request DeleteRepositoryGroupRequest
 * @return DeleteRepositoryGroupResponse
 */
DeleteRepositoryGroupResponse Client::deleteRepositoryGroup(const string &groupId, const DeleteRepositoryGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRepositoryGroupWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 删除代码库成员
 *
 * @param request DeleteRepositoryMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepositoryMemberResponse
 */
DeleteRepositoryMemberResponse Client::deleteRepositoryMemberWithOptions(const string &repositoryId, const string &aliyunPk, const DeleteRepositoryMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasMemberType()) {
    body["memberType"] = request.memberType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRepositoryMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/members/delete/" , Darabonba::Encode::Encoder::percentEncode(aliyunPk))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepositoryMemberResponse>();
}

/**
 * @summary 删除代码库成员
 *
 * @param request DeleteRepositoryMemberRequest
 * @return DeleteRepositoryMemberResponse
 */
DeleteRepositoryMemberResponse Client::deleteRepositoryMember(const string &repositoryId, const string &aliyunPk, const DeleteRepositoryMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRepositoryMemberWithOptions(repositoryId, aliyunPk, request, headers, runtime);
}

/**
 * @summary 删除代码库Webhook
 *
 * @param request DeleteRepositoryWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepositoryWebhookResponse
 */
DeleteRepositoryWebhookResponse Client::deleteRepositoryWebhookWithOptions(const string &repositoryId, const string &hookId, const DeleteRepositoryWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRepositoryWebhook"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/hooks/" , Darabonba::Encode::Encoder::percentEncode(hookId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepositoryWebhookResponse>();
}

/**
 * @summary 删除代码库Webhook
 *
 * @param request DeleteRepositoryWebhookRequest
 * @return DeleteRepositoryWebhookResponse
 */
DeleteRepositoryWebhookResponse Client::deleteRepositoryWebhook(const string &repositoryId, const string &hookId, const DeleteRepositoryWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRepositoryWebhookWithOptions(repositoryId, hookId, request, headers, runtime);
}

/**
 * @summary 删除资源成员
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceMemberResponse
 */
DeleteResourceMemberResponse Client::deleteResourceMemberWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceType) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceMemberResponse>();
}

/**
 * @summary 删除资源成员
 *
 * @return DeleteResourceMemberResponse
 */
DeleteResourceMemberResponse Client::deleteResourceMember(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceMemberWithOptions(organizationId, resourceType, resourceId, accountId, headers, runtime);
}

/**
 * @summary 删除标签
 *
 * @param request DeleteTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTagWithOptions(const string &repositoryId, const DeleteTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasTagName()) {
    query["tagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTag"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/tags/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagResponse>();
}

/**
 * @summary 删除标签
 *
 * @param request DeleteTagRequest
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTag(const string &repositoryId, const DeleteTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTagWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 删除用户的SSH Key
 *
 * @param request DeleteUserKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserKeyResponse
 */
DeleteUserKeyResponse Client::deleteUserKeyWithOptions(const string &keyId, const DeleteUserKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserKey"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v3/user/keys/" , Darabonba::Encode::Encoder::percentEncode(keyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserKeyResponse>();
}

/**
 * @summary 删除用户的SSH Key
 *
 * @param request DeleteUserKeyRequest
 * @return DeleteUserKeyResponse
 */
DeleteUserKeyResponse Client::deleteUserKey(const string &keyId, const DeleteUserKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUserKeyWithOptions(keyId, request, headers, runtime);
}

/**
 * @summary 删除变量组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVariableGroupResponse
 */
DeleteVariableGroupResponse Client::deleteVariableGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVariableGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/variableGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVariableGroupResponse>();
}

/**
 * @summary 删除变量组
 *
 * @return DeleteVariableGroupResponse
 */
DeleteVariableGroupResponse Client::deleteVariableGroup(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVariableGroupWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 删除工作项
 *
 * @param request DeleteWorkitemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkitemResponse
 */
DeleteWorkitemResponse Client::deleteWorkitemWithOptions(const string &organizationId, const DeleteWorkitemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkitem"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitem/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkitemResponse>();
}

/**
 * @summary 删除工作项
 *
 * @param request DeleteWorkitemRequest
 * @return DeleteWorkitemResponse
 */
DeleteWorkitemResponse Client::deleteWorkitem(const string &organizationId, const DeleteWorkitemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkitemWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 删除所有评论
 *
 * @param request DeleteWorkitemAllCommentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkitemAllCommentResponse
 */
DeleteWorkitemAllCommentResponse Client::deleteWorkitemAllCommentWithOptions(const string &organizationId, const DeleteWorkitemAllCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkitemAllComment"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/deleteAllComment")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkitemAllCommentResponse>();
}

/**
 * @summary 删除所有评论
 *
 * @param request DeleteWorkitemAllCommentRequest
 * @return DeleteWorkitemAllCommentResponse
 */
DeleteWorkitemAllCommentResponse Client::deleteWorkitemAllComment(const string &organizationId, const DeleteWorkitemAllCommentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkitemAllCommentWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 删除单条评论
 *
 * @param request DeleteWorkitemCommentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkitemCommentResponse
 */
DeleteWorkitemCommentResponse Client::deleteWorkitemCommentWithOptions(const string &organizationId, const DeleteWorkitemCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommentId()) {
    body["commentId"] = request.commentId();
  }

  if (!!request.hasIdentifier()) {
    body["identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkitemComment"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/deleteComent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkitemCommentResponse>();
}

/**
 * @summary 删除单条评论
 *
 * @param request DeleteWorkitemCommentRequest
 * @return DeleteWorkitemCommentResponse
 */
DeleteWorkitemCommentResponse Client::deleteWorkitemComment(const string &organizationId, const DeleteWorkitemCommentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkitemCommentWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 启用部署密钥
 *
 * @param request EnableDeployKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDeployKeyResponse
 */
EnableDeployKeyResponse Client::enableDeployKeyWithOptions(const string &repositoryId, const string &keyId, const EnableDeployKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDeployKey"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/keys/" , Darabonba::Encode::Encoder::percentEncode(keyId) , "/enable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDeployKeyResponse>();
}

/**
 * @summary 启用部署密钥
 *
 * @param request EnableDeployKeyRequest
 * @return EnableDeployKeyResponse
 */
EnableDeployKeyResponse Client::enableDeployKey(const string &repositoryId, const string &keyId, const EnableDeployKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableDeployKeyWithOptions(repositoryId, keyId, request, headers, runtime);
}

/**
 * @summary 执行研发阶段流水线
 *
 * @param request ExecuteChangeRequestReleaseStageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteChangeRequestReleaseStageResponse
 */
ExecuteChangeRequestReleaseStageResponse Client::executeChangeRequestReleaseStageWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const ExecuteChangeRequestReleaseStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasParams()) {
    body["params"] = request.params();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteChangeRequestReleaseStage"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "%3Aexecute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteChangeRequestReleaseStageResponse>();
}

/**
 * @summary 执行研发阶段流水线
 *
 * @param request ExecuteChangeRequestReleaseStageRequest
 * @return ExecuteChangeRequestReleaseStageResponse
 */
ExecuteChangeRequestReleaseStageResponse Client::executeChangeRequestReleaseStage(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const ExecuteChangeRequestReleaseStageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeChangeRequestReleaseStageWithOptions(appName, releaseWorkflowSn, releaseStageSn, request, headers, runtime);
}

/**
 * @summary 导出Insight custom_value表
 *
 * @param request ExportInsightCustomValueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightCustomValueResponse
 */
ExportInsightCustomValueResponse Client::exportInsightCustomValueWithOptions(const string &organizationId, const ExportInsightCustomValueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightCustomValue"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/customValues")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightCustomValueResponse>();
}

/**
 * @summary 导出Insight custom_value表
 *
 * @param request ExportInsightCustomValueRequest
 * @return ExportInsightCustomValueResponse
 */
ExportInsightCustomValueResponse Client::exportInsightCustomValue(const string &organizationId, const ExportInsightCustomValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightCustomValueWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight expected_work_time表数据
 *
 * @param request ExportInsightExpectedWorkTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightExpectedWorkTimeResponse
 */
ExportInsightExpectedWorkTimeResponse Client::exportInsightExpectedWorkTimeWithOptions(const string &organizationId, const ExportInsightExpectedWorkTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightExpectedWorkTime"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/expectedWorkTimes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightExpectedWorkTimeResponse>();
}

/**
 * @summary 导出Insight expected_work_time表数据
 *
 * @param request ExportInsightExpectedWorkTimeRequest
 * @return ExportInsightExpectedWorkTimeResponse
 */
ExportInsightExpectedWorkTimeResponse Client::exportInsightExpectedWorkTime(const string &organizationId, const ExportInsightExpectedWorkTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightExpectedWorkTimeWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight field表
 *
 * @param request ExportInsightFieldRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightFieldResponse
 */
ExportInsightFieldResponse Client::exportInsightFieldWithOptions(const string &organizationId, const ExportInsightFieldRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightField"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/fields")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightFieldResponse>();
}

/**
 * @summary 导出Insight field表
 *
 * @param request ExportInsightFieldRequest
 * @return ExportInsightFieldResponse
 */
ExportInsightFieldResponse Client::exportInsightField(const string &organizationId, const ExportInsightFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightFieldWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight space表数据
 *
 * @param request ExportInsightSpaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightSpaceResponse
 */
ExportInsightSpaceResponse Client::exportInsightSpaceWithOptions(const string &organizationId, const ExportInsightSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightSpace"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/spaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightSpaceResponse>();
}

/**
 * @summary 导出Insight space表数据
 *
 * @param request ExportInsightSpaceRequest
 * @return ExportInsightSpaceResponse
 */
ExportInsightSpaceResponse Client::exportInsightSpace(const string &organizationId, const ExportInsightSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightSpaceWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight space_ref表数据
 *
 * @param request ExportInsightSpaceRefRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightSpaceRefResponse
 */
ExportInsightSpaceRefResponse Client::exportInsightSpaceRefWithOptions(const string &organizationId, const ExportInsightSpaceRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightSpaceRef"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/spaceRefs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightSpaceRefResponse>();
}

/**
 * @summary 导出Insight space_ref表数据
 *
 * @param request ExportInsightSpaceRefRequest
 * @return ExportInsightSpaceRefResponse
 */
ExportInsightSpaceRefResponse Client::exportInsightSpaceRef(const string &organizationId, const ExportInsightSpaceRefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightSpaceRefWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight sprint表数据
 *
 * @param request ExportInsightSprintRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightSprintResponse
 */
ExportInsightSprintResponse Client::exportInsightSprintWithOptions(const string &organizationId, const ExportInsightSprintRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightSprint"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/sprints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightSprintResponse>();
}

/**
 * @summary 导出Insight sprint表数据
 *
 * @param request ExportInsightSprintRequest
 * @return ExportInsightSprintResponse
 */
ExportInsightSprintResponse Client::exportInsightSprint(const string &organizationId, const ExportInsightSprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightSprintWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight tag_ref表数据
 *
 * @param request ExportInsightTagRefRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightTagRefResponse
 */
ExportInsightTagRefResponse Client::exportInsightTagRefWithOptions(const string &organizationId, const ExportInsightTagRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightTagRef"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/tagRefs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightTagRefResponse>();
}

/**
 * @summary 导出Insight tag_ref表数据
 *
 * @param request ExportInsightTagRefRequest
 * @return ExportInsightTagRefResponse
 */
ExportInsightTagRefResponse Client::exportInsightTagRef(const string &organizationId, const ExportInsightTagRefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightTagRefWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight work_time表数据
 *
 * @param request ExportInsightWorkTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightWorkTimeResponse
 */
ExportInsightWorkTimeResponse Client::exportInsightWorkTimeWithOptions(const string &organizationId, const ExportInsightWorkTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightWorkTime"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/workTimes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightWorkTimeResponse>();
}

/**
 * @summary 导出Insight work_time表数据
 *
 * @param request ExportInsightWorkTimeRequest
 * @return ExportInsightWorkTimeResponse
 */
ExportInsightWorkTimeResponse Client::exportInsightWorkTime(const string &organizationId, const ExportInsightWorkTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightWorkTimeWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight workitem_stauts表数据
 *
 * @param request ExportInsightWorkitemStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightWorkitemStatusResponse
 */
ExportInsightWorkitemStatusResponse Client::exportInsightWorkitemStatusWithOptions(const string &organizationId, const ExportInsightWorkitemStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightWorkitemStatus"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/workitemStatuses")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightWorkitemStatusResponse>();
}

/**
 * @summary 导出Insight workitem_stauts表数据
 *
 * @param request ExportInsightWorkitemStatusRequest
 * @return ExportInsightWorkitemStatusResponse
 */
ExportInsightWorkitemStatusResponse Client::exportInsightWorkitemStatus(const string &organizationId, const ExportInsightWorkitemStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightWorkitemStatusWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight workitem_stauts表 join workitem_defect_extra表表数据
 *
 * @param request ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse
 */
ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse Client::exportInsightWorkitemStatusJoinWorkitemDefectExtraWithOptions(const string &organizationId, const ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightWorkitemStatusJoinWorkitemDefectExtra"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/workitemStatusJoinWorkitemDefectExtras")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse>();
}

/**
 * @summary 导出Insight workitem_stauts表 join workitem_defect_extra表表数据
 *
 * @param request ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest
 * @return ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse
 */
ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse Client::exportInsightWorkitemStatusJoinWorkitemDefectExtra(const string &organizationId, const ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightWorkitemStatusJoinWorkitemDefectExtraWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight workitem_version表数据
 *
 * @param request ExportInsightWorkitemVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportInsightWorkitemVersionResponse
 */
ExportInsightWorkitemVersionResponse Client::exportInsightWorkitemVersionWithOptions(const string &organizationId, const ExportInsightWorkitemVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportInsightWorkitemVersion"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/workitemVersions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportInsightWorkitemVersionResponse>();
}

/**
 * @summary 导出Insight workitem_version表数据
 *
 * @param request ExportInsightWorkitemVersionRequest
 * @return ExportInsightWorkitemVersionResponse
 */
ExportInsightWorkitemVersionResponse Client::exportInsightWorkitemVersion(const string &organizationId, const ExportInsightWorkitemVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportInsightWorkitemVersionWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 导出Insight workitem_activity表数据
 *
 * @param request ExportWorkitemActivityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportWorkitemActivityResponse
 */
ExportWorkitemActivityResponse Client::exportWorkitemActivityWithOptions(const string &organizationId, const ExportWorkitemActivityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportWorkitemActivity"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/data/workitemActivities")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportWorkitemActivityResponse>();
}

/**
 * @summary 导出Insight workitem_activity表数据
 *
 * @param request ExportWorkitemActivityRequest
 * @return ExportWorkitemActivityResponse
 */
ExportWorkitemActivityResponse Client::exportWorkitemActivity(const string &organizationId, const ExportWorkitemActivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportWorkitemActivityWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 查找应用详情
 *
 * @param request GetApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const string &appName, const GetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary 查找应用详情
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const string &appName, const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApplicationWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 查询单个分支
 *
 * @param request GetBranchInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBranchInfoResponse
 */
GetBranchInfoResponse Client::getBranchInfoWithOptions(const string &repositoryId, const GetBranchInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasBranchName()) {
    query["branchName"] = request.branchName();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBranchInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/branches/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBranchInfoResponse>();
}

/**
 * @summary 查询单个分支
 *
 * @param request GetBranchInfoRequest
 * @return GetBranchInfoResponse
 */
GetBranchInfoResponse Client::getBranchInfo(const string &repositoryId, const GetBranchInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBranchInfoWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询检查运行
 *
 * @param request GetCheckRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCheckRunResponse
 */
GetCheckRunResponse Client::getCheckRunWithOptions(const GetCheckRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasCheckRunId()) {
    query["checkRunId"] = request.checkRunId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCheckRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/check_runs/get_check_run")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCheckRunResponse>();
}

/**
 * @summary 查询检查运行
 *
 * @param request GetCheckRunRequest
 * @return GetCheckRunResponse
 */
GetCheckRunResponse Client::getCheckRun(const GetCheckRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCheckRunWithOptions(request, headers, runtime);
}

/**
 * @summary 获取企业信息
 *
 * @param request GetCodeupOrganizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCodeupOrganizationResponse
 */
GetCodeupOrganizationResponse Client::getCodeupOrganizationWithOptions(const string &identity, const GetCodeupOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCodeupOrganization"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/organization/" , Darabonba::Encode::Encoder::percentEncode(identity))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCodeupOrganizationResponse>();
}

/**
 * @summary 获取企业信息
 *
 * @param request GetCodeupOrganizationRequest
 * @return GetCodeupOrganizationResponse
 */
GetCodeupOrganizationResponse Client::getCodeupOrganization(const string &identity, const GetCodeupOrganizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCodeupOrganizationWithOptions(identity, request, headers, runtime);
}

/**
 * @summary 获取比较详情
 *
 * @param request GetCompareDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCompareDetailResponse
 */
GetCompareDetailResponse Client::getCompareDetailWithOptions(const string &repositoryId, const GetCompareDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrom()) {
    query["from"] = request.from();
  }

  if (!!request.hasMaxDiffByte()) {
    query["maxDiffByte"] = request.maxDiffByte();
  }

  if (!!request.hasMaxDiffFile()) {
    query["maxDiffFile"] = request.maxDiffFile();
  }

  if (!!request.hasMergeBase()) {
    query["mergeBase"] = request.mergeBase();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasTo()) {
    query["to"] = request.to();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCompareDetail"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/commits/compare/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCompareDetailResponse>();
}

/**
 * @summary 获取比较详情
 *
 * @param request GetCompareDetailRequest
 * @return GetCompareDetailResponse
 */
GetCompareDetailResponse Client::getCompareDetail(const string &repositoryId, const GetCompareDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCompareDetailWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 获取自定义字段的选项值
 *
 * @param request GetCustomFieldOptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomFieldOptionResponse
 */
GetCustomFieldOptionResponse Client::getCustomFieldOptionWithOptions(const string &organizationId, const string &fieldId, const GetCustomFieldOptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceIdentifier()) {
    query["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSpaceType()) {
    query["spaceType"] = request.spaceType();
  }

  if (!!request.hasWorkitemTypeIdentifier()) {
    query["workitemTypeIdentifier"] = request.workitemTypeIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomFieldOption"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/fields/" , Darabonba::Encode::Encoder::percentEncode(fieldId) , "/getCustomOption")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomFieldOptionResponse>();
}

/**
 * @summary 获取自定义字段的选项值
 *
 * @param request GetCustomFieldOptionRequest
 * @return GetCustomFieldOptionResponse
 */
GetCustomFieldOptionResponse Client::getCustomFieldOption(const string &organizationId, const string &fieldId, const GetCustomFieldOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomFieldOptionWithOptions(organizationId, fieldId, request, headers, runtime);
}

/**
 * @summary 查询文件
 *
 * @param request GetFileBlobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileBlobsResponse
 */
GetFileBlobsResponse Client::getFileBlobsWithOptions(const string &repositoryId, const GetFileBlobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasFilePath()) {
    query["filePath"] = request.filePath();
  }

  if (!!request.hasFrom()) {
    query["from"] = request.from();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRef()) {
    query["ref"] = request.ref();
  }

  if (!!request.hasTo()) {
    query["to"] = request.to();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileBlobs"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/files/blobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileBlobsResponse>();
}

/**
 * @summary 查询文件
 *
 * @param request GetFileBlobsRequest
 * @return GetFileBlobsResponse
 */
GetFileBlobsResponse Client::getFileBlobs(const string &repositoryId, const GetFileBlobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFileBlobsWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 获取文件上一次提交信息
 *
 * @param request GetFileLastCommitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileLastCommitResponse
 */
GetFileLastCommitResponse Client::getFileLastCommitWithOptions(const string &repositoryId, const GetFileLastCommitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasFilePath()) {
    query["filePath"] = request.filePath();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasSha()) {
    query["sha"] = request.sha();
  }

  if (!!request.hasShowSignature()) {
    query["showSignature"] = request.showSignature();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileLastCommit"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/files/lastCommit")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileLastCommitResponse>();
}

/**
 * @summary 获取文件上一次提交信息
 *
 * @param request GetFileLastCommitRequest
 * @return GetFileLastCommitResponse
 */
GetFileLastCommitResponse Client::getFileLastCommit(const string &repositoryId, const GetFileLastCommitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFileLastCommitWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 获取标签分类
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowTagGroupResponse
 */
GetFlowTagGroupResponse Client::getFlowTagGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlowTagGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tagGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowTagGroupResponse>();
}

/**
 * @summary 获取标签分类
 *
 * @return GetFlowTagGroupResponse
 */
GetFlowTagGroupResponse Client::getFlowTagGroup(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFlowTagGroupWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 根据路径查询代码组
 *
 * @param request GetGroupByPathRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupByPathResponse
 */
GetGroupByPathResponse Client::getGroupByPathWithOptions(const GetGroupByPathRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentity()) {
    query["identity"] = request.identity();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroupByPath"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/4/groups/find_by_path")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupByPathResponse>();
}

/**
 * @summary 根据路径查询代码组
 *
 * @param request GetGroupByPathRequest
 * @return GetGroupByPathResponse
 */
GetGroupByPathResponse Client::getGroupByPath(const GetGroupByPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGroupByPathWithOptions(request, headers, runtime);
}

/**
 * @summary 查询代码组信息
 *
 * @param request GetGroupDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupDetailResponse
 */
GetGroupDetailResponse Client::getGroupDetailWithOptions(const GetGroupDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.groupId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroupDetail"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/get_detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupDetailResponse>();
}

/**
 * @summary 查询代码组信息
 *
 * @param request GetGroupDetailRequest
 * @return GetGroupDetailResponse
 */
GetGroupDetailResponse Client::getGroupDetail(const GetGroupDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGroupDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 获取主机组信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostGroupResponse
 */
GetHostGroupResponse Client::getHostGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/hostGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostGroupResponse>();
}

/**
 * @summary 获取主机组信息
 *
 * @return GetHostGroupResponse
 */
GetHostGroupResponse Client::getHostGroup(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHostGroupWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 查询合并请求详情
 *
 * @param request GetMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMergeRequestResponse
 */
GetMergeRequestResponse Client::getMergeRequestWithOptions(const string &repositoryId, const string &localId, const GetMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId) , "/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMergeRequestResponse>();
}

/**
 * @summary 查询合并请求详情
 *
 * @param request GetMergeRequestRequest
 * @return GetMergeRequestResponse
 */
GetMergeRequestResponse Client::getMergeRequest(const string &repositoryId, const string &localId, const GetMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

/**
 * @summary 查询合并请求的变更信息
 *
 * @param request GetMergeRequestChangeTreeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMergeRequestChangeTreeResponse
 */
GetMergeRequestChangeTreeResponse Client::getMergeRequestChangeTreeWithOptions(const GetMergeRequestChangeTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasFromPatchSetBizId()) {
    query["fromPatchSetBizId"] = request.fromPatchSetBizId();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  if (!!request.hasToPatchSetBizId()) {
    query["toPatchSetBizId"] = request.toPatchSetBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMergeRequestChangeTree"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/diffs/change_tree")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMergeRequestChangeTreeResponse>();
}

/**
 * @summary 查询合并请求的变更信息
 *
 * @param request GetMergeRequestChangeTreeRequest
 * @return GetMergeRequestChangeTreeResponse
 */
GetMergeRequestChangeTreeResponse Client::getMergeRequestChangeTree(const GetMergeRequestChangeTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMergeRequestChangeTreeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取企业成员
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationMemberResponse
 */
GetOrganizationMemberResponse Client::getOrganizationMemberWithOptions(const string &organizationId, const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrganizationMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrganizationMemberResponse>();
}

/**
 * @summary 获取企业成员
 *
 * @return GetOrganizationMemberResponse
 */
GetOrganizationMemberResponse Client::getOrganizationMember(const string &organizationId, const string &accountId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrganizationMemberWithOptions(organizationId, accountId, headers, runtime);
}

/**
 * @summary 获取流水线
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipelineWithOptions(const string &organizationId, const string &pipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipeline"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineResponse>();
}

/**
 * @summary 获取流水线
 *
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipeline(const string &organizationId, const string &pipelineId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineWithOptions(organizationId, pipelineId, headers, runtime);
}

/**
 * @summary 获取构建物下载链接
 *
 * @param request GetPipelineArtifactUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineArtifactUrlResponse
 */
GetPipelineArtifactUrlResponse Client::getPipelineArtifactUrlWithOptions(const string &organizationId, const GetPipelineArtifactUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  if (!!request.hasFilePath()) {
    query["filePath"] = request.filePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineArtifactUrl"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipeline/getArtifactDownloadUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineArtifactUrlResponse>();
}

/**
 * @summary 获取构建物下载链接
 *
 * @param request GetPipelineArtifactUrlRequest
 * @return GetPipelineArtifactUrlResponse
 */
GetPipelineArtifactUrlResponse Client::getPipelineArtifactUrl(const string &organizationId, const GetPipelineArtifactUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineArtifactUrlWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取emase构建物下载链接
 *
 * @param request GetPipelineEmasArtifactUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineEmasArtifactUrlResponse
 */
GetPipelineEmasArtifactUrlResponse Client::getPipelineEmasArtifactUrlWithOptions(const string &organizationId, const string &emasJobInstanceId, const string &md5, const string &pipelineId, const string &pipelineRunId, const GetPipelineEmasArtifactUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceConnectionId()) {
    query["serviceConnectionId"] = request.serviceConnectionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineEmasArtifactUrl"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRun/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/emas/artifact/" , Darabonba::Encode::Encoder::percentEncode(emasJobInstanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(md5))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineEmasArtifactUrlResponse>();
}

/**
 * @summary 获取emase构建物下载链接
 *
 * @param request GetPipelineEmasArtifactUrlRequest
 * @return GetPipelineEmasArtifactUrlResponse
 */
GetPipelineEmasArtifactUrlResponse Client::getPipelineEmasArtifactUrl(const string &organizationId, const string &emasJobInstanceId, const string &md5, const string &pipelineId, const string &pipelineRunId, const GetPipelineEmasArtifactUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineEmasArtifactUrlWithOptions(organizationId, emasJobInstanceId, md5, pipelineId, pipelineRunId, request, headers, runtime);
}

/**
 * @summary 获取流水线分组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineGroupResponse
 */
GetPipelineGroupResponse Client::getPipelineGroupWithOptions(const string &organizationId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineGroupResponse>();
}

/**
 * @summary 获取流水线分组
 *
 * @return GetPipelineGroupResponse
 */
GetPipelineGroupResponse Client::getPipelineGroup(const string &organizationId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineGroupWithOptions(organizationId, groupId, headers, runtime);
}

/**
 * @summary 获取流水线运行信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineRunResponse>();
}

/**
 * @summary 获取流水线运行信息
 *
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineRunWithOptions(organizationId, pipelineId, pipelineRunId, headers, runtime);
}

/**
 * @summary 获取扫描报告下载链接
 *
 * @param request GetPipelineScanReportUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineScanReportUrlResponse
 */
GetPipelineScanReportUrlResponse Client::getPipelineScanReportUrlWithOptions(const string &organizationId, const GetPipelineScanReportUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReportPath()) {
    body["reportPath"] = request.reportPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetPipelineScanReportUrl"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipeline/getPipelineScanReportUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineScanReportUrlResponse>();
}

/**
 * @summary 获取扫描报告下载链接
 *
 * @param request GetPipelineScanReportUrlRequest
 * @return GetPipelineScanReportUrlResponse
 */
GetPipelineScanReportUrlResponse Client::getPipelineScanReportUrl(const string &organizationId, const GetPipelineScanReportUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineScanReportUrlWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 根据id获取项目详情-Projex
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectInfoResponse
 */
GetProjectInfoResponse Client::getProjectInfoWithOptions(const string &organizationId, const string &projectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/project/" , Darabonba::Encode::Encoder::percentEncode(projectId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectInfoResponse>();
}

/**
 * @summary 根据id获取项目详情-Projex
 *
 * @return GetProjectInfoResponse
 */
GetProjectInfoResponse Client::getProjectInfo(const string &organizationId, const string &projectId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectInfoWithOptions(organizationId, projectId, headers, runtime);
}

/**
 * @summary 查询代码库成员
 *
 * @param request GetProjectMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectMemberResponse
 */
GetProjectMemberResponse Client::getProjectMemberWithOptions(const string &repositoryId, const string &aliyunPk, const GetProjectMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/members/get/" , Darabonba::Encode::Encoder::percentEncode(aliyunPk))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectMemberResponse>();
}

/**
 * @summary 查询代码库成员
 *
 * @param request GetProjectMemberRequest
 * @return GetProjectMemberResponse
 */
GetProjectMemberResponse Client::getProjectMember(const string &repositoryId, const string &aliyunPk, const GetProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectMemberWithOptions(repositoryId, aliyunPk, request, headers, runtime);
}

/**
 * @summary 获取研发阶段流水线运行实例
 *
 * @param request GetReleaseStagePipelineRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReleaseStagePipelineRunResponse
 */
GetReleaseStagePipelineRunResponse Client::getReleaseStagePipelineRunWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const GetReleaseStagePipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReleaseStagePipelineRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "/executions/" , Darabonba::Encode::Encoder::percentEncode(executionNumber) , "%3AgetPipelineRun")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReleaseStagePipelineRunResponse>();
}

/**
 * @summary 获取研发阶段流水线运行实例
 *
 * @param request GetReleaseStagePipelineRunRequest
 * @return GetReleaseStagePipelineRunResponse
 */
GetReleaseStagePipelineRunResponse Client::getReleaseStagePipelineRun(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const GetReleaseStagePipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReleaseStagePipelineRunWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

/**
 * @summary 使用代码库ID或路径查询代码库信息
 *
 * @param request GetRepositoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepositoryResponse
 */
GetRepositoryResponse Client::getRepositoryWithOptions(const GetRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasIdentity()) {
    query["identity"] = request.identity();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepository"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepositoryResponse>();
}

/**
 * @summary 使用代码库ID或路径查询代码库信息
 *
 * @param request GetRepositoryRequest
 * @return GetRepositoryResponse
 */
GetRepositoryResponse Client::getRepository(const GetRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRepositoryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询代码库提交信息
 *
 * @param request GetRepositoryCommitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepositoryCommitResponse
 */
GetRepositoryCommitResponse Client::getRepositoryCommitWithOptions(const string &repositoryId, const string &sha, const GetRepositoryCommitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasShowSignature()) {
    query["showSignature"] = request.showSignature();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepositoryCommit"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/commits/" , Darabonba::Encode::Encoder::percentEncode(sha))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepositoryCommitResponse>();
}

/**
 * @summary 查询代码库提交信息
 *
 * @param request GetRepositoryCommitRequest
 * @return GetRepositoryCommitResponse
 */
GetRepositoryCommitResponse Client::getRepositoryCommit(const string &repositoryId, const string &sha, const GetRepositoryCommitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRepositoryCommitWithOptions(repositoryId, sha, request, headers, runtime);
}

/**
 * @summary 查询单个标签
 *
 * @param request GetRepositoryTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepositoryTagResponse
 */
GetRepositoryTagResponse Client::getRepositoryTagWithOptions(const string &repositoryId, const GetRepositoryTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasTagName()) {
    query["tagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepositoryTag"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/tag/info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepositoryTagResponse>();
}

/**
 * @summary 查询单个标签
 *
 * @param request GetRepositoryTagRequest
 * @return GetRepositoryTagResponse
 */
GetRepositoryTagResponse Client::getRepositoryTag(const string &repositoryId, const GetRepositoryTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRepositoryTagWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 预览代码片段
 *
 * @param request GetSearchCodePreviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSearchCodePreviewResponse
 */
GetSearchCodePreviewResponse Client::getSearchCodePreviewWithOptions(const GetSearchCodePreviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocId()) {
    query["docId"] = request.docId();
  }

  if (!!request.hasIsDsl()) {
    query["isDsl"] = request.isDsl();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSearchCodePreview"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/search/code_preview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSearchCodePreviewResponse>();
}

/**
 * @summary 预览代码片段
 *
 * @param request GetSearchCodePreviewRequest
 * @return GetSearchCodePreviewResponse
 */
GetSearchCodePreviewResponse Client::getSearchCodePreview(const GetSearchCodePreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSearchCodePreviewWithOptions(request, headers, runtime);
}

/**
 * @summary 获取迭代详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSprintInfoResponse
 */
GetSprintInfoResponse Client::getSprintInfoWithOptions(const string &organizationId, const string &sprintId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSprintInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/sprints/" , Darabonba::Encode::Encoder::percentEncode(sprintId) , "/getSprintinfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSprintInfoResponse>();
}

/**
 * @summary 获取迭代详情
 *
 * @return GetSprintInfoResponse
 */
GetSprintInfoResponse Client::getSprintInfo(const string &organizationId, const string &sprintId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSprintInfoWithOptions(organizationId, sprintId, headers, runtime);
}

/**
 * @summary 获取测试计划中的测试用例列表
 *
 * @param request GetTestResultListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTestResultListResponse
 */
GetTestResultListResponse Client::getTestResultListWithOptions(const string &organizationId, const string &testPlanIdentifier, const GetTestResultListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConditions()) {
    body["conditions"] = request.conditions();
  }

  if (!!request.hasDirectoryIdentifier()) {
    body["directoryIdentifier"] = request.directoryIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTestResultList"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/testhub/testplan/" , Darabonba::Encode::Encoder::percentEncode(testPlanIdentifier) , "/testresults")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTestResultListResponse>();
}

/**
 * @summary 获取测试计划中的测试用例列表
 *
 * @param request GetTestResultListRequest
 * @return GetTestResultListResponse
 */
GetTestResultListResponse Client::getTestResultList(const string &organizationId, const string &testPlanIdentifier, const GetTestResultListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTestResultListWithOptions(organizationId, testPlanIdentifier, request, headers, runtime);
}

/**
 * @summary 获取测试用例列表
 *
 * @param request GetTestcaseListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTestcaseListResponse
 */
GetTestcaseListResponse Client::getTestcaseListWithOptions(const string &organizationId, const GetTestcaseListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConditions()) {
    body["conditions"] = request.conditions();
  }

  if (!!request.hasDirectoryIdentifier()) {
    body["directoryIdentifier"] = request.directoryIdentifier();
  }

  if (!!request.hasMaxResult()) {
    body["maxResult"] = request.maxResult();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasSpaceIdentifier()) {
    body["spaceIdentifier"] = request.spaceIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTestcaseList"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/testhub/testcases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTestcaseListResponse>();
}

/**
 * @summary 获取测试用例列表
 *
 * @param request GetTestcaseListRequest
 * @return GetTestcaseListResponse
 */
GetTestcaseListResponse Client::getTestcaseList(const string &organizationId, const GetTestcaseListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTestcaseListWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 查询当前用户信息
 *
 * @param request GetUserInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfoWithOptions(const GetUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/users/current")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserInfoResponse>();
}

/**
 * @summary 查询当前用户信息
 *
 * @param request GetUserInfoRequest
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfo(const GetUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 获取部署单信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVMDeployOrderResponse
 */
GetVMDeployOrderResponse Client::getVMDeployOrderWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVMDeployOrder"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/deploy/" , Darabonba::Encode::Encoder::percentEncode(deployOrderId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVMDeployOrderResponse>();
}

/**
 * @summary 获取部署单信息
 *
 * @return GetVMDeployOrderResponse
 */
GetVMDeployOrderResponse Client::getVMDeployOrder(const string &organizationId, const string &pipelineId, const string &deployOrderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

/**
 * @summary 获取变量组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVariableGroupResponse
 */
GetVariableGroupResponse Client::getVariableGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVariableGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/variableGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVariableGroupResponse>();
}

/**
 * @summary 获取变量组
 *
 * @return GetVariableGroupResponse
 */
GetVariableGroupResponse Client::getVariableGroup(const string &organizationId, const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVariableGroupWithOptions(organizationId, id, headers, runtime);
}

/**
 * @summary 获取工作项动态
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemActivityResponse
 */
GetWorkItemActivityResponse Client::getWorkItemActivityWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkItemActivity"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId) , "/getActivity")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemActivityResponse>();
}

/**
 * @summary 获取工作项动态
 *
 * @return GetWorkItemActivityResponse
 */
GetWorkItemActivityResponse Client::getWorkItemActivity(const string &organizationId, const string &workitemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemActivityWithOptions(organizationId, workitemId, headers, runtime);
}

/**
 * @summary 根据id获取工作项详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemInfoResponse
 */
GetWorkItemInfoResponse Client::getWorkItemInfoWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkItemInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemInfoResponse>();
}

/**
 * @summary 根据id获取工作项详情
 *
 * @return GetWorkItemInfoResponse
 */
GetWorkItemInfoResponse Client::getWorkItemInfo(const string &organizationId, const string &workitemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemInfoWithOptions(organizationId, workitemId, headers, runtime);
}

/**
 * @summary 获取工作项工作流信息
 *
 * @param request GetWorkItemWorkFlowInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkItemWorkFlowInfoResponse
 */
GetWorkItemWorkFlowInfoResponse Client::getWorkItemWorkFlowInfoWithOptions(const string &organizationId, const string &workitemId, const GetWorkItemWorkFlowInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigurationId()) {
    query["configurationId"] = request.configurationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkItemWorkFlowInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId) , "/getWorkflowInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkItemWorkFlowInfoResponse>();
}

/**
 * @summary 获取工作项工作流信息
 *
 * @param request GetWorkItemWorkFlowInfoRequest
 * @return GetWorkItemWorkFlowInfoResponse
 */
GetWorkItemWorkFlowInfoResponse Client::getWorkItemWorkFlowInfo(const string &organizationId, const string &workitemId, const GetWorkItemWorkFlowInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkItemWorkFlowInfoWithOptions(organizationId, workitemId, request, headers, runtime);
}

/**
 * @summary 获取附件上传的元信息
 *
 * @param request GetWorkitemAttachmentCreatemetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkitemAttachmentCreatemetaResponse
 */
GetWorkitemAttachmentCreatemetaResponse Client::getWorkitemAttachmentCreatemetaWithOptions(const string &organizationId, const string &workitemIdentifier, const GetWorkitemAttachmentCreatemetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkitemAttachmentCreatemeta"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitem/" , Darabonba::Encode::Encoder::percentEncode(workitemIdentifier) , "/attachment/createmeta")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkitemAttachmentCreatemetaResponse>();
}

/**
 * @summary 获取附件上传的元信息
 *
 * @param request GetWorkitemAttachmentCreatemetaRequest
 * @return GetWorkitemAttachmentCreatemetaResponse
 */
GetWorkitemAttachmentCreatemetaResponse Client::getWorkitemAttachmentCreatemeta(const string &organizationId, const string &workitemIdentifier, const GetWorkitemAttachmentCreatemetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkitemAttachmentCreatemetaWithOptions(organizationId, workitemIdentifier, request, headers, runtime);
}

/**
 * @summary 获得所有评论
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkitemCommentListResponse
 */
GetWorkitemCommentListResponse Client::getWorkitemCommentListWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkitemCommentList"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId) , "/commentList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkitemCommentListResponse>();
}

/**
 * @summary 获得所有评论
 *
 * @return GetWorkitemCommentListResponse
 */
GetWorkitemCommentListResponse Client::getWorkitemCommentList(const string &organizationId, const string &workitemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkitemCommentListWithOptions(organizationId, workitemId, headers, runtime);
}

/**
 * @summary 获取工作项文件信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkitemFileResponse
 */
GetWorkitemFileResponse Client::getWorkitemFileWithOptions(const string &organizationId, const string &workitemIdentifier, const string &fileIdentifier, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkitemFile"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitem/" , Darabonba::Encode::Encoder::percentEncode(workitemIdentifier) , "/files/" , Darabonba::Encode::Encoder::percentEncode(fileIdentifier))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkitemFileResponse>();
}

/**
 * @summary 获取工作项文件信息
 *
 * @return GetWorkitemFileResponse
 */
GetWorkitemFileResponse Client::getWorkitemFile(const string &organizationId, const string &workitemIdentifier, const string &fileIdentifier) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkitemFileWithOptions(organizationId, workitemIdentifier, fileIdentifier, headers, runtime);
}

/**
 * @summary 获得一个工作项的指定关联项
 *
 * @param request GetWorkitemRelationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkitemRelationsResponse
 */
GetWorkitemRelationsResponse Client::getWorkitemRelationsWithOptions(const string &organizationId, const string &workitemId, const GetWorkitemRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelationType()) {
    query["relationType"] = request.relationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkitemRelations"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId) , "/getRelations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkitemRelationsResponse>();
}

/**
 * @summary 获得一个工作项的指定关联项
 *
 * @param request GetWorkitemRelationsRequest
 * @return GetWorkitemRelationsResponse
 */
GetWorkitemRelationsResponse Client::getWorkitemRelations(const string &organizationId, const string &workitemId, const GetWorkitemRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkitemRelationsWithOptions(organizationId, workitemId, request, headers, runtime);
}

/**
 * @summary 获得一个企业下所有工时类型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkitemTimeTypeListResponse
 */
GetWorkitemTimeTypeListResponse Client::getWorkitemTimeTypeListWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkitemTimeTypeList"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/type/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkitemTimeTypeListResponse>();
}

/**
 * @summary 获得一个企业下所有工时类型
 *
 * @return GetWorkitemTimeTypeListResponse
 */
GetWorkitemTimeTypeListResponse Client::getWorkitemTimeTypeList(const string &organizationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkitemTimeTypeListWithOptions(organizationId, headers, runtime);
}

/**
 * @summary 加入流水线分组
 *
 * @param request JoinPipelineGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinPipelineGroupResponse
 */
JoinPipelineGroupResponse Client::joinPipelineGroupWithOptions(const string &organizationId, const JoinPipelineGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["groupId"] = request.groupId();
  }

  if (!!request.hasPipelineIds()) {
    query["pipelineIds"] = request.pipelineIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JoinPipelineGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups/join")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinPipelineGroupResponse>();
}

/**
 * @summary 加入流水线分组
 *
 * @param request JoinPipelineGroupRequest
 * @return JoinPipelineGroupResponse
 */
JoinPipelineGroupResponse Client::joinPipelineGroup(const string &organizationId, const JoinPipelineGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return joinPipelineGroupWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 关联合并请求Label
 *
 * @param request LinkMergeRequestLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return LinkMergeRequestLabelResponse
 */
LinkMergeRequestLabelResponse Client::linkMergeRequestLabelWithOptions(const LinkMergeRequestLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasLabelIds()) {
    body["labelIds"] = request.labelIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "LinkMergeRequestLabel"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/link_labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LinkMergeRequestLabelResponse>();
}

/**
 * @summary 关联合并请求Label
 *
 * @param request LinkMergeRequestLabelRequest
 * @return LinkMergeRequestLabelResponse
 */
LinkMergeRequestLabelResponse Client::linkMergeRequestLabel(const LinkMergeRequestLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return linkMergeRequestLabelWithOptions(request, headers, runtime);
}

/**
 * @summary 查找应用下所有的研发流程
 *
 * @param request ListAllReleaseWorkflowsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllReleaseWorkflowsResponse
 */
ListAllReleaseWorkflowsResponse Client::listAllReleaseWorkflowsWithOptions(const string &appName, const ListAllReleaseWorkflowsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllReleaseWorkflows"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllReleaseWorkflowsResponse>();
}

/**
 * @summary 查找应用下所有的研发流程
 *
 * @param request ListAllReleaseWorkflowsRequest
 * @return ListAllReleaseWorkflowsResponse
 */
ListAllReleaseWorkflowsResponse Client::listAllReleaseWorkflows(const string &appName, const ListAllReleaseWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAllReleaseWorkflowsWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 查询研发阶段执行记录集成变更信息
 *
 * @param request ListAppReleaseStageExecutionIntegratedMetadataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppReleaseStageExecutionIntegratedMetadataResponse
 */
ListAppReleaseStageExecutionIntegratedMetadataResponse Client::listAppReleaseStageExecutionIntegratedMetadataWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const ListAppReleaseStageExecutionIntegratedMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppReleaseStageExecutionIntegratedMetadata"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "/executions/" , Darabonba::Encode::Encoder::percentEncode(executionNumber) , "/integratedMetadata")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppReleaseStageExecutionIntegratedMetadataResponse>();
}

/**
 * @summary 查询研发阶段执行记录集成变更信息
 *
 * @param request ListAppReleaseStageExecutionIntegratedMetadataRequest
 * @return ListAppReleaseStageExecutionIntegratedMetadataResponse
 */
ListAppReleaseStageExecutionIntegratedMetadataResponse Client::listAppReleaseStageExecutionIntegratedMetadata(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const ListAppReleaseStageExecutionIntegratedMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppReleaseStageExecutionIntegratedMetadataWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

/**
 * @summary 批量查询研发阶段执行记录
 *
 * @param request ListAppReleaseStageExecutionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppReleaseStageExecutionsResponse
 */
ListAppReleaseStageExecutionsResponse Client::listAppReleaseStageExecutionsWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const ListAppReleaseStageExecutionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPagination()) {
    query["pagination"] = request.pagination();
  }

  if (!!request.hasPerPage()) {
    query["perPage"] = request.perPage();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppReleaseStageExecutions"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "/executions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppReleaseStageExecutionsResponse>();
}

/**
 * @summary 批量查询研发阶段执行记录
 *
 * @param request ListAppReleaseStageExecutionsRequest
 * @return ListAppReleaseStageExecutionsResponse
 */
ListAppReleaseStageExecutionsResponse Client::listAppReleaseStageExecutions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const ListAppReleaseStageExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppReleaseStageExecutionsWithOptions(appName, releaseWorkflowSn, releaseStageSn, request, headers, runtime);
}

/**
 * @summary 查找应用成员列表
 *
 * @param request ListApplicationMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationMembersResponse
 */
ListApplicationMembersResponse Client::listApplicationMembersWithOptions(const string &appName, const ListApplicationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationMembers"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationMembersResponse>();
}

/**
 * @summary 查找应用成员列表
 *
 * @param request ListApplicationMembersRequest
 * @return ListApplicationMembersResponse
 */
ListApplicationMembersResponse Client::listApplicationMembers(const string &appName, const ListApplicationMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApplicationMembersWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 分页查找应用详情
 *
 * @param request ListApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPagination()) {
    query["pagination"] = request.pagination();
  }

  if (!!request.hasPerPage()) {
    query["perPage"] = request.perPage();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps%3Asearch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary 分页查找应用详情
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApplicationsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询变更研发流程运行记录
 *
 * @param request ListChangeRequestWorkflowExecutionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChangeRequestWorkflowExecutionsResponse
 */
ListChangeRequestWorkflowExecutionsResponse Client::listChangeRequestWorkflowExecutionsWithOptions(const string &appName, const string &sn, const ListChangeRequestWorkflowExecutionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPerPage()) {
    query["perPage"] = request.perPage();
  }

  if (!!request.hasReleaseStageSn()) {
    query["releaseStageSn"] = request.releaseStageSn();
  }

  if (!!request.hasReleaseWorkflowSn()) {
    query["releaseWorkflowSn"] = request.releaseWorkflowSn();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChangeRequestWorkflowExecutions"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/changeRequests/" , Darabonba::Encode::Encoder::percentEncode(sn) , "/executions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChangeRequestWorkflowExecutionsResponse>();
}

/**
 * @summary 查询变更研发流程运行记录
 *
 * @param request ListChangeRequestWorkflowExecutionsRequest
 * @return ListChangeRequestWorkflowExecutionsResponse
 */
ListChangeRequestWorkflowExecutionsResponse Client::listChangeRequestWorkflowExecutions(const string &appName, const string &sn, const ListChangeRequestWorkflowExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChangeRequestWorkflowExecutionsWithOptions(appName, sn, request, headers, runtime);
}

/**
 * @summary 查询变更列表
 *
 * @param tmpReq ListChangeRequestsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChangeRequestsResponse
 */
ListChangeRequestsResponse Client::listChangeRequestsWithOptions(const string &appName, const ListChangeRequestsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListChangeRequestsShrinkRequest request = ListChangeRequestsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAppNameList()) {
    request.setAppNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.appNameList(), "appNameList", "json"));
  }

  if (!!tmpReq.hasOwnerIdList()) {
    request.setOwnerIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ownerIdList(), "ownerIdList", "json"));
  }

  if (!!tmpReq.hasStateList()) {
    request.setStateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.stateList(), "stateList", "json"));
  }

  json query = {};
  if (!!request.hasAppNameListShrink()) {
    query["appNameList"] = request.appNameListShrink();
  }

  if (!!request.hasDisplayNameKeyword()) {
    query["displayNameKeyword"] = request.displayNameKeyword();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasOwnerIdListShrink()) {
    query["ownerIdList"] = request.ownerIdListShrink();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPagination()) {
    query["pagination"] = request.pagination();
  }

  if (!!request.hasPerPage()) {
    query["perPage"] = request.perPage();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  if (!!request.hasStateListShrink()) {
    query["stateList"] = request.stateListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChangeRequests"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/changeRequests")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChangeRequestsResponse>();
}

/**
 * @summary 查询变更列表
 *
 * @param request ListChangeRequestsRequest
 * @return ListChangeRequestsResponse
 */
ListChangeRequestsResponse Client::listChangeRequests(const string &appName, const ListChangeRequestsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChangeRequestsWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 查询检查运行列表
 *
 * @param request ListCheckRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCheckRunsResponse
 */
ListCheckRunsResponse Client::listCheckRunsWithOptions(const ListCheckRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRef()) {
    query["ref"] = request.ref();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCheckRuns"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/check_runs/list_check_runs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCheckRunsResponse>();
}

/**
 * @summary 查询检查运行列表
 *
 * @param request ListCheckRunsRequest
 * @return ListCheckRunsResponse
 */
ListCheckRunsResponse Client::listCheckRuns(const ListCheckRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCheckRunsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询提交状态列表
 *
 * @param request ListCommitStatusesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommitStatusesResponse
 */
ListCommitStatusesResponse Client::listCommitStatusesWithOptions(const ListCommitStatusesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  if (!!request.hasSha()) {
    query["sha"] = request.sha();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommitStatuses"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/repository/commit_statuses/list_commit_statuses")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommitStatusesResponse>();
}

/**
 * @summary 查询提交状态列表
 *
 * @param request ListCommitStatusesRequest
 * @return ListCommitStatusesResponse
 */
ListCommitStatusesResponse Client::listCommitStatuses(const ListCommitStatusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCommitStatusesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取标签分类列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowTagGroupsResponse
 */
ListFlowTagGroupsResponse Client::listFlowTagGroupsWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowTagGroups"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tagGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowTagGroupsResponse>();
}

/**
 * @summary 获取标签分类列表
 *
 * @return ListFlowTagGroupsResponse
 */
ListFlowTagGroupsResponse Client::listFlowTagGroups(const string &organizationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFlowTagGroupsWithOptions(organizationId, headers, runtime);
}

/**
 * @summary 查询组成员列表
 *
 * @param request ListGroupMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupMemberResponse
 */
ListGroupMemberResponse Client::listGroupMemberWithOptions(const string &groupId, const ListGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupMemberResponse>();
}

/**
 * @summary 查询组成员列表
 *
 * @param request ListGroupMemberRequest
 * @return ListGroupMemberResponse
 */
ListGroupMemberResponse Client::listGroupMember(const string &groupId, const ListGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGroupMemberWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 查询代码组下的库列表
 *
 * @param request ListGroupRepositoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupRepositoriesResponse
 */
ListGroupRepositoriesResponse Client::listGroupRepositoriesWithOptions(const string &groupId, const ListGroupRepositoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupRepositories"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupRepositoriesResponse>();
}

/**
 * @summary 查询代码组下的库列表
 *
 * @param request ListGroupRepositoriesRequest
 * @return ListGroupRepositoriesResponse
 */
ListGroupRepositoriesResponse Client::listGroupRepositories(const string &groupId, const ListGroupRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGroupRepositoriesWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 获取主机组列表
 *
 * @param request ListHostGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsResponse
 */
ListHostGroupsResponse Client::listHostGroupsWithOptions(const string &organizationId, const ListHostGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateEndTime()) {
    query["createEndTime"] = request.createEndTime();
  }

  if (!!request.hasCreateStartTime()) {
    query["createStartTime"] = request.createStartTime();
  }

  if (!!request.hasCreatorAccountIds()) {
    query["creatorAccountIds"] = request.creatorAccountIds();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.ids();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPageOrder()) {
    query["pageOrder"] = request.pageOrder();
  }

  if (!!request.hasPageSort()) {
    query["pageSort"] = request.pageSort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroups"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/hostGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsResponse>();
}

/**
 * @summary 获取主机组列表
 *
 * @param request ListHostGroupsRequest
 * @return ListHostGroupsResponse
 */
ListHostGroupsResponse Client::listHostGroups(const string &organizationId, const ListHostGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listHostGroupsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 当前用户加入的企业列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJoinedOrganizationsResponse
 */
ListJoinedOrganizationsResponse Client::listJoinedOrganizationsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJoinedOrganizations"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/users/joinedOrgs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJoinedOrganizationsResponse>();
}

/**
 * @summary 当前用户加入的企业列表
 *
 * @return ListJoinedOrganizationsResponse
 */
ListJoinedOrganizationsResponse Client::listJoinedOrganizations() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJoinedOrganizationsWithOptions(headers, runtime);
}

/**
 * @summary 查询合并请求评论列表
 *
 * @param request ListMergeRequestCommentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMergeRequestCommentsResponse
 */
ListMergeRequestCommentsResponse Client::listMergeRequestCommentsWithOptions(const ListMergeRequestCommentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasCommentType()) {
    body["commentType"] = request.commentType();
  }

  if (!!request.hasFilePath()) {
    body["filePath"] = request.filePath();
  }

  if (!!request.hasPatchSetBizIds()) {
    body["patchSetBizIds"] = request.patchSetBizIds();
  }

  if (!!request.hasResolved()) {
    body["resolved"] = request.resolved();
  }

  if (!!request.hasState()) {
    body["state"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListMergeRequestComments"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/comments/list_comments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMergeRequestCommentsResponse>();
}

/**
 * @summary 查询合并请求评论列表
 *
 * @param request ListMergeRequestCommentsRequest
 * @return ListMergeRequestCommentsResponse
 */
ListMergeRequestCommentsResponse Client::listMergeRequestComments(const ListMergeRequestCommentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMergeRequestCommentsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询合并请求文件已读列表
 *
 * @param request ListMergeRequestFilesReadsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMergeRequestFilesReadsResponse
 */
ListMergeRequestFilesReadsResponse Client::listMergeRequestFilesReadsWithOptions(const ListMergeRequestFilesReadsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasFromPatchSetBizId()) {
    query["fromPatchSetBizId"] = request.fromPatchSetBizId();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  if (!!request.hasToPatchSetBizId()) {
    query["toPatchSetBizId"] = request.toPatchSetBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMergeRequestFilesReads"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/diffs/files_read_infos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMergeRequestFilesReadsResponse>();
}

/**
 * @summary 查询合并请求文件已读列表
 *
 * @param request ListMergeRequestFilesReadsRequest
 * @return ListMergeRequestFilesReadsResponse
 */
ListMergeRequestFilesReadsResponse Client::listMergeRequestFilesReads(const ListMergeRequestFilesReadsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMergeRequestFilesReadsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询合并请求Label列表
 *
 * @param request ListMergeRequestLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMergeRequestLabelsResponse
 */
ListMergeRequestLabelsResponse Client::listMergeRequestLabelsWithOptions(const ListMergeRequestLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMergeRequestLabels"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/labels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMergeRequestLabelsResponse>();
}

/**
 * @summary 查询合并请求Label列表
 *
 * @param request ListMergeRequestLabelsRequest
 * @return ListMergeRequestLabelsResponse
 */
ListMergeRequestLabelsResponse Client::listMergeRequestLabels(const ListMergeRequestLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMergeRequestLabelsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询合并请求的版本列表
 *
 * @param request ListMergeRequestPatchSetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMergeRequestPatchSetsResponse
 */
ListMergeRequestPatchSetsResponse Client::listMergeRequestPatchSetsWithOptions(const ListMergeRequestPatchSetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasLocalId()) {
    query["localId"] = request.localId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMergeRequestPatchSets"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/diffs/list_patchsets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMergeRequestPatchSetsResponse>();
}

/**
 * @summary 查询合并请求的版本列表
 *
 * @param request ListMergeRequestPatchSetsRequest
 * @return ListMergeRequestPatchSetsResponse
 */
ListMergeRequestPatchSetsResponse Client::listMergeRequestPatchSets(const ListMergeRequestPatchSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMergeRequestPatchSetsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询代码评审列表
 *
 * @param request ListMergeRequestsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMergeRequestsResponse
 */
ListMergeRequestsResponse Client::listMergeRequestsWithOptions(const ListMergeRequestsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasAuthorIds()) {
    query["authorIds"] = request.authorIds();
  }

  if (!!request.hasCreatedAfter()) {
    query["createdAfter"] = request.createdAfter();
  }

  if (!!request.hasCreatedBefore()) {
    query["createdBefore"] = request.createdBefore();
  }

  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasGroupIds()) {
    query["groupIds"] = request.groupIds();
  }

  if (!!request.hasLabelIds()) {
    query["labelIds"] = request.labelIds();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasProjectIds()) {
    query["projectIds"] = request.projectIds();
  }

  if (!!request.hasReviewerIds()) {
    query["reviewerIds"] = request.reviewerIds();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  if (!!request.hasState()) {
    query["state"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMergeRequests"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/merge_requests/advanced_search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMergeRequestsResponse>();
}

/**
 * @summary 查询代码评审列表
 *
 * @param request ListMergeRequestsRequest
 * @return ListMergeRequestsResponse
 */
ListMergeRequestsResponse Client::listMergeRequests(const ListMergeRequestsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMergeRequestsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取企业成员列表
 *
 * @param request ListOrganizationMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationMembersResponse
 */
ListOrganizationMembersResponse Client::listOrganizationMembersWithOptions(const string &organizationId, const ListOrganizationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainsExternInfo()) {
    query["containsExternInfo"] = request.containsExternInfo();
  }

  if (!!request.hasExternUid()) {
    query["externUid"] = request.externUid();
  }

  if (!!request.hasJoinTimeFrom()) {
    query["joinTimeFrom"] = request.joinTimeFrom();
  }

  if (!!request.hasJoinTimeTo()) {
    query["joinTimeTo"] = request.joinTimeTo();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrganizationMemberName()) {
    query["organizationMemberName"] = request.organizationMemberName();
  }

  if (!!request.hasProvider()) {
    query["provider"] = request.provider();
  }

  if (!!request.hasState()) {
    query["state"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationMembers"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationMembersResponse>();
}

/**
 * @summary 获取企业成员列表
 *
 * @param request ListOrganizationMembersRequest
 * @return ListOrganizationMembersResponse
 */
ListOrganizationMembersResponse Client::listOrganizationMembers(const string &organizationId, const ListOrganizationMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOrganizationMembersWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 查询用户企业列表
 *
 * @param request ListOrganizationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationsResponse
 */
ListOrganizationsResponse Client::listOrganizationsWithOptions(const ListOrganizationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLevel()) {
    query["accessLevel"] = request.accessLevel();
  }

  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasMinAccessLevel()) {
    query["minAccessLevel"] = request.minAccessLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizations"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organizations/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationsResponse>();
}

/**
 * @summary 查询用户企业列表
 *
 * @param request ListOrganizationsRequest
 * @return ListOrganizationsResponse
 */
ListOrganizationsResponse Client::listOrganizations(const ListOrganizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOrganizationsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取流水线分组下流水线列表列表
 *
 * @param request ListPipelineGroupPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineGroupPipelinesResponse
 */
ListPipelineGroupPipelinesResponse Client::listPipelineGroupPipelinesWithOptions(const string &organizationId, const string &groupId, const ListPipelineGroupPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateEndTime()) {
    query["createEndTime"] = request.createEndTime();
  }

  if (!!request.hasCreateStartTime()) {
    query["createStartTime"] = request.createStartTime();
  }

  if (!!request.hasExecuteEndTime()) {
    query["executeEndTime"] = request.executeEndTime();
  }

  if (!!request.hasExecuteStartTime()) {
    query["executeStartTime"] = request.executeStartTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPipelineName()) {
    query["pipelineName"] = request.pipelineName();
  }

  if (!!request.hasResultStatusList()) {
    query["resultStatusList"] = request.resultStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineGroupPipelines"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/pipelines")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineGroupPipelinesResponse>();
}

/**
 * @summary 获取流水线分组下流水线列表列表
 *
 * @param request ListPipelineGroupPipelinesRequest
 * @return ListPipelineGroupPipelinesResponse
 */
ListPipelineGroupPipelinesResponse Client::listPipelineGroupPipelines(const string &organizationId, const string &groupId, const ListPipelineGroupPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineGroupPipelinesWithOptions(organizationId, groupId, request, headers, runtime);
}

/**
 * @summary 获取流水线分组列表
 *
 * @param request ListPipelineGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineGroupsResponse
 */
ListPipelineGroupsResponse Client::listPipelineGroupsWithOptions(const string &organizationId, const ListPipelineGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineGroups"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineGroupsResponse>();
}

/**
 * @summary 获取流水线分组列表
 *
 * @param request ListPipelineGroupsRequest
 * @return ListPipelineGroupsResponse
 */
ListPipelineGroupsResponse Client::listPipelineGroups(const string &organizationId, const ListPipelineGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineGroupsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取流水线运行过的任务历史
 *
 * @param request ListPipelineJobHistorysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineJobHistorysResponse
 */
ListPipelineJobHistorysResponse Client::listPipelineJobHistorysWithOptions(const string &organizationId, const string &pipelineId, const ListPipelineJobHistorysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasIdentifier()) {
    query["identifier"] = request.identifier();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineJobHistorys"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/job/historys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineJobHistorysResponse>();
}

/**
 * @summary 获取流水线运行过的任务历史
 *
 * @param request ListPipelineJobHistorysRequest
 * @return ListPipelineJobHistorysResponse
 */
ListPipelineJobHistorysResponse Client::listPipelineJobHistorys(const string &organizationId, const string &pipelineId, const ListPipelineJobHistorysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineJobHistorysWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 获取流水线运行过的任务
 *
 * @param request ListPipelineJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineJobsResponse
 */
ListPipelineJobsResponse Client::listPipelineJobsWithOptions(const string &organizationId, const string &pipelineId, const ListPipelineJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineJobs"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineJobsResponse>();
}

/**
 * @summary 获取流水线运行过的任务
 *
 * @param request ListPipelineJobsRequest
 * @return ListPipelineJobsResponse
 */
ListPipelineJobsResponse Client::listPipelineJobs(const string &organizationId, const string &pipelineId, const ListPipelineJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineJobsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 获取流水线关联列表
 *
 * @param request ListPipelineRelationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineRelationsResponse
 */
ListPipelineRelationsResponse Client::listPipelineRelationsWithOptions(const string &organizationId, const string &pipelineId, const ListPipelineRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelObjectType()) {
    query["relObjectType"] = request.relObjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineRelations"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRelations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineRelationsResponse>();
}

/**
 * @summary 获取流水线关联列表
 *
 * @param request ListPipelineRelationsRequest
 * @return ListPipelineRelationsResponse
 */
ListPipelineRelationsResponse Client::listPipelineRelations(const string &organizationId, const string &pipelineId, const ListPipelineRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineRelationsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 获取流水线运行历史
 *
 * @param request ListPipelineRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRunsWithOptions(const string &organizationId, const string &pipelineId, const ListPipelineRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTriggerMode()) {
    query["triggerMode"] = request.triggerMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineRuns"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineRunsResponse>();
}

/**
 * @summary 获取流水线运行历史
 *
 * @param request ListPipelineRunsRequest
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRuns(const string &organizationId, const string &pipelineId, const ListPipelineRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineRunsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 获取流水线列表
 *
 * @param request ListPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelinesWithOptions(const string &organizationId, const ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateEndTime()) {
    query["createEndTime"] = request.createEndTime();
  }

  if (!!request.hasCreateStartTime()) {
    query["createStartTime"] = request.createStartTime();
  }

  if (!!request.hasCreatorAccountIds()) {
    query["creatorAccountIds"] = request.creatorAccountIds();
  }

  if (!!request.hasExecuteAccountIds()) {
    query["executeAccountIds"] = request.executeAccountIds();
  }

  if (!!request.hasExecuteEndTime()) {
    query["executeEndTime"] = request.executeEndTime();
  }

  if (!!request.hasExecuteStartTime()) {
    query["executeStartTime"] = request.executeStartTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPipelineName()) {
    query["pipelineName"] = request.pipelineName();
  }

  if (!!request.hasStatusList()) {
    query["statusList"] = request.statusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelines"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelinesResponse>();
}

/**
 * @summary 获取流水线列表
 *
 * @param request ListPipelinesRequest
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelines(const string &organizationId, const ListPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelinesWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 查询代码库Label列表
 *
 * @param request ListProjectLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectLabelsResponse
 */
ListProjectLabelsResponse Client::listProjectLabelsWithOptions(const ListProjectLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  if (!!request.hasWithCounts()) {
    query["withCounts"] = request.withCounts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectLabels"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/labels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectLabelsResponse>();
}

/**
 * @summary 查询代码库Label列表
 *
 * @param request ListProjectLabelsRequest
 * @return ListProjectLabelsResponse
 */
ListProjectLabelsResponse Client::listProjectLabels(const ListProjectLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectLabelsWithOptions(request, headers, runtime);
}

/**
 * @summary 根据项目id获取项目所以成员
 *
 * @param request ListProjectMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembersWithOptions(const string &organizationId, const string &projectId, const ListProjectMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTargetType()) {
    query["targetType"] = request.targetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectMembers"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/listMembers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectMembersResponse>();
}

/**
 * @summary 根据项目id获取项目所以成员
 *
 * @param request ListProjectMembersRequest
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembers(const string &organizationId, const string &projectId, const ListProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectMembersWithOptions(organizationId, projectId, request, headers, runtime);
}

/**
 * @summary 获取项目模板列表
 *
 * @param request ListProjectTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectTemplatesResponse
 */
ListProjectTemplatesResponse Client::listProjectTemplatesWithOptions(const string &organizationId, const ListProjectTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectTemplates"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/projects/listTemplates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectTemplatesResponse>();
}

/**
 * @summary 获取项目模板列表
 *
 * @param request ListProjectTemplatesRequest
 * @return ListProjectTemplatesResponse
 */
ListProjectTemplatesResponse Client::listProjectTemplates(const string &organizationId, const ListProjectTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectTemplatesWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取项目下开启的工作项类型
 *
 * @param request ListProjectWorkitemTypesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectWorkitemTypesResponse
 */
ListProjectWorkitemTypesResponse Client::listProjectWorkitemTypesWithOptions(const string &organizationId, const string &projectId, const ListProjectWorkitemTypesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasSpaceType()) {
    query["spaceType"] = request.spaceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectWorkitemTypes"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/getWorkitemType")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectWorkitemTypesResponse>();
}

/**
 * @summary 获取项目下开启的工作项类型
 *
 * @param request ListProjectWorkitemTypesRequest
 * @return ListProjectWorkitemTypesResponse
 */
ListProjectWorkitemTypesResponse Client::listProjectWorkitemTypes(const string &organizationId, const string &projectId, const ListProjectWorkitemTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectWorkitemTypesWithOptions(organizationId, projectId, request, headers, runtime);
}

/**
 * @summary 获取项目列表
 *
 * @param request ListProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const string &organizationId, const ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasConditions()) {
    query["conditions"] = request.conditions();
  }

  if (!!request.hasExtraConditions()) {
    query["extraConditions"] = request.extraConditions();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/listProjects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary 获取项目列表
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const string &organizationId, const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 查询保护分支列表
 *
 * @param request ListProtectedBranchesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProtectedBranchesResponse
 */
ListProtectedBranchesResponse Client::listProtectedBranchesWithOptions(const string &repositoryId, const ListProtectedBranchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProtectedBranches"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/protect_branches")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProtectedBranchesResponse>();
}

/**
 * @summary 查询保护分支列表
 *
 * @param request ListProtectedBranchesRequest
 * @return ListProtectedBranchesResponse
 */
ListProtectedBranchesResponse Client::listProtectedBranches(const string &repositoryId, const ListProtectedBranchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProtectedBranchesWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询推送规则列表
 *
 * @param request ListPushRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPushRulesResponse
 */
ListPushRulesResponse Client::listPushRulesWithOptions(const string &repositoryId, const ListPushRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPushRules"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/push_rule/push_rules/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPushRulesResponse>();
}

/**
 * @summary 查询推送规则列表
 *
 * @param request ListPushRulesRequest
 * @return ListPushRulesResponse
 */
ListPushRulesResponse Client::listPushRules(const string &repositoryId, const ListPushRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPushRulesWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询代码库列表
 *
 * @param request ListRepositoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoriesResponse
 */
ListRepositoriesResponse Client::listRepositoriesWithOptions(const ListRepositoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasArchived()) {
    query["archived"] = request.archived();
  }

  if (!!request.hasMinAccessLevel()) {
    query["minAccessLevel"] = request.minAccessLevel();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPerPage()) {
    query["perPage"] = request.perPage();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositories"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoriesResponse>();
}

/**
 * @summary 查询代码库列表
 *
 * @param request ListRepositoriesRequest
 * @return ListRepositoriesResponse
 */
ListRepositoriesResponse Client::listRepositories(const ListRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoriesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询分支列表
 *
 * @param request ListRepositoryBranchesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryBranchesResponse
 */
ListRepositoryBranchesResponse Client::listRepositoryBranchesWithOptions(const string &repositoryId, const ListRepositoryBranchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryBranches"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/branches")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryBranchesResponse>();
}

/**
 * @summary 查询分支列表
 *
 * @param request ListRepositoryBranchesRequest
 * @return ListRepositoryBranchesResponse
 */
ListRepositoryBranchesResponse Client::listRepositoryBranches(const string &repositoryId, const ListRepositoryBranchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryBranchesWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询代码库单个提交（Commit）的提交内容
 *
 * @param request ListRepositoryCommitDiffRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryCommitDiffResponse
 */
ListRepositoryCommitDiffResponse Client::listRepositoryCommitDiffWithOptions(const string &repositoryId, const string &sha, const ListRepositoryCommitDiffRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasContextLine()) {
    query["contextLine"] = request.contextLine();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryCommitDiff"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/commits/" , Darabonba::Encode::Encoder::percentEncode(sha) , "/diff")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryCommitDiffResponse>();
}

/**
 * @summary 查询代码库单个提交（Commit）的提交内容
 *
 * @param request ListRepositoryCommitDiffRequest
 * @return ListRepositoryCommitDiffResponse
 */
ListRepositoryCommitDiffResponse Client::listRepositoryCommitDiff(const string &repositoryId, const string &sha, const ListRepositoryCommitDiffRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryCommitDiffWithOptions(repositoryId, sha, request, headers, runtime);
}

/**
 * @summary 查询代码库提交历史
 *
 * @param request ListRepositoryCommitsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryCommitsResponse
 */
ListRepositoryCommitsResponse Client::listRepositoryCommitsWithOptions(const string &repositoryId, const ListRepositoryCommitsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPath()) {
    query["path"] = request.path();
  }

  if (!!request.hasRefName()) {
    query["refName"] = request.refName();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasShowCommentsCount()) {
    query["showCommentsCount"] = request.showCommentsCount();
  }

  if (!!request.hasShowSignature()) {
    query["showSignature"] = request.showSignature();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryCommits"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/commits")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryCommitsResponse>();
}

/**
 * @summary 查询代码库提交历史
 *
 * @param request ListRepositoryCommitsRequest
 * @return ListRepositoryCommitsResponse
 */
ListRepositoryCommitsResponse Client::listRepositoryCommits(const string &repositoryId, const ListRepositoryCommitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryCommitsWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询代码组列表
 *
 * @param request ListRepositoryGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryGroupsResponse
 */
ListRepositoryGroupsResponse Client::listRepositoryGroupsWithOptions(const ListRepositoryGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasIncludePersonal()) {
    query["includePersonal"] = request.includePersonal();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasParentId()) {
    query["parentId"] = request.parentId();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryGroups"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/get/all")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryGroupsResponse>();
}

/**
 * @summary 查询代码组列表
 *
 * @param request ListRepositoryGroupsRequest
 * @return ListRepositoryGroupsResponse
 */
ListRepositoryGroupsResponse Client::listRepositoryGroups(const ListRepositoryGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询代码库成员列表
 *
 * @param request ListRepositoryMemberWithInheritedRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryMemberWithInheritedResponse
 */
ListRepositoryMemberWithInheritedResponse Client::listRepositoryMemberWithInheritedWithOptions(const string &repositoryId, const ListRepositoryMemberWithInheritedRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryMemberWithInherited"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/members/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryMemberWithInheritedResponse>();
}

/**
 * @summary 查询代码库成员列表
 *
 * @param request ListRepositoryMemberWithInheritedRequest
 * @return ListRepositoryMemberWithInheritedResponse
 */
ListRepositoryMemberWithInheritedResponse Client::listRepositoryMemberWithInherited(const string &repositoryId, const ListRepositoryMemberWithInheritedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryMemberWithInheritedWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询标签列表
 *
 * @param request ListRepositoryTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryTagsResponse
 */
ListRepositoryTagsResponse Client::listRepositoryTagsWithOptions(const string &repositoryId, const ListRepositoryTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.search();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryTags"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/tag/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryTagsResponse>();
}

/**
 * @summary 查询标签列表
 *
 * @param request ListRepositoryTagsRequest
 * @return ListRepositoryTagsResponse
 */
ListRepositoryTagsResponse Client::listRepositoryTags(const string &repositoryId, const ListRepositoryTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryTagsWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询代码库文件树
 *
 * @param request ListRepositoryTreeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryTreeResponse
 */
ListRepositoryTreeResponse Client::listRepositoryTreeWithOptions(const string &repositoryId, const ListRepositoryTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPath()) {
    query["path"] = request.path();
  }

  if (!!request.hasRefName()) {
    query["refName"] = request.refName();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryTree"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/files/tree")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryTreeResponse>();
}

/**
 * @summary 查询代码库文件树
 *
 * @param request ListRepositoryTreeRequest
 * @return ListRepositoryTreeResponse
 */
ListRepositoryTreeResponse Client::listRepositoryTree(const string &repositoryId, const ListRepositoryTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryTreeWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 查询代码库Webhook列表
 *
 * @param request ListRepositoryWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryWebhookResponse
 */
ListRepositoryWebhookResponse Client::listRepositoryWebhookWithOptions(const string &repositoryId, const ListRepositoryWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepositoryWebhook"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/webhooks/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryWebhookResponse>();
}

/**
 * @summary 查询代码库Webhook列表
 *
 * @param request ListRepositoryWebhookRequest
 * @return ListRepositoryWebhookResponse
 */
ListRepositoryWebhookResponse Client::listRepositoryWebhook(const string &repositoryId, const ListRepositoryWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRepositoryWebhookWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 获取资源成员列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceMembersResponse
 */
ListResourceMembersResponse Client::listResourceMembersWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceMembers"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceType) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceId) , "/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceMembersResponse>();
}

/**
 * @summary 获取资源成员列表
 *
 * @return ListResourceMembersResponse
 */
ListResourceMembersResponse Client::listResourceMembers(const string &organizationId, const string &resourceType, const string &resourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceMembersWithOptions(organizationId, resourceType, resourceId, headers, runtime);
}

/**
 * @summary 搜索代码提交数据
 *
 * @param request ListSearchCommitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchCommitResponse
 */
ListSearchCommitResponse Client::listSearchCommitWithOptions(const ListSearchCommitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["keyword"] = request.keyword();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.order();
  }

  if (!!request.hasPage()) {
    body["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.pageSize();
  }

  if (!!request.hasRepoPath()) {
    body["repoPath"] = request.repoPath();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasSort()) {
    body["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSearchCommit"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/search/commit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchCommitResponse>();
}

/**
 * @summary 搜索代码提交数据
 *
 * @param request ListSearchCommitRequest
 * @return ListSearchCommitResponse
 */
ListSearchCommitResponse Client::listSearchCommit(const ListSearchCommitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSearchCommitWithOptions(request, headers, runtime);
}

/**
 * @summary 搜索代码仓库数据
 *
 * @param request ListSearchRepositoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchRepositoryResponse
 */
ListSearchRepositoryResponse Client::listSearchRepositoryWithOptions(const ListSearchRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAliyunPk()) {
    body["aliyunPk"] = request.aliyunPk();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.keyword();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.order();
  }

  if (!!request.hasPage()) {
    body["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.pageSize();
  }

  if (!!request.hasRepoPath()) {
    body["repoPath"] = request.repoPath();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasSort()) {
    body["sort"] = request.sort();
  }

  if (!!request.hasVisibilityLevel()) {
    body["visibilityLevel"] = request.visibilityLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSearchRepository"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/search/repo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchRepositoryResponse>();
}

/**
 * @summary 搜索代码仓库数据
 *
 * @param request ListSearchRepositoryRequest
 * @return ListSearchRepositoryResponse
 */
ListSearchRepositoryResponse Client::listSearchRepository(const ListSearchRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSearchRepositoryWithOptions(request, headers, runtime);
}

/**
 * @summary 搜索代码片段
 *
 * @param request ListSearchSourceCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchSourceCodeResponse
 */
ListSearchSourceCodeResponse Client::listSearchSourceCodeWithOptions(const ListSearchSourceCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasFilePath()) {
    body["filePath"] = request.filePath();
  }

  if (!!request.hasIsCodeBlock()) {
    body["isCodeBlock"] = request.isCodeBlock();
  }

  if (!!request.hasKeyword()) {
    body["keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.order();
  }

  if (!!request.hasPage()) {
    body["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.pageSize();
  }

  if (!!request.hasRepoPath()) {
    body["repoPath"] = request.repoPath();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasSort()) {
    body["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSearchSourceCode"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/search/code")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchSourceCodeResponse>();
}

/**
 * @summary 搜索代码片段
 *
 * @param request ListSearchSourceCodeRequest
 * @return ListSearchSourceCodeResponse
 */
ListSearchSourceCodeResponse Client::listSearchSourceCode(const ListSearchSourceCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSearchSourceCodeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取服务授权列表
 *
 * @param request ListServiceAuthsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceAuthsResponse
 */
ListServiceAuthsResponse Client::listServiceAuthsWithOptions(const string &organizationId, const ListServiceAuthsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceAuthType()) {
    query["serviceAuthType"] = request.serviceAuthType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceAuths"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/serviceAuths")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceAuthsResponse>();
}

/**
 * @summary 获取服务授权列表
 *
 * @param request ListServiceAuthsRequest
 * @return ListServiceAuthsResponse
 */
ListServiceAuthsResponse Client::listServiceAuths(const string &organizationId, const ListServiceAuthsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceAuthsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取服务连接列表
 *
 * @param request ListServiceConnectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceConnectionsResponse
 */
ListServiceConnectionsResponse Client::listServiceConnectionsWithOptions(const string &organizationId, const ListServiceConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSericeConnectionType()) {
    query["sericeConnectionType"] = request.sericeConnectionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceConnections"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/serviceConnections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceConnectionsResponse>();
}

/**
 * @summary 获取服务连接列表
 *
 * @param request ListServiceConnectionsRequest
 * @return ListServiceConnectionsResponse
 */
ListServiceConnectionsResponse Client::listServiceConnections(const string &organizationId, const ListServiceConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceConnectionsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取服务证书列表
 *
 * @param request ListServiceCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceCredentialsResponse
 */
ListServiceCredentialsResponse Client::listServiceCredentialsWithOptions(const string &organizationId, const ListServiceCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceCredentialType()) {
    query["serviceCredentialType"] = request.serviceCredentialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceCredentials"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/serviceCredentials")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceCredentialsResponse>();
}

/**
 * @summary 获取服务证书列表
 *
 * @param request ListServiceCredentialsRequest
 * @return ListServiceCredentialsResponse
 */
ListServiceCredentialsResponse Client::listServiceCredentials(const string &organizationId, const ListServiceCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceCredentialsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取迭代列表
 *
 * @param request ListSprintsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSprintsResponse
 */
ListSprintsResponse Client::listSprintsWithOptions(const string &organizationId, const ListSprintsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSpaceIdentifier()) {
    query["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSpaceType()) {
    query["spaceType"] = request.spaceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSprints"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/sprints/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSprintsResponse>();
}

/**
 * @summary 获取迭代列表
 *
 * @param request ListSprintsRequest
 * @return ListSprintsResponse
 */
ListSprintsResponse Client::listSprints(const string &organizationId, const ListSprintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSprintsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取测试用例全部字段
 *
 * @param request ListTestCaseFieldsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTestCaseFieldsResponse
 */
ListTestCaseFieldsResponse Client::listTestCaseFieldsWithOptions(const string &organizationId, const ListTestCaseFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceIdentifier()) {
    query["spaceIdentifier"] = request.spaceIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTestCaseFields"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/testhub/testcase/fields")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTestCaseFieldsResponse>();
}

/**
 * @summary 获取测试用例全部字段
 *
 * @param request ListTestCaseFieldsRequest
 * @return ListTestCaseFieldsResponse
 */
ListTestCaseFieldsResponse Client::listTestCaseFields(const string &organizationId, const ListTestCaseFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTestCaseFieldsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 测试DrawService
 *
 * @param request ListUserDrawRecordByPkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDrawRecordByPkResponse
 */
ListUserDrawRecordByPkResponse Client::listUserDrawRecordByPkWithOptions(const ListUserDrawRecordByPkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunPk()) {
    query["aliyunPk"] = request.aliyunPk();
  }

  if (!!request.hasDrawGroup()) {
    query["drawGroup"] = request.drawGroup();
  }

  if (!!request.hasDrawPoolName()) {
    query["drawPoolName"] = request.drawPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserDrawRecordByPk"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/listUserDrawRecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserDrawRecordByPkResponse>();
}

/**
 * @summary 测试DrawService
 *
 * @param request ListUserDrawRecordByPkRequest
 * @return ListUserDrawRecordByPkResponse
 */
ListUserDrawRecordByPkResponse Client::listUserDrawRecordByPk(const ListUserDrawRecordByPkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserDrawRecordByPkWithOptions(request, headers, runtime);
}

/**
 * @summary 查询当前用户的SSH Key列表
 *
 * @param request ListUserKeysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserKeysResponse
 */
ListUserKeysResponse Client::listUserKeysWithOptions(const ListUserKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserKeys"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v3/user/keys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserKeysResponse>();
}

/**
 * @summary 查询当前用户的SSH Key列表
 *
 * @param request ListUserKeysRequest
 * @return ListUserKeysResponse
 */
ListUserKeysResponse Client::listUserKeys(const ListUserKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserKeysWithOptions(request, headers, runtime);
}

/**
 * @summary 查询用户有权限的资源（代码库、组）
 *
 * @param request ListUserResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserResourcesResponse
 */
ListUserResourcesResponse Client::listUserResourcesWithOptions(const ListUserResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasUserIds()) {
    query["userIds"] = request.userIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserResources"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/user/vision/user_resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserResourcesResponse>();
}

/**
 * @summary 查询用户有权限的资源（代码库、组）
 *
 * @param request ListUserResourcesRequest
 * @return ListUserResourcesResponse
 */
ListUserResourcesResponse Client::listUserResources(const ListUserResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取变量组列表
 *
 * @param request ListVariableGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVariableGroupsResponse
 */
ListVariableGroupsResponse Client::listVariableGroupsWithOptions(const string &organizationId, const ListVariableGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPageOrder()) {
    query["pageOrder"] = request.pageOrder();
  }

  if (!!request.hasPageSort()) {
    query["pageSort"] = request.pageSort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVariableGroups"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/variableGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVariableGroupsResponse>();
}

/**
 * @summary 获取变量组列表
 *
 * @param request ListVariableGroupsRequest
 * @return ListVariableGroupsResponse
 */
ListVariableGroupsResponse Client::listVariableGroups(const string &organizationId, const ListVariableGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVariableGroupsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取项目下工作项的所有字段
 *
 * @param request ListWorkItemAllFieldsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkItemAllFieldsResponse
 */
ListWorkItemAllFieldsResponse Client::listWorkItemAllFieldsWithOptions(const string &organizationId, const ListWorkItemAllFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceIdentifier()) {
    query["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSpaceType()) {
    query["spaceType"] = request.spaceType();
  }

  if (!!request.hasWorkitemTypeIdentifier()) {
    query["workitemTypeIdentifier"] = request.workitemTypeIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkItemAllFields"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/fields/listAll")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkItemAllFieldsResponse>();
}

/**
 * @summary 获取项目下工作项的所有字段
 *
 * @param request ListWorkItemAllFieldsRequest
 * @return ListWorkItemAllFieldsResponse
 */
ListWorkItemAllFieldsResponse Client::listWorkItemAllFields(const string &organizationId, const ListWorkItemAllFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkItemAllFieldsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 查询工作项工作流的所有状态
 *
 * @param request ListWorkItemWorkFlowStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkItemWorkFlowStatusResponse
 */
ListWorkItemWorkFlowStatusResponse Client::listWorkItemWorkFlowStatusWithOptions(const string &organizationId, const ListWorkItemWorkFlowStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpaceIdentifier()) {
    query["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSpaceType()) {
    query["spaceType"] = request.spaceType();
  }

  if (!!request.hasWorkitemCategoryIdentifier()) {
    query["workitemCategoryIdentifier"] = request.workitemCategoryIdentifier();
  }

  if (!!request.hasWorkitemTypeIdentifier()) {
    query["workitemTypeIdentifier"] = request.workitemTypeIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkItemWorkFlowStatus"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/workflow/listWorkflowStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkItemWorkFlowStatusResponse>();
}

/**
 * @summary 查询工作项工作流的所有状态
 *
 * @param request ListWorkItemWorkFlowStatusRequest
 * @return ListWorkItemWorkFlowStatusResponse
 */
ListWorkItemWorkFlowStatusResponse Client::listWorkItemWorkFlowStatus(const string &organizationId, const ListWorkItemWorkFlowStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkItemWorkFlowStatusWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取工作项的附件列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkitemAttachmentsResponse
 */
ListWorkitemAttachmentsResponse Client::listWorkitemAttachmentsWithOptions(const string &organizationId, const string &workitemIdentifier, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkitemAttachments"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitem/" , Darabonba::Encode::Encoder::percentEncode(workitemIdentifier) , "/attachments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkitemAttachmentsResponse>();
}

/**
 * @summary 获取工作项的附件列表
 *
 * @return ListWorkitemAttachmentsResponse
 */
ListWorkitemAttachmentsResponse Client::listWorkitemAttachments(const string &organizationId, const string &workitemIdentifier) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkitemAttachmentsWithOptions(organizationId, workitemIdentifier, headers, runtime);
}

/**
 * @summary 获取工作项预计工时明细列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkitemEstimateResponse
 */
ListWorkitemEstimateResponse Client::listWorkitemEstimateWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkitemEstimate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId) , "/estimate/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkitemEstimateResponse>();
}

/**
 * @summary 获取工作项预计工时明细列表
 *
 * @return ListWorkitemEstimateResponse
 */
ListWorkitemEstimateResponse Client::listWorkitemEstimate(const string &organizationId, const string &workitemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkitemEstimateWithOptions(organizationId, workitemId, headers, runtime);
}

/**
 * @summary 获取工作项工时明细列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkitemTimeResponse
 */
ListWorkitemTimeResponse Client::listWorkitemTimeWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkitemTime"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/" , Darabonba::Encode::Encoder::percentEncode(workitemId) , "/time/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkitemTimeResponse>();
}

/**
 * @summary 获取工作项工时明细列表
 *
 * @return ListWorkitemTimeResponse
 */
ListWorkitemTimeResponse Client::listWorkitemTime(const string &organizationId, const string &workitemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkitemTimeWithOptions(organizationId, workitemId, headers, runtime);
}

/**
 * @summary 获取工作项列表
 *
 * @param request ListWorkitemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkitemsResponse
 */
ListWorkitemsResponse Client::listWorkitemsWithOptions(const string &organizationId, const ListWorkitemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasConditions()) {
    query["conditions"] = request.conditions();
  }

  if (!!request.hasExtraConditions()) {
    query["extraConditions"] = request.extraConditions();
  }

  if (!!request.hasGroupCondition()) {
    query["groupCondition"] = request.groupCondition();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.orderBy();
  }

  if (!!request.hasSearchType()) {
    query["searchType"] = request.searchType();
  }

  if (!!request.hasSpaceIdentifier()) {
    query["spaceIdentifier"] = request.spaceIdentifier();
  }

  if (!!request.hasSpaceType()) {
    query["spaceType"] = request.spaceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkitems"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/listWorkitems")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkitemsResponse>();
}

/**
 * @summary 获取工作项列表
 *
 * @param request ListWorkitemsRequest
 * @return ListWorkitemsResponse
 */
ListWorkitemsResponse Client::listWorkitems(const string &organizationId, const ListWorkitemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkitemsWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 获取流水线运行任务日志
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return LogPipelineJobRunResponse
 */
LogPipelineJobRunResponse Client::logPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &jobId, const string &pipelineRunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LogPipelineJobRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRun/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/job/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LogPipelineJobRunResponse>();
}

/**
 * @summary 获取流水线运行任务日志
 *
 * @return LogPipelineJobRunResponse
 */
LogPipelineJobRunResponse Client::logPipelineJobRun(const string &organizationId, const string &pipelineId, const string &jobId, const string &pipelineRunId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return logPipelineJobRunWithOptions(organizationId, pipelineId, jobId, pipelineRunId, headers, runtime);
}

/**
 * @summary 获取机器部署日志
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return LogVMDeployMachineResponse
 */
LogVMDeployMachineResponse Client::logVMDeployMachineWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LogVMDeployMachine"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/deploy/" , Darabonba::Encode::Encoder::percentEncode(deployOrderId) , "/machine/" , Darabonba::Encode::Encoder::percentEncode(machineSn) , "/log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LogVMDeployMachineResponse>();
}

/**
 * @summary 获取机器部署日志
 *
 * @return LogVMDeployMachineResponse
 */
LogVMDeployMachineResponse Client::logVMDeployMachine(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return logVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

/**
 * @summary 合并代码评审
 *
 * @param request MergeMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MergeMergeRequestResponse
 */
MergeMergeRequestResponse Client::mergeMergeRequestWithOptions(const string &repositoryId, const string &localId, const MergeMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasMergeMessage()) {
    body["mergeMessage"] = request.mergeMessage();
  }

  if (!!request.hasMergeType()) {
    body["mergeType"] = request.mergeType();
  }

  if (!!request.hasRemoveSourceBranch()) {
    body["removeSourceBranch"] = request.removeSourceBranch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MergeMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId) , "/merge")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MergeMergeRequestResponse>();
}

/**
 * @summary 合并代码评审
 *
 * @param request MergeMergeRequestRequest
 * @return MergeMergeRequestResponse
 */
MergeMergeRequestResponse Client::mergeMergeRequest(const string &repositoryId, const string &localId, const MergeMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return mergeMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

/**
 * @summary 通过人工卡点
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PassPipelineValidateResponse
 */
PassPipelineValidateResponse Client::passPipelineValidateWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PassPipelineValidate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/pass")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PassPipelineValidateResponse>();
}

/**
 * @summary 通过人工卡点
 *
 * @return PassPipelineValidateResponse
 */
PassPipelineValidateResponse Client::passPipelineValidate(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return passPipelineValidateWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

/**
 * @summary 通过人工卡点
 *
 * @param request PassReleaseStagePipelineValidateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PassReleaseStagePipelineValidateResponse
 */
PassReleaseStagePipelineValidateResponse Client::passReleaseStagePipelineValidateWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const PassReleaseStagePipelineValidateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["jobId"] = request.jobId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PassReleaseStagePipelineValidate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "/executions/" , Darabonba::Encode::Encoder::percentEncode(executionNumber) , "%3ApassPipelineValidate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PassReleaseStagePipelineValidateResponse>();
}

/**
 * @summary 通过人工卡点
 *
 * @param request PassReleaseStagePipelineValidateRequest
 * @return PassReleaseStagePipelineValidateResponse
 */
PassReleaseStagePipelineValidateResponse Client::passReleaseStagePipelineValidate(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const PassReleaseStagePipelineValidateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return passReleaseStagePipelineValidateWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

/**
 * @summary 拒绝人工卡点
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefusePipelineValidateResponse
 */
RefusePipelineValidateResponse Client::refusePipelineValidateWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefusePipelineValidate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/refuse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefusePipelineValidateResponse>();
}

/**
 * @summary 拒绝人工卡点
 *
 * @return RefusePipelineValidateResponse
 */
RefusePipelineValidateResponse Client::refusePipelineValidate(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return refusePipelineValidateWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

/**
 * @summary 拒绝人工卡点
 *
 * @param request RefuseReleaseStagePipelineValidateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefuseReleaseStagePipelineValidateResponse
 */
RefuseReleaseStagePipelineValidateResponse Client::refuseReleaseStagePipelineValidateWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const RefuseReleaseStagePipelineValidateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["jobId"] = request.jobId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefuseReleaseStagePipelineValidate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/releaseWorkflows/" , Darabonba::Encode::Encoder::percentEncode(releaseWorkflowSn) , "/releaseStages/" , Darabonba::Encode::Encoder::percentEncode(releaseStageSn) , "/executions/" , Darabonba::Encode::Encoder::percentEncode(executionNumber) , "%3ArefusePipelineValidate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefuseReleaseStagePipelineValidateResponse>();
}

/**
 * @summary 拒绝人工卡点
 *
 * @param request RefuseReleaseStagePipelineValidateRequest
 * @return RefuseReleaseStagePipelineValidateResponse
 */
RefuseReleaseStagePipelineValidateResponse Client::refuseReleaseStagePipelineValidate(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const RefuseReleaseStagePipelineValidateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return refuseReleaseStagePipelineValidateWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

/**
 * @summary 重新打开代码评审
 *
 * @param request ReopenMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReopenMergeRequestResponse
 */
ReopenMergeRequestResponse Client::reopenMergeRequestWithOptions(const string &repositoryId, const string &localId, const ReopenMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReopenMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId) , "/reopen")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReopenMergeRequestResponse>();
}

/**
 * @summary 重新打开代码评审
 *
 * @param request ReopenMergeRequestRequest
 * @return ReopenMergeRequestResponse
 */
ReopenMergeRequestResponse Client::reopenMergeRequest(const string &repositoryId, const string &localId, const ReopenMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reopenMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

/**
 * @summary 重置企业公钥
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSshKeyResponse
 */
ResetSshKeyResponse Client::resetSshKeyWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSshKey"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/sshKey")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetSshKeyResponse>();
}

/**
 * @summary 重置企业公钥
 *
 * @return ResetSshKeyResponse
 */
ResetSshKeyResponse Client::resetSshKey(const string &organizationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetSshKeyWithOptions(organizationId, headers, runtime);
}

/**
 * @summary 继续部署
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeVMDeployOrderResponse
 */
ResumeVMDeployOrderResponse Client::resumeVMDeployOrderWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeVMDeployOrder"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/deploy/" , Darabonba::Encode::Encoder::percentEncode(deployOrderId) , "/resume")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeVMDeployOrderResponse>();
}

/**
 * @summary 继续部署
 *
 * @return ResumeVMDeployOrderResponse
 */
ResumeVMDeployOrderResponse Client::resumeVMDeployOrder(const string &organizationId, const string &pipelineId, const string &deployOrderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

/**
 * @summary 重试流水线运行
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryPipelineJobRunResponse
 */
RetryPipelineJobRunResponse Client::retryPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryPipelineJobRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryPipelineJobRunResponse>();
}

/**
 * @summary 重试流水线运行
 *
 * @return RetryPipelineJobRunResponse
 */
RetryPipelineJobRunResponse Client::retryPipelineJobRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

/**
 * @summary 重试机器部署
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryVMDeployMachineResponse
 */
RetryVMDeployMachineResponse Client::retryVMDeployMachineWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryVMDeployMachine"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/deploy/" , Darabonba::Encode::Encoder::percentEncode(deployOrderId) , "/machine/" , Darabonba::Encode::Encoder::percentEncode(machineSn) , "/retry")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryVMDeployMachineResponse>();
}

/**
 * @summary 重试机器部署
 *
 * @return RetryVMDeployMachineResponse
 */
RetryVMDeployMachineResponse Client::retryVMDeployMachine(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

/**
 * @summary 提交变更请求的评审意见
 *
 * @param request ReviewMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReviewMergeRequestResponse
 */
ReviewMergeRequestResponse Client::reviewMergeRequestWithOptions(const string &repositoryId, const string &localId, const ReviewMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasDraftCommentIds()) {
    body["draftCommentIds"] = request.draftCommentIds();
  }

  if (!!request.hasReviewComment()) {
    body["reviewComment"] = request.reviewComment();
  }

  if (!!request.hasReviewOpinion()) {
    body["reviewOpinion"] = request.reviewOpinion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReviewMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId) , "/submit_review_opinion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReviewMergeRequestResponse>();
}

/**
 * @summary 提交变更请求的评审意见
 *
 * @param request ReviewMergeRequestRequest
 * @return ReviewMergeRequestResponse
 */
ReviewMergeRequestResponse Client::reviewMergeRequest(const string &repositoryId, const string &localId, const ReviewMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reviewMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

/**
 * @summary 跳过流水线任务运行
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipPipelineJobRunResponse
 */
SkipPipelineJobRunResponse Client::skipPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipPipelineJobRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/skip")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipPipelineJobRunResponse>();
}

/**
 * @summary 跳过流水线任务运行
 *
 * @return SkipPipelineJobRunResponse
 */
SkipPipelineJobRunResponse Client::skipPipelineJobRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return skipPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

/**
 * @summary 跳过机器部署
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipVMDeployMachineResponse
 */
SkipVMDeployMachineResponse Client::skipVMDeployMachineWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipVMDeployMachine"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/deploy/" , Darabonba::Encode::Encoder::percentEncode(deployOrderId) , "/machine/" , Darabonba::Encode::Encoder::percentEncode(machineSn) , "/skip")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipVMDeployMachineResponse>();
}

/**
 * @summary 跳过机器部署
 *
 * @return SkipVMDeployMachineResponse
 */
SkipVMDeployMachineResponse Client::skipVMDeployMachine(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return skipVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

/**
 * @summary 运行流水线
 *
 * @param request StartPipelineRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPipelineRunResponse
 */
StartPipelineRunResponse Client::startPipelineRunWithOptions(const string &organizationId, const string &pipelineId, const StartPipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParams()) {
    body["params"] = request.params();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartPipelineRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organizations/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPipelineRunResponse>();
}

/**
 * @summary 运行流水线
 *
 * @param request StartPipelineRunRequest
 * @return StartPipelineRunResponse
 */
StartPipelineRunResponse Client::startPipelineRun(const string &organizationId, const string &pipelineId, const StartPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startPipelineRunWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 终止流水线任务运行
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopPipelineJobRunResponse
 */
StopPipelineJobRunResponse Client::stopPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopPipelineJobRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPipelineJobRunResponse>();
}

/**
 * @summary 终止流水线任务运行
 *
 * @return StopPipelineJobRunResponse
 */
StopPipelineJobRunResponse Client::stopPipelineJobRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

/**
 * @summary 终止流水线运行
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopPipelineRunResponse
 */
StopPipelineRunResponse Client::stopPipelineRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopPipelineRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/pipelineRuns/" , Darabonba::Encode::Encoder::percentEncode(pipelineRunId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPipelineRunResponse>();
}

/**
 * @summary 终止流水线运行
 *
 * @return StopPipelineRunResponse
 */
StopPipelineRunResponse Client::stopPipelineRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopPipelineRunWithOptions(organizationId, pipelineId, pipelineRunId, headers, runtime);
}

/**
 * @summary 取消部署单
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopVMDeployOrderResponse
 */
StopVMDeployOrderResponse Client::stopVMDeployOrderWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopVMDeployOrder"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/deploy/" , Darabonba::Encode::Encoder::percentEncode(deployOrderId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopVMDeployOrderResponse>();
}

/**
 * @summary 取消部署单
 *
 * @return StopVMDeployOrderResponse
 */
StopVMDeployOrderResponse Client::stopVMDeployOrder(const string &organizationId, const string &pipelineId, const string &deployOrderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

/**
 * @summary 转移代码库
 *
 * @param request TransferRepositoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferRepositoryResponse
 */
TransferRepositoryResponse Client::transferRepositoryWithOptions(const TransferRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.groupId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryId()) {
    query["repositoryId"] = request.repositoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferRepository"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/repository/transfer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferRepositoryResponse>();
}

/**
 * @summary 转移代码库
 *
 * @param request TransferRepositoryRequest
 * @return TransferRepositoryResponse
 */
TransferRepositoryResponse Client::transferRepository(const TransferRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transferRepositoryWithOptions(request, headers, runtime);
}

/**
 * @summary 触发仓库同步
 *
 * @param request TriggerRepositoryMirrorSyncRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerRepositoryMirrorSyncResponse
 */
TriggerRepositoryMirrorSyncResponse Client::triggerRepositoryMirrorSyncWithOptions(const string &repositoryId, const TriggerRepositoryMirrorSyncRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasAccount()) {
    query["account"] = request.account();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasToken()) {
    query["token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TriggerRepositoryMirrorSync"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/mirror")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerRepositoryMirrorSyncResponse>();
}

/**
 * @summary 触发仓库同步
 *
 * @param request TriggerRepositoryMirrorSyncRequest
 * @return TriggerRepositoryMirrorSyncResponse
 */
TriggerRepositoryMirrorSyncResponse Client::triggerRepositoryMirrorSync(const string &repositoryId, const TriggerRepositoryMirrorSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return triggerRepositoryMirrorSyncWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 更新应用成员
 *
 * @param request UpdateAppMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppMemberResponse
 */
UpdateAppMemberResponse Client::updateAppMemberWithOptions(const string &appName, const UpdateAppMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasPlayer()) {
    body["player"] = request.player();
  }

  if (!!request.hasRoleNames()) {
    body["roleNames"] = request.roleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAppMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName) , "/members")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppMemberResponse>();
}

/**
 * @summary 更新应用成员
 *
 * @param request UpdateAppMemberRequest
 * @return UpdateAppMemberResponse
 */
UpdateAppMemberResponse Client::updateAppMember(const string &appName, const UpdateAppMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAppMemberWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 更新应用
 *
 * @param request UpdateApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplicationWithOptions(const string &appName, const UpdateApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasOwnerAccountId()) {
    body["ownerAccountId"] = request.ownerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApplication"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/appstack/apps/" , Darabonba::Encode::Encoder::percentEncode(appName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationResponse>();
}

/**
 * @summary 更新应用
 *
 * @param request UpdateApplicationRequest
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplication(const string &appName, const UpdateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApplicationWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 更新检查运行记录
 *
 * @param request UpdateCheckRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCheckRunResponse
 */
UpdateCheckRunResponse Client::updateCheckRunWithOptions(const UpdateCheckRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasCheckRunId()) {
    query["checkRunId"] = request.checkRunId();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasAnnotations()) {
    body["annotations"] = request.annotations();
  }

  if (!!request.hasCompletedAt()) {
    body["completedAt"] = request.completedAt();
  }

  if (!!request.hasConclusion()) {
    body["conclusion"] = request.conclusion();
  }

  if (!!request.hasDetailsUrl()) {
    body["detailsUrl"] = request.detailsUrl();
  }

  if (!!request.hasExternalId()) {
    body["externalId"] = request.externalId();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasOutput()) {
    body["output"] = request.output();
  }

  if (!!request.hasStartedAt()) {
    body["startedAt"] = request.startedAt();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCheckRun"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/check_runs/update_check_run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCheckRunResponse>();
}

/**
 * @summary 更新检查运行记录
 *
 * @param request UpdateCheckRunRequest
 * @return UpdateCheckRunResponse
 */
UpdateCheckRunResponse Client::updateCheckRun(const UpdateCheckRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCheckRunWithOptions(request, headers, runtime);
}

/**
 * @summary 更新代码库文件
 *
 * @param request UpdateFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFileWithOptions(const string &repositoryId, const UpdateFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasBranchName()) {
    body["branchName"] = request.branchName();
  }

  if (!!request.hasCommitMessage()) {
    body["commitMessage"] = request.commitMessage();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasEncoding()) {
    body["encoding"] = request.encoding();
  }

  if (!!request.hasNewPath()) {
    body["newPath"] = request.newPath();
  }

  if (!!request.hasOldPath()) {
    body["oldPath"] = request.oldPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFile"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/files/update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileResponse>();
}

/**
 * @summary 更新代码库文件
 *
 * @param request UpdateFileRequest
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFile(const string &repositoryId, const UpdateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFileWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 更新标签
 *
 * @param request UpdateFlowTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowTagResponse
 */
UpdateFlowTagResponse Client::updateFlowTagWithOptions(const string &organizationId, const string &id, const UpdateFlowTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColor()) {
    query["color"] = request.color();
  }

  if (!!request.hasFlowTagGroupId()) {
    query["flowTagGroupId"] = request.flowTagGroupId();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFlowTag"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tags/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowTagResponse>();
}

/**
 * @summary 更新标签
 *
 * @param request UpdateFlowTagRequest
 * @return UpdateFlowTagResponse
 */
UpdateFlowTagResponse Client::updateFlowTag(const string &organizationId, const string &id, const UpdateFlowTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFlowTagWithOptions(organizationId, id, request, headers, runtime);
}

/**
 * @summary 标签分类
 *
 * @param request UpdateFlowTagGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowTagGroupResponse
 */
UpdateFlowTagGroupResponse Client::updateFlowTagGroupWithOptions(const string &organizationId, const string &id, const UpdateFlowTagGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFlowTagGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/flow/tagGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowTagGroupResponse>();
}

/**
 * @summary 标签分类
 *
 * @param request UpdateFlowTagGroupRequest
 * @return UpdateFlowTagGroupResponse
 */
UpdateFlowTagGroupResponse Client::updateFlowTagGroup(const string &organizationId, const string &id, const UpdateFlowTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFlowTagGroupWithOptions(organizationId, id, request, headers, runtime);
}

/**
 * @summary 更新单个代码组信息
 *
 * @param request UpdateGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAvatarUrl()) {
    body["avatarUrl"] = request.avatarUrl();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasPath()) {
    body["path"] = request.path();
  }

  if (!!request.hasPathWithNamespace()) {
    body["pathWithNamespace"] = request.pathWithNamespace();
  }

  if (!!request.hasVisibilityLevel()) {
    body["visibilityLevel"] = request.visibilityLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/groups/modify")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupResponse>();
}

/**
 * @summary 更新单个代码组信息
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 修改组成员
 *
 * @param request UpdateGroupMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupMemberResponse
 */
UpdateGroupMemberResponse Client::updateGroupMemberWithOptions(const string &groupId, const UpdateGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasAliyunPk()) {
    query["aliyunPk"] = request.aliyunPk();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAccessLevel()) {
    body["accessLevel"] = request.accessLevel();
  }

  if (!!request.hasMemberType()) {
    body["memberType"] = request.memberType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGroupMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/members/update/aliyun_pk")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupMemberResponse>();
}

/**
 * @summary 修改组成员
 *
 * @param request UpdateGroupMemberRequest
 * @return UpdateGroupMemberResponse
 */
UpdateGroupMemberResponse Client::updateGroupMember(const string &groupId, const UpdateGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGroupMemberWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 更新主机组
 *
 * @param request UpdateHostGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHostGroupResponse
 */
UpdateHostGroupResponse Client::updateHostGroupWithOptions(const string &organizationId, const string &id, const UpdateHostGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunRegion()) {
    body["aliyunRegion"] = request.aliyunRegion();
  }

  if (!!request.hasEcsLabelKey()) {
    body["ecsLabelKey"] = request.ecsLabelKey();
  }

  if (!!request.hasEcsLabelValue()) {
    body["ecsLabelValue"] = request.ecsLabelValue();
  }

  if (!!request.hasEcsType()) {
    body["ecsType"] = request.ecsType();
  }

  if (!!request.hasEnvId()) {
    body["envId"] = request.envId();
  }

  if (!!request.hasMachineInfos()) {
    body["machineInfos"] = request.machineInfos();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasServiceConnectionId()) {
    body["serviceConnectionId"] = request.serviceConnectionId();
  }

  if (!!request.hasTagIds()) {
    body["tagIds"] = request.tagIds();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateHostGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/hostGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHostGroupResponse>();
}

/**
 * @summary 更新主机组
 *
 * @param request UpdateHostGroupRequest
 * @return UpdateHostGroupResponse
 */
UpdateHostGroupResponse Client::updateHostGroup(const string &organizationId, const string &id, const UpdateHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHostGroupWithOptions(organizationId, id, request, headers, runtime);
}

/**
 * @summary 更新代码评审的标题和描述
 *
 * @param request UpdateMergeRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMergeRequestResponse
 */
UpdateMergeRequestResponse Client::updateMergeRequestWithOptions(const string &repositoryId, const string &localId, const UpdateMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMergeRequest"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMergeRequestResponse>();
}

/**
 * @summary 更新代码评审的标题和描述
 *
 * @param request UpdateMergeRequestRequest
 * @return UpdateMergeRequestResponse
 */
UpdateMergeRequestResponse Client::updateMergeRequest(const string &repositoryId, const string &localId, const UpdateMergeRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

/**
 * @summary 更新代码评审的干系人
 *
 * @param request UpdateMergeRequestPersonnelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMergeRequestPersonnelResponse
 */
UpdateMergeRequestPersonnelResponse Client::updateMergeRequestPersonnelWithOptions(const string &repositoryId, const string &localId, const string &personType, const UpdateMergeRequestPersonnelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasNewUserIdList()) {
    body["newUserIdList"] = request.newUserIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMergeRequestPersonnel"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/merge_requests/" , Darabonba::Encode::Encoder::percentEncode(localId) , "/person/" , Darabonba::Encode::Encoder::percentEncode(personType))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMergeRequestPersonnelResponse>();
}

/**
 * @summary 更新代码评审的干系人
 *
 * @param request UpdateMergeRequestPersonnelRequest
 * @return UpdateMergeRequestPersonnelResponse
 */
UpdateMergeRequestPersonnelResponse Client::updateMergeRequestPersonnel(const string &repositoryId, const string &localId, const string &personType, const UpdateMergeRequestPersonnelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMergeRequestPersonnelWithOptions(repositoryId, localId, personType, request, headers, runtime);
}

/**
 * @summary 当前用户加入的企业列表
 *
 * @param request UpdateOrganizationMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrganizationMemberResponse
 */
UpdateOrganizationMemberResponse Client::updateOrganizationMemberWithOptions(const string &organizationId, const string &accountId, const UpdateOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationMemberName()) {
    query["organizationMemberName"] = request.organizationMemberName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrganizationMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrganizationMemberResponse>();
}

/**
 * @summary 当前用户加入的企业列表
 *
 * @param request UpdateOrganizationMemberRequest
 * @return UpdateOrganizationMemberResponse
 */
UpdateOrganizationMemberResponse Client::updateOrganizationMember(const string &organizationId, const string &accountId, const UpdateOrganizationMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateOrganizationMemberWithOptions(organizationId, accountId, request, headers, runtime);
}

/**
 * @summary 更新流水线。
 *
 * @param request UpdatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipelineWithOptions(const string &organizationId, const UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasPipelineId()) {
    body["pipelineId"] = request.pipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipeline"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineResponse>();
}

/**
 * @summary 更新流水线。
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const string &organizationId, const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelineWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 删除标签
 *
 * @param request UpdatePipelineBaseInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineBaseInfoResponse
 */
UpdatePipelineBaseInfoResponse Client::updatePipelineBaseInfoWithOptions(const string &organizationId, const string &pipelineId, const UpdatePipelineBaseInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvId()) {
    query["envId"] = request.envId();
  }

  if (!!request.hasPipelineName()) {
    query["pipelineName"] = request.pipelineName();
  }

  if (!!request.hasTagList()) {
    query["tagList"] = request.tagList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePipelineBaseInfo"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(pipelineId) , "/baseInfo")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineBaseInfoResponse>();
}

/**
 * @summary 删除标签
 *
 * @param request UpdatePipelineBaseInfoRequest
 * @return UpdatePipelineBaseInfoResponse
 */
UpdatePipelineBaseInfoResponse Client::updatePipelineBaseInfo(const string &organizationId, const string &pipelineId, const UpdatePipelineBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelineBaseInfoWithOptions(organizationId, pipelineId, request, headers, runtime);
}

/**
 * @summary 更新流水线分组
 *
 * @param request UpdatePipelineGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineGroupResponse
 */
UpdatePipelineGroupResponse Client::updatePipelineGroupWithOptions(const string &organizationId, const string &groupId, const UpdatePipelineGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePipelineGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/pipelineGroups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineGroupResponse>();
}

/**
 * @summary 更新流水线分组
 *
 * @param request UpdatePipelineGroupRequest
 * @return UpdatePipelineGroupResponse
 */
UpdatePipelineGroupResponse Client::updatePipelineGroup(const string &organizationId, const string &groupId, const UpdatePipelineGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelineGroupWithOptions(organizationId, groupId, request, headers, runtime);
}

/**
 * @summary 更新项目属性与字段
 *
 * @param request UpdateProjectFieldRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectFieldResponse
 */
UpdateProjectFieldResponse Client::updateProjectFieldWithOptions(const string &organizationId, const string &identifier, const UpdateProjectFieldRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasStatusIdentifier()) {
    body["statusIdentifier"] = request.statusIdentifier();
  }

  if (!!request.hasUpdateBasicFieldRequestList()) {
    body["updateBasicFieldRequestList"] = request.updateBasicFieldRequestList();
  }

  if (!!request.hasUpdateForOpenApiList()) {
    body["updateForOpenApiList"] = request.updateForOpenApiList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectField"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/project/" , Darabonba::Encode::Encoder::percentEncode(identifier))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectFieldResponse>();
}

/**
 * @summary 更新项目属性与字段
 *
 * @param request UpdateProjectFieldRequest
 * @return UpdateProjectFieldResponse
 */
UpdateProjectFieldResponse Client::updateProjectField(const string &organizationId, const string &identifier, const UpdateProjectFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectFieldWithOptions(organizationId, identifier, request, headers, runtime);
}

/**
 * @summary 更新代码库Label
 *
 * @param request UpdateProjectLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectLabelResponse
 */
UpdateProjectLabelResponse Client::updateProjectLabelWithOptions(const string &labelId, const UpdateProjectLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasRepositoryIdentity()) {
    query["repositoryIdentity"] = request.repositoryIdentity();
  }

  json body = {};
  if (!!request.hasColor()) {
    body["color"] = request.color();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectLabel"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/labels/" , Darabonba::Encode::Encoder::percentEncode(labelId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectLabelResponse>();
}

/**
 * @summary 更新代码库Label
 *
 * @param request UpdateProjectLabelRequest
 * @return UpdateProjectLabelResponse
 */
UpdateProjectLabelResponse Client::updateProjectLabel(const string &labelId, const UpdateProjectLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectLabelWithOptions(labelId, request, headers, runtime);
}

/**
 * @summary 添加项目成员
 *
 * @param request UpdateProjectMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectMemberResponse
 */
UpdateProjectMemberResponse Client::updateProjectMemberWithOptions(const string &organizationId, const string &projectId, const UpdateProjectMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleIdentifier()) {
    body["roleIdentifier"] = request.roleIdentifier();
  }

  if (!!request.hasTargetIdentifier()) {
    body["targetIdentifier"] = request.targetIdentifier();
  }

  if (!!request.hasTargetType()) {
    body["targetType"] = request.targetType();
  }

  if (!!request.hasUserIdentifier()) {
    body["userIdentifier"] = request.userIdentifier();
  }

  if (!!request.hasUserType()) {
    body["userType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/updateMember")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectMemberResponse>();
}

/**
 * @summary 添加项目成员
 *
 * @param request UpdateProjectMemberRequest
 * @return UpdateProjectMemberResponse
 */
UpdateProjectMemberResponse Client::updateProjectMember(const string &organizationId, const string &projectId, const UpdateProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectMemberWithOptions(organizationId, projectId, request, headers, runtime);
}

/**
 * @summary 更改保护分支设置
 *
 * @param request UpdateProtectedBranchesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProtectedBranchesResponse
 */
UpdateProtectedBranchesResponse Client::updateProtectedBranchesWithOptions(const string &repositoryId, const string &id, const UpdateProtectedBranchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAllowMergeRoles()) {
    body["allowMergeRoles"] = request.allowMergeRoles();
  }

  if (!!request.hasAllowMergeUserIds()) {
    body["allowMergeUserIds"] = request.allowMergeUserIds();
  }

  if (!!request.hasAllowPushRoles()) {
    body["allowPushRoles"] = request.allowPushRoles();
  }

  if (!!request.hasAllowPushUserIds()) {
    body["allowPushUserIds"] = request.allowPushUserIds();
  }

  if (!!request.hasBranch()) {
    body["branch"] = request.branch();
  }

  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  if (!!request.hasMergeRequestSetting()) {
    body["mergeRequestSetting"] = request.mergeRequestSetting();
  }

  if (!!request.hasTestSettingDTO()) {
    body["testSettingDTO"] = request.testSettingDTO();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProtectedBranches"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/protect_branches/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProtectedBranchesResponse>();
}

/**
 * @summary 更改保护分支设置
 *
 * @param request UpdateProtectedBranchesRequest
 * @return UpdateProtectedBranchesResponse
 */
UpdateProtectedBranchesResponse Client::updateProtectedBranches(const string &repositoryId, const string &id, const UpdateProtectedBranchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProtectedBranchesWithOptions(repositoryId, id, request, headers, runtime);
}

/**
 * @summary 推送评审模式开关
 *
 * @param request UpdatePushReviewOnOffRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePushReviewOnOffResponse
 */
UpdatePushReviewOnOffResponse Client::updatePushReviewOnOffWithOptions(const string &repositoryId, const UpdatePushReviewOnOffRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  if (!!request.hasTrunkMode()) {
    query["trunkMode"] = request.trunkMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePushReviewOnOff"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/settings/trunk_mode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePushReviewOnOffResponse>();
}

/**
 * @summary 推送评审模式开关
 *
 * @param request UpdatePushReviewOnOffRequest
 * @return UpdatePushReviewOnOffResponse
 */
UpdatePushReviewOnOffResponse Client::updatePushReviewOnOff(const string &repositoryId, const UpdatePushReviewOnOffRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePushReviewOnOffWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 更新推送规则
 *
 * @param request UpdatePushRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePushRuleResponse
 */
UpdatePushRuleResponse Client::updatePushRuleWithOptions(const string &repositoryId, const string &pushRuleId, const UpdatePushRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasRuleInfos()) {
    body["ruleInfos"] = request.ruleInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePushRule"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v4/projects/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/push_rule/" , Darabonba::Encode::Encoder::percentEncode(pushRuleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePushRuleResponse>();
}

/**
 * @summary 更新推送规则
 *
 * @param request UpdatePushRuleRequest
 * @return UpdatePushRuleResponse
 */
UpdatePushRuleResponse Client::updatePushRule(const string &repositoryId, const string &pushRuleId, const UpdatePushRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePushRuleWithOptions(repositoryId, pushRuleId, request, headers, runtime);
}

/**
 * @summary 更新代码库名称、路径、描述、默认分支等设置
 *
 * @param request UpdateRepositoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRepositoryResponse
 */
UpdateRepositoryResponse Client::updateRepositoryWithOptions(const string &repositoryId, const UpdateRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAdminSettingLanguage()) {
    body["adminSettingLanguage"] = request.adminSettingLanguage();
  }

  if (!!request.hasAvatar()) {
    body["avatar"] = request.avatar();
  }

  if (!!request.hasBuildsEnabled()) {
    body["buildsEnabled"] = request.buildsEnabled();
  }

  if (!!request.hasCheckEmail()) {
    body["checkEmail"] = request.checkEmail();
  }

  if (!!request.hasDefaultBranch()) {
    body["defaultBranch"] = request.defaultBranch();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  if (!!request.hasIssuesEnabled()) {
    body["issuesEnabled"] = request.issuesEnabled();
  }

  if (!!request.hasMergeRequestsEnabled()) {
    body["mergeRequestsEnabled"] = request.mergeRequestsEnabled();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasOpenCloneDownloadControl()) {
    body["openCloneDownloadControl"] = request.openCloneDownloadControl();
  }

  if (!!request.hasPath()) {
    body["path"] = request.path();
  }

  if (!!request.hasProjectCloneDownloadMethodList()) {
    body["projectCloneDownloadMethodList"] = request.projectCloneDownloadMethodList();
  }

  if (!!request.hasProjectCloneDownloadRoleList()) {
    body["projectCloneDownloadRoleList"] = request.projectCloneDownloadRoleList();
  }

  if (!!request.hasSnippetsEnabled()) {
    body["snippetsEnabled"] = request.snippetsEnabled();
  }

  if (!!request.hasVisibilityLevel()) {
    body["visibilityLevel"] = request.visibilityLevel();
  }

  if (!!request.hasWikiEnabled()) {
    body["wikiEnabled"] = request.wikiEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRepository"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRepositoryResponse>();
}

/**
 * @summary 更新代码库名称、路径、描述、默认分支等设置
 *
 * @param request UpdateRepositoryRequest
 * @return UpdateRepositoryResponse
 */
UpdateRepositoryResponse Client::updateRepository(const string &repositoryId, const UpdateRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRepositoryWithOptions(repositoryId, request, headers, runtime);
}

/**
 * @summary 修改代码库成员的权限（角色）
 *
 * @param request UpdateRepositoryMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRepositoryMemberResponse
 */
UpdateRepositoryMemberResponse Client::updateRepositoryMemberWithOptions(const string &repositoryId, const string &aliyunPk, const UpdateRepositoryMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["accessToken"] = request.accessToken();
  }

  if (!!request.hasOrganizationId()) {
    query["organizationId"] = request.organizationId();
  }

  json body = {};
  if (!!request.hasAccessLevel()) {
    body["accessLevel"] = request.accessLevel();
  }

  if (!!request.hasExpireAt()) {
    body["expireAt"] = request.expireAt();
  }

  if (!!request.hasMemberType()) {
    body["memberType"] = request.memberType();
  }

  if (!!request.hasRelatedId()) {
    body["relatedId"] = request.relatedId();
  }

  if (!!request.hasRelatedInfos()) {
    body["relatedInfos"] = request.relatedInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRepositoryMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/repository/" , Darabonba::Encode::Encoder::percentEncode(repositoryId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(aliyunPk))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRepositoryMemberResponse>();
}

/**
 * @summary 修改代码库成员的权限（角色）
 *
 * @param request UpdateRepositoryMemberRequest
 * @return UpdateRepositoryMemberResponse
 */
UpdateRepositoryMemberResponse Client::updateRepositoryMember(const string &repositoryId, const string &aliyunPk, const UpdateRepositoryMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRepositoryMemberWithOptions(repositoryId, aliyunPk, request, headers, runtime);
}

/**
 * @summary 更新资源成员
 *
 * @param request UpdateResourceMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceMemberResponse
 */
UpdateResourceMemberResponse Client::updateResourceMemberWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId, const UpdateResourceMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["roleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceMember"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceType) , "/" , Darabonba::Encode::Encoder::percentEncode(resourceId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceMemberResponse>();
}

/**
 * @summary 更新资源成员
 *
 * @param request UpdateResourceMemberRequest
 * @return UpdateResourceMemberResponse
 */
UpdateResourceMemberResponse Client::updateResourceMember(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId, const UpdateResourceMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceMemberWithOptions(organizationId, resourceType, resourceId, accountId, request, headers, runtime);
}

/**
 * @summary 更新测试用例字段
 *
 * @param request UpdateTestCaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTestCaseResponse
 */
UpdateTestCaseResponse Client::updateTestCaseWithOptions(const string &organizationId, const string &testcaseIdentifier, const UpdateTestCaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUpdateWorkitemPropertyRequest()) {
    body["updateWorkitemPropertyRequest"] = request.updateWorkitemPropertyRequest();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTestCase"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/testhub/testcase/" , Darabonba::Encode::Encoder::percentEncode(testcaseIdentifier))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTestCaseResponse>();
}

/**
 * @summary 更新测试用例字段
 *
 * @param request UpdateTestCaseRequest
 * @return UpdateTestCaseResponse
 */
UpdateTestCaseResponse Client::updateTestCase(const string &organizationId, const string &testcaseIdentifier, const UpdateTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTestCaseWithOptions(organizationId, testcaseIdentifier, request, headers, runtime);
}

/**
 * @summary 更新了测试计划中测试用例的执行人与状态
 *
 * @param request UpdateTestResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTestResultResponse
 */
UpdateTestResultResponse Client::updateTestResultWithOptions(const string &organizationId, const string &testPlanIdentifier, const string &testcaseIdentifier, const UpdateTestResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExecutor()) {
    body["executor"] = request.executor();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTestResult"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/testhub/testplan/" , Darabonba::Encode::Encoder::percentEncode(testPlanIdentifier) , "/testresult/" , Darabonba::Encode::Encoder::percentEncode(testcaseIdentifier))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTestResultResponse>();
}

/**
 * @summary 更新了测试计划中测试用例的执行人与状态
 *
 * @param request UpdateTestResultRequest
 * @return UpdateTestResultResponse
 */
UpdateTestResultResponse Client::updateTestResult(const string &organizationId, const string &testPlanIdentifier, const string &testcaseIdentifier, const UpdateTestResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTestResultWithOptions(organizationId, testPlanIdentifier, testcaseIdentifier, request, headers, runtime);
}

/**
 * @summary 更新变量组
 *
 * @param request UpdateVariableGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVariableGroupResponse
 */
UpdateVariableGroupResponse Client::updateVariableGroupWithOptions(const string &organizationId, const string &id, const UpdateVariableGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.variables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateVariableGroup"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/variableGroups/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVariableGroupResponse>();
}

/**
 * @summary 更新变量组
 *
 * @param request UpdateVariableGroupRequest
 * @return UpdateVariableGroupResponse
 */
UpdateVariableGroupResponse Client::updateVariableGroup(const string &organizationId, const string &id, const UpdateVariableGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateVariableGroupWithOptions(organizationId, id, request, headers, runtime);
}

/**
 * @summary 更新工作项信息
 *
 * @param request UpdateWorkItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkItemResponse
 */
UpdateWorkItemResponse Client::updateWorkItemWithOptions(const string &organizationId, const UpdateWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFieldType()) {
    body["fieldType"] = request.fieldType();
  }

  if (!!request.hasIdentifier()) {
    body["identifier"] = request.identifier();
  }

  if (!!request.hasPropertyKey()) {
    body["propertyKey"] = request.propertyKey();
  }

  if (!!request.hasPropertyValue()) {
    body["propertyValue"] = request.propertyValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkItem"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkItemResponse>();
}

/**
 * @summary 更新工作项信息
 *
 * @param request UpdateWorkItemRequest
 * @return UpdateWorkItemResponse
 */
UpdateWorkItemResponse Client::updateWorkItem(const string &organizationId, const UpdateWorkItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkItemWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 更新工作项评论
 *
 * @param request UpdateWorkitemCommentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkitemCommentResponse
 */
UpdateWorkitemCommentResponse Client::updateWorkitemCommentWithOptions(const string &organizationId, const UpdateWorkitemCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommentId()) {
    body["commentId"] = request.commentId();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasFormatType()) {
    body["formatType"] = request.formatType();
  }

  if (!!request.hasWorkitemIdentifier()) {
    body["workitemIdentifier"] = request.workitemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkitemComment"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/commentUpdate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkitemCommentResponse>();
}

/**
 * @summary 更新工作项评论
 *
 * @param request UpdateWorkitemCommentRequest
 * @return UpdateWorkitemCommentResponse
 */
UpdateWorkitemCommentResponse Client::updateWorkitemComment(const string &organizationId, const UpdateWorkitemCommentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkitemCommentWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 批量更新工作项字段信息
 *
 * @param request UpdateWorkitemFieldRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkitemFieldResponse
 */
UpdateWorkitemFieldResponse Client::updateWorkitemFieldWithOptions(const string &organizationId, const UpdateWorkitemFieldRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUpdateWorkitemPropertyRequest()) {
    body["updateWorkitemPropertyRequest"] = request.updateWorkitemPropertyRequest();
  }

  if (!!request.hasWorkitemIdentifier()) {
    body["workitemIdentifier"] = request.workitemIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkitemField"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitems/updateWorkitemField")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkitemFieldResponse>();
}

/**
 * @summary 批量更新工作项字段信息
 *
 * @param request UpdateWorkitemFieldRequest
 * @return UpdateWorkitemFieldResponse
 */
UpdateWorkitemFieldResponse Client::updateWorkitemField(const string &organizationId, const UpdateWorkitemFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkitemFieldWithOptions(organizationId, request, headers, runtime);
}

/**
 * @summary 工作项附件创建
 *
 * @param request WorkitemAttachmentCreateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return WorkitemAttachmentCreateResponse
 */
WorkitemAttachmentCreateResponse Client::workitemAttachmentCreateWithOptions(const string &organizationId, const string &workitemIdentifier, const WorkitemAttachmentCreateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["fileKey"] = request.fileKey();
  }

  if (!!request.hasOriginalFilename()) {
    body["originalFilename"] = request.originalFilename();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "WorkitemAttachmentCreate"},
    {"version" , "2021-06-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/organization/" , Darabonba::Encode::Encoder::percentEncode(organizationId) , "/workitem/" , Darabonba::Encode::Encoder::percentEncode(workitemIdentifier) , "/attachment")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WorkitemAttachmentCreateResponse>();
}

/**
 * @summary 工作项附件创建
 *
 * @param request WorkitemAttachmentCreateRequest
 * @return WorkitemAttachmentCreateResponse
 */
WorkitemAttachmentCreateResponse Client::workitemAttachmentCreate(const string &organizationId, const string &workitemIdentifier, const WorkitemAttachmentCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return workitemAttachmentCreateWithOptions(organizationId, workitemIdentifier, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Devops20210625