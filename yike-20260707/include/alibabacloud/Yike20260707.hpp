// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YIKE20260707_HPP_
#define ALIBABACLOUD_YIKE20260707_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260707Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Yike20260707.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds members to a project.
       *
       * @description Adds users under the same Alibaba Cloud account to a specified project in the default workspace of the Alibaba Cloud account, and grants the Edit permission by default. ProjectId specifies the project ID. YikeUserIds specifies a comma-separated list of Yike user IDs, which are not Alibaba Cloud UIDs. Currently, only the default workspace of the Alibaba Cloud account is supported, and projects in newly created workspaces are not supported. This operation follows the behavior of the original member API operation: adding an existing member resets the project permissions. Regular members are assigned the Edit permission, and SuperAdmins of the default workspace retain the Manage permission. Only Alibaba Cloud accounts that have activated ProductionOpenAPI are supported. Default Alibaba Cloud account projects (pd_Alibaba Cloud account ID) are not supported.
       *
       * @param request AddProjectMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProjectMembersResponse
       */
      Models::AddProjectMembersResponse addProjectMembersWithOptions(const Models::AddProjectMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to a project.
       *
       * @description Adds users under the same Alibaba Cloud account to a specified project in the default workspace of the Alibaba Cloud account, and grants the Edit permission by default. ProjectId specifies the project ID. YikeUserIds specifies a comma-separated list of Yike user IDs, which are not Alibaba Cloud UIDs. Currently, only the default workspace of the Alibaba Cloud account is supported, and projects in newly created workspaces are not supported. This operation follows the behavior of the original member API operation: adding an existing member resets the project permissions. Regular members are assigned the Edit permission, and SuperAdmins of the default workspace retain the Manage permission. Only Alibaba Cloud accounts that have activated ProductionOpenAPI are supported. Default Alibaba Cloud account projects (pd_Alibaba Cloud account ID) are not supported.
       *
       * @param request AddProjectMembersRequest
       * @return AddProjectMembersResponse
       */
      Models::AddProjectMembersResponse addProjectMembers(const Models::AddProjectMembersRequest &request);

      /**
       * @summary Retrieves the information of multiple media assets.
       *
       * @description ## Request description
       * This API operation queries media asset content understanding jobs.
       *
       * @param request BatchGetMediasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediasResponse
       */
      Models::BatchGetMediasResponse batchGetMediasWithOptions(const Models::BatchGetMediasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of multiple media assets.
       *
       * @description ## Request description
       * This API operation queries media asset content understanding jobs.
       *
       * @param request BatchGetMediasRequest
       * @return BatchGetMediasResponse
       */
      Models::BatchGetMediasResponse batchGetMedias(const Models::BatchGetMediasRequest &request);

      /**
       * @summary Queries multiple video character replacement jobs.
       *
       * @description Queries the status and results of multiple video character replacement jobs. JobIds is a comma-separated string of job IDs. The response includes a JobList. The input parameters for each job are located in the AppInputConfig field. For the single query operation GetVideoCharacterReplaceJob, the corresponding field is AppParams. When the Status is Finished, you can retrieve the output media assets from the Result field.
       *
       * @param request BatchGetVideoCharacterReplaceJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetVideoCharacterReplaceJobsResponse
       */
      Models::BatchGetVideoCharacterReplaceJobsResponse batchGetVideoCharacterReplaceJobsWithOptions(const Models::BatchGetVideoCharacterReplaceJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multiple video character replacement jobs.
       *
       * @description Queries the status and results of multiple video character replacement jobs. JobIds is a comma-separated string of job IDs. The response includes a JobList. The input parameters for each job are located in the AppInputConfig field. For the single query operation GetVideoCharacterReplaceJob, the corresponding field is AppParams. When the Status is Finished, you can retrieve the output media assets from the Result field.
       *
       * @param request BatchGetVideoCharacterReplaceJobsRequest
       * @return BatchGetVideoCharacterReplaceJobsResponse
       */
      Models::BatchGetVideoCharacterReplaceJobsResponse batchGetVideoCharacterReplaceJobs(const Models::BatchGetVideoCharacterReplaceJobsRequest &request);

      /**
       * @summary Cancels a generation task.
       *
       * @param request CancelGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelGenerationJobResponse
       */
      Models::CancelGenerationJobResponse cancelGenerationJobWithOptions(const Models::CancelGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a generation task.
       *
       * @param request CancelGenerationJobRequest
       * @return CancelGenerationJobResponse
       */
      Models::CancelGenerationJobResponse cancelGenerationJob(const Models::CancelGenerationJobRequest &request);

      /**
       * @summary Creates a media asset category.
       *
       * @description Categories support up to three levels of hierarchy, and each level supports up to 100 subcategories.
       *
       * @param request CreateAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAssetCategoryResponse
       */
      Models::CreateAssetCategoryResponse createAssetCategoryWithOptions(const Models::CreateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a media asset category.
       *
       * @description Categories support up to three levels of hierarchy, and each level supports up to 100 subcategories.
       *
       * @param request CreateAssetCategoryRequest
       * @return CreateAssetCategoryResponse
       */
      Models::CreateAssetCategoryResponse createAssetCategory(const Models::CreateAssetCategoryRequest &request);

      /**
       * @summary Creates an infinite canvas.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request CreateInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInfiniteCanvasResponse
       */
      Models::CreateInfiniteCanvasResponse createInfiniteCanvasWithOptions(const Models::CreateInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an infinite canvas.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request CreateInfiniteCanvasRequest
       * @return CreateInfiniteCanvasResponse
       */
      Models::CreateInfiniteCanvasResponse createInfiniteCanvas(const Models::CreateInfiniteCanvasRequest &request);

      /**
       * @summary Creates a project.
       *
       * @description Creates a project in a specified workspace and returns the project ID. If WorkspaceId is not specified, the default workspace of the current account is used. After the project is created, you can call GetProject to query the details or call ListProjects to list projects.
       *
       * @param request CreateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a project.
       *
       * @description Creates a project in a specified workspace and returns the project ID. If WorkspaceId is not specified, the default workspace of the current account is used. After the project is created, you can call GetProject to query the details or call ListProjects to list projects.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Creates a studio.
       *
       * @description Creates a studio and triggers the automatic creation of a default project for the studio. Returns the WorkspaceId and the ProjectId of the default project. You can use the ProjectId directly without creating the default project again.
       *
       * @param request CreateWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a studio.
       *
       * @description Creates a studio and triggers the automatic creation of a default project for the studio. Returns the WorkspaceId and the ProjectId of the default project. You can use the ProjectId directly without creating the default project again.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Deletes a media asset category.
       *
       * @description This operation also deletes its subcategories, including level-2 and level-3 subcategories. Proceed with caution.
       *
       * @param request DeleteAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAssetCategoryResponse
       */
      Models::DeleteAssetCategoryResponse deleteAssetCategoryWithOptions(const Models::DeleteAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a media asset category.
       *
       * @description This operation also deletes its subcategories, including level-2 and level-3 subcategories. Proceed with caution.
       *
       * @param request DeleteAssetCategoryRequest
       * @return DeleteAssetCategoryResponse
       */
      Models::DeleteAssetCategoryResponse deleteAssetCategory(const Models::DeleteAssetCategoryRequest &request);

      /**
       * @summary Deletes an infinite canvas.
       *
       * @description ## Request description
       * This API operation queries media asset content understanding jobs.
       *
       * @param request DeleteInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInfiniteCanvasResponse
       */
      Models::DeleteInfiniteCanvasResponse deleteInfiniteCanvasWithOptions(const Models::DeleteInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an infinite canvas.
       *
       * @description ## Request description
       * This API operation queries media asset content understanding jobs.
       *
       * @param request DeleteInfiniteCanvasRequest
       * @return DeleteInfiniteCanvasResponse
       */
      Models::DeleteInfiniteCanvasResponse deleteInfiniteCanvas(const Models::DeleteInfiniteCanvasRequest &request);

      /**
       * @summary Deletes media asset information.
       *
       * @param request DeleteMediasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediasResponse
       */
      Models::DeleteMediasResponse deleteMediasWithOptions(const Models::DeleteMediasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media asset information.
       *
       * @param request DeleteMediasRequest
       * @return DeleteMediasResponse
       */
      Models::DeleteMediasResponse deleteMedias(const Models::DeleteMediasRequest &request);

      /**
       * @summary Deletes a project.
       *
       * @description Deletes a project by ProjectId. The caller must have project management permissions.
       * Default projects cannot be deleted. If you attempt to delete a default project, DefaultProductionNotSupported is returned. This operation marks the project as deleted and does not physically delete all assets in the project.
       *
       * @param request DeleteProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const Models::DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project.
       *
       * @description Deletes a project by ProjectId. The caller must have project management permissions.
       * Default projects cannot be deleted. If you attempt to delete a default project, DefaultProductionNotSupported is returned. This operation marks the project as deleted and does not physically delete all assets in the project.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const Models::DeleteProjectRequest &request);

      /**
       * @summary Retrieves the logon token for an enterprise account.
       *
       * @description >Notice:  The AI generation-related API operations in the current 2026-03-19 API version will be retired soon. Upgrade to the 2026-07-07 API version.
       *
       * @param request GenerateYikeLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateYikeLoginTokenResponse
       */
      Models::GenerateYikeLoginTokenResponse generateYikeLoginTokenWithOptions(const Models::GenerateYikeLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the logon token for an enterprise account.
       *
       * @description >Notice:  The AI generation-related API operations in the current 2026-03-19 API version will be retired soon. Upgrade to the 2026-07-07 API version.
       *
       * @param request GenerateYikeLoginTokenRequest
       * @return GenerateYikeLoginTokenResponse
       */
      Models::GenerateYikeLoginTokenResponse generateYikeLoginToken(const Models::GenerateYikeLoginTokenRequest &request);

      /**
       * @summary Queries an asynchronous task of the agent node.
       *
       * @param request GetAgentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentJobResponse
       */
      Models::GetAgentJobResponse getAgentJobWithOptions(const Models::GetAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an asynchronous task of the agent node.
       *
       * @param request GetAgentJobRequest
       * @return GetAgentJobResponse
       */
      Models::GetAgentJobResponse getAgentJob(const Models::GetAgentJobRequest &request);

      /**
       * @summary Retrieves the details of a specified category and a list of its subcategories.
       *
       * @param request GetAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetCategoryResponse
       */
      Models::GetAssetCategoryResponse getAssetCategoryWithOptions(const Models::GetAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified category and a list of its subcategories.
       *
       * @param request GetAssetCategoryRequest
       * @return GetAssetCategoryResponse
       */
      Models::GetAssetCategoryResponse getAssetCategory(const Models::GetAssetCategoryRequest &request);

      /**
       * @summary Queries an image generation task.
       *
       * @param request GetImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJobWithOptions(const Models::GetImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an image generation task.
       *
       * @param request GetImageGenerationJobRequest
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJob(const Models::GetImageGenerationJobRequest &request);

      /**
       * @summary Queries an infinite canvas.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request GetInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInfiniteCanvasResponse
       */
      Models::GetInfiniteCanvasResponse getInfiniteCanvasWithOptions(const Models::GetInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an infinite canvas.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request GetInfiniteCanvasRequest
       * @return GetInfiniteCanvasResponse
       */
      Models::GetInfiniteCanvasResponse getInfiniteCanvas(const Models::GetInfiniteCanvasRequest &request);

      /**
       * @summary Queries media assets.
       *
       * @description ## Request description
       * This API operation queries media asset content understanding jobs.
       *
       * @param request GetMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaResponse
       */
      Models::GetMediaResponse getMediaWithOptions(const Models::GetMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media assets.
       *
       * @description ## Request description
       * This API operation queries media asset content understanding jobs.
       *
       * @param request GetMediaRequest
       * @return GetMediaResponse
       */
      Models::GetMediaResponse getMedia(const Models::GetMediaRequest &request);

      /**
       * @summary Queries media content comprehension jobs.
       *
       * @description ## Request description
       * This operation queries media content comprehension jobs.
       *
       * @param request GetMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJobWithOptions(const Models::GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media content comprehension jobs.
       *
       * @description ## Request description
       * This operation queries media content comprehension jobs.
       *
       * @param request GetMediaComprehensionJobRequest
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJob(const Models::GetMediaComprehensionJobRequest &request);

      /**
       * @summary Queries the details of a project.
       *
       * @description Queries the basic information of a project and the permissions of the current caller on the project based on the ProjectId. The project information is contained in the Project object of the response and does not include the list of project assets.
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a project.
       *
       * @description Queries the basic information of a project and the permissions of the current caller on the project based on the ProjectId. The project information is contained in the Project object of the response and does not include the list of project assets.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary Queries a creative script generation task.
       *
       * @param request GetRemakeScriptJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRemakeScriptJobResponse
       */
      Models::GetRemakeScriptJobResponse getRemakeScriptJobWithOptions(const Models::GetRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a creative script generation task.
       *
       * @param request GetRemakeScriptJobRequest
       * @return GetRemakeScriptJobResponse
       */
      Models::GetRemakeScriptJobResponse getRemakeScriptJob(const Models::GetRemakeScriptJobRequest &request);

      /**
       * @summary Queries a video character replacement task.
       *
       * @description Queries the status and result of a single task by using the JobId returned by the submit operation. When the Status is Finished, you can read the output media assets in Result. Executing indicates that the task is still running.
       * This operation uses AppParams to return the task input parameters. The corresponding field name in the batch query operation is AppInputConfig. The output results are categorized into ImageResult, VideoResult, and AudioResult. Each category contains MediaId and OutputUrl.
       *
       * @param request GetVideoCharacterReplaceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoCharacterReplaceJobResponse
       */
      Models::GetVideoCharacterReplaceJobResponse getVideoCharacterReplaceJobWithOptions(const Models::GetVideoCharacterReplaceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a video character replacement task.
       *
       * @description Queries the status and result of a single task by using the JobId returned by the submit operation. When the Status is Finished, you can read the output media assets in Result. Executing indicates that the task is still running.
       * This operation uses AppParams to return the task input parameters. The corresponding field name in the batch query operation is AppInputConfig. The output results are categorized into ImageResult, VideoResult, and AudioResult. Each category contains MediaId and OutputUrl.
       *
       * @param request GetVideoCharacterReplaceJobRequest
       * @return GetVideoCharacterReplaceJobResponse
       */
      Models::GetVideoCharacterReplaceJobResponse getVideoCharacterReplaceJob(const Models::GetVideoCharacterReplaceJobRequest &request);

      /**
       * @summary Queries video creative generation jobs.
       *
       * @param request GetVideoCreativeGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoCreativeGenerationJobResponse
       */
      Models::GetVideoCreativeGenerationJobResponse getVideoCreativeGenerationJobWithOptions(const Models::GetVideoCreativeGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries video creative generation jobs.
       *
       * @param request GetVideoCreativeGenerationJobRequest
       * @return GetVideoCreativeGenerationJobResponse
       */
      Models::GetVideoCreativeGenerationJobResponse getVideoCreativeGenerationJob(const Models::GetVideoCreativeGenerationJobRequest &request);

      /**
       * @summary Queries the status, input parameters, and video results of a video text removal job.
       *
       * @description Queries the status, input, parameters, and final results of a video text removal job based on the `JobId`.
       *
       * @param request GetVideoDetextJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoDetextJobResponse
       */
      Models::GetVideoDetextJobResponse getVideoDetextJobWithOptions(const Models::GetVideoDetextJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, input parameters, and video results of a video text removal job.
       *
       * @description Queries the status, input, parameters, and final results of a video text removal job based on the `JobId`.
       *
       * @param request GetVideoDetextJobRequest
       * @return GetVideoDetextJobResponse
       */
      Models::GetVideoDetextJobResponse getVideoDetextJob(const Models::GetVideoDetextJobRequest &request);

      /**
       * @summary Queries a video generation job.
       *
       * @param request GetVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJobWithOptions(const Models::GetVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a video generation job.
       *
       * @param request GetVideoGenerationJobRequest
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJob(const Models::GetVideoGenerationJobRequest &request);

      /**
       * @summary Queries a content understanding and creative script generation task.
       *
       * @description Queries the task status based on the JobId returned by SubmitVideoRemakeJob. Upon completion, returns the download URLs of the JSON files for the video content understanding results and the creative script. If the task fails, returns ErrorCode and ErrorMessage.
       *
       * @param request GetVideoRemakeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoRemakeJobResponse
       */
      Models::GetVideoRemakeJobResponse getVideoRemakeJobWithOptions(const Models::GetVideoRemakeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a content understanding and creative script generation task.
       *
       * @description Queries the task status based on the JobId returned by SubmitVideoRemakeJob. Upon completion, returns the download URLs of the JSON files for the video content understanding results and the creative script. If the task fails, returns ErrorCode and ErrorMessage.
       *
       * @param request GetVideoRemakeJobRequest
       * @return GetVideoRemakeJobResponse
       */
      Models::GetVideoRemakeJobResponse getVideoRemakeJob(const Models::GetVideoRemakeJobRequest &request);

      /**
       * @summary Submits a video rendering and compositing job.
       *
       * @param request GetVideoRenderJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoRenderJobResponse
       */
      Models::GetVideoRenderJobResponse getVideoRenderJobWithOptions(const Models::GetVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video rendering and compositing job.
       *
       * @param request GetVideoRenderJobRequest
       * @return GetVideoRenderJobResponse
       */
      Models::GetVideoRenderJobResponse getVideoRenderJob(const Models::GetVideoRenderJobRequest &request);

      /**
       * @summary Queries the status, input parameters, and multilingual outputs of a video translation job.
       *
       * @description Queries the status, input, parameters, and final results of a video translation job based on JobId.
       *
       * @param request GetVideoTranslationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoTranslationJobResponse
       */
      Models::GetVideoTranslationJobResponse getVideoTranslationJobWithOptions(const Models::GetVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, input parameters, and multilingual outputs of a video translation job.
       *
       * @description Queries the status, input, parameters, and final results of a video translation job based on JobId.
       *
       * @param request GetVideoTranslationJobRequest
       * @return GetVideoTranslationJobResponse
       */
      Models::GetVideoTranslationJobResponse getVideoTranslationJob(const Models::GetVideoTranslationJobRequest &request);

      /**
       * @summary Retrieves the membership plan and credit information of the Yike main account.
       *
       * @param request GetYikeAccountCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAccountCreditResponse
       */
      Models::GetYikeAccountCreditResponse getYikeAccountCreditWithOptions(const Models::GetYikeAccountCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the membership plan and credit information of the Yike main account.
       *
       * @param request GetYikeAccountCreditRequest
       * @return GetYikeAccountCreditResponse
       */
      Models::GetYikeAccountCreditResponse getYikeAccountCredit(const Models::GetYikeAccountCreditRequest &request);

      /**
       * @summary Queries the actual credits consumed by a task.
       *
       * @param request GetYikeJobCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeJobCreditResponse
       */
      Models::GetYikeJobCreditResponse getYikeJobCreditWithOptions(const Models::GetYikeJobCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the actual credits consumed by a task.
       *
       * @param request GetYikeJobCreditRequest
       * @return GetYikeJobCreditResponse
       */
      Models::GetYikeJobCreditResponse getYikeJobCredit(const Models::GetYikeJobCreditRequest &request);

      /**
       * @summary Imports media assets.
       *
       * @description ## Request description
       * This API operation queries media content understanding jobs.
       *
       * @param request ImportMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportMediaResponse
       */
      Models::ImportMediaResponse importMediaWithOptions(const Models::ImportMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports media assets.
       *
       * @description ## Request description
       * This API operation queries media content understanding jobs.
       *
       * @param request ImportMediaRequest
       * @return ImportMediaResponse
       */
      Models::ImportMediaResponse importMedia(const Models::ImportMediaRequest &request);

      /**
       * @summary Retrieves a paginated list of categories.
       *
       * @param request ListAssetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetCategoriesResponse
       */
      Models::ListAssetCategoriesResponse listAssetCategoriesWithOptions(const Models::ListAssetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of categories.
       *
       * @param request ListAssetCategoriesRequest
       * @return ListAssetCategoriesResponse
       */
      Models::ListAssetCategoriesResponse listAssetCategories(const Models::ListAssetCategoriesRequest &request);

      /**
       * @summary Queries the list of infinite canvases.
       *
       * @description ## Request description
       * This operation queries media asset content understanding jobs.
       *
       * @param request ListInfiniteCanvasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInfiniteCanvasesResponse
       */
      Models::ListInfiniteCanvasesResponse listInfiniteCanvasesWithOptions(const Models::ListInfiniteCanvasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of infinite canvases.
       *
       * @description ## Request description
       * This operation queries media asset content understanding jobs.
       *
       * @param request ListInfiniteCanvasesRequest
       * @return ListInfiniteCanvasesResponse
       */
      Models::ListInfiniteCanvasesResponse listInfiniteCanvases(const Models::ListInfiniteCanvasesRequest &request);

      /**
       * @summary Queries the list of projects.
       *
       * @description Queries the list of projects accessible to the current caller. You can use WorkspaceId to filter projects by workspace. For pagination, specify both PageNo and PageSize as positive integers starting from 1. If valid values are not provided for both parameters, the query defaults to page 1 with 10 entries per page. The response includes ProjectList but does not include TotalCount. MaxResults and NextToken are retained for backward compatibility and are not used for pagination.
       *
       * @param request ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of projects.
       *
       * @description Queries the list of projects accessible to the current caller. You can use WorkspaceId to filter projects by workspace. For pagination, specify both PageNo and PageSize as positive integers starting from 1. If valid values are not provided for both parameters, the query defaults to page 1 with 10 entries per page. The response includes ProjectList but does not include TotalCount. MaxResults and NextToken are retained for backward compatibility and are not used for pagination.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Queries a list of workspaces.
       *
       * @description Queries the list of workspaces accessible to the current caller. You can use PageNo and PageSize to paginate the results. The default page number is 1, and the default page size is 10. The response includes WorkspaceList and TotalCount. The ID of the default project for a workspace is returned in the DefaultProjectId field.
       *
       * @param request ListWorkspacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workspaces.
       *
       * @description Queries the list of workspaces accessible to the current caller. You can use PageNo and PageSize to paginate the results. The default page number is 1, and the default page size is 10. The response includes WorkspaceList and TotalCount. The ID of the default project for a workspace is returned in the DefaultProjectId field.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Pre-validates a video character replacement task.
       *
       * @description Before submitting a task, validates the input materials for a specified application. AppParams is a JSON-serialized string. The field names must match the input definition of the application corresponding to the AppId. Image, audio, and video materials must match the input types and be accessible.
       * If Status is Success, the validation passes and Result is an empty array. If Status is Failed, Result returns the failed parameter keys and error codes for each item. This operation does not create a task. After the validation passes, call SubmitVideoCharacterReplaceJob to submit the task.
       *
       * @param request PrecheckVideoCharacterReplaceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckVideoCharacterReplaceJobResponse
       */
      Models::PrecheckVideoCharacterReplaceJobResponse precheckVideoCharacterReplaceJobWithOptions(const Models::PrecheckVideoCharacterReplaceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-validates a video character replacement task.
       *
       * @description Before submitting a task, validates the input materials for a specified application. AppParams is a JSON-serialized string. The field names must match the input definition of the application corresponding to the AppId. Image, audio, and video materials must match the input types and be accessible.
       * If Status is Success, the validation passes and Result is an empty array. If Status is Failed, Result returns the failed parameter keys and error codes for each item. This operation does not create a task. After the validation passes, call SubmitVideoCharacterReplaceJob to submit the task.
       *
       * @param request PrecheckVideoCharacterReplaceJobRequest
       * @return PrecheckVideoCharacterReplaceJobResponse
       */
      Models::PrecheckVideoCharacterReplaceJobResponse precheckVideoCharacterReplaceJob(const Models::PrecheckVideoCharacterReplaceJobRequest &request);

      /**
       * @summary Retrieves media asset information that matches the specified parameters.
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves media asset information that matches the specified parameters.
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary Submits an asynchronous task for an agent node.
       *
       * @param request SubmitAgentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAgentJobResponse
       */
      Models::SubmitAgentJobResponse submitAgentJobWithOptions(const Models::SubmitAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous task for an agent node.
       *
       * @param request SubmitAgentJobRequest
       * @return SubmitAgentJobResponse
       */
      Models::SubmitAgentJobResponse submitAgentJob(const Models::SubmitAgentJobRequest &request);

      /**
       * @summary Submits an image generation task.
       *
       * @param request SubmitImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJobWithOptions(const Models::SubmitImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an image generation task.
       *
       * @param request SubmitImageGenerationJobRequest
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJob(const Models::SubmitImageGenerationJobRequest &request);

      /**
       * @summary Submits a media content understanding job.
       *
       * @description ## Request description
       * This API operation performs content understanding based on provided media files, such as video URLs. Additionally, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJobWithOptions(const Models::SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media content understanding job.
       *
       * @description ## Request description
       * This API operation performs content understanding based on provided media files, such as video URLs. Additionally, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJob(const Models::SubmitMediaComprehensionJobRequest &request);

      /**
       * @summary Submits a creative script generation task.
       *
       * @description This API generates a new voiceover script based on content understanding results and new product or avatar information. It also supports passing custom parameters through the UserData field, which are returned as-is in the callback.
       *
       * @param request SubmitRemakeScriptJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitRemakeScriptJobResponse
       */
      Models::SubmitRemakeScriptJobResponse submitRemakeScriptJobWithOptions(const Models::SubmitRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a creative script generation task.
       *
       * @description This API generates a new voiceover script based on content understanding results and new product or avatar information. It also supports passing custom parameters through the UserData field, which are returned as-is in the callback.
       *
       * @param request SubmitRemakeScriptJobRequest
       * @return SubmitRemakeScriptJobResponse
       */
      Models::SubmitRemakeScriptJobResponse submitRemakeScriptJob(const Models::SubmitRemakeScriptJobRequest &request);

      /**
       * @summary Submits a video character replacement job.
       *
       * @description Performs an asynchronous commit for a video character replacement node. First, call PrecheckVideoCharacterReplaceJob with the same AppId and AppParams to check the input materials.
       * A returned JobId only indicates that the node has been submitted, not that it has been completed. Use GetVideoCharacterReplaceJob or BatchGetVideoCharacterReplaceJobs to query the status and output results. ProjectId is used to specify a project, and FolderId is used to specify a file folder.
       *
       * @param request SubmitVideoCharacterReplaceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoCharacterReplaceJobResponse
       */
      Models::SubmitVideoCharacterReplaceJobResponse submitVideoCharacterReplaceJobWithOptions(const Models::SubmitVideoCharacterReplaceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video character replacement job.
       *
       * @description Performs an asynchronous commit for a video character replacement node. First, call PrecheckVideoCharacterReplaceJob with the same AppId and AppParams to check the input materials.
       * A returned JobId only indicates that the node has been submitted, not that it has been completed. Use GetVideoCharacterReplaceJob or BatchGetVideoCharacterReplaceJobs to query the status and output results. ProjectId is used to specify a project, and FolderId is used to specify a file folder.
       *
       * @param request SubmitVideoCharacterReplaceJobRequest
       * @return SubmitVideoCharacterReplaceJobResponse
       */
      Models::SubmitVideoCharacterReplaceJobResponse submitVideoCharacterReplaceJob(const Models::SubmitVideoCharacterReplaceJobRequest &request);

      /**
       * @summary Submits a video creative generation job.
       *
       * @param request SubmitVideoCreativeGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoCreativeGenerationJobResponse
       */
      Models::SubmitVideoCreativeGenerationJobResponse submitVideoCreativeGenerationJobWithOptions(const Models::SubmitVideoCreativeGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video creative generation job.
       *
       * @param request SubmitVideoCreativeGenerationJobRequest
       * @return SubmitVideoCreativeGenerationJobResponse
       */
      Models::SubmitVideoCreativeGenerationJobResponse submitVideoCreativeGenerationJob(const Models::SubmitVideoCreativeGenerationJobRequest &request);

      /**
       * @summary Submits an asynchronous video text erasure task that supports full-area erasure, time ranges, and specified regions.
       *
       * @description Submits an asynchronous video text erasure task. The input can be an accessible video URL or a Yike video media asset ID. You can configure the erasure time range and text region.
       *
       * @param request SubmitVideoDetextJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoDetextJobResponse
       */
      Models::SubmitVideoDetextJobResponse submitVideoDetextJobWithOptions(const Models::SubmitVideoDetextJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous video text erasure task that supports full-area erasure, time ranges, and specified regions.
       *
       * @description Submits an asynchronous video text erasure task. The input can be an accessible video URL or a Yike video media asset ID. You can configure the erasure time range and text region.
       *
       * @param request SubmitVideoDetextJobRequest
       * @return SubmitVideoDetextJobResponse
       */
      Models::SubmitVideoDetextJobResponse submitVideoDetextJob(const Models::SubmitVideoDetextJobRequest &request);

      /**
       * @summary Submits a video generation task.
       *
       * @param request SubmitVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJobWithOptions(const Models::SubmitVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video generation task.
       *
       * @param request SubmitVideoGenerationJobRequest
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJob(const Models::SubmitVideoGenerationJobRequest &request);

      /**
       * @summary Submits a content understanding and creative script generation task.
       *
       * @description Submits the original video and remake information such as new products and characters to asynchronously complete video content understanding and creative script generation. Uses the returned JobId to call GetVideoRemakeJob to query the progress and outputs. Video rendering requires a separate call to SubmitVideoRenderJob.
       *
       * @param request SubmitVideoRemakeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoRemakeJobResponse
       */
      Models::SubmitVideoRemakeJobResponse submitVideoRemakeJobWithOptions(const Models::SubmitVideoRemakeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a content understanding and creative script generation task.
       *
       * @description Submits the original video and remake information such as new products and characters to asynchronously complete video content understanding and creative script generation. Uses the returned JobId to call GetVideoRemakeJob to query the progress and outputs. Video rendering requires a separate call to SubmitVideoRenderJob.
       *
       * @param request SubmitVideoRemakeJobRequest
       * @return SubmitVideoRemakeJobResponse
       */
      Models::SubmitVideoRemakeJobResponse submitVideoRemakeJob(const Models::SubmitVideoRemakeJobRequest &request);

      /**
       * @summary Submits a video rendering and compositing task.
       *
       * @param request SubmitVideoRenderJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoRenderJobResponse
       */
      Models::SubmitVideoRenderJobResponse submitVideoRenderJobWithOptions(const Models::SubmitVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video rendering and compositing task.
       *
       * @param request SubmitVideoRenderJobRequest
       * @return SubmitVideoRenderJobResponse
       */
      Models::SubmitVideoRenderJobResponse submitVideoRenderJob(const Models::SubmitVideoRenderJobRequest &request);

      /**
       * @summary Submits an asynchronous video translation task that supports subtitle translation, voice translation, primary subtitle removal, and on-screen text translation.
       *
       * @description Submits an asynchronous video translation task. The input supports a media URL or a Yike media asset ID. The task parameters are used to select the source language, target language, and the translation capabilities to be enabled.
       *
       * @param request SubmitVideoTranslationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJobWithOptions(const Models::SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous video translation task that supports subtitle translation, voice translation, primary subtitle removal, and on-screen text translation.
       *
       * @description Submits an asynchronous video translation task. The input supports a media URL or a Yike media asset ID. The task parameters are used to select the source language, target language, and the translation capabilities to be enabled.
       *
       * @param request SubmitVideoTranslationJobRequest
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJob(const Models::SubmitVideoTranslationJobRequest &request);

      /**
       * @summary Updates a media asset category.
       *
       * @description After you create a media asset category, you can call this operation to update the name of the category by specifying its ID.
       *
       * @param request UpdateAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssetCategoryResponse
       */
      Models::UpdateAssetCategoryResponse updateAssetCategoryWithOptions(const Models::UpdateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a media asset category.
       *
       * @description After you create a media asset category, you can call this operation to update the name of the category by specifying its ID.
       *
       * @param request UpdateAssetCategoryRequest
       * @return UpdateAssetCategoryResponse
       */
      Models::UpdateAssetCategoryResponse updateAssetCategory(const Models::UpdateAssetCategoryRequest &request);

      /**
       * @summary Updates the information of an infinite canvas.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request UpdateInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInfiniteCanvasResponse
       */
      Models::UpdateInfiniteCanvasResponse updateInfiniteCanvasWithOptions(const Models::UpdateInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of an infinite canvas.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request UpdateInfiniteCanvasRequest
       * @return UpdateInfiniteCanvasResponse
       */
      Models::UpdateInfiniteCanvasResponse updateInfiniteCanvas(const Models::UpdateInfiniteCanvasRequest &request);

      /**
       * @summary Updates media asset information.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request UpdateMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMediaWithOptions(const Models::UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates media asset information.
       *
       * @description ## Request description
       * This API queries media asset content understanding jobs.
       *
       * @param request UpdateMediaRequest
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMedia(const Models::UpdateMediaRequest &request);

      /**
       * @summary Updates the name of a project.
       *
       * @description Updates the name of a project based on the ProjectId and uses Title to specify the new name. This operation only supports modifying the name and does not support modifying the description or cover image. The caller must have edit permissions for the project.
       *
       * @param request UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a project.
       *
       * @description Updates the name of a project based on the ProjectId and uses Title to specify the new name. This operation only supports modifying the name and does not support modifying the description or cover image. The caller must have edit permissions for the project.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
