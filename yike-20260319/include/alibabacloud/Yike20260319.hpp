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
       * @summary Adds members to a Yike project.
       *
       * @param request AddYikeProductionMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddYikeProductionMembersResponse
       */
      Models::AddYikeProductionMembersResponse addYikeProductionMembersWithOptions(const Models::AddYikeProductionMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to a Yike project.
       *
       * @param request AddYikeProductionMembersRequest
       * @return AddYikeProductionMembersResponse
       */
      Models::AddYikeProductionMembersResponse addYikeProductionMembers(const Models::AddYikeProductionMembersRequest &request);

      /**
       * @summary Increases user credits.
       *
       * @param request AddYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddYikeUserCreditResponse
       */
      Models::AddYikeUserCreditResponse addYikeUserCreditWithOptions(const Models::AddYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Increases user credits.
       *
       * @param request AddYikeUserCreditRequest
       * @return AddYikeUserCreditResponse
       */
      Models::AddYikeUserCreditResponse addYikeUserCredit(const Models::AddYikeUserCreditRequest &request);

      /**
       * @summary Retrieves multiple Yike AI application generation tasks in a batch.
       *
       * @param request BatchGetYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetYikeAIAppJobResponse
       */
      Models::BatchGetYikeAIAppJobResponse batchGetYikeAIAppJobWithOptions(const Models::BatchGetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves multiple Yike AI application generation tasks in a batch.
       *
       * @param request BatchGetYikeAIAppJobRequest
       * @return BatchGetYikeAIAppJobResponse
       */
      Models::BatchGetYikeAIAppJobResponse batchGetYikeAIAppJob(const Models::BatchGetYikeAIAppJobRequest &request);

      /**
       * @summary Retrieves media asset information in batches.
       *
       * @param request BatchGetYikeAssetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetYikeAssetMediaInfosResponse
       */
      Models::BatchGetYikeAssetMediaInfosResponse batchGetYikeAssetMediaInfosWithOptions(const Models::BatchGetYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves media asset information in batches.
       *
       * @param request BatchGetYikeAssetMediaInfosRequest
       * @return BatchGetYikeAssetMediaInfosResponse
       */
      Models::BatchGetYikeAssetMediaInfosResponse batchGetYikeAssetMediaInfos(const Models::BatchGetYikeAssetMediaInfosRequest &request);

      /**
       * @summary Retrieves the upload credential for a media asset.
       *
       * @param request CreateYikeAssetUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeAssetUploadResponse
       */
      Models::CreateYikeAssetUploadResponse createYikeAssetUploadWithOptions(const Models::CreateYikeAssetUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the upload credential for a media asset.
       *
       * @param request CreateYikeAssetUploadRequest
       * @return CreateYikeAssetUploadResponse
       */
      Models::CreateYikeAssetUploadResponse createYikeAssetUpload(const Models::CreateYikeAssetUploadRequest &request);

      /**
       * @summary 创建一刻云剪辑工程
       *
       * @param request CreateYikeEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeEditingProjectResponse
       */
      Models::CreateYikeEditingProjectResponse createYikeEditingProjectWithOptions(const Models::CreateYikeEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一刻云剪辑工程
       *
       * @param request CreateYikeEditingProjectRequest
       * @return CreateYikeEditingProjectResponse
       */
      Models::CreateYikeEditingProjectResponse createYikeEditingProject(const Models::CreateYikeEditingProjectRequest &request);

      /**
       * @summary Creates a project.
       *
       * @param request CreateYikeProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeProductionResponse
       */
      Models::CreateYikeProductionResponse createYikeProductionWithOptions(const Models::CreateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a project.
       *
       * @param request CreateYikeProductionRequest
       * @return CreateYikeProductionResponse
       */
      Models::CreateYikeProductionResponse createYikeProduction(const Models::CreateYikeProductionRequest &request);

      /**
       * @summary Creates a sub-user.
       *
       * @param request CreateYikeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeUserResponse
       */
      Models::CreateYikeUserResponse createYikeUserWithOptions(const Models::CreateYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sub-user.
       *
       * @param request CreateYikeUserRequest
       * @return CreateYikeUserResponse
       */
      Models::CreateYikeUserResponse createYikeUser(const Models::CreateYikeUserRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateYikeWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeWorkspaceResponse
       */
      Models::CreateYikeWorkspaceResponse createYikeWorkspaceWithOptions(const Models::CreateYikeWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateYikeWorkspaceRequest
       * @return CreateYikeWorkspaceResponse
       */
      Models::CreateYikeWorkspaceResponse createYikeWorkspace(const Models::CreateYikeWorkspaceRequest &request);

      /**
       * @summary Deletes media asset information.
       *
       * @param request DeleteYikeAssetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteYikeAssetMediaInfosResponse
       */
      Models::DeleteYikeAssetMediaInfosResponse deleteYikeAssetMediaInfosWithOptions(const Models::DeleteYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media asset information.
       *
       * @param request DeleteYikeAssetMediaInfosRequest
       * @return DeleteYikeAssetMediaInfosResponse
       */
      Models::DeleteYikeAssetMediaInfosResponse deleteYikeAssetMediaInfos(const Models::DeleteYikeAssetMediaInfosRequest &request);

      /**
       * @summary Queries an image generation task.
       *
       * @description ## Request description
       * This API is used to generate a video narrated by a virtual human based on the provided text content and other parameters such as digital human information and common scenario type. You must specify key configuration items including the text type (original script or narration script), output dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request GetImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJobWithOptions(const Models::GetImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an image generation task.
       *
       * @description ## Request description
       * This API is used to generate a video narrated by a virtual human based on the provided text content and other parameters such as digital human information and common scenario type. You must specify key configuration items including the text type (original script or narration script), output dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request GetImageGenerationJobRequest
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJob(const Models::GetImageGenerationJobRequest &request);

      /**
       * @summary Queries a video generation task.
       *
       * @param request GetVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJobWithOptions(const Models::GetVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a video generation task.
       *
       * @param request GetVideoGenerationJobRequest
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJob(const Models::GetVideoGenerationJobRequest &request);

      /**
       * @summary Retrieves an AI application task from China International Communications Group (YIKE) AI.
       *
       * @param request GetYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAIAppJobResponse
       */
      Models::GetYikeAIAppJobResponse getYikeAIAppJobWithOptions(const Models::GetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an AI application task from China International Communications Group (YIKE) AI.
       *
       * @param request GetYikeAIAppJobRequest
       * @return GetYikeAIAppJobResponse
       */
      Models::GetYikeAIAppJobResponse getYikeAIAppJob(const Models::GetYikeAIAppJobRequest &request);

      /**
       * @summary Retrieves the membership plan and credit information for a Yike primary account.
       *
       * @param request GetYikeAccountCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAccountCreditResponse
       */
      Models::GetYikeAccountCreditResponse getYikeAccountCreditWithOptions(const Models::GetYikeAccountCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the membership plan and credit information for a Yike primary account.
       *
       * @param request GetYikeAccountCreditRequest
       * @return GetYikeAccountCreditResponse
       */
      Models::GetYikeAccountCreditResponse getYikeAccountCredit(const Models::GetYikeAccountCreditRequest &request);

      /**
       * @summary Queries an intelligent agent task.
       *
       * @param request GetYikeAgentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAgentJobResponse
       */
      Models::GetYikeAgentJobResponse getYikeAgentJobWithOptions(const Models::GetYikeAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an intelligent agent task.
       *
       * @param request GetYikeAgentJobRequest
       * @return GetYikeAgentJobResponse
       */
      Models::GetYikeAgentJobResponse getYikeAgentJob(const Models::GetYikeAgentJobRequest &request);

      /**
       * @summary Retrieves the content information of a media asset.
       *
       * @param request GetYikeAssetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAssetMediaInfoResponse
       */
      Models::GetYikeAssetMediaInfoResponse getYikeAssetMediaInfoWithOptions(const Models::GetYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the content information of a media asset.
       *
       * @param request GetYikeAssetMediaInfoRequest
       * @return GetYikeAssetMediaInfoResponse
       */
      Models::GetYikeAssetMediaInfoResponse getYikeAssetMediaInfo(const Models::GetYikeAssetMediaInfoRequest &request);

      /**
       * @summary Queries the information and results of an editing project export task.
       *
       * @param request GetYikeProjectExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeProjectExportJobResponse
       */
      Models::GetYikeProjectExportJobResponse getYikeProjectExportJobWithOptions(const Models::GetYikeProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information and results of an editing project export task.
       *
       * @param request GetYikeProjectExportJobRequest
       * @return GetYikeProjectExportJobResponse
       */
      Models::GetYikeProjectExportJobResponse getYikeProjectExportJob(const Models::GetYikeProjectExportJobRequest &request);

      /**
       * @summary Queries a Yike prompt enhancement and audio repair video generation task.
       *
       * @param request GetYikePromptExpansionVoiceFixJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikePromptExpansionVoiceFixJobResponse
       */
      Models::GetYikePromptExpansionVoiceFixJobResponse getYikePromptExpansionVoiceFixJobWithOptions(const Models::GetYikePromptExpansionVoiceFixJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a Yike prompt enhancement and audio repair video generation task.
       *
       * @param request GetYikePromptExpansionVoiceFixJobRequest
       * @return GetYikePromptExpansionVoiceFixJobResponse
       */
      Models::GetYikePromptExpansionVoiceFixJobResponse getYikePromptExpansionVoiceFixJob(const Models::GetYikePromptExpansionVoiceFixJobRequest &request);

      /**
       * @summary Retrieves a storyboard task.
       *
       * @param request GetYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeStoryboardJobResponse
       */
      Models::GetYikeStoryboardJobResponse getYikeStoryboardJobWithOptions(const Models::GetYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a storyboard task.
       *
       * @param request GetYikeStoryboardJobRequest
       * @return GetYikeStoryboardJobResponse
       */
      Models::GetYikeStoryboardJobResponse getYikeStoryboardJob(const Models::GetYikeStoryboardJobRequest &request);

      /**
       * @summary Retrieves the information of a Yike RAM user.
       *
       * @param request GetYikeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeUserResponse
       */
      Models::GetYikeUserResponse getYikeUserWithOptions(const Models::GetYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of a Yike RAM user.
       *
       * @param request GetYikeUserRequest
       * @return GetYikeUserResponse
       */
      Models::GetYikeUserResponse getYikeUser(const Models::GetYikeUserRequest &request);

      /**
       * @summary Queries the credits of a Yike user.
       *
       * @param request GetYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeUserCreditResponse
       */
      Models::GetYikeUserCreditResponse getYikeUserCreditWithOptions(const Models::GetYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credits of a Yike user.
       *
       * @param request GetYikeUserCreditRequest
       * @return GetYikeUserCreditResponse
       */
      Models::GetYikeUserCreditResponse getYikeUserCredit(const Models::GetYikeUserCreditRequest &request);

      /**
       * @summary Queries the status of an intelligent video generation task for narration-only videos (without digital humans).
       *
       * @param request GetYikeVoiceNarratorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeVoiceNarratorJobResponse
       */
      Models::GetYikeVoiceNarratorJobResponse getYikeVoiceNarratorJobWithOptions(const Models::GetYikeVoiceNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an intelligent video generation task for narration-only videos (without digital humans).
       *
       * @param request GetYikeVoiceNarratorJobRequest
       * @return GetYikeVoiceNarratorJobResponse
       */
      Models::GetYikeVoiceNarratorJobResponse getYikeVoiceNarratorJob(const Models::GetYikeVoiceNarratorJobRequest &request);

      /**
       * @summary Retrieves the list of folders.
       *
       * @param request ListYikeAssetFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeAssetFoldersResponse
       */
      Models::ListYikeAssetFoldersResponse listYikeAssetFoldersWithOptions(const Models::ListYikeAssetFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of folders.
       *
       * @param request ListYikeAssetFoldersRequest
       * @return ListYikeAssetFoldersResponse
       */
      Models::ListYikeAssetFoldersResponse listYikeAssetFolders(const Models::ListYikeAssetFoldersRequest &request);

      /**
       * @summary Retrieves the list of Yike projects.
       *
       * @param request ListYikeProductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeProductionsResponse
       */
      Models::ListYikeProductionsResponse listYikeProductionsWithOptions(const Models::ListYikeProductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of Yike projects.
       *
       * @param request ListYikeProductionsRequest
       * @return ListYikeProductionsResponse
       */
      Models::ListYikeProductionsResponse listYikeProductions(const Models::ListYikeProductionsRequest &request);

      /**
       * @summary Retrieves the list of Yike workspaces.
       *
       * @param request ListYikeWorkspacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeWorkspacesResponse
       */
      Models::ListYikeWorkspacesResponse listYikeWorkspacesWithOptions(const Models::ListYikeWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of Yike workspaces.
       *
       * @param request ListYikeWorkspacesRequest
       * @return ListYikeWorkspacesResponse
       */
      Models::ListYikeWorkspacesResponse listYikeWorkspaces(const Models::ListYikeWorkspacesRequest &request);

      /**
       * @summary Checks whether the application parameters are valid.
       *
       * @param request PrecheckYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckYikeAIAppJobResponse
       */
      Models::PrecheckYikeAIAppJobResponse precheckYikeAIAppJobWithOptions(const Models::PrecheckYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the application parameters are valid.
       *
       * @param request PrecheckYikeAIAppJobRequest
       * @return PrecheckYikeAIAppJobResponse
       */
      Models::PrecheckYikeAIAppJobResponse precheckYikeAIAppJob(const Models::PrecheckYikeAIAppJobRequest &request);

      /**
       * @summary Registers a media asset.
       *
       * @param request RegisterYikeAssetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterYikeAssetMediaInfoResponse
       */
      Models::RegisterYikeAssetMediaInfoResponse registerYikeAssetMediaInfoWithOptions(const Models::RegisterYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a media asset.
       *
       * @param request RegisterYikeAssetMediaInfoRequest
       * @return RegisterYikeAssetMediaInfoResponse
       */
      Models::RegisterYikeAssetMediaInfoResponse registerYikeAssetMediaInfo(const Models::RegisterYikeAssetMediaInfoRequest &request);

      /**
       * @summary Resumes the execution of a storyboard task.
       *
       * @param request ResumeYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeYikeStoryboardJobResponse
       */
      Models::ResumeYikeStoryboardJobResponse resumeYikeStoryboardJobWithOptions(const Models::ResumeYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes the execution of a storyboard task.
       *
       * @param request ResumeYikeStoryboardJobRequest
       * @return ResumeYikeStoryboardJobResponse
       */
      Models::ResumeYikeStoryboardJobResponse resumeYikeStoryboardJob(const Models::ResumeYikeStoryboardJobRequest &request);

      /**
       * @summary Configures event callbacks for the business system.
       *
       * @param request SetYikeCallbackConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetYikeCallbackConfigResponse
       */
      Models::SetYikeCallbackConfigResponse setYikeCallbackConfigWithOptions(const Models::SetYikeCallbackConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures event callbacks for the business system.
       *
       * @param request SetYikeCallbackConfigRequest
       * @return SetYikeCallbackConfigResponse
       */
      Models::SetYikeCallbackConfigResponse setYikeCallbackConfig(const Models::SetYikeCallbackConfigRequest &request);

      /**
       * @summary Sets the role of a user.
       *
       * @param request SetYikeUserRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetYikeUserRoleResponse
       */
      Models::SetYikeUserRoleResponse setYikeUserRoleWithOptions(const Models::SetYikeUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the role of a user.
       *
       * @param request SetYikeUserRoleRequest
       * @return SetYikeUserRoleResponse
       */
      Models::SetYikeUserRoleResponse setYikeUserRole(const Models::SetYikeUserRoleRequest &request);

      /**
       * @summary Deducts user credits.
       *
       * @param request SubYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubYikeUserCreditResponse
       */
      Models::SubYikeUserCreditResponse subYikeUserCreditWithOptions(const Models::SubYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deducts user credits.
       *
       * @param request SubYikeUserCreditRequest
       * @return SubYikeUserCreditResponse
       */
      Models::SubYikeUserCreditResponse subYikeUserCredit(const Models::SubYikeUserCreditRequest &request);

      /**
       * @summary Submits an image generation task.
       *
       * @description ## Request description
       * This API is used to generate a video narrated by a virtual human based on the provided text content and other parameters (such as digital human information and application scenario type). You must specify key configuration items such as the text type (original script or narration script), output dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJobWithOptions(const Models::SubmitImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an image generation task.
       *
       * @description ## Request description
       * This API is used to generate a video narrated by a virtual human based on the provided text content and other parameters (such as digital human information and application scenario type). You must specify key configuration items such as the text type (original script or narration script), output dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitImageGenerationJobRequest
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJob(const Models::SubmitImageGenerationJobRequest &request);

      /**
       * @summary Submits a video generation task.
       *
       * @description ## Request description
       * This API generates a video featuring a virtual human speaking based on the provided text content and other parameters (such as digital human information and common scenarios type). You must specify the text type (original script or spoken script), output dimensions, resolution, and other key configuration items. You can also choose whether to add subtitles or specify the output language. Additionally, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJobWithOptions(const Models::SubmitVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video generation task.
       *
       * @description ## Request description
       * This API generates a video featuring a virtual human speaking based on the provided text content and other parameters (such as digital human information and common scenarios type). You must specify the text type (original script or spoken script), output dimensions, resolution, and other key configuration items. You can also choose whether to add subtitles or specify the output language. Additionally, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitVideoGenerationJobRequest
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJob(const Models::SubmitVideoGenerationJobRequest &request);

      /**
       * @summary Submits an AI application task to Yike AI.
       *
       * @param request SubmitYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeAIAppJobResponse
       */
      Models::SubmitYikeAIAppJobResponse submitYikeAIAppJobWithOptions(const Models::SubmitYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an AI application task to Yike AI.
       *
       * @param request SubmitYikeAIAppJobRequest
       * @return SubmitYikeAIAppJobResponse
       */
      Models::SubmitYikeAIAppJobResponse submitYikeAIAppJob(const Models::SubmitYikeAIAppJobRequest &request);

      /**
       * @summary Creates an intelligent video production task for a digital human oral broadcasting scenario. This operation is applicable to video scenarios such as influencer product promotion and knowledge explanation.
       *
       * @description ## Description
       * This operation generates a video in which a virtual human delivers an oral broadcast based on the provided text content and other parameters such as digital human information and application scenario type. You must specify key configuration items including the text type (raw script or oral broadcast script), video dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can use the `UserData` field to pass custom parameters, which are returned as-is in the callback.
       * Common scenarios: influencer product promotion, knowledge explanation, and similar video scenarios.
       *
       * @param request SubmitYikeAvatarNarratorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeAvatarNarratorJobResponse
       */
      Models::SubmitYikeAvatarNarratorJobResponse submitYikeAvatarNarratorJobWithOptions(const Models::SubmitYikeAvatarNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intelligent video production task for a digital human oral broadcasting scenario. This operation is applicable to video scenarios such as influencer product promotion and knowledge explanation.
       *
       * @description ## Description
       * This operation generates a video in which a virtual human delivers an oral broadcast based on the provided text content and other parameters such as digital human information and application scenario type. You must specify key configuration items including the text type (raw script or oral broadcast script), video dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can use the `UserData` field to pass custom parameters, which are returned as-is in the callback.
       * Common scenarios: influencer product promotion, knowledge explanation, and similar video scenarios.
       *
       * @param request SubmitYikeAvatarNarratorJobRequest
       * @return SubmitYikeAvatarNarratorJobResponse
       */
      Models::SubmitYikeAvatarNarratorJobResponse submitYikeAvatarNarratorJob(const Models::SubmitYikeAvatarNarratorJobRequest &request);

      /**
       * @summary Submits an online editing project export task that supports exporting pure audio and SRT subtitles.
       *
       * @param request SubmitYikeProjectExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeProjectExportJobResponse
       */
      Models::SubmitYikeProjectExportJobResponse submitYikeProjectExportJobWithOptions(const Models::SubmitYikeProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an online editing project export task that supports exporting pure audio and SRT subtitles.
       *
       * @param request SubmitYikeProjectExportJobRequest
       * @return SubmitYikeProjectExportJobResponse
       */
      Models::SubmitYikeProjectExportJobResponse submitYikeProjectExportJob(const Models::SubmitYikeProjectExportJobRequest &request);

      /**
       * @summary Submits a video generation task with prompt enhancement and audio repair.
       *
       * @param request SubmitYikePromptExpansionVoiceFixJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikePromptExpansionVoiceFixJobResponse
       */
      Models::SubmitYikePromptExpansionVoiceFixJobResponse submitYikePromptExpansionVoiceFixJobWithOptions(const Models::SubmitYikePromptExpansionVoiceFixJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video generation task with prompt enhancement and audio repair.
       *
       * @param request SubmitYikePromptExpansionVoiceFixJobRequest
       * @return SubmitYikePromptExpansionVoiceFixJobResponse
       */
      Models::SubmitYikePromptExpansionVoiceFixJobResponse submitYikePromptExpansionVoiceFixJob(const Models::SubmitYikePromptExpansionVoiceFixJobRequest &request);

      /**
       * @summary Submits a storyboard generation task.
       *
       * @description Ensure that your credits remain above 5,000 when calling this operation. Insufficient credits may cause the task to be interrupted.
       *
       * @param request SubmitYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeStoryboardJobResponse
       */
      Models::SubmitYikeStoryboardJobResponse submitYikeStoryboardJobWithOptions(const Models::SubmitYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a storyboard generation task.
       *
       * @description Ensure that your credits remain above 5,000 when calling this operation. Insufficient credits may cause the task to be interrupted.
       *
       * @param request SubmitYikeStoryboardJobRequest
       * @return SubmitYikeStoryboardJobResponse
       */
      Models::SubmitYikeStoryboardJobResponse submitYikeStoryboardJob(const Models::SubmitYikeStoryboardJobRequest &request);

      /**
       * @summary Creates a video replication task that supports same-category content rewriting scenarios by preserving the original video framework and generating deduplicated variants through replacing partial elements (person/voice/image/text).
       *
       * @param request SubmitYikeVideoCloneJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeVideoCloneJobResponse
       */
      Models::SubmitYikeVideoCloneJobResponse submitYikeVideoCloneJobWithOptions(const Models::SubmitYikeVideoCloneJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a video replication task that supports same-category content rewriting scenarios by preserving the original video framework and generating deduplicated variants through replacing partial elements (person/voice/image/text).
       *
       * @param request SubmitYikeVideoCloneJobRequest
       * @return SubmitYikeVideoCloneJobResponse
       */
      Models::SubmitYikeVideoCloneJobResponse submitYikeVideoCloneJob(const Models::SubmitYikeVideoCloneJobRequest &request);

      /**
       * @summary Creates an intelligent video generation task for a voice-over-only scenario (without a digital human). This task is applicable to video scenarios such as product showcasing and news broadcasting.
       *
       * @param request SubmitYikeVoiceNarratorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeVoiceNarratorJobResponse
       */
      Models::SubmitYikeVoiceNarratorJobResponse submitYikeVoiceNarratorJobWithOptions(const Models::SubmitYikeVoiceNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intelligent video generation task for a voice-over-only scenario (without a digital human). This task is applicable to video scenarios such as product showcasing and news broadcasting.
       *
       * @param request SubmitYikeVoiceNarratorJobRequest
       * @return SubmitYikeVoiceNarratorJobResponse
       */
      Models::SubmitYikeVoiceNarratorJobResponse submitYikeVoiceNarratorJob(const Models::SubmitYikeVoiceNarratorJobRequest &request);

      /**
       * @summary Update a Yike project
       *
       * @param request UpdateYikeProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateYikeProductionResponse
       */
      Models::UpdateYikeProductionResponse updateYikeProductionWithOptions(const Models::UpdateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a Yike project
       *
       * @param request UpdateYikeProductionRequest
       * @return UpdateYikeProductionResponse
       */
      Models::UpdateYikeProductionResponse updateYikeProduction(const Models::UpdateYikeProductionRequest &request);

      /**
       * @summary Modifies the permissions of a China Short Video (Yike) project member.
       *
       * @param request UpdateYikeProductionMemberAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateYikeProductionMemberAuthResponse
       */
      Models::UpdateYikeProductionMemberAuthResponse updateYikeProductionMemberAuthWithOptions(const Models::UpdateYikeProductionMemberAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a China Short Video (Yike) project member.
       *
       * @param request UpdateYikeProductionMemberAuthRequest
       * @return UpdateYikeProductionMemberAuthResponse
       */
      Models::UpdateYikeProductionMemberAuthResponse updateYikeProductionMemberAuth(const Models::UpdateYikeProductionMemberAuthRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
