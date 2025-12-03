// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DEVOPS20210625_HPP_
#define ALIBABACLOUD_DEVOPS20210625_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Devops20210625Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Devops20210625.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加组成员
       *
       * @param request AddGroupMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGroupMemberResponse
       */
      Models::AddGroupMemberResponse addGroupMemberWithOptions(const string &groupId, const Models::AddGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加组成员
       *
       * @param request AddGroupMemberRequest
       * @return AddGroupMemberResponse
       */
      Models::AddGroupMemberResponse addGroupMember(const string &groupId, const Models::AddGroupMemberRequest &request);

      /**
       * @summary 添加流水线关联
       *
       * @param request AddPipelineRelationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPipelineRelationsResponse
       */
      Models::AddPipelineRelationsResponse addPipelineRelationsWithOptions(const string &organizationId, const string &pipelineId, const Models::AddPipelineRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加流水线关联
       *
       * @param request AddPipelineRelationsRequest
       * @return AddPipelineRelationsResponse
       */
      Models::AddPipelineRelationsResponse addPipelineRelations(const string &organizationId, const string &pipelineId, const Models::AddPipelineRelationsRequest &request);

      /**
       * @summary 添加代码库成员
       *
       * @param request AddRepositoryMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRepositoryMemberResponse
       */
      Models::AddRepositoryMemberResponse addRepositoryMemberWithOptions(const string &repositoryId, const Models::AddRepositoryMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加代码库成员
       *
       * @param request AddRepositoryMemberRequest
       * @return AddRepositoryMemberResponse
       */
      Models::AddRepositoryMemberResponse addRepositoryMember(const string &repositoryId, const Models::AddRepositoryMemberRequest &request);

      /**
       * @summary 添加代码库Webhook
       *
       * @param request AddWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWebhookResponse
       */
      Models::AddWebhookResponse addWebhookWithOptions(const string &repositoryId, const Models::AddWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加代码库Webhook
       *
       * @param request AddWebhookRequest
       * @return AddWebhookResponse
       */
      Models::AddWebhookResponse addWebhook(const string &repositoryId, const Models::AddWebhookRequest &request);

      /**
       * @summary 取消执行研发阶段流水线
       *
       * @param request CancelExecutionReleaseStageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelExecutionReleaseStageResponse
       */
      Models::CancelExecutionReleaseStageResponse cancelExecutionReleaseStageWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::CancelExecutionReleaseStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消执行研发阶段流水线
       *
       * @param request CancelExecutionReleaseStageRequest
       * @return CancelExecutionReleaseStageResponse
       */
      Models::CancelExecutionReleaseStageResponse cancelExecutionReleaseStage(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::CancelExecutionReleaseStageRequest &request);

      /**
       * @summary 关闭代码评审
       *
       * @param request CloseMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseMergeRequestResponse
       */
      Models::CloseMergeRequestResponse closeMergeRequestWithOptions(const string &repositoryId, const string &localId, const Models::CloseMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭代码评审
       *
       * @param request CloseMergeRequestRequest
       * @return CloseMergeRequestResponse
       */
      Models::CloseMergeRequestResponse closeMergeRequest(const string &repositoryId, const string &localId, const Models::CloseMergeRequestRequest &request);

      /**
       * @summary 添加应用成员
       *
       * @param request CreateAppMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppMembersResponse
       */
      Models::CreateAppMembersResponse createAppMembersWithOptions(const string &appName, const Models::CreateAppMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加应用成员
       *
       * @param request CreateAppMembersRequest
       * @return CreateAppMembersResponse
       */
      Models::CreateAppMembersResponse createAppMembers(const string &appName, const Models::CreateAppMembersRequest &request);

      /**
       * @summary 创建分支
       *
       * @param request CreateBranchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBranchResponse
       */
      Models::CreateBranchResponse createBranchWithOptions(const string &repositoryId, const Models::CreateBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建分支
       *
       * @param request CreateBranchRequest
       * @return CreateBranchResponse
       */
      Models::CreateBranchResponse createBranch(const string &repositoryId, const Models::CreateBranchRequest &request);

      /**
       * @summary 创建变更
       *
       * @param request CreateChangeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChangeRequestResponse
       */
      Models::CreateChangeRequestResponse createChangeRequestWithOptions(const string &appName, const Models::CreateChangeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建变更
       *
       * @param request CreateChangeRequestRequest
       * @return CreateChangeRequestResponse
       */
      Models::CreateChangeRequestResponse createChangeRequest(const string &appName, const Models::CreateChangeRequestRequest &request);

      /**
       * @summary 添加检查运行记录
       *
       * @param request CreateCheckRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCheckRunResponse
       */
      Models::CreateCheckRunResponse createCheckRunWithOptions(const Models::CreateCheckRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加检查运行记录
       *
       * @param request CreateCheckRunRequest
       * @return CreateCheckRunResponse
       */
      Models::CreateCheckRunResponse createCheckRun(const Models::CreateCheckRunRequest &request);

      /**
       * @summary 创建评论
       *
       * @param request CreateCommentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommentResponse
       */
      Models::CreateCommentResponse createCommentWithOptions(const Models::CreateCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建评论
       *
       * @param request CreateCommentRequest
       * @return CreateCommentResponse
       */
      Models::CreateCommentResponse createComment(const Models::CreateCommentRequest &request);

      /**
       * @summary 创建提交状态记录
       *
       * @param request CreateCommitStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommitStatusResponse
       */
      Models::CreateCommitStatusResponse createCommitStatusWithOptions(const Models::CreateCommitStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建提交状态记录
       *
       * @param request CreateCommitStatusRequest
       * @return CreateCommitStatusResponse
       */
      Models::CreateCommitStatusResponse createCommitStatus(const Models::CreateCommitStatusRequest &request);

      /**
       * @summary 单提交变更多个文件
       *
       * @param request CreateCommitWithMultipleFilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommitWithMultipleFilesResponse
       */
      Models::CreateCommitWithMultipleFilesResponse createCommitWithMultipleFilesWithOptions(const Models::CreateCommitWithMultipleFilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单提交变更多个文件
       *
       * @param request CreateCommitWithMultipleFilesRequest
       * @return CreateCommitWithMultipleFilesResponse
       */
      Models::CreateCommitWithMultipleFilesResponse createCommitWithMultipleFiles(const Models::CreateCommitWithMultipleFilesRequest &request);

      /**
       * @summary 创建部署密钥
       *
       * @param request CreateDeployKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeployKeyResponse
       */
      Models::CreateDeployKeyResponse createDeployKeyWithOptions(const string &repositoryId, const Models::CreateDeployKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建部署密钥
       *
       * @param request CreateDeployKeyRequest
       * @return CreateDeployKeyResponse
       */
      Models::CreateDeployKeyResponse createDeployKey(const string &repositoryId, const Models::CreateDeployKeyRequest &request);

      /**
       * @summary 创建文件
       *
       * @param request CreateFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const string &repositoryId, const Models::CreateFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建文件
       *
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const string &repositoryId, const Models::CreateFileRequest &request);

      /**
       * @summary 创建标签
       *
       * @param request CreateFlowTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowTagResponse
       */
      Models::CreateFlowTagResponse createFlowTagWithOptions(const string &organizationId, const Models::CreateFlowTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标签
       *
       * @param request CreateFlowTagRequest
       * @return CreateFlowTagResponse
       */
      Models::CreateFlowTagResponse createFlowTag(const string &organizationId, const Models::CreateFlowTagRequest &request);

      /**
       * @summary 创建标签分类
       *
       * @param request CreateFlowTagGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowTagGroupResponse
       */
      Models::CreateFlowTagGroupResponse createFlowTagGroupWithOptions(const string &organizationId, const Models::CreateFlowTagGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标签分类
       *
       * @param request CreateFlowTagGroupRequest
       * @return CreateFlowTagGroupResponse
       */
      Models::CreateFlowTagGroupResponse createFlowTagGroup(const string &organizationId, const Models::CreateFlowTagGroupRequest &request);

      /**
       * @summary 创建主机组
       *
       * @param request CreateHostGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostGroupResponse
       */
      Models::CreateHostGroupResponse createHostGroupWithOptions(const string &organizationId, const Models::CreateHostGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建主机组
       *
       * @param request CreateHostGroupRequest
       * @return CreateHostGroupResponse
       */
      Models::CreateHostGroupResponse createHostGroup(const string &organizationId, const Models::CreateHostGroupRequest &request);

      /**
       * @summary 创建代码评审
       *
       * @param request CreateMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMergeRequestResponse
       */
      Models::CreateMergeRequestResponse createMergeRequestWithOptions(const string &repositoryId, const Models::CreateMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代码评审
       *
       * @param request CreateMergeRequestRequest
       * @return CreateMergeRequestResponse
       */
      Models::CreateMergeRequestResponse createMergeRequest(const string &repositoryId, const Models::CreateMergeRequestRequest &request);

      /**
       * @summary 创建OAuth令牌
       *
       * @param request CreateOAuthTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOAuthTokenResponse
       */
      Models::CreateOAuthTokenResponse createOAuthTokenWithOptions(const Models::CreateOAuthTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建OAuth令牌
       *
       * @param request CreateOAuthTokenRequest
       * @return CreateOAuthTokenResponse
       */
      Models::CreateOAuthTokenResponse createOAuthToken(const Models::CreateOAuthTokenRequest &request);

      /**
       * @summary 创建流水线。
       *
       * @param request CreatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const string &organizationId, const Models::CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流水线。
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const string &organizationId, const Models::CreatePipelineRequest &request);

      /**
       * @summary 创建流水线分组
       *
       * @param request CreatePipelineGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineGroupResponse
       */
      Models::CreatePipelineGroupResponse createPipelineGroupWithOptions(const string &organizationId, const Models::CreatePipelineGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流水线分组
       *
       * @param request CreatePipelineGroupRequest
       * @return CreatePipelineGroupResponse
       */
      Models::CreatePipelineGroupResponse createPipelineGroup(const string &organizationId, const Models::CreatePipelineGroupRequest &request);

      /**
       * @summary 创建项目
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const string &organizationId, const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建项目
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const string &organizationId, const Models::CreateProjectRequest &request);

      /**
       * @summary 创建代码库Label
       *
       * @param request CreateProjectLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectLabelResponse
       */
      Models::CreateProjectLabelResponse createProjectLabelWithOptions(const Models::CreateProjectLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代码库Label
       *
       * @param request CreateProjectLabelRequest
       * @return CreateProjectLabelResponse
       */
      Models::CreateProjectLabelResponse createProjectLabel(const Models::CreateProjectLabelRequest &request);

      /**
       * @summary 创建保护分支
       *
       * @param request CreateProtectdBranchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtectdBranchResponse
       */
      Models::CreateProtectdBranchResponse createProtectdBranchWithOptions(const string &repositoryId, const Models::CreateProtectdBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建保护分支
       *
       * @param request CreateProtectdBranchRequest
       * @return CreateProtectdBranchResponse
       */
      Models::CreateProtectdBranchResponse createProtectdBranch(const string &repositoryId, const Models::CreateProtectdBranchRequest &request);

      /**
       * @summary 创建推送规则
       *
       * @param request CreatePushRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePushRuleResponse
       */
      Models::CreatePushRuleResponse createPushRuleWithOptions(const string &repositoryId, const Models::CreatePushRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建推送规则
       *
       * @param request CreatePushRuleRequest
       * @return CreatePushRuleResponse
       */
      Models::CreatePushRuleResponse createPushRule(const string &repositoryId, const Models::CreatePushRuleRequest &request);

      /**
       * @summary 创建(导入)代码库
       *
       * @param request CreateRepositoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepositoryResponse
       */
      Models::CreateRepositoryResponse createRepositoryWithOptions(const Models::CreateRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建(导入)代码库
       *
       * @param request CreateRepositoryRequest
       * @return CreateRepositoryResponse
       */
      Models::CreateRepositoryResponse createRepository(const Models::CreateRepositoryRequest &request);

      /**
       * @summary 创建代码组
       *
       * @param request CreateRepositoryGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepositoryGroupResponse
       */
      Models::CreateRepositoryGroupResponse createRepositoryGroupWithOptions(const Models::CreateRepositoryGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代码组
       *
       * @param request CreateRepositoryGroupRequest
       * @return CreateRepositoryGroupResponse
       */
      Models::CreateRepositoryGroupResponse createRepositoryGroup(const Models::CreateRepositoryGroupRequest &request);

      /**
       * @summary 插入资源成员
       *
       * @param request CreateResourceMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceMemberResponse
       */
      Models::CreateResourceMemberResponse createResourceMemberWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const Models::CreateResourceMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 插入资源成员
       *
       * @param request CreateResourceMemberRequest
       * @return CreateResourceMemberResponse
       */
      Models::CreateResourceMemberResponse createResourceMember(const string &organizationId, const string &resourceType, const string &resourceId, const Models::CreateResourceMemberRequest &request);

      /**
       * @summary 创建服务授权
       *
       * @param request CreateServiceAuthRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceAuthResponse
       */
      Models::CreateServiceAuthResponse createServiceAuthWithOptions(const string &organizationId, const Models::CreateServiceAuthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务授权
       *
       * @param request CreateServiceAuthRequest
       * @return CreateServiceAuthResponse
       */
      Models::CreateServiceAuthResponse createServiceAuth(const string &organizationId, const Models::CreateServiceAuthRequest &request);

      /**
       * @summary 创建服务连接
       *
       * @param request CreateServiceConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceConnectionResponse
       */
      Models::CreateServiceConnectionResponse createServiceConnectionWithOptions(const string &organizationId, const Models::CreateServiceConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务连接
       *
       * @param request CreateServiceConnectionRequest
       * @return CreateServiceConnectionResponse
       */
      Models::CreateServiceConnectionResponse createServiceConnection(const string &organizationId, const Models::CreateServiceConnectionRequest &request);

      /**
       * @summary 创建用户名密码类型的证书
       *
       * @param request CreateServiceCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceCredentialResponse
       */
      Models::CreateServiceCredentialResponse createServiceCredentialWithOptions(const string &organizationId, const Models::CreateServiceCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户名密码类型的证书
       *
       * @param request CreateServiceCredentialRequest
       * @return CreateServiceCredentialResponse
       */
      Models::CreateServiceCredentialResponse createServiceCredential(const string &organizationId, const Models::CreateServiceCredentialRequest &request);

      /**
       * @summary 创建迭代
       *
       * @param request CreateSprintRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSprintResponse
       */
      Models::CreateSprintResponse createSprintWithOptions(const string &organizationId, const Models::CreateSprintRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建迭代
       *
       * @param request CreateSprintRequest
       * @return CreateSprintResponse
       */
      Models::CreateSprintResponse createSprint(const string &organizationId, const Models::CreateSprintRequest &request);

      /**
       * @summary 创建企业公钥
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSshKeyResponse
       */
      Models::CreateSshKeyResponse createSshKeyWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建企业公钥
       *
       * @return CreateSshKeyResponse
       */
      Models::CreateSshKeyResponse createSshKey(const string &organizationId);

      /**
       * @summary 创建标签Tag
       *
       * @param request CreateTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const string &repositoryId, const Models::CreateTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标签Tag
       *
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const string &repositoryId, const Models::CreateTagRequest &request);

      /**
       * @summary 创建测试用例
       *
       * @param request CreateTestCaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTestCaseResponse
       */
      Models::CreateTestCaseResponse createTestCaseWithOptions(const string &organizationId, const Models::CreateTestCaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建测试用例
       *
       * @param request CreateTestCaseRequest
       * @return CreateTestCaseResponse
       */
      Models::CreateTestCaseResponse createTestCase(const string &organizationId, const Models::CreateTestCaseRequest &request);

      /**
       * @summary 创建SSH Key密钥
       *
       * @param request CreateUserKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserKeyResponse
       */
      Models::CreateUserKeyResponse createUserKeyWithOptions(const Models::CreateUserKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建SSH Key密钥
       *
       * @param request CreateUserKeyRequest
       * @return CreateUserKeyResponse
       */
      Models::CreateUserKeyResponse createUserKey(const Models::CreateUserKeyRequest &request);

      /**
       * @summary 创建变量组
       *
       * @param request CreateVariableGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVariableGroupResponse
       */
      Models::CreateVariableGroupResponse createVariableGroupWithOptions(const string &organizationId, const Models::CreateVariableGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建变量组
       *
       * @param request CreateVariableGroupRequest
       * @return CreateVariableGroupResponse
       */
      Models::CreateVariableGroupResponse createVariableGroup(const string &organizationId, const Models::CreateVariableGroupRequest &request);

      /**
       * @summary 新建工作项
       *
       * @param request CreateWorkitemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkitemResponse
       */
      Models::CreateWorkitemResponse createWorkitemWithOptions(const string &organizationId, const Models::CreateWorkitemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建工作项
       *
       * @param request CreateWorkitemRequest
       * @return CreateWorkitemResponse
       */
      Models::CreateWorkitemResponse createWorkitem(const string &organizationId, const Models::CreateWorkitemRequest &request);

      /**
       * @summary 创建一个评论
       *
       * @param request CreateWorkitemCommentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkitemCommentResponse
       */
      Models::CreateWorkitemCommentResponse createWorkitemCommentWithOptions(const string &organizationId, const Models::CreateWorkitemCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个评论
       *
       * @param request CreateWorkitemCommentRequest
       * @return CreateWorkitemCommentResponse
       */
      Models::CreateWorkitemCommentResponse createWorkitemComment(const string &organizationId, const Models::CreateWorkitemCommentRequest &request);

      /**
       * @summary 登记预计工时
       *
       * @param request CreateWorkitemEstimateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkitemEstimateResponse
       */
      Models::CreateWorkitemEstimateResponse createWorkitemEstimateWithOptions(const string &organizationId, const Models::CreateWorkitemEstimateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 登记预计工时
       *
       * @param request CreateWorkitemEstimateRequest
       * @return CreateWorkitemEstimateResponse
       */
      Models::CreateWorkitemEstimateResponse createWorkitemEstimate(const string &organizationId, const Models::CreateWorkitemEstimateRequest &request);

      /**
       * @summary 登记实际工时
       *
       * @param request CreateWorkitemRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkitemRecordResponse
       */
      Models::CreateWorkitemRecordResponse createWorkitemRecordWithOptions(const string &organizationId, const Models::CreateWorkitemRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 登记实际工时
       *
       * @param request CreateWorkitemRecordRequest
       * @return CreateWorkitemRecordResponse
       */
      Models::CreateWorkitemRecordResponse createWorkitemRecord(const string &organizationId, const Models::CreateWorkitemRecordRequest &request);

      /**
       * @summary 创建工作项
       *
       * @param request CreateWorkitemV2Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkitemV2Response
       */
      Models::CreateWorkitemV2Response createWorkitemV2WithOptions(const string &organizationId, const Models::CreateWorkitemV2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作项
       *
       * @param request CreateWorkitemV2Request
       * @return CreateWorkitemV2Response
       */
      Models::CreateWorkitemV2Response createWorkitemV2(const string &organizationId, const Models::CreateWorkitemV2Request &request);

      /**
       * @summary 删除应用成员
       *
       * @param request DeleteAppMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppMemberResponse
       */
      Models::DeleteAppMemberResponse deleteAppMemberWithOptions(const string &appName, const Models::DeleteAppMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用成员
       *
       * @param request DeleteAppMemberRequest
       * @return DeleteAppMemberResponse
       */
      Models::DeleteAppMemberResponse deleteAppMember(const string &appName, const Models::DeleteAppMemberRequest &request);

      /**
       * @summary 删除分支
       *
       * @param request DeleteBranchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBranchResponse
       */
      Models::DeleteBranchResponse deleteBranchWithOptions(const string &repositoryId, const Models::DeleteBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除分支
       *
       * @param request DeleteBranchRequest
       * @return DeleteBranchResponse
       */
      Models::DeleteBranchResponse deleteBranch(const string &repositoryId, const Models::DeleteBranchRequest &request);

      /**
       * @summary 删除文件
       *
       * @param request DeleteFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const string &repositoryId, const Models::DeleteFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件
       *
       * @param request DeleteFileRequest
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const string &repositoryId, const Models::DeleteFileRequest &request);

      /**
       * @summary 删除标签
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowTagResponse
       */
      Models::DeleteFlowTagResponse deleteFlowTagWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签
       *
       * @return DeleteFlowTagResponse
       */
      Models::DeleteFlowTagResponse deleteFlowTag(const string &organizationId, const string &id);

      /**
       * @summary 删除标签分类
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowTagGroupResponse
       */
      Models::DeleteFlowTagGroupResponse deleteFlowTagGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签分类
       *
       * @return DeleteFlowTagGroupResponse
       */
      Models::DeleteFlowTagGroupResponse deleteFlowTagGroup(const string &organizationId, const string &id);

      /**
       * @summary 删除组成员
       *
       * @param request DeleteGroupMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupMemberResponse
       */
      Models::DeleteGroupMemberResponse deleteGroupMemberWithOptions(const string &groupId, const Models::DeleteGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除组成员
       *
       * @param request DeleteGroupMemberRequest
       * @return DeleteGroupMemberResponse
       */
      Models::DeleteGroupMemberResponse deleteGroupMember(const string &groupId, const Models::DeleteGroupMemberRequest &request);

      /**
       * @summary 删除主机组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostGroupResponse
       */
      Models::DeleteHostGroupResponse deleteHostGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除主机组
       *
       * @return DeleteHostGroupResponse
       */
      Models::DeleteHostGroupResponse deleteHostGroup(const string &organizationId, const string &id);

      /**
       * @summary 删除流水线
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipelineWithOptions(const string &organizationId, const string &pipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流水线
       *
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipeline(const string &organizationId, const string &pipelineId);

      /**
       * @summary 删除流水线分组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineGroupResponse
       */
      Models::DeletePipelineGroupResponse deletePipelineGroupWithOptions(const string &organizationId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流水线分组
       *
       * @return DeletePipelineGroupResponse
       */
      Models::DeletePipelineGroupResponse deletePipelineGroup(const string &organizationId, const string &groupId);

      /**
       * @summary 删除流水线关联
       *
       * @param request DeletePipelineRelationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineRelationsResponse
       */
      Models::DeletePipelineRelationsResponse deletePipelineRelationsWithOptions(const string &organizationId, const string &pipelineId, const Models::DeletePipelineRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流水线关联
       *
       * @param request DeletePipelineRelationsRequest
       * @return DeletePipelineRelationsResponse
       */
      Models::DeletePipelineRelationsResponse deletePipelineRelations(const string &organizationId, const string &pipelineId, const Models::DeletePipelineRelationsRequest &request);

      /**
       * @summary 删除项目
       *
       * @param request DeleteProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &organizationId, const Models::DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &organizationId, const Models::DeleteProjectRequest &request);

      /**
       * @summary 删除代码库Label
       *
       * @param request DeleteProjectLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectLabelResponse
       */
      Models::DeleteProjectLabelResponse deleteProjectLabelWithOptions(const string &labelId, const Models::DeleteProjectLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代码库Label
       *
       * @param request DeleteProjectLabelRequest
       * @return DeleteProjectLabelResponse
       */
      Models::DeleteProjectLabelResponse deleteProjectLabel(const string &labelId, const Models::DeleteProjectLabelRequest &request);

      /**
       * @summary 删除保护分支
       *
       * @param request DeleteProtectedBranchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtectedBranchResponse
       */
      Models::DeleteProtectedBranchResponse deleteProtectedBranchWithOptions(const string &repositoryId, const string &protectedBranchId, const Models::DeleteProtectedBranchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除保护分支
       *
       * @param request DeleteProtectedBranchRequest
       * @return DeleteProtectedBranchResponse
       */
      Models::DeleteProtectedBranchResponse deleteProtectedBranch(const string &repositoryId, const string &protectedBranchId, const Models::DeleteProtectedBranchRequest &request);

      /**
       * @summary 删除推送规则
       *
       * @param request DeletePushRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePushRuleResponse
       */
      Models::DeletePushRuleResponse deletePushRuleWithOptions(const string &repositoryId, const string &pushRuleId, const Models::DeletePushRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除推送规则
       *
       * @param request DeletePushRuleRequest
       * @return DeletePushRuleResponse
       */
      Models::DeletePushRuleResponse deletePushRule(const string &repositoryId, const string &pushRuleId, const Models::DeletePushRuleRequest &request);

      /**
       * @summary 删除代码库
       *
       * @param request DeleteRepositoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepositoryResponse
       */
      Models::DeleteRepositoryResponse deleteRepositoryWithOptions(const string &repositoryId, const Models::DeleteRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代码库
       *
       * @param request DeleteRepositoryRequest
       * @return DeleteRepositoryResponse
       */
      Models::DeleteRepositoryResponse deleteRepository(const string &repositoryId, const Models::DeleteRepositoryRequest &request);

      /**
       * @summary 删除代码组
       *
       * @param request DeleteRepositoryGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepositoryGroupResponse
       */
      Models::DeleteRepositoryGroupResponse deleteRepositoryGroupWithOptions(const string &groupId, const Models::DeleteRepositoryGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代码组
       *
       * @param request DeleteRepositoryGroupRequest
       * @return DeleteRepositoryGroupResponse
       */
      Models::DeleteRepositoryGroupResponse deleteRepositoryGroup(const string &groupId, const Models::DeleteRepositoryGroupRequest &request);

      /**
       * @summary 删除代码库成员
       *
       * @param request DeleteRepositoryMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepositoryMemberResponse
       */
      Models::DeleteRepositoryMemberResponse deleteRepositoryMemberWithOptions(const string &repositoryId, const string &aliyunPk, const Models::DeleteRepositoryMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代码库成员
       *
       * @param request DeleteRepositoryMemberRequest
       * @return DeleteRepositoryMemberResponse
       */
      Models::DeleteRepositoryMemberResponse deleteRepositoryMember(const string &repositoryId, const string &aliyunPk, const Models::DeleteRepositoryMemberRequest &request);

      /**
       * @summary 删除代码库Webhook
       *
       * @param request DeleteRepositoryWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepositoryWebhookResponse
       */
      Models::DeleteRepositoryWebhookResponse deleteRepositoryWebhookWithOptions(const string &repositoryId, const string &hookId, const Models::DeleteRepositoryWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代码库Webhook
       *
       * @param request DeleteRepositoryWebhookRequest
       * @return DeleteRepositoryWebhookResponse
       */
      Models::DeleteRepositoryWebhookResponse deleteRepositoryWebhook(const string &repositoryId, const string &hookId, const Models::DeleteRepositoryWebhookRequest &request);

      /**
       * @summary 删除资源成员
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceMemberResponse
       */
      Models::DeleteResourceMemberResponse deleteResourceMemberWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源成员
       *
       * @return DeleteResourceMemberResponse
       */
      Models::DeleteResourceMemberResponse deleteResourceMember(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId);

      /**
       * @summary 删除标签
       *
       * @param request DeleteTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTagWithOptions(const string &repositoryId, const Models::DeleteTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签
       *
       * @param request DeleteTagRequest
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTag(const string &repositoryId, const Models::DeleteTagRequest &request);

      /**
       * @summary 删除用户的SSH Key
       *
       * @param request DeleteUserKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserKeyResponse
       */
      Models::DeleteUserKeyResponse deleteUserKeyWithOptions(const string &keyId, const Models::DeleteUserKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户的SSH Key
       *
       * @param request DeleteUserKeyRequest
       * @return DeleteUserKeyResponse
       */
      Models::DeleteUserKeyResponse deleteUserKey(const string &keyId, const Models::DeleteUserKeyRequest &request);

      /**
       * @summary 删除变量组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVariableGroupResponse
       */
      Models::DeleteVariableGroupResponse deleteVariableGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除变量组
       *
       * @return DeleteVariableGroupResponse
       */
      Models::DeleteVariableGroupResponse deleteVariableGroup(const string &organizationId, const string &id);

      /**
       * @summary 删除工作项
       *
       * @param request DeleteWorkitemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkitemResponse
       */
      Models::DeleteWorkitemResponse deleteWorkitemWithOptions(const string &organizationId, const Models::DeleteWorkitemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作项
       *
       * @param request DeleteWorkitemRequest
       * @return DeleteWorkitemResponse
       */
      Models::DeleteWorkitemResponse deleteWorkitem(const string &organizationId, const Models::DeleteWorkitemRequest &request);

      /**
       * @summary 删除所有评论
       *
       * @param request DeleteWorkitemAllCommentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkitemAllCommentResponse
       */
      Models::DeleteWorkitemAllCommentResponse deleteWorkitemAllCommentWithOptions(const string &organizationId, const Models::DeleteWorkitemAllCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除所有评论
       *
       * @param request DeleteWorkitemAllCommentRequest
       * @return DeleteWorkitemAllCommentResponse
       */
      Models::DeleteWorkitemAllCommentResponse deleteWorkitemAllComment(const string &organizationId, const Models::DeleteWorkitemAllCommentRequest &request);

      /**
       * @summary 删除单条评论
       *
       * @param request DeleteWorkitemCommentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkitemCommentResponse
       */
      Models::DeleteWorkitemCommentResponse deleteWorkitemCommentWithOptions(const string &organizationId, const Models::DeleteWorkitemCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除单条评论
       *
       * @param request DeleteWorkitemCommentRequest
       * @return DeleteWorkitemCommentResponse
       */
      Models::DeleteWorkitemCommentResponse deleteWorkitemComment(const string &organizationId, const Models::DeleteWorkitemCommentRequest &request);

      /**
       * @summary 启用部署密钥
       *
       * @param request EnableDeployKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDeployKeyResponse
       */
      Models::EnableDeployKeyResponse enableDeployKeyWithOptions(const string &repositoryId, const string &keyId, const Models::EnableDeployKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用部署密钥
       *
       * @param request EnableDeployKeyRequest
       * @return EnableDeployKeyResponse
       */
      Models::EnableDeployKeyResponse enableDeployKey(const string &repositoryId, const string &keyId, const Models::EnableDeployKeyRequest &request);

      /**
       * @summary 执行研发阶段流水线
       *
       * @param request ExecuteChangeRequestReleaseStageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteChangeRequestReleaseStageResponse
       */
      Models::ExecuteChangeRequestReleaseStageResponse executeChangeRequestReleaseStageWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const Models::ExecuteChangeRequestReleaseStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行研发阶段流水线
       *
       * @param request ExecuteChangeRequestReleaseStageRequest
       * @return ExecuteChangeRequestReleaseStageResponse
       */
      Models::ExecuteChangeRequestReleaseStageResponse executeChangeRequestReleaseStage(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const Models::ExecuteChangeRequestReleaseStageRequest &request);

      /**
       * @summary 导出Insight custom_value表
       *
       * @param request ExportInsightCustomValueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightCustomValueResponse
       */
      Models::ExportInsightCustomValueResponse exportInsightCustomValueWithOptions(const string &organizationId, const Models::ExportInsightCustomValueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight custom_value表
       *
       * @param request ExportInsightCustomValueRequest
       * @return ExportInsightCustomValueResponse
       */
      Models::ExportInsightCustomValueResponse exportInsightCustomValue(const string &organizationId, const Models::ExportInsightCustomValueRequest &request);

      /**
       * @summary 导出Insight expected_work_time表数据
       *
       * @param request ExportInsightExpectedWorkTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightExpectedWorkTimeResponse
       */
      Models::ExportInsightExpectedWorkTimeResponse exportInsightExpectedWorkTimeWithOptions(const string &organizationId, const Models::ExportInsightExpectedWorkTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight expected_work_time表数据
       *
       * @param request ExportInsightExpectedWorkTimeRequest
       * @return ExportInsightExpectedWorkTimeResponse
       */
      Models::ExportInsightExpectedWorkTimeResponse exportInsightExpectedWorkTime(const string &organizationId, const Models::ExportInsightExpectedWorkTimeRequest &request);

      /**
       * @summary 导出Insight field表
       *
       * @param request ExportInsightFieldRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightFieldResponse
       */
      Models::ExportInsightFieldResponse exportInsightFieldWithOptions(const string &organizationId, const Models::ExportInsightFieldRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight field表
       *
       * @param request ExportInsightFieldRequest
       * @return ExportInsightFieldResponse
       */
      Models::ExportInsightFieldResponse exportInsightField(const string &organizationId, const Models::ExportInsightFieldRequest &request);

      /**
       * @summary 导出Insight space表数据
       *
       * @param request ExportInsightSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightSpaceResponse
       */
      Models::ExportInsightSpaceResponse exportInsightSpaceWithOptions(const string &organizationId, const Models::ExportInsightSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight space表数据
       *
       * @param request ExportInsightSpaceRequest
       * @return ExportInsightSpaceResponse
       */
      Models::ExportInsightSpaceResponse exportInsightSpace(const string &organizationId, const Models::ExportInsightSpaceRequest &request);

      /**
       * @summary 导出Insight space_ref表数据
       *
       * @param request ExportInsightSpaceRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightSpaceRefResponse
       */
      Models::ExportInsightSpaceRefResponse exportInsightSpaceRefWithOptions(const string &organizationId, const Models::ExportInsightSpaceRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight space_ref表数据
       *
       * @param request ExportInsightSpaceRefRequest
       * @return ExportInsightSpaceRefResponse
       */
      Models::ExportInsightSpaceRefResponse exportInsightSpaceRef(const string &organizationId, const Models::ExportInsightSpaceRefRequest &request);

      /**
       * @summary 导出Insight sprint表数据
       *
       * @param request ExportInsightSprintRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightSprintResponse
       */
      Models::ExportInsightSprintResponse exportInsightSprintWithOptions(const string &organizationId, const Models::ExportInsightSprintRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight sprint表数据
       *
       * @param request ExportInsightSprintRequest
       * @return ExportInsightSprintResponse
       */
      Models::ExportInsightSprintResponse exportInsightSprint(const string &organizationId, const Models::ExportInsightSprintRequest &request);

      /**
       * @summary 导出Insight tag_ref表数据
       *
       * @param request ExportInsightTagRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightTagRefResponse
       */
      Models::ExportInsightTagRefResponse exportInsightTagRefWithOptions(const string &organizationId, const Models::ExportInsightTagRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight tag_ref表数据
       *
       * @param request ExportInsightTagRefRequest
       * @return ExportInsightTagRefResponse
       */
      Models::ExportInsightTagRefResponse exportInsightTagRef(const string &organizationId, const Models::ExportInsightTagRefRequest &request);

      /**
       * @summary 导出Insight work_time表数据
       *
       * @param request ExportInsightWorkTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightWorkTimeResponse
       */
      Models::ExportInsightWorkTimeResponse exportInsightWorkTimeWithOptions(const string &organizationId, const Models::ExportInsightWorkTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight work_time表数据
       *
       * @param request ExportInsightWorkTimeRequest
       * @return ExportInsightWorkTimeResponse
       */
      Models::ExportInsightWorkTimeResponse exportInsightWorkTime(const string &organizationId, const Models::ExportInsightWorkTimeRequest &request);

      /**
       * @summary 导出Insight workitem_stauts表数据
       *
       * @param request ExportInsightWorkitemStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightWorkitemStatusResponse
       */
      Models::ExportInsightWorkitemStatusResponse exportInsightWorkitemStatusWithOptions(const string &organizationId, const Models::ExportInsightWorkitemStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight workitem_stauts表数据
       *
       * @param request ExportInsightWorkitemStatusRequest
       * @return ExportInsightWorkitemStatusResponse
       */
      Models::ExportInsightWorkitemStatusResponse exportInsightWorkitemStatus(const string &organizationId, const Models::ExportInsightWorkitemStatusRequest &request);

      /**
       * @summary 导出Insight workitem_stauts表 join workitem_defect_extra表表数据
       *
       * @param request ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse
       */
      Models::ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse exportInsightWorkitemStatusJoinWorkitemDefectExtraWithOptions(const string &organizationId, const Models::ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight workitem_stauts表 join workitem_defect_extra表表数据
       *
       * @param request ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest
       * @return ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse
       */
      Models::ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse exportInsightWorkitemStatusJoinWorkitemDefectExtra(const string &organizationId, const Models::ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest &request);

      /**
       * @summary 导出Insight workitem_version表数据
       *
       * @param request ExportInsightWorkitemVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportInsightWorkitemVersionResponse
       */
      Models::ExportInsightWorkitemVersionResponse exportInsightWorkitemVersionWithOptions(const string &organizationId, const Models::ExportInsightWorkitemVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight workitem_version表数据
       *
       * @param request ExportInsightWorkitemVersionRequest
       * @return ExportInsightWorkitemVersionResponse
       */
      Models::ExportInsightWorkitemVersionResponse exportInsightWorkitemVersion(const string &organizationId, const Models::ExportInsightWorkitemVersionRequest &request);

      /**
       * @summary 导出Insight workitem_activity表数据
       *
       * @param request ExportWorkitemActivityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportWorkitemActivityResponse
       */
      Models::ExportWorkitemActivityResponse exportWorkitemActivityWithOptions(const string &organizationId, const Models::ExportWorkitemActivityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出Insight workitem_activity表数据
       *
       * @param request ExportWorkitemActivityRequest
       * @return ExportWorkitemActivityResponse
       */
      Models::ExportWorkitemActivityResponse exportWorkitemActivity(const string &organizationId, const Models::ExportWorkitemActivityRequest &request);

      /**
       * @summary 查找应用详情
       *
       * @param request GetApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const string &appName, const Models::GetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查找应用详情
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const string &appName, const Models::GetApplicationRequest &request);

      /**
       * @summary 查询单个分支
       *
       * @param request GetBranchInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBranchInfoResponse
       */
      Models::GetBranchInfoResponse getBranchInfoWithOptions(const string &repositoryId, const Models::GetBranchInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个分支
       *
       * @param request GetBranchInfoRequest
       * @return GetBranchInfoResponse
       */
      Models::GetBranchInfoResponse getBranchInfo(const string &repositoryId, const Models::GetBranchInfoRequest &request);

      /**
       * @summary 查询检查运行
       *
       * @param request GetCheckRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckRunResponse
       */
      Models::GetCheckRunResponse getCheckRunWithOptions(const Models::GetCheckRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询检查运行
       *
       * @param request GetCheckRunRequest
       * @return GetCheckRunResponse
       */
      Models::GetCheckRunResponse getCheckRun(const Models::GetCheckRunRequest &request);

      /**
       * @summary 获取企业信息
       *
       * @param request GetCodeupOrganizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCodeupOrganizationResponse
       */
      Models::GetCodeupOrganizationResponse getCodeupOrganizationWithOptions(const string &identity, const Models::GetCodeupOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取企业信息
       *
       * @param request GetCodeupOrganizationRequest
       * @return GetCodeupOrganizationResponse
       */
      Models::GetCodeupOrganizationResponse getCodeupOrganization(const string &identity, const Models::GetCodeupOrganizationRequest &request);

      /**
       * @summary 获取比较详情
       *
       * @param request GetCompareDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompareDetailResponse
       */
      Models::GetCompareDetailResponse getCompareDetailWithOptions(const string &repositoryId, const Models::GetCompareDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取比较详情
       *
       * @param request GetCompareDetailRequest
       * @return GetCompareDetailResponse
       */
      Models::GetCompareDetailResponse getCompareDetail(const string &repositoryId, const Models::GetCompareDetailRequest &request);

      /**
       * @summary 获取自定义字段的选项值
       *
       * @param request GetCustomFieldOptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomFieldOptionResponse
       */
      Models::GetCustomFieldOptionResponse getCustomFieldOptionWithOptions(const string &organizationId, const string &fieldId, const Models::GetCustomFieldOptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义字段的选项值
       *
       * @param request GetCustomFieldOptionRequest
       * @return GetCustomFieldOptionResponse
       */
      Models::GetCustomFieldOptionResponse getCustomFieldOption(const string &organizationId, const string &fieldId, const Models::GetCustomFieldOptionRequest &request);

      /**
       * @summary 查询文件
       *
       * @param request GetFileBlobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileBlobsResponse
       */
      Models::GetFileBlobsResponse getFileBlobsWithOptions(const string &repositoryId, const Models::GetFileBlobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文件
       *
       * @param request GetFileBlobsRequest
       * @return GetFileBlobsResponse
       */
      Models::GetFileBlobsResponse getFileBlobs(const string &repositoryId, const Models::GetFileBlobsRequest &request);

      /**
       * @summary 获取文件上一次提交信息
       *
       * @param request GetFileLastCommitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileLastCommitResponse
       */
      Models::GetFileLastCommitResponse getFileLastCommitWithOptions(const string &repositoryId, const Models::GetFileLastCommitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件上一次提交信息
       *
       * @param request GetFileLastCommitRequest
       * @return GetFileLastCommitResponse
       */
      Models::GetFileLastCommitResponse getFileLastCommit(const string &repositoryId, const Models::GetFileLastCommitRequest &request);

      /**
       * @summary 获取标签分类
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowTagGroupResponse
       */
      Models::GetFlowTagGroupResponse getFlowTagGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标签分类
       *
       * @return GetFlowTagGroupResponse
       */
      Models::GetFlowTagGroupResponse getFlowTagGroup(const string &organizationId, const string &id);

      /**
       * @summary 根据路径查询代码组
       *
       * @param request GetGroupByPathRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupByPathResponse
       */
      Models::GetGroupByPathResponse getGroupByPathWithOptions(const Models::GetGroupByPathRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据路径查询代码组
       *
       * @param request GetGroupByPathRequest
       * @return GetGroupByPathResponse
       */
      Models::GetGroupByPathResponse getGroupByPath(const Models::GetGroupByPathRequest &request);

      /**
       * @summary 查询代码组信息
       *
       * @param request GetGroupDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupDetailResponse
       */
      Models::GetGroupDetailResponse getGroupDetailWithOptions(const Models::GetGroupDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码组信息
       *
       * @param request GetGroupDetailRequest
       * @return GetGroupDetailResponse
       */
      Models::GetGroupDetailResponse getGroupDetail(const Models::GetGroupDetailRequest &request);

      /**
       * @summary 获取主机组信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostGroupResponse
       */
      Models::GetHostGroupResponse getHostGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主机组信息
       *
       * @return GetHostGroupResponse
       */
      Models::GetHostGroupResponse getHostGroup(const string &organizationId, const string &id);

      /**
       * @summary 查询合并请求详情
       *
       * @param request GetMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMergeRequestResponse
       */
      Models::GetMergeRequestResponse getMergeRequestWithOptions(const string &repositoryId, const string &localId, const Models::GetMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合并请求详情
       *
       * @param request GetMergeRequestRequest
       * @return GetMergeRequestResponse
       */
      Models::GetMergeRequestResponse getMergeRequest(const string &repositoryId, const string &localId, const Models::GetMergeRequestRequest &request);

      /**
       * @summary 查询合并请求的变更信息
       *
       * @param request GetMergeRequestChangeTreeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMergeRequestChangeTreeResponse
       */
      Models::GetMergeRequestChangeTreeResponse getMergeRequestChangeTreeWithOptions(const Models::GetMergeRequestChangeTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合并请求的变更信息
       *
       * @param request GetMergeRequestChangeTreeRequest
       * @return GetMergeRequestChangeTreeResponse
       */
      Models::GetMergeRequestChangeTreeResponse getMergeRequestChangeTree(const Models::GetMergeRequestChangeTreeRequest &request);

      /**
       * @summary 获取企业成员
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationMemberResponse
       */
      Models::GetOrganizationMemberResponse getOrganizationMemberWithOptions(const string &organizationId, const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取企业成员
       *
       * @return GetOrganizationMemberResponse
       */
      Models::GetOrganizationMemberResponse getOrganizationMember(const string &organizationId, const string &accountId);

      /**
       * @summary 获取流水线
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipelineWithOptions(const string &organizationId, const string &pipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线
       *
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipeline(const string &organizationId, const string &pipelineId);

      /**
       * @summary 获取构建物下载链接
       *
       * @param request GetPipelineArtifactUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineArtifactUrlResponse
       */
      Models::GetPipelineArtifactUrlResponse getPipelineArtifactUrlWithOptions(const string &organizationId, const Models::GetPipelineArtifactUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取构建物下载链接
       *
       * @param request GetPipelineArtifactUrlRequest
       * @return GetPipelineArtifactUrlResponse
       */
      Models::GetPipelineArtifactUrlResponse getPipelineArtifactUrl(const string &organizationId, const Models::GetPipelineArtifactUrlRequest &request);

      /**
       * @summary 获取emase构建物下载链接
       *
       * @param request GetPipelineEmasArtifactUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineEmasArtifactUrlResponse
       */
      Models::GetPipelineEmasArtifactUrlResponse getPipelineEmasArtifactUrlWithOptions(const string &organizationId, const string &emasJobInstanceId, const string &md5, const string &pipelineId, const string &pipelineRunId, const Models::GetPipelineEmasArtifactUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取emase构建物下载链接
       *
       * @param request GetPipelineEmasArtifactUrlRequest
       * @return GetPipelineEmasArtifactUrlResponse
       */
      Models::GetPipelineEmasArtifactUrlResponse getPipelineEmasArtifactUrl(const string &organizationId, const string &emasJobInstanceId, const string &md5, const string &pipelineId, const string &pipelineRunId, const Models::GetPipelineEmasArtifactUrlRequest &request);

      /**
       * @summary 获取流水线分组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineGroupResponse
       */
      Models::GetPipelineGroupResponse getPipelineGroupWithOptions(const string &organizationId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线分组
       *
       * @return GetPipelineGroupResponse
       */
      Models::GetPipelineGroupResponse getPipelineGroup(const string &organizationId, const string &groupId);

      /**
       * @summary 获取流水线运行信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线运行信息
       *
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId);

      /**
       * @summary 获取扫描报告下载链接
       *
       * @param request GetPipelineScanReportUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineScanReportUrlResponse
       */
      Models::GetPipelineScanReportUrlResponse getPipelineScanReportUrlWithOptions(const string &organizationId, const Models::GetPipelineScanReportUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取扫描报告下载链接
       *
       * @param request GetPipelineScanReportUrlRequest
       * @return GetPipelineScanReportUrlResponse
       */
      Models::GetPipelineScanReportUrlResponse getPipelineScanReportUrl(const string &organizationId, const Models::GetPipelineScanReportUrlRequest &request);

      /**
       * @summary 根据id获取项目详情-Projex
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectInfoResponse
       */
      Models::GetProjectInfoResponse getProjectInfoWithOptions(const string &organizationId, const string &projectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据id获取项目详情-Projex
       *
       * @return GetProjectInfoResponse
       */
      Models::GetProjectInfoResponse getProjectInfo(const string &organizationId, const string &projectId);

      /**
       * @summary 查询代码库成员
       *
       * @param request GetProjectMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectMemberResponse
       */
      Models::GetProjectMemberResponse getProjectMemberWithOptions(const string &repositoryId, const string &aliyunPk, const Models::GetProjectMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库成员
       *
       * @param request GetProjectMemberRequest
       * @return GetProjectMemberResponse
       */
      Models::GetProjectMemberResponse getProjectMember(const string &repositoryId, const string &aliyunPk, const Models::GetProjectMemberRequest &request);

      /**
       * @summary 获取研发阶段流水线运行实例
       *
       * @param request GetReleaseStagePipelineRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReleaseStagePipelineRunResponse
       */
      Models::GetReleaseStagePipelineRunResponse getReleaseStagePipelineRunWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::GetReleaseStagePipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取研发阶段流水线运行实例
       *
       * @param request GetReleaseStagePipelineRunRequest
       * @return GetReleaseStagePipelineRunResponse
       */
      Models::GetReleaseStagePipelineRunResponse getReleaseStagePipelineRun(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::GetReleaseStagePipelineRunRequest &request);

      /**
       * @summary 使用代码库ID或路径查询代码库信息
       *
       * @param request GetRepositoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepositoryResponse
       */
      Models::GetRepositoryResponse getRepositoryWithOptions(const Models::GetRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 使用代码库ID或路径查询代码库信息
       *
       * @param request GetRepositoryRequest
       * @return GetRepositoryResponse
       */
      Models::GetRepositoryResponse getRepository(const Models::GetRepositoryRequest &request);

      /**
       * @summary 查询代码库提交信息
       *
       * @param request GetRepositoryCommitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepositoryCommitResponse
       */
      Models::GetRepositoryCommitResponse getRepositoryCommitWithOptions(const string &repositoryId, const string &sha, const Models::GetRepositoryCommitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库提交信息
       *
       * @param request GetRepositoryCommitRequest
       * @return GetRepositoryCommitResponse
       */
      Models::GetRepositoryCommitResponse getRepositoryCommit(const string &repositoryId, const string &sha, const Models::GetRepositoryCommitRequest &request);

      /**
       * @summary 查询单个标签
       *
       * @param request GetRepositoryTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepositoryTagResponse
       */
      Models::GetRepositoryTagResponse getRepositoryTagWithOptions(const string &repositoryId, const Models::GetRepositoryTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个标签
       *
       * @param request GetRepositoryTagRequest
       * @return GetRepositoryTagResponse
       */
      Models::GetRepositoryTagResponse getRepositoryTag(const string &repositoryId, const Models::GetRepositoryTagRequest &request);

      /**
       * @summary 预览代码片段
       *
       * @param request GetSearchCodePreviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSearchCodePreviewResponse
       */
      Models::GetSearchCodePreviewResponse getSearchCodePreviewWithOptions(const Models::GetSearchCodePreviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预览代码片段
       *
       * @param request GetSearchCodePreviewRequest
       * @return GetSearchCodePreviewResponse
       */
      Models::GetSearchCodePreviewResponse getSearchCodePreview(const Models::GetSearchCodePreviewRequest &request);

      /**
       * @summary 获取迭代详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSprintInfoResponse
       */
      Models::GetSprintInfoResponse getSprintInfoWithOptions(const string &organizationId, const string &sprintId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取迭代详情
       *
       * @return GetSprintInfoResponse
       */
      Models::GetSprintInfoResponse getSprintInfo(const string &organizationId, const string &sprintId);

      /**
       * @summary 获取测试计划中的测试用例列表
       *
       * @param request GetTestResultListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTestResultListResponse
       */
      Models::GetTestResultListResponse getTestResultListWithOptions(const string &organizationId, const string &testPlanIdentifier, const Models::GetTestResultListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取测试计划中的测试用例列表
       *
       * @param request GetTestResultListRequest
       * @return GetTestResultListResponse
       */
      Models::GetTestResultListResponse getTestResultList(const string &organizationId, const string &testPlanIdentifier, const Models::GetTestResultListRequest &request);

      /**
       * @summary 获取测试用例列表
       *
       * @param request GetTestcaseListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTestcaseListResponse
       */
      Models::GetTestcaseListResponse getTestcaseListWithOptions(const string &organizationId, const Models::GetTestcaseListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取测试用例列表
       *
       * @param request GetTestcaseListRequest
       * @return GetTestcaseListResponse
       */
      Models::GetTestcaseListResponse getTestcaseList(const string &organizationId, const Models::GetTestcaseListRequest &request);

      /**
       * @summary 查询当前用户信息
       *
       * @param request GetUserInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfoWithOptions(const Models::GetUserInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前用户信息
       *
       * @param request GetUserInfoRequest
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfo(const Models::GetUserInfoRequest &request);

      /**
       * @summary 获取部署单信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVMDeployOrderResponse
       */
      Models::GetVMDeployOrderResponse getVMDeployOrderWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取部署单信息
       *
       * @return GetVMDeployOrderResponse
       */
      Models::GetVMDeployOrderResponse getVMDeployOrder(const string &organizationId, const string &pipelineId, const string &deployOrderId);

      /**
       * @summary 获取变量组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVariableGroupResponse
       */
      Models::GetVariableGroupResponse getVariableGroupWithOptions(const string &organizationId, const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取变量组
       *
       * @return GetVariableGroupResponse
       */
      Models::GetVariableGroupResponse getVariableGroup(const string &organizationId, const string &id);

      /**
       * @summary 获取工作项动态
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkItemActivityResponse
       */
      Models::GetWorkItemActivityResponse getWorkItemActivityWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项动态
       *
       * @return GetWorkItemActivityResponse
       */
      Models::GetWorkItemActivityResponse getWorkItemActivity(const string &organizationId, const string &workitemId);

      /**
       * @summary 根据id获取工作项详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkItemInfoResponse
       */
      Models::GetWorkItemInfoResponse getWorkItemInfoWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据id获取工作项详情
       *
       * @return GetWorkItemInfoResponse
       */
      Models::GetWorkItemInfoResponse getWorkItemInfo(const string &organizationId, const string &workitemId);

      /**
       * @summary 获取工作项工作流信息
       *
       * @param request GetWorkItemWorkFlowInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkItemWorkFlowInfoResponse
       */
      Models::GetWorkItemWorkFlowInfoResponse getWorkItemWorkFlowInfoWithOptions(const string &organizationId, const string &workitemId, const Models::GetWorkItemWorkFlowInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项工作流信息
       *
       * @param request GetWorkItemWorkFlowInfoRequest
       * @return GetWorkItemWorkFlowInfoResponse
       */
      Models::GetWorkItemWorkFlowInfoResponse getWorkItemWorkFlowInfo(const string &organizationId, const string &workitemId, const Models::GetWorkItemWorkFlowInfoRequest &request);

      /**
       * @summary 获取附件上传的元信息
       *
       * @param request GetWorkitemAttachmentCreatemetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkitemAttachmentCreatemetaResponse
       */
      Models::GetWorkitemAttachmentCreatemetaResponse getWorkitemAttachmentCreatemetaWithOptions(const string &organizationId, const string &workitemIdentifier, const Models::GetWorkitemAttachmentCreatemetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取附件上传的元信息
       *
       * @param request GetWorkitemAttachmentCreatemetaRequest
       * @return GetWorkitemAttachmentCreatemetaResponse
       */
      Models::GetWorkitemAttachmentCreatemetaResponse getWorkitemAttachmentCreatemeta(const string &organizationId, const string &workitemIdentifier, const Models::GetWorkitemAttachmentCreatemetaRequest &request);

      /**
       * @summary 获得所有评论
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkitemCommentListResponse
       */
      Models::GetWorkitemCommentListResponse getWorkitemCommentListWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得所有评论
       *
       * @return GetWorkitemCommentListResponse
       */
      Models::GetWorkitemCommentListResponse getWorkitemCommentList(const string &organizationId, const string &workitemId);

      /**
       * @summary 获取工作项文件信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkitemFileResponse
       */
      Models::GetWorkitemFileResponse getWorkitemFileWithOptions(const string &organizationId, const string &workitemIdentifier, const string &fileIdentifier, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项文件信息
       *
       * @return GetWorkitemFileResponse
       */
      Models::GetWorkitemFileResponse getWorkitemFile(const string &organizationId, const string &workitemIdentifier, const string &fileIdentifier);

      /**
       * @summary 获得一个工作项的指定关联项
       *
       * @param request GetWorkitemRelationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkitemRelationsResponse
       */
      Models::GetWorkitemRelationsResponse getWorkitemRelationsWithOptions(const string &organizationId, const string &workitemId, const Models::GetWorkitemRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得一个工作项的指定关联项
       *
       * @param request GetWorkitemRelationsRequest
       * @return GetWorkitemRelationsResponse
       */
      Models::GetWorkitemRelationsResponse getWorkitemRelations(const string &organizationId, const string &workitemId, const Models::GetWorkitemRelationsRequest &request);

      /**
       * @summary 获得一个企业下所有工时类型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkitemTimeTypeListResponse
       */
      Models::GetWorkitemTimeTypeListResponse getWorkitemTimeTypeListWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得一个企业下所有工时类型
       *
       * @return GetWorkitemTimeTypeListResponse
       */
      Models::GetWorkitemTimeTypeListResponse getWorkitemTimeTypeList(const string &organizationId);

      /**
       * @summary 加入流水线分组
       *
       * @param request JoinPipelineGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinPipelineGroupResponse
       */
      Models::JoinPipelineGroupResponse joinPipelineGroupWithOptions(const string &organizationId, const Models::JoinPipelineGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 加入流水线分组
       *
       * @param request JoinPipelineGroupRequest
       * @return JoinPipelineGroupResponse
       */
      Models::JoinPipelineGroupResponse joinPipelineGroup(const string &organizationId, const Models::JoinPipelineGroupRequest &request);

      /**
       * @summary 关联合并请求Label
       *
       * @param request LinkMergeRequestLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return LinkMergeRequestLabelResponse
       */
      Models::LinkMergeRequestLabelResponse linkMergeRequestLabelWithOptions(const Models::LinkMergeRequestLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关联合并请求Label
       *
       * @param request LinkMergeRequestLabelRequest
       * @return LinkMergeRequestLabelResponse
       */
      Models::LinkMergeRequestLabelResponse linkMergeRequestLabel(const Models::LinkMergeRequestLabelRequest &request);

      /**
       * @summary 查找应用下所有的研发流程
       *
       * @param request ListAllReleaseWorkflowsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllReleaseWorkflowsResponse
       */
      Models::ListAllReleaseWorkflowsResponse listAllReleaseWorkflowsWithOptions(const string &appName, const Models::ListAllReleaseWorkflowsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查找应用下所有的研发流程
       *
       * @param request ListAllReleaseWorkflowsRequest
       * @return ListAllReleaseWorkflowsResponse
       */
      Models::ListAllReleaseWorkflowsResponse listAllReleaseWorkflows(const string &appName, const Models::ListAllReleaseWorkflowsRequest &request);

      /**
       * @summary 查询研发阶段执行记录集成变更信息
       *
       * @param request ListAppReleaseStageExecutionIntegratedMetadataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppReleaseStageExecutionIntegratedMetadataResponse
       */
      Models::ListAppReleaseStageExecutionIntegratedMetadataResponse listAppReleaseStageExecutionIntegratedMetadataWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::ListAppReleaseStageExecutionIntegratedMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询研发阶段执行记录集成变更信息
       *
       * @param request ListAppReleaseStageExecutionIntegratedMetadataRequest
       * @return ListAppReleaseStageExecutionIntegratedMetadataResponse
       */
      Models::ListAppReleaseStageExecutionIntegratedMetadataResponse listAppReleaseStageExecutionIntegratedMetadata(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::ListAppReleaseStageExecutionIntegratedMetadataRequest &request);

      /**
       * @summary 批量查询研发阶段执行记录
       *
       * @param request ListAppReleaseStageExecutionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppReleaseStageExecutionsResponse
       */
      Models::ListAppReleaseStageExecutionsResponse listAppReleaseStageExecutionsWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const Models::ListAppReleaseStageExecutionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询研发阶段执行记录
       *
       * @param request ListAppReleaseStageExecutionsRequest
       * @return ListAppReleaseStageExecutionsResponse
       */
      Models::ListAppReleaseStageExecutionsResponse listAppReleaseStageExecutions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const Models::ListAppReleaseStageExecutionsRequest &request);

      /**
       * @summary 查找应用成员列表
       *
       * @param request ListApplicationMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationMembersResponse
       */
      Models::ListApplicationMembersResponse listApplicationMembersWithOptions(const string &appName, const Models::ListApplicationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查找应用成员列表
       *
       * @param request ListApplicationMembersRequest
       * @return ListApplicationMembersResponse
       */
      Models::ListApplicationMembersResponse listApplicationMembers(const string &appName, const Models::ListApplicationMembersRequest &request);

      /**
       * @summary 分页查找应用详情
       *
       * @param request ListApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查找应用详情
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary 查询变更研发流程运行记录
       *
       * @param request ListChangeRequestWorkflowExecutionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChangeRequestWorkflowExecutionsResponse
       */
      Models::ListChangeRequestWorkflowExecutionsResponse listChangeRequestWorkflowExecutionsWithOptions(const string &appName, const string &sn, const Models::ListChangeRequestWorkflowExecutionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询变更研发流程运行记录
       *
       * @param request ListChangeRequestWorkflowExecutionsRequest
       * @return ListChangeRequestWorkflowExecutionsResponse
       */
      Models::ListChangeRequestWorkflowExecutionsResponse listChangeRequestWorkflowExecutions(const string &appName, const string &sn, const Models::ListChangeRequestWorkflowExecutionsRequest &request);

      /**
       * @summary 查询变更列表
       *
       * @param tmpReq ListChangeRequestsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChangeRequestsResponse
       */
      Models::ListChangeRequestsResponse listChangeRequestsWithOptions(const string &appName, const Models::ListChangeRequestsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询变更列表
       *
       * @param request ListChangeRequestsRequest
       * @return ListChangeRequestsResponse
       */
      Models::ListChangeRequestsResponse listChangeRequests(const string &appName, const Models::ListChangeRequestsRequest &request);

      /**
       * @summary 查询检查运行列表
       *
       * @param request ListCheckRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckRunsResponse
       */
      Models::ListCheckRunsResponse listCheckRunsWithOptions(const Models::ListCheckRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询检查运行列表
       *
       * @param request ListCheckRunsRequest
       * @return ListCheckRunsResponse
       */
      Models::ListCheckRunsResponse listCheckRuns(const Models::ListCheckRunsRequest &request);

      /**
       * @summary 查询提交状态列表
       *
       * @param request ListCommitStatusesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommitStatusesResponse
       */
      Models::ListCommitStatusesResponse listCommitStatusesWithOptions(const Models::ListCommitStatusesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询提交状态列表
       *
       * @param request ListCommitStatusesRequest
       * @return ListCommitStatusesResponse
       */
      Models::ListCommitStatusesResponse listCommitStatuses(const Models::ListCommitStatusesRequest &request);

      /**
       * @summary 获取标签分类列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowTagGroupsResponse
       */
      Models::ListFlowTagGroupsResponse listFlowTagGroupsWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标签分类列表
       *
       * @return ListFlowTagGroupsResponse
       */
      Models::ListFlowTagGroupsResponse listFlowTagGroups(const string &organizationId);

      /**
       * @summary 查询组成员列表
       *
       * @param request ListGroupMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupMemberResponse
       */
      Models::ListGroupMemberResponse listGroupMemberWithOptions(const string &groupId, const Models::ListGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询组成员列表
       *
       * @param request ListGroupMemberRequest
       * @return ListGroupMemberResponse
       */
      Models::ListGroupMemberResponse listGroupMember(const string &groupId, const Models::ListGroupMemberRequest &request);

      /**
       * @summary 查询代码组下的库列表
       *
       * @param request ListGroupRepositoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupRepositoriesResponse
       */
      Models::ListGroupRepositoriesResponse listGroupRepositoriesWithOptions(const string &groupId, const Models::ListGroupRepositoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码组下的库列表
       *
       * @param request ListGroupRepositoriesRequest
       * @return ListGroupRepositoriesResponse
       */
      Models::ListGroupRepositoriesResponse listGroupRepositories(const string &groupId, const Models::ListGroupRepositoriesRequest &request);

      /**
       * @summary 获取主机组列表
       *
       * @param request ListHostGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostGroupsResponse
       */
      Models::ListHostGroupsResponse listHostGroupsWithOptions(const string &organizationId, const Models::ListHostGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主机组列表
       *
       * @param request ListHostGroupsRequest
       * @return ListHostGroupsResponse
       */
      Models::ListHostGroupsResponse listHostGroups(const string &organizationId, const Models::ListHostGroupsRequest &request);

      /**
       * @summary 当前用户加入的企业列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJoinedOrganizationsResponse
       */
      Models::ListJoinedOrganizationsResponse listJoinedOrganizationsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 当前用户加入的企业列表
       *
       * @return ListJoinedOrganizationsResponse
       */
      Models::ListJoinedOrganizationsResponse listJoinedOrganizations();

      /**
       * @summary 查询合并请求评论列表
       *
       * @param request ListMergeRequestCommentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMergeRequestCommentsResponse
       */
      Models::ListMergeRequestCommentsResponse listMergeRequestCommentsWithOptions(const Models::ListMergeRequestCommentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合并请求评论列表
       *
       * @param request ListMergeRequestCommentsRequest
       * @return ListMergeRequestCommentsResponse
       */
      Models::ListMergeRequestCommentsResponse listMergeRequestComments(const Models::ListMergeRequestCommentsRequest &request);

      /**
       * @summary 查询合并请求文件已读列表
       *
       * @param request ListMergeRequestFilesReadsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMergeRequestFilesReadsResponse
       */
      Models::ListMergeRequestFilesReadsResponse listMergeRequestFilesReadsWithOptions(const Models::ListMergeRequestFilesReadsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合并请求文件已读列表
       *
       * @param request ListMergeRequestFilesReadsRequest
       * @return ListMergeRequestFilesReadsResponse
       */
      Models::ListMergeRequestFilesReadsResponse listMergeRequestFilesReads(const Models::ListMergeRequestFilesReadsRequest &request);

      /**
       * @summary 查询合并请求Label列表
       *
       * @param request ListMergeRequestLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMergeRequestLabelsResponse
       */
      Models::ListMergeRequestLabelsResponse listMergeRequestLabelsWithOptions(const Models::ListMergeRequestLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合并请求Label列表
       *
       * @param request ListMergeRequestLabelsRequest
       * @return ListMergeRequestLabelsResponse
       */
      Models::ListMergeRequestLabelsResponse listMergeRequestLabels(const Models::ListMergeRequestLabelsRequest &request);

      /**
       * @summary 查询合并请求的版本列表
       *
       * @param request ListMergeRequestPatchSetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMergeRequestPatchSetsResponse
       */
      Models::ListMergeRequestPatchSetsResponse listMergeRequestPatchSetsWithOptions(const Models::ListMergeRequestPatchSetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合并请求的版本列表
       *
       * @param request ListMergeRequestPatchSetsRequest
       * @return ListMergeRequestPatchSetsResponse
       */
      Models::ListMergeRequestPatchSetsResponse listMergeRequestPatchSets(const Models::ListMergeRequestPatchSetsRequest &request);

      /**
       * @summary 查询代码评审列表
       *
       * @param request ListMergeRequestsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMergeRequestsResponse
       */
      Models::ListMergeRequestsResponse listMergeRequestsWithOptions(const Models::ListMergeRequestsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码评审列表
       *
       * @param request ListMergeRequestsRequest
       * @return ListMergeRequestsResponse
       */
      Models::ListMergeRequestsResponse listMergeRequests(const Models::ListMergeRequestsRequest &request);

      /**
       * @summary 获取企业成员列表
       *
       * @param request ListOrganizationMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationMembersResponse
       */
      Models::ListOrganizationMembersResponse listOrganizationMembersWithOptions(const string &organizationId, const Models::ListOrganizationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取企业成员列表
       *
       * @param request ListOrganizationMembersRequest
       * @return ListOrganizationMembersResponse
       */
      Models::ListOrganizationMembersResponse listOrganizationMembers(const string &organizationId, const Models::ListOrganizationMembersRequest &request);

      /**
       * @summary 查询用户企业列表
       *
       * @param request ListOrganizationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationsResponse
       */
      Models::ListOrganizationsResponse listOrganizationsWithOptions(const Models::ListOrganizationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户企业列表
       *
       * @param request ListOrganizationsRequest
       * @return ListOrganizationsResponse
       */
      Models::ListOrganizationsResponse listOrganizations(const Models::ListOrganizationsRequest &request);

      /**
       * @summary 获取流水线分组下流水线列表列表
       *
       * @param request ListPipelineGroupPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineGroupPipelinesResponse
       */
      Models::ListPipelineGroupPipelinesResponse listPipelineGroupPipelinesWithOptions(const string &organizationId, const string &groupId, const Models::ListPipelineGroupPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线分组下流水线列表列表
       *
       * @param request ListPipelineGroupPipelinesRequest
       * @return ListPipelineGroupPipelinesResponse
       */
      Models::ListPipelineGroupPipelinesResponse listPipelineGroupPipelines(const string &organizationId, const string &groupId, const Models::ListPipelineGroupPipelinesRequest &request);

      /**
       * @summary 获取流水线分组列表
       *
       * @param request ListPipelineGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineGroupsResponse
       */
      Models::ListPipelineGroupsResponse listPipelineGroupsWithOptions(const string &organizationId, const Models::ListPipelineGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线分组列表
       *
       * @param request ListPipelineGroupsRequest
       * @return ListPipelineGroupsResponse
       */
      Models::ListPipelineGroupsResponse listPipelineGroups(const string &organizationId, const Models::ListPipelineGroupsRequest &request);

      /**
       * @summary 获取流水线运行过的任务历史
       *
       * @param request ListPipelineJobHistorysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineJobHistorysResponse
       */
      Models::ListPipelineJobHistorysResponse listPipelineJobHistorysWithOptions(const string &organizationId, const string &pipelineId, const Models::ListPipelineJobHistorysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线运行过的任务历史
       *
       * @param request ListPipelineJobHistorysRequest
       * @return ListPipelineJobHistorysResponse
       */
      Models::ListPipelineJobHistorysResponse listPipelineJobHistorys(const string &organizationId, const string &pipelineId, const Models::ListPipelineJobHistorysRequest &request);

      /**
       * @summary 获取流水线运行过的任务
       *
       * @param request ListPipelineJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineJobsResponse
       */
      Models::ListPipelineJobsResponse listPipelineJobsWithOptions(const string &organizationId, const string &pipelineId, const Models::ListPipelineJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线运行过的任务
       *
       * @param request ListPipelineJobsRequest
       * @return ListPipelineJobsResponse
       */
      Models::ListPipelineJobsResponse listPipelineJobs(const string &organizationId, const string &pipelineId, const Models::ListPipelineJobsRequest &request);

      /**
       * @summary 获取流水线关联列表
       *
       * @param request ListPipelineRelationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineRelationsResponse
       */
      Models::ListPipelineRelationsResponse listPipelineRelationsWithOptions(const string &organizationId, const string &pipelineId, const Models::ListPipelineRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线关联列表
       *
       * @param request ListPipelineRelationsRequest
       * @return ListPipelineRelationsResponse
       */
      Models::ListPipelineRelationsResponse listPipelineRelations(const string &organizationId, const string &pipelineId, const Models::ListPipelineRelationsRequest &request);

      /**
       * @summary 获取流水线运行历史
       *
       * @param request ListPipelineRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRunsWithOptions(const string &organizationId, const string &pipelineId, const Models::ListPipelineRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线运行历史
       *
       * @param request ListPipelineRunsRequest
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRuns(const string &organizationId, const string &pipelineId, const Models::ListPipelineRunsRequest &request);

      /**
       * @summary 获取流水线列表
       *
       * @param request ListPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelinesWithOptions(const string &organizationId, const Models::ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线列表
       *
       * @param request ListPipelinesRequest
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelines(const string &organizationId, const Models::ListPipelinesRequest &request);

      /**
       * @summary 查询代码库Label列表
       *
       * @param request ListProjectLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectLabelsResponse
       */
      Models::ListProjectLabelsResponse listProjectLabelsWithOptions(const Models::ListProjectLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库Label列表
       *
       * @param request ListProjectLabelsRequest
       * @return ListProjectLabelsResponse
       */
      Models::ListProjectLabelsResponse listProjectLabels(const Models::ListProjectLabelsRequest &request);

      /**
       * @summary 根据项目id获取项目所以成员
       *
       * @param request ListProjectMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembersWithOptions(const string &organizationId, const string &projectId, const Models::ListProjectMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据项目id获取项目所以成员
       *
       * @param request ListProjectMembersRequest
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembers(const string &organizationId, const string &projectId, const Models::ListProjectMembersRequest &request);

      /**
       * @summary 获取项目模板列表
       *
       * @param request ListProjectTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectTemplatesResponse
       */
      Models::ListProjectTemplatesResponse listProjectTemplatesWithOptions(const string &organizationId, const Models::ListProjectTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目模板列表
       *
       * @param request ListProjectTemplatesRequest
       * @return ListProjectTemplatesResponse
       */
      Models::ListProjectTemplatesResponse listProjectTemplates(const string &organizationId, const Models::ListProjectTemplatesRequest &request);

      /**
       * @summary 获取项目下开启的工作项类型
       *
       * @param request ListProjectWorkitemTypesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectWorkitemTypesResponse
       */
      Models::ListProjectWorkitemTypesResponse listProjectWorkitemTypesWithOptions(const string &organizationId, const string &projectId, const Models::ListProjectWorkitemTypesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目下开启的工作项类型
       *
       * @param request ListProjectWorkitemTypesRequest
       * @return ListProjectWorkitemTypesResponse
       */
      Models::ListProjectWorkitemTypesResponse listProjectWorkitemTypes(const string &organizationId, const string &projectId, const Models::ListProjectWorkitemTypesRequest &request);

      /**
       * @summary 获取项目列表
       *
       * @param request ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const string &organizationId, const Models::ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目列表
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const string &organizationId, const Models::ListProjectsRequest &request);

      /**
       * @summary 查询保护分支列表
       *
       * @param request ListProtectedBranchesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProtectedBranchesResponse
       */
      Models::ListProtectedBranchesResponse listProtectedBranchesWithOptions(const string &repositoryId, const Models::ListProtectedBranchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询保护分支列表
       *
       * @param request ListProtectedBranchesRequest
       * @return ListProtectedBranchesResponse
       */
      Models::ListProtectedBranchesResponse listProtectedBranches(const string &repositoryId, const Models::ListProtectedBranchesRequest &request);

      /**
       * @summary 查询推送规则列表
       *
       * @param request ListPushRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPushRulesResponse
       */
      Models::ListPushRulesResponse listPushRulesWithOptions(const string &repositoryId, const Models::ListPushRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询推送规则列表
       *
       * @param request ListPushRulesRequest
       * @return ListPushRulesResponse
       */
      Models::ListPushRulesResponse listPushRules(const string &repositoryId, const Models::ListPushRulesRequest &request);

      /**
       * @summary 查询代码库列表
       *
       * @param request ListRepositoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoriesResponse
       */
      Models::ListRepositoriesResponse listRepositoriesWithOptions(const Models::ListRepositoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库列表
       *
       * @param request ListRepositoriesRequest
       * @return ListRepositoriesResponse
       */
      Models::ListRepositoriesResponse listRepositories(const Models::ListRepositoriesRequest &request);

      /**
       * @summary 查询分支列表
       *
       * @param request ListRepositoryBranchesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryBranchesResponse
       */
      Models::ListRepositoryBranchesResponse listRepositoryBranchesWithOptions(const string &repositoryId, const Models::ListRepositoryBranchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询分支列表
       *
       * @param request ListRepositoryBranchesRequest
       * @return ListRepositoryBranchesResponse
       */
      Models::ListRepositoryBranchesResponse listRepositoryBranches(const string &repositoryId, const Models::ListRepositoryBranchesRequest &request);

      /**
       * @summary 查询代码库单个提交（Commit）的提交内容
       *
       * @param request ListRepositoryCommitDiffRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryCommitDiffResponse
       */
      Models::ListRepositoryCommitDiffResponse listRepositoryCommitDiffWithOptions(const string &repositoryId, const string &sha, const Models::ListRepositoryCommitDiffRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库单个提交（Commit）的提交内容
       *
       * @param request ListRepositoryCommitDiffRequest
       * @return ListRepositoryCommitDiffResponse
       */
      Models::ListRepositoryCommitDiffResponse listRepositoryCommitDiff(const string &repositoryId, const string &sha, const Models::ListRepositoryCommitDiffRequest &request);

      /**
       * @summary 查询代码库提交历史
       *
       * @param request ListRepositoryCommitsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryCommitsResponse
       */
      Models::ListRepositoryCommitsResponse listRepositoryCommitsWithOptions(const string &repositoryId, const Models::ListRepositoryCommitsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库提交历史
       *
       * @param request ListRepositoryCommitsRequest
       * @return ListRepositoryCommitsResponse
       */
      Models::ListRepositoryCommitsResponse listRepositoryCommits(const string &repositoryId, const Models::ListRepositoryCommitsRequest &request);

      /**
       * @summary 查询代码组列表
       *
       * @param request ListRepositoryGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryGroupsResponse
       */
      Models::ListRepositoryGroupsResponse listRepositoryGroupsWithOptions(const Models::ListRepositoryGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码组列表
       *
       * @param request ListRepositoryGroupsRequest
       * @return ListRepositoryGroupsResponse
       */
      Models::ListRepositoryGroupsResponse listRepositoryGroups(const Models::ListRepositoryGroupsRequest &request);

      /**
       * @summary 查询代码库成员列表
       *
       * @param request ListRepositoryMemberWithInheritedRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryMemberWithInheritedResponse
       */
      Models::ListRepositoryMemberWithInheritedResponse listRepositoryMemberWithInheritedWithOptions(const string &repositoryId, const Models::ListRepositoryMemberWithInheritedRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库成员列表
       *
       * @param request ListRepositoryMemberWithInheritedRequest
       * @return ListRepositoryMemberWithInheritedResponse
       */
      Models::ListRepositoryMemberWithInheritedResponse listRepositoryMemberWithInherited(const string &repositoryId, const Models::ListRepositoryMemberWithInheritedRequest &request);

      /**
       * @summary 查询标签列表
       *
       * @param request ListRepositoryTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryTagsResponse
       */
      Models::ListRepositoryTagsResponse listRepositoryTagsWithOptions(const string &repositoryId, const Models::ListRepositoryTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签列表
       *
       * @param request ListRepositoryTagsRequest
       * @return ListRepositoryTagsResponse
       */
      Models::ListRepositoryTagsResponse listRepositoryTags(const string &repositoryId, const Models::ListRepositoryTagsRequest &request);

      /**
       * @summary 查询代码库文件树
       *
       * @param request ListRepositoryTreeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryTreeResponse
       */
      Models::ListRepositoryTreeResponse listRepositoryTreeWithOptions(const string &repositoryId, const Models::ListRepositoryTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库文件树
       *
       * @param request ListRepositoryTreeRequest
       * @return ListRepositoryTreeResponse
       */
      Models::ListRepositoryTreeResponse listRepositoryTree(const string &repositoryId, const Models::ListRepositoryTreeRequest &request);

      /**
       * @summary 查询代码库Webhook列表
       *
       * @param request ListRepositoryWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryWebhookResponse
       */
      Models::ListRepositoryWebhookResponse listRepositoryWebhookWithOptions(const string &repositoryId, const Models::ListRepositoryWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询代码库Webhook列表
       *
       * @param request ListRepositoryWebhookRequest
       * @return ListRepositoryWebhookResponse
       */
      Models::ListRepositoryWebhookResponse listRepositoryWebhook(const string &repositoryId, const Models::ListRepositoryWebhookRequest &request);

      /**
       * @summary 获取资源成员列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceMembersResponse
       */
      Models::ListResourceMembersResponse listResourceMembersWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源成员列表
       *
       * @return ListResourceMembersResponse
       */
      Models::ListResourceMembersResponse listResourceMembers(const string &organizationId, const string &resourceType, const string &resourceId);

      /**
       * @summary 搜索代码提交数据
       *
       * @param request ListSearchCommitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchCommitResponse
       */
      Models::ListSearchCommitResponse listSearchCommitWithOptions(const Models::ListSearchCommitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索代码提交数据
       *
       * @param request ListSearchCommitRequest
       * @return ListSearchCommitResponse
       */
      Models::ListSearchCommitResponse listSearchCommit(const Models::ListSearchCommitRequest &request);

      /**
       * @summary 搜索代码仓库数据
       *
       * @param request ListSearchRepositoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchRepositoryResponse
       */
      Models::ListSearchRepositoryResponse listSearchRepositoryWithOptions(const Models::ListSearchRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索代码仓库数据
       *
       * @param request ListSearchRepositoryRequest
       * @return ListSearchRepositoryResponse
       */
      Models::ListSearchRepositoryResponse listSearchRepository(const Models::ListSearchRepositoryRequest &request);

      /**
       * @summary 搜索代码片段
       *
       * @param request ListSearchSourceCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchSourceCodeResponse
       */
      Models::ListSearchSourceCodeResponse listSearchSourceCodeWithOptions(const Models::ListSearchSourceCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索代码片段
       *
       * @param request ListSearchSourceCodeRequest
       * @return ListSearchSourceCodeResponse
       */
      Models::ListSearchSourceCodeResponse listSearchSourceCode(const Models::ListSearchSourceCodeRequest &request);

      /**
       * @summary 获取服务授权列表
       *
       * @param request ListServiceAuthsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceAuthsResponse
       */
      Models::ListServiceAuthsResponse listServiceAuthsWithOptions(const string &organizationId, const Models::ListServiceAuthsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务授权列表
       *
       * @param request ListServiceAuthsRequest
       * @return ListServiceAuthsResponse
       */
      Models::ListServiceAuthsResponse listServiceAuths(const string &organizationId, const Models::ListServiceAuthsRequest &request);

      /**
       * @summary 获取服务连接列表
       *
       * @param request ListServiceConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceConnectionsResponse
       */
      Models::ListServiceConnectionsResponse listServiceConnectionsWithOptions(const string &organizationId, const Models::ListServiceConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务连接列表
       *
       * @param request ListServiceConnectionsRequest
       * @return ListServiceConnectionsResponse
       */
      Models::ListServiceConnectionsResponse listServiceConnections(const string &organizationId, const Models::ListServiceConnectionsRequest &request);

      /**
       * @summary 获取服务证书列表
       *
       * @param request ListServiceCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceCredentialsResponse
       */
      Models::ListServiceCredentialsResponse listServiceCredentialsWithOptions(const string &organizationId, const Models::ListServiceCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务证书列表
       *
       * @param request ListServiceCredentialsRequest
       * @return ListServiceCredentialsResponse
       */
      Models::ListServiceCredentialsResponse listServiceCredentials(const string &organizationId, const Models::ListServiceCredentialsRequest &request);

      /**
       * @summary 获取迭代列表
       *
       * @param request ListSprintsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSprintsResponse
       */
      Models::ListSprintsResponse listSprintsWithOptions(const string &organizationId, const Models::ListSprintsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取迭代列表
       *
       * @param request ListSprintsRequest
       * @return ListSprintsResponse
       */
      Models::ListSprintsResponse listSprints(const string &organizationId, const Models::ListSprintsRequest &request);

      /**
       * @summary 获取测试用例全部字段
       *
       * @param request ListTestCaseFieldsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTestCaseFieldsResponse
       */
      Models::ListTestCaseFieldsResponse listTestCaseFieldsWithOptions(const string &organizationId, const Models::ListTestCaseFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取测试用例全部字段
       *
       * @param request ListTestCaseFieldsRequest
       * @return ListTestCaseFieldsResponse
       */
      Models::ListTestCaseFieldsResponse listTestCaseFields(const string &organizationId, const Models::ListTestCaseFieldsRequest &request);

      /**
       * @summary 测试DrawService
       *
       * @param request ListUserDrawRecordByPkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDrawRecordByPkResponse
       */
      Models::ListUserDrawRecordByPkResponse listUserDrawRecordByPkWithOptions(const Models::ListUserDrawRecordByPkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 测试DrawService
       *
       * @param request ListUserDrawRecordByPkRequest
       * @return ListUserDrawRecordByPkResponse
       */
      Models::ListUserDrawRecordByPkResponse listUserDrawRecordByPk(const Models::ListUserDrawRecordByPkRequest &request);

      /**
       * @summary 查询当前用户的SSH Key列表
       *
       * @param request ListUserKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserKeysResponse
       */
      Models::ListUserKeysResponse listUserKeysWithOptions(const Models::ListUserKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前用户的SSH Key列表
       *
       * @param request ListUserKeysRequest
       * @return ListUserKeysResponse
       */
      Models::ListUserKeysResponse listUserKeys(const Models::ListUserKeysRequest &request);

      /**
       * @summary 查询用户有权限的资源（代码库、组）
       *
       * @param request ListUserResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserResourcesResponse
       */
      Models::ListUserResourcesResponse listUserResourcesWithOptions(const Models::ListUserResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户有权限的资源（代码库、组）
       *
       * @param request ListUserResourcesRequest
       * @return ListUserResourcesResponse
       */
      Models::ListUserResourcesResponse listUserResources(const Models::ListUserResourcesRequest &request);

      /**
       * @summary 获取变量组列表
       *
       * @param request ListVariableGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVariableGroupsResponse
       */
      Models::ListVariableGroupsResponse listVariableGroupsWithOptions(const string &organizationId, const Models::ListVariableGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取变量组列表
       *
       * @param request ListVariableGroupsRequest
       * @return ListVariableGroupsResponse
       */
      Models::ListVariableGroupsResponse listVariableGroups(const string &organizationId, const Models::ListVariableGroupsRequest &request);

      /**
       * @summary 获取项目下工作项的所有字段
       *
       * @param request ListWorkItemAllFieldsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkItemAllFieldsResponse
       */
      Models::ListWorkItemAllFieldsResponse listWorkItemAllFieldsWithOptions(const string &organizationId, const Models::ListWorkItemAllFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目下工作项的所有字段
       *
       * @param request ListWorkItemAllFieldsRequest
       * @return ListWorkItemAllFieldsResponse
       */
      Models::ListWorkItemAllFieldsResponse listWorkItemAllFields(const string &organizationId, const Models::ListWorkItemAllFieldsRequest &request);

      /**
       * @summary 查询工作项工作流的所有状态
       *
       * @param request ListWorkItemWorkFlowStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkItemWorkFlowStatusResponse
       */
      Models::ListWorkItemWorkFlowStatusResponse listWorkItemWorkFlowStatusWithOptions(const string &organizationId, const Models::ListWorkItemWorkFlowStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询工作项工作流的所有状态
       *
       * @param request ListWorkItemWorkFlowStatusRequest
       * @return ListWorkItemWorkFlowStatusResponse
       */
      Models::ListWorkItemWorkFlowStatusResponse listWorkItemWorkFlowStatus(const string &organizationId, const Models::ListWorkItemWorkFlowStatusRequest &request);

      /**
       * @summary 获取工作项的附件列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkitemAttachmentsResponse
       */
      Models::ListWorkitemAttachmentsResponse listWorkitemAttachmentsWithOptions(const string &organizationId, const string &workitemIdentifier, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项的附件列表
       *
       * @return ListWorkitemAttachmentsResponse
       */
      Models::ListWorkitemAttachmentsResponse listWorkitemAttachments(const string &organizationId, const string &workitemIdentifier);

      /**
       * @summary 获取工作项预计工时明细列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkitemEstimateResponse
       */
      Models::ListWorkitemEstimateResponse listWorkitemEstimateWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项预计工时明细列表
       *
       * @return ListWorkitemEstimateResponse
       */
      Models::ListWorkitemEstimateResponse listWorkitemEstimate(const string &organizationId, const string &workitemId);

      /**
       * @summary 获取工作项工时明细列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkitemTimeResponse
       */
      Models::ListWorkitemTimeResponse listWorkitemTimeWithOptions(const string &organizationId, const string &workitemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项工时明细列表
       *
       * @return ListWorkitemTimeResponse
       */
      Models::ListWorkitemTimeResponse listWorkitemTime(const string &organizationId, const string &workitemId);

      /**
       * @summary 获取工作项列表
       *
       * @param request ListWorkitemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkitemsResponse
       */
      Models::ListWorkitemsResponse listWorkitemsWithOptions(const string &organizationId, const Models::ListWorkitemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作项列表
       *
       * @param request ListWorkitemsRequest
       * @return ListWorkitemsResponse
       */
      Models::ListWorkitemsResponse listWorkitems(const string &organizationId, const Models::ListWorkitemsRequest &request);

      /**
       * @summary 获取流水线运行任务日志
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogPipelineJobRunResponse
       */
      Models::LogPipelineJobRunResponse logPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &jobId, const string &pipelineRunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流水线运行任务日志
       *
       * @return LogPipelineJobRunResponse
       */
      Models::LogPipelineJobRunResponse logPipelineJobRun(const string &organizationId, const string &pipelineId, const string &jobId, const string &pipelineRunId);

      /**
       * @summary 获取机器部署日志
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogVMDeployMachineResponse
       */
      Models::LogVMDeployMachineResponse logVMDeployMachineWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取机器部署日志
       *
       * @return LogVMDeployMachineResponse
       */
      Models::LogVMDeployMachineResponse logVMDeployMachine(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn);

      /**
       * @summary 合并代码评审
       *
       * @param request MergeMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MergeMergeRequestResponse
       */
      Models::MergeMergeRequestResponse mergeMergeRequestWithOptions(const string &repositoryId, const string &localId, const Models::MergeMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合并代码评审
       *
       * @param request MergeMergeRequestRequest
       * @return MergeMergeRequestResponse
       */
      Models::MergeMergeRequestResponse mergeMergeRequest(const string &repositoryId, const string &localId, const Models::MergeMergeRequestRequest &request);

      /**
       * @summary 通过人工卡点
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PassPipelineValidateResponse
       */
      Models::PassPipelineValidateResponse passPipelineValidateWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过人工卡点
       *
       * @return PassPipelineValidateResponse
       */
      Models::PassPipelineValidateResponse passPipelineValidate(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId);

      /**
       * @summary 通过人工卡点
       *
       * @param request PassReleaseStagePipelineValidateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PassReleaseStagePipelineValidateResponse
       */
      Models::PassReleaseStagePipelineValidateResponse passReleaseStagePipelineValidateWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::PassReleaseStagePipelineValidateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过人工卡点
       *
       * @param request PassReleaseStagePipelineValidateRequest
       * @return PassReleaseStagePipelineValidateResponse
       */
      Models::PassReleaseStagePipelineValidateResponse passReleaseStagePipelineValidate(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::PassReleaseStagePipelineValidateRequest &request);

      /**
       * @summary 拒绝人工卡点
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefusePipelineValidateResponse
       */
      Models::RefusePipelineValidateResponse refusePipelineValidateWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拒绝人工卡点
       *
       * @return RefusePipelineValidateResponse
       */
      Models::RefusePipelineValidateResponse refusePipelineValidate(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId);

      /**
       * @summary 拒绝人工卡点
       *
       * @param request RefuseReleaseStagePipelineValidateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefuseReleaseStagePipelineValidateResponse
       */
      Models::RefuseReleaseStagePipelineValidateResponse refuseReleaseStagePipelineValidateWithOptions(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::RefuseReleaseStagePipelineValidateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拒绝人工卡点
       *
       * @param request RefuseReleaseStagePipelineValidateRequest
       * @return RefuseReleaseStagePipelineValidateResponse
       */
      Models::RefuseReleaseStagePipelineValidateResponse refuseReleaseStagePipelineValidate(const string &appName, const string &releaseWorkflowSn, const string &releaseStageSn, const string &executionNumber, const Models::RefuseReleaseStagePipelineValidateRequest &request);

      /**
       * @summary 重新打开代码评审
       *
       * @param request ReopenMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenMergeRequestResponse
       */
      Models::ReopenMergeRequestResponse reopenMergeRequestWithOptions(const string &repositoryId, const string &localId, const Models::ReopenMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新打开代码评审
       *
       * @param request ReopenMergeRequestRequest
       * @return ReopenMergeRequestResponse
       */
      Models::ReopenMergeRequestResponse reopenMergeRequest(const string &repositoryId, const string &localId, const Models::ReopenMergeRequestRequest &request);

      /**
       * @summary 重置企业公钥
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSshKeyResponse
       */
      Models::ResetSshKeyResponse resetSshKeyWithOptions(const string &organizationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置企业公钥
       *
       * @return ResetSshKeyResponse
       */
      Models::ResetSshKeyResponse resetSshKey(const string &organizationId);

      /**
       * @summary 继续部署
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeVMDeployOrderResponse
       */
      Models::ResumeVMDeployOrderResponse resumeVMDeployOrderWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 继续部署
       *
       * @return ResumeVMDeployOrderResponse
       */
      Models::ResumeVMDeployOrderResponse resumeVMDeployOrder(const string &organizationId, const string &pipelineId, const string &deployOrderId);

      /**
       * @summary 重试流水线运行
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryPipelineJobRunResponse
       */
      Models::RetryPipelineJobRunResponse retryPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重试流水线运行
       *
       * @return RetryPipelineJobRunResponse
       */
      Models::RetryPipelineJobRunResponse retryPipelineJobRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId);

      /**
       * @summary 重试机器部署
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryVMDeployMachineResponse
       */
      Models::RetryVMDeployMachineResponse retryVMDeployMachineWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重试机器部署
       *
       * @return RetryVMDeployMachineResponse
       */
      Models::RetryVMDeployMachineResponse retryVMDeployMachine(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn);

      /**
       * @summary 提交变更请求的评审意见
       *
       * @param request ReviewMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReviewMergeRequestResponse
       */
      Models::ReviewMergeRequestResponse reviewMergeRequestWithOptions(const string &repositoryId, const string &localId, const Models::ReviewMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交变更请求的评审意见
       *
       * @param request ReviewMergeRequestRequest
       * @return ReviewMergeRequestResponse
       */
      Models::ReviewMergeRequestResponse reviewMergeRequest(const string &repositoryId, const string &localId, const Models::ReviewMergeRequestRequest &request);

      /**
       * @summary 跳过流水线任务运行
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipPipelineJobRunResponse
       */
      Models::SkipPipelineJobRunResponse skipPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 跳过流水线任务运行
       *
       * @return SkipPipelineJobRunResponse
       */
      Models::SkipPipelineJobRunResponse skipPipelineJobRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId);

      /**
       * @summary 跳过机器部署
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipVMDeployMachineResponse
       */
      Models::SkipVMDeployMachineResponse skipVMDeployMachineWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 跳过机器部署
       *
       * @return SkipVMDeployMachineResponse
       */
      Models::SkipVMDeployMachineResponse skipVMDeployMachine(const string &organizationId, const string &pipelineId, const string &deployOrderId, const string &machineSn);

      /**
       * @summary 运行流水线
       *
       * @param request StartPipelineRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPipelineRunResponse
       */
      Models::StartPipelineRunResponse startPipelineRunWithOptions(const string &organizationId, const string &pipelineId, const Models::StartPipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行流水线
       *
       * @param request StartPipelineRunRequest
       * @return StartPipelineRunResponse
       */
      Models::StartPipelineRunResponse startPipelineRun(const string &organizationId, const string &pipelineId, const Models::StartPipelineRunRequest &request);

      /**
       * @summary 终止流水线任务运行
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPipelineJobRunResponse
       */
      Models::StopPipelineJobRunResponse stopPipelineJobRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终止流水线任务运行
       *
       * @return StopPipelineJobRunResponse
       */
      Models::StopPipelineJobRunResponse stopPipelineJobRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const string &jobId);

      /**
       * @summary 终止流水线运行
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPipelineRunResponse
       */
      Models::StopPipelineRunResponse stopPipelineRunWithOptions(const string &organizationId, const string &pipelineId, const string &pipelineRunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终止流水线运行
       *
       * @return StopPipelineRunResponse
       */
      Models::StopPipelineRunResponse stopPipelineRun(const string &organizationId, const string &pipelineId, const string &pipelineRunId);

      /**
       * @summary 取消部署单
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopVMDeployOrderResponse
       */
      Models::StopVMDeployOrderResponse stopVMDeployOrderWithOptions(const string &organizationId, const string &pipelineId, const string &deployOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消部署单
       *
       * @return StopVMDeployOrderResponse
       */
      Models::StopVMDeployOrderResponse stopVMDeployOrder(const string &organizationId, const string &pipelineId, const string &deployOrderId);

      /**
       * @summary 转移代码库
       *
       * @param request TransferRepositoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferRepositoryResponse
       */
      Models::TransferRepositoryResponse transferRepositoryWithOptions(const Models::TransferRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 转移代码库
       *
       * @param request TransferRepositoryRequest
       * @return TransferRepositoryResponse
       */
      Models::TransferRepositoryResponse transferRepository(const Models::TransferRepositoryRequest &request);

      /**
       * @summary 触发仓库同步
       *
       * @param request TriggerRepositoryMirrorSyncRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerRepositoryMirrorSyncResponse
       */
      Models::TriggerRepositoryMirrorSyncResponse triggerRepositoryMirrorSyncWithOptions(const string &repositoryId, const Models::TriggerRepositoryMirrorSyncRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发仓库同步
       *
       * @param request TriggerRepositoryMirrorSyncRequest
       * @return TriggerRepositoryMirrorSyncResponse
       */
      Models::TriggerRepositoryMirrorSyncResponse triggerRepositoryMirrorSync(const string &repositoryId, const Models::TriggerRepositoryMirrorSyncRequest &request);

      /**
       * @summary 更新应用成员
       *
       * @param request UpdateAppMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppMemberResponse
       */
      Models::UpdateAppMemberResponse updateAppMemberWithOptions(const string &appName, const Models::UpdateAppMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用成员
       *
       * @param request UpdateAppMemberRequest
       * @return UpdateAppMemberResponse
       */
      Models::UpdateAppMemberResponse updateAppMember(const string &appName, const Models::UpdateAppMemberRequest &request);

      /**
       * @summary 更新应用
       *
       * @param request UpdateApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplicationWithOptions(const string &appName, const Models::UpdateApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用
       *
       * @param request UpdateApplicationRequest
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplication(const string &appName, const Models::UpdateApplicationRequest &request);

      /**
       * @summary 更新检查运行记录
       *
       * @param request UpdateCheckRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCheckRunResponse
       */
      Models::UpdateCheckRunResponse updateCheckRunWithOptions(const Models::UpdateCheckRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新检查运行记录
       *
       * @param request UpdateCheckRunRequest
       * @return UpdateCheckRunResponse
       */
      Models::UpdateCheckRunResponse updateCheckRun(const Models::UpdateCheckRunRequest &request);

      /**
       * @summary 更新代码库文件
       *
       * @param request UpdateFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFileWithOptions(const string &repositoryId, const Models::UpdateFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代码库文件
       *
       * @param request UpdateFileRequest
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFile(const string &repositoryId, const Models::UpdateFileRequest &request);

      /**
       * @summary 更新标签
       *
       * @param request UpdateFlowTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowTagResponse
       */
      Models::UpdateFlowTagResponse updateFlowTagWithOptions(const string &organizationId, const string &id, const Models::UpdateFlowTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新标签
       *
       * @param request UpdateFlowTagRequest
       * @return UpdateFlowTagResponse
       */
      Models::UpdateFlowTagResponse updateFlowTag(const string &organizationId, const string &id, const Models::UpdateFlowTagRequest &request);

      /**
       * @summary 标签分类
       *
       * @param request UpdateFlowTagGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowTagGroupResponse
       */
      Models::UpdateFlowTagGroupResponse updateFlowTagGroupWithOptions(const string &organizationId, const string &id, const Models::UpdateFlowTagGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签分类
       *
       * @param request UpdateFlowTagGroupRequest
       * @return UpdateFlowTagGroupResponse
       */
      Models::UpdateFlowTagGroupResponse updateFlowTagGroup(const string &organizationId, const string &id, const Models::UpdateFlowTagGroupRequest &request);

      /**
       * @summary 更新单个代码组信息
       *
       * @param request UpdateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const Models::UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新单个代码组信息
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const Models::UpdateGroupRequest &request);

      /**
       * @summary 修改组成员
       *
       * @param request UpdateGroupMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupMemberResponse
       */
      Models::UpdateGroupMemberResponse updateGroupMemberWithOptions(const string &groupId, const Models::UpdateGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改组成员
       *
       * @param request UpdateGroupMemberRequest
       * @return UpdateGroupMemberResponse
       */
      Models::UpdateGroupMemberResponse updateGroupMember(const string &groupId, const Models::UpdateGroupMemberRequest &request);

      /**
       * @summary 更新主机组
       *
       * @param request UpdateHostGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHostGroupResponse
       */
      Models::UpdateHostGroupResponse updateHostGroupWithOptions(const string &organizationId, const string &id, const Models::UpdateHostGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新主机组
       *
       * @param request UpdateHostGroupRequest
       * @return UpdateHostGroupResponse
       */
      Models::UpdateHostGroupResponse updateHostGroup(const string &organizationId, const string &id, const Models::UpdateHostGroupRequest &request);

      /**
       * @summary 更新代码评审的标题和描述
       *
       * @param request UpdateMergeRequestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMergeRequestResponse
       */
      Models::UpdateMergeRequestResponse updateMergeRequestWithOptions(const string &repositoryId, const string &localId, const Models::UpdateMergeRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代码评审的标题和描述
       *
       * @param request UpdateMergeRequestRequest
       * @return UpdateMergeRequestResponse
       */
      Models::UpdateMergeRequestResponse updateMergeRequest(const string &repositoryId, const string &localId, const Models::UpdateMergeRequestRequest &request);

      /**
       * @summary 更新代码评审的干系人
       *
       * @param request UpdateMergeRequestPersonnelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMergeRequestPersonnelResponse
       */
      Models::UpdateMergeRequestPersonnelResponse updateMergeRequestPersonnelWithOptions(const string &repositoryId, const string &localId, const string &personType, const Models::UpdateMergeRequestPersonnelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代码评审的干系人
       *
       * @param request UpdateMergeRequestPersonnelRequest
       * @return UpdateMergeRequestPersonnelResponse
       */
      Models::UpdateMergeRequestPersonnelResponse updateMergeRequestPersonnel(const string &repositoryId, const string &localId, const string &personType, const Models::UpdateMergeRequestPersonnelRequest &request);

      /**
       * @summary 当前用户加入的企业列表
       *
       * @param request UpdateOrganizationMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationMemberResponse
       */
      Models::UpdateOrganizationMemberResponse updateOrganizationMemberWithOptions(const string &organizationId, const string &accountId, const Models::UpdateOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 当前用户加入的企业列表
       *
       * @param request UpdateOrganizationMemberRequest
       * @return UpdateOrganizationMemberResponse
       */
      Models::UpdateOrganizationMemberResponse updateOrganizationMember(const string &organizationId, const string &accountId, const Models::UpdateOrganizationMemberRequest &request);

      /**
       * @summary 更新流水线。
       *
       * @param request UpdatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const string &organizationId, const Models::UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流水线。
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const string &organizationId, const Models::UpdatePipelineRequest &request);

      /**
       * @summary 删除标签
       *
       * @param request UpdatePipelineBaseInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineBaseInfoResponse
       */
      Models::UpdatePipelineBaseInfoResponse updatePipelineBaseInfoWithOptions(const string &organizationId, const string &pipelineId, const Models::UpdatePipelineBaseInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签
       *
       * @param request UpdatePipelineBaseInfoRequest
       * @return UpdatePipelineBaseInfoResponse
       */
      Models::UpdatePipelineBaseInfoResponse updatePipelineBaseInfo(const string &organizationId, const string &pipelineId, const Models::UpdatePipelineBaseInfoRequest &request);

      /**
       * @summary 更新流水线分组
       *
       * @param request UpdatePipelineGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineGroupResponse
       */
      Models::UpdatePipelineGroupResponse updatePipelineGroupWithOptions(const string &organizationId, const string &groupId, const Models::UpdatePipelineGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流水线分组
       *
       * @param request UpdatePipelineGroupRequest
       * @return UpdatePipelineGroupResponse
       */
      Models::UpdatePipelineGroupResponse updatePipelineGroup(const string &organizationId, const string &groupId, const Models::UpdatePipelineGroupRequest &request);

      /**
       * @summary 更新项目属性与字段
       *
       * @param request UpdateProjectFieldRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectFieldResponse
       */
      Models::UpdateProjectFieldResponse updateProjectFieldWithOptions(const string &organizationId, const string &identifier, const Models::UpdateProjectFieldRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新项目属性与字段
       *
       * @param request UpdateProjectFieldRequest
       * @return UpdateProjectFieldResponse
       */
      Models::UpdateProjectFieldResponse updateProjectField(const string &organizationId, const string &identifier, const Models::UpdateProjectFieldRequest &request);

      /**
       * @summary 更新代码库Label
       *
       * @param request UpdateProjectLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectLabelResponse
       */
      Models::UpdateProjectLabelResponse updateProjectLabelWithOptions(const string &labelId, const Models::UpdateProjectLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代码库Label
       *
       * @param request UpdateProjectLabelRequest
       * @return UpdateProjectLabelResponse
       */
      Models::UpdateProjectLabelResponse updateProjectLabel(const string &labelId, const Models::UpdateProjectLabelRequest &request);

      /**
       * @summary 添加项目成员
       *
       * @param request UpdateProjectMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectMemberResponse
       */
      Models::UpdateProjectMemberResponse updateProjectMemberWithOptions(const string &organizationId, const string &projectId, const Models::UpdateProjectMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加项目成员
       *
       * @param request UpdateProjectMemberRequest
       * @return UpdateProjectMemberResponse
       */
      Models::UpdateProjectMemberResponse updateProjectMember(const string &organizationId, const string &projectId, const Models::UpdateProjectMemberRequest &request);

      /**
       * @summary 更改保护分支设置
       *
       * @param request UpdateProtectedBranchesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProtectedBranchesResponse
       */
      Models::UpdateProtectedBranchesResponse updateProtectedBranchesWithOptions(const string &repositoryId, const string &id, const Models::UpdateProtectedBranchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更改保护分支设置
       *
       * @param request UpdateProtectedBranchesRequest
       * @return UpdateProtectedBranchesResponse
       */
      Models::UpdateProtectedBranchesResponse updateProtectedBranches(const string &repositoryId, const string &id, const Models::UpdateProtectedBranchesRequest &request);

      /**
       * @summary 推送评审模式开关
       *
       * @param request UpdatePushReviewOnOffRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePushReviewOnOffResponse
       */
      Models::UpdatePushReviewOnOffResponse updatePushReviewOnOffWithOptions(const string &repositoryId, const Models::UpdatePushReviewOnOffRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送评审模式开关
       *
       * @param request UpdatePushReviewOnOffRequest
       * @return UpdatePushReviewOnOffResponse
       */
      Models::UpdatePushReviewOnOffResponse updatePushReviewOnOff(const string &repositoryId, const Models::UpdatePushReviewOnOffRequest &request);

      /**
       * @summary 更新推送规则
       *
       * @param request UpdatePushRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePushRuleResponse
       */
      Models::UpdatePushRuleResponse updatePushRuleWithOptions(const string &repositoryId, const string &pushRuleId, const Models::UpdatePushRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新推送规则
       *
       * @param request UpdatePushRuleRequest
       * @return UpdatePushRuleResponse
       */
      Models::UpdatePushRuleResponse updatePushRule(const string &repositoryId, const string &pushRuleId, const Models::UpdatePushRuleRequest &request);

      /**
       * @summary 更新代码库名称、路径、描述、默认分支等设置
       *
       * @param request UpdateRepositoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRepositoryResponse
       */
      Models::UpdateRepositoryResponse updateRepositoryWithOptions(const string &repositoryId, const Models::UpdateRepositoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代码库名称、路径、描述、默认分支等设置
       *
       * @param request UpdateRepositoryRequest
       * @return UpdateRepositoryResponse
       */
      Models::UpdateRepositoryResponse updateRepository(const string &repositoryId, const Models::UpdateRepositoryRequest &request);

      /**
       * @summary 修改代码库成员的权限（角色）
       *
       * @param request UpdateRepositoryMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRepositoryMemberResponse
       */
      Models::UpdateRepositoryMemberResponse updateRepositoryMemberWithOptions(const string &repositoryId, const string &aliyunPk, const Models::UpdateRepositoryMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改代码库成员的权限（角色）
       *
       * @param request UpdateRepositoryMemberRequest
       * @return UpdateRepositoryMemberResponse
       */
      Models::UpdateRepositoryMemberResponse updateRepositoryMember(const string &repositoryId, const string &aliyunPk, const Models::UpdateRepositoryMemberRequest &request);

      /**
       * @summary 更新资源成员
       *
       * @param request UpdateResourceMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceMemberResponse
       */
      Models::UpdateResourceMemberResponse updateResourceMemberWithOptions(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId, const Models::UpdateResourceMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新资源成员
       *
       * @param request UpdateResourceMemberRequest
       * @return UpdateResourceMemberResponse
       */
      Models::UpdateResourceMemberResponse updateResourceMember(const string &organizationId, const string &resourceType, const string &resourceId, const string &accountId, const Models::UpdateResourceMemberRequest &request);

      /**
       * @summary 更新测试用例字段
       *
       * @param request UpdateTestCaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTestCaseResponse
       */
      Models::UpdateTestCaseResponse updateTestCaseWithOptions(const string &organizationId, const string &testcaseIdentifier, const Models::UpdateTestCaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新测试用例字段
       *
       * @param request UpdateTestCaseRequest
       * @return UpdateTestCaseResponse
       */
      Models::UpdateTestCaseResponse updateTestCase(const string &organizationId, const string &testcaseIdentifier, const Models::UpdateTestCaseRequest &request);

      /**
       * @summary 更新了测试计划中测试用例的执行人与状态
       *
       * @param request UpdateTestResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTestResultResponse
       */
      Models::UpdateTestResultResponse updateTestResultWithOptions(const string &organizationId, const string &testPlanIdentifier, const string &testcaseIdentifier, const Models::UpdateTestResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新了测试计划中测试用例的执行人与状态
       *
       * @param request UpdateTestResultRequest
       * @return UpdateTestResultResponse
       */
      Models::UpdateTestResultResponse updateTestResult(const string &organizationId, const string &testPlanIdentifier, const string &testcaseIdentifier, const Models::UpdateTestResultRequest &request);

      /**
       * @summary 更新变量组
       *
       * @param request UpdateVariableGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVariableGroupResponse
       */
      Models::UpdateVariableGroupResponse updateVariableGroupWithOptions(const string &organizationId, const string &id, const Models::UpdateVariableGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新变量组
       *
       * @param request UpdateVariableGroupRequest
       * @return UpdateVariableGroupResponse
       */
      Models::UpdateVariableGroupResponse updateVariableGroup(const string &organizationId, const string &id, const Models::UpdateVariableGroupRequest &request);

      /**
       * @summary 更新工作项信息
       *
       * @param request UpdateWorkItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkItemResponse
       */
      Models::UpdateWorkItemResponse updateWorkItemWithOptions(const string &organizationId, const Models::UpdateWorkItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工作项信息
       *
       * @param request UpdateWorkItemRequest
       * @return UpdateWorkItemResponse
       */
      Models::UpdateWorkItemResponse updateWorkItem(const string &organizationId, const Models::UpdateWorkItemRequest &request);

      /**
       * @summary 更新工作项评论
       *
       * @param request UpdateWorkitemCommentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkitemCommentResponse
       */
      Models::UpdateWorkitemCommentResponse updateWorkitemCommentWithOptions(const string &organizationId, const Models::UpdateWorkitemCommentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工作项评论
       *
       * @param request UpdateWorkitemCommentRequest
       * @return UpdateWorkitemCommentResponse
       */
      Models::UpdateWorkitemCommentResponse updateWorkitemComment(const string &organizationId, const Models::UpdateWorkitemCommentRequest &request);

      /**
       * @summary 批量更新工作项字段信息
       *
       * @param request UpdateWorkitemFieldRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkitemFieldResponse
       */
      Models::UpdateWorkitemFieldResponse updateWorkitemFieldWithOptions(const string &organizationId, const Models::UpdateWorkitemFieldRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新工作项字段信息
       *
       * @param request UpdateWorkitemFieldRequest
       * @return UpdateWorkitemFieldResponse
       */
      Models::UpdateWorkitemFieldResponse updateWorkitemField(const string &organizationId, const Models::UpdateWorkitemFieldRequest &request);

      /**
       * @summary 工作项附件创建
       *
       * @param request WorkitemAttachmentCreateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkitemAttachmentCreateResponse
       */
      Models::WorkitemAttachmentCreateResponse workitemAttachmentCreateWithOptions(const string &organizationId, const string &workitemIdentifier, const Models::WorkitemAttachmentCreateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工作项附件创建
       *
       * @param request WorkitemAttachmentCreateRequest
       * @return WorkitemAttachmentCreateResponse
       */
      Models::WorkitemAttachmentCreateResponse workitemAttachmentCreate(const string &organizationId, const string &workitemIdentifier, const Models::WorkitemAttachmentCreateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
