// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YIKE20260319_HPP_
#define ALIBABACLOUD_YIKE20260319_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260319Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Yike20260319.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 增加一刻项目成员
       *
       * @param request AddYikeProductionMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddYikeProductionMembersResponse
       */
      Models::AddYikeProductionMembersResponse addYikeProductionMembersWithOptions(const Models::AddYikeProductionMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加一刻项目成员
       *
       * @param request AddYikeProductionMembersRequest
       * @return AddYikeProductionMembersResponse
       */
      Models::AddYikeProductionMembersResponse addYikeProductionMembers(const Models::AddYikeProductionMembersRequest &request);

      /**
       * @summary 增加用户积分
       *
       * @param request AddYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddYikeUserCreditResponse
       */
      Models::AddYikeUserCreditResponse addYikeUserCreditWithOptions(const Models::AddYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加用户积分
       *
       * @param request AddYikeUserCreditRequest
       * @return AddYikeUserCreditResponse
       */
      Models::AddYikeUserCreditResponse addYikeUserCredit(const Models::AddYikeUserCreditRequest &request);

      /**
       * @summary 批量获取一刻AI应用生成任务
       *
       * @param request BatchGetYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetYikeAIAppJobResponse
       */
      Models::BatchGetYikeAIAppJobResponse batchGetYikeAIAppJobWithOptions(const Models::BatchGetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取一刻AI应用生成任务
       *
       * @param request BatchGetYikeAIAppJobRequest
       * @return BatchGetYikeAIAppJobResponse
       */
      Models::BatchGetYikeAIAppJobResponse batchGetYikeAIAppJob(const Models::BatchGetYikeAIAppJobRequest &request);

      /**
       * @summary 批量获取媒资信息
       *
       * @param request BatchGetYikeAssetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetYikeAssetMediaInfosResponse
       */
      Models::BatchGetYikeAssetMediaInfosResponse batchGetYikeAssetMediaInfosWithOptions(const Models::BatchGetYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取媒资信息
       *
       * @param request BatchGetYikeAssetMediaInfosRequest
       * @return BatchGetYikeAssetMediaInfosResponse
       */
      Models::BatchGetYikeAssetMediaInfosResponse batchGetYikeAssetMediaInfos(const Models::BatchGetYikeAssetMediaInfosRequest &request);

      /**
       * @summary 获取一刻媒资上传凭证
       *
       * @param request CreateYikeAssetUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeAssetUploadResponse
       */
      Models::CreateYikeAssetUploadResponse createYikeAssetUploadWithOptions(const Models::CreateYikeAssetUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻媒资上传凭证
       *
       * @param request CreateYikeAssetUploadRequest
       * @return CreateYikeAssetUploadResponse
       */
      Models::CreateYikeAssetUploadResponse createYikeAssetUpload(const Models::CreateYikeAssetUploadRequest &request);

      /**
       * @summary 创建一刻项目
       *
       * @param request CreateYikeProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeProductionResponse
       */
      Models::CreateYikeProductionResponse createYikeProductionWithOptions(const Models::CreateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一刻项目
       *
       * @param request CreateYikeProductionRequest
       * @return CreateYikeProductionResponse
       */
      Models::CreateYikeProductionResponse createYikeProduction(const Models::CreateYikeProductionRequest &request);

      /**
       * @summary 创建一刻子用户
       *
       * @param request CreateYikeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeUserResponse
       */
      Models::CreateYikeUserResponse createYikeUserWithOptions(const Models::CreateYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一刻子用户
       *
       * @param request CreateYikeUserRequest
       * @return CreateYikeUserResponse
       */
      Models::CreateYikeUserResponse createYikeUser(const Models::CreateYikeUserRequest &request);

      /**
       * @summary 创建工作室
       *
       * @param request CreateYikeWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeWorkspaceResponse
       */
      Models::CreateYikeWorkspaceResponse createYikeWorkspaceWithOptions(const Models::CreateYikeWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作室
       *
       * @param request CreateYikeWorkspaceRequest
       * @return CreateYikeWorkspaceResponse
       */
      Models::CreateYikeWorkspaceResponse createYikeWorkspace(const Models::CreateYikeWorkspaceRequest &request);

      /**
       * @summary 删除媒资信息
       *
       * @param request DeleteYikeAssetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteYikeAssetMediaInfosResponse
       */
      Models::DeleteYikeAssetMediaInfosResponse deleteYikeAssetMediaInfosWithOptions(const Models::DeleteYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除媒资信息
       *
       * @param request DeleteYikeAssetMediaInfosRequest
       * @return DeleteYikeAssetMediaInfosResponse
       */
      Models::DeleteYikeAssetMediaInfosResponse deleteYikeAssetMediaInfos(const Models::DeleteYikeAssetMediaInfosRequest &request);

      /**
       * @summary 获取一刻AI应用任务
       *
       * @param request GetYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAIAppJobResponse
       */
      Models::GetYikeAIAppJobResponse getYikeAIAppJobWithOptions(const Models::GetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻AI应用任务
       *
       * @param request GetYikeAIAppJobRequest
       * @return GetYikeAIAppJobResponse
       */
      Models::GetYikeAIAppJobResponse getYikeAIAppJob(const Models::GetYikeAIAppJobRequest &request);

      /**
       * @summary 获取一刻媒资内容信息
       *
       * @param request GetYikeAssetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAssetMediaInfoResponse
       */
      Models::GetYikeAssetMediaInfoResponse getYikeAssetMediaInfoWithOptions(const Models::GetYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻媒资内容信息
       *
       * @param request GetYikeAssetMediaInfoRequest
       * @return GetYikeAssetMediaInfoResponse
       */
      Models::GetYikeAssetMediaInfoResponse getYikeAssetMediaInfo(const Models::GetYikeAssetMediaInfoRequest &request);

      /**
       * @summary 查询一刻提示词扩写和音频修复视频生成任务
       *
       * @param request GetYikePromptExpansionVoiceFixJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikePromptExpansionVoiceFixJobResponse
       */
      Models::GetYikePromptExpansionVoiceFixJobResponse getYikePromptExpansionVoiceFixJobWithOptions(const Models::GetYikePromptExpansionVoiceFixJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一刻提示词扩写和音频修复视频生成任务
       *
       * @param request GetYikePromptExpansionVoiceFixJobRequest
       * @return GetYikePromptExpansionVoiceFixJobResponse
       */
      Models::GetYikePromptExpansionVoiceFixJobResponse getYikePromptExpansionVoiceFixJob(const Models::GetYikePromptExpansionVoiceFixJobRequest &request);

      /**
       * @summary 获取一刻故事板任务
       *
       * @param request GetYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeStoryboardJobResponse
       */
      Models::GetYikeStoryboardJobResponse getYikeStoryboardJobWithOptions(const Models::GetYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻故事板任务
       *
       * @param request GetYikeStoryboardJobRequest
       * @return GetYikeStoryboardJobResponse
       */
      Models::GetYikeStoryboardJobResponse getYikeStoryboardJob(const Models::GetYikeStoryboardJobRequest &request);

      /**
       * @summary 获取一刻子用户信息
       *
       * @param request GetYikeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeUserResponse
       */
      Models::GetYikeUserResponse getYikeUserWithOptions(const Models::GetYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻子用户信息
       *
       * @param request GetYikeUserRequest
       * @return GetYikeUserResponse
       */
      Models::GetYikeUserResponse getYikeUser(const Models::GetYikeUserRequest &request);

      /**
       * @summary 查询一刻用户积分
       *
       * @param request GetYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeUserCreditResponse
       */
      Models::GetYikeUserCreditResponse getYikeUserCreditWithOptions(const Models::GetYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一刻用户积分
       *
       * @param request GetYikeUserCreditRequest
       * @return GetYikeUserCreditResponse
       */
      Models::GetYikeUserCreditResponse getYikeUserCredit(const Models::GetYikeUserCreditRequest &request);

      /**
       * @summary 查询一刻口播视频生成任务
       *
       * @param request GetYikeVoiceNarratorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeVoiceNarratorJobResponse
       */
      Models::GetYikeVoiceNarratorJobResponse getYikeVoiceNarratorJobWithOptions(const Models::GetYikeVoiceNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一刻口播视频生成任务
       *
       * @param request GetYikeVoiceNarratorJobRequest
       * @return GetYikeVoiceNarratorJobResponse
       */
      Models::GetYikeVoiceNarratorJobResponse getYikeVoiceNarratorJob(const Models::GetYikeVoiceNarratorJobRequest &request);

      /**
       * @summary 获取一刻文件夹列表
       *
       * @param request ListYikeAssetFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeAssetFoldersResponse
       */
      Models::ListYikeAssetFoldersResponse listYikeAssetFoldersWithOptions(const Models::ListYikeAssetFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻文件夹列表
       *
       * @param request ListYikeAssetFoldersRequest
       * @return ListYikeAssetFoldersResponse
       */
      Models::ListYikeAssetFoldersResponse listYikeAssetFolders(const Models::ListYikeAssetFoldersRequest &request);

      /**
       * @summary 获取一刻项目列表
       *
       * @param request ListYikeProductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeProductionsResponse
       */
      Models::ListYikeProductionsResponse listYikeProductionsWithOptions(const Models::ListYikeProductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻项目列表
       *
       * @param request ListYikeProductionsRequest
       * @return ListYikeProductionsResponse
       */
      Models::ListYikeProductionsResponse listYikeProductions(const Models::ListYikeProductionsRequest &request);

      /**
       * @summary 获取一刻工作室列表
       *
       * @param request ListYikeWorkspacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeWorkspacesResponse
       */
      Models::ListYikeWorkspacesResponse listYikeWorkspacesWithOptions(const Models::ListYikeWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一刻工作室列表
       *
       * @param request ListYikeWorkspacesRequest
       * @return ListYikeWorkspacesResponse
       */
      Models::ListYikeWorkspacesResponse listYikeWorkspaces(const Models::ListYikeWorkspacesRequest &request);

      /**
       * @summary 检查应用参数是否合法
       *
       * @param request PrecheckYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckYikeAIAppJobResponse
       */
      Models::PrecheckYikeAIAppJobResponse precheckYikeAIAppJobWithOptions(const Models::PrecheckYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查应用参数是否合法
       *
       * @param request PrecheckYikeAIAppJobRequest
       * @return PrecheckYikeAIAppJobResponse
       */
      Models::PrecheckYikeAIAppJobResponse precheckYikeAIAppJob(const Models::PrecheckYikeAIAppJobRequest &request);

      /**
       * @summary 注册一刻媒资
       *
       * @param request RegisterYikeAssetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterYikeAssetMediaInfoResponse
       */
      Models::RegisterYikeAssetMediaInfoResponse registerYikeAssetMediaInfoWithOptions(const Models::RegisterYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册一刻媒资
       *
       * @param request RegisterYikeAssetMediaInfoRequest
       * @return RegisterYikeAssetMediaInfoResponse
       */
      Models::RegisterYikeAssetMediaInfoResponse registerYikeAssetMediaInfo(const Models::RegisterYikeAssetMediaInfoRequest &request);

      /**
       * @summary 故事板任务恢复继续执行任务
       *
       * @param request ResumeYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeYikeStoryboardJobResponse
       */
      Models::ResumeYikeStoryboardJobResponse resumeYikeStoryboardJobWithOptions(const Models::ResumeYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 故事板任务恢复继续执行任务
       *
       * @param request ResumeYikeStoryboardJobRequest
       * @return ResumeYikeStoryboardJobResponse
       */
      Models::ResumeYikeStoryboardJobResponse resumeYikeStoryboardJob(const Models::ResumeYikeStoryboardJobRequest &request);

      /**
       * @summary 配置一刻事件回调
       *
       * @param request SetYikeCallbackConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetYikeCallbackConfigResponse
       */
      Models::SetYikeCallbackConfigResponse setYikeCallbackConfigWithOptions(const Models::SetYikeCallbackConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置一刻事件回调
       *
       * @param request SetYikeCallbackConfigRequest
       * @return SetYikeCallbackConfigResponse
       */
      Models::SetYikeCallbackConfigResponse setYikeCallbackConfig(const Models::SetYikeCallbackConfigRequest &request);

      /**
       * @summary 设置用户角色
       *
       * @param request SetYikeUserRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetYikeUserRoleResponse
       */
      Models::SetYikeUserRoleResponse setYikeUserRoleWithOptions(const Models::SetYikeUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置用户角色
       *
       * @param request SetYikeUserRoleRequest
       * @return SetYikeUserRoleResponse
       */
      Models::SetYikeUserRoleResponse setYikeUserRole(const Models::SetYikeUserRoleRequest &request);

      /**
       * @summary 扣减用户积分
       *
       * @param request SubYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubYikeUserCreditResponse
       */
      Models::SubYikeUserCreditResponse subYikeUserCreditWithOptions(const Models::SubYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扣减用户积分
       *
       * @param request SubYikeUserCreditRequest
       * @return SubYikeUserCreditResponse
       */
      Models::SubYikeUserCreditResponse subYikeUserCredit(const Models::SubYikeUserCreditRequest &request);

      /**
       * @summary 提交一刻AI应用任务
       *
       * @param request SubmitYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeAIAppJobResponse
       */
      Models::SubmitYikeAIAppJobResponse submitYikeAIAppJobWithOptions(const Models::SubmitYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一刻AI应用任务
       *
       * @param request SubmitYikeAIAppJobRequest
       * @return SubmitYikeAIAppJobResponse
       */
      Models::SubmitYikeAIAppJobResponse submitYikeAIAppJob(const Models::SubmitYikeAIAppJobRequest &request);

      /**
       * @summary 提交一刻提示词扩写和音频修复视频生成任务
       *
       * @param request SubmitYikePromptExpansionVoiceFixJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikePromptExpansionVoiceFixJobResponse
       */
      Models::SubmitYikePromptExpansionVoiceFixJobResponse submitYikePromptExpansionVoiceFixJobWithOptions(const Models::SubmitYikePromptExpansionVoiceFixJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一刻提示词扩写和音频修复视频生成任务
       *
       * @param request SubmitYikePromptExpansionVoiceFixJobRequest
       * @return SubmitYikePromptExpansionVoiceFixJobResponse
       */
      Models::SubmitYikePromptExpansionVoiceFixJobResponse submitYikePromptExpansionVoiceFixJob(const Models::SubmitYikePromptExpansionVoiceFixJobRequest &request);

      /**
       * @summary 提交一刻故事板全链路编排任务
       *
       * @param request SubmitYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeStoryboardJobResponse
       */
      Models::SubmitYikeStoryboardJobResponse submitYikeStoryboardJobWithOptions(const Models::SubmitYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一刻故事板全链路编排任务
       *
       * @param request SubmitYikeStoryboardJobRequest
       * @return SubmitYikeStoryboardJobResponse
       */
      Models::SubmitYikeStoryboardJobResponse submitYikeStoryboardJob(const Models::SubmitYikeStoryboardJobRequest &request);

      /**
       * @summary 提交一刻口播视频生成任务
       *
       * @param request SubmitYikeVoiceNarratorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeVoiceNarratorJobResponse
       */
      Models::SubmitYikeVoiceNarratorJobResponse submitYikeVoiceNarratorJobWithOptions(const Models::SubmitYikeVoiceNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一刻口播视频生成任务
       *
       * @param request SubmitYikeVoiceNarratorJobRequest
       * @return SubmitYikeVoiceNarratorJobResponse
       */
      Models::SubmitYikeVoiceNarratorJobResponse submitYikeVoiceNarratorJob(const Models::SubmitYikeVoiceNarratorJobRequest &request);

      /**
       * @summary 更新一刻项目
       *
       * @param request UpdateYikeProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateYikeProductionResponse
       */
      Models::UpdateYikeProductionResponse updateYikeProductionWithOptions(const Models::UpdateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一刻项目
       *
       * @param request UpdateYikeProductionRequest
       * @return UpdateYikeProductionResponse
       */
      Models::UpdateYikeProductionResponse updateYikeProduction(const Models::UpdateYikeProductionRequest &request);

      /**
       * @summary 修改一刻项目成员权限
       *
       * @param request UpdateYikeProductionMemberAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateYikeProductionMemberAuthResponse
       */
      Models::UpdateYikeProductionMemberAuthResponse updateYikeProductionMemberAuthWithOptions(const Models::UpdateYikeProductionMemberAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改一刻项目成员权限
       *
       * @param request UpdateYikeProductionMemberAuthRequest
       * @return UpdateYikeProductionMemberAuthResponse
       */
      Models::UpdateYikeProductionMemberAuthResponse updateYikeProductionMemberAuth(const Models::UpdateYikeProductionMemberAuthRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
