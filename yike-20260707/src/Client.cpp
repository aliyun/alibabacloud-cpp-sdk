#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260707.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Yike20260707::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Yike20260707
{

AlibabaCloud::Yike20260707::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Yike";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("yike", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds members to a project.
 *
 * @description Adds users under the same Alibaba Cloud account to a specified project in the default workspace of the Alibaba Cloud account, and grants the Edit permission by default. ProjectId specifies the project ID. YikeUserIds specifies a comma-separated list of Yike user IDs, which are not Alibaba Cloud UIDs. Currently, only the default workspace of the Alibaba Cloud account is supported, and projects in newly created workspaces are not supported. This operation follows the behavior of the original member API operation: adding an existing member resets the project permissions. Regular members are assigned the Edit permission, and SuperAdmins of the default workspace retain the Manage permission. Only Alibaba Cloud accounts that have activated ProductionOpenAPI are supported. Default Alibaba Cloud account projects (pd_Alibaba Cloud account ID) are not supported.
 *
 * @param request AddProjectMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddProjectMembersResponse
 */
AddProjectMembersResponse Client::addProjectMembersWithOptions(const AddProjectMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasYikeUserIds()) {
    query["YikeUserIds"] = request.getYikeUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddProjectMembers"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddProjectMembersResponse>();
}

/**
 * @summary Adds members to a project.
 *
 * @description Adds users under the same Alibaba Cloud account to a specified project in the default workspace of the Alibaba Cloud account, and grants the Edit permission by default. ProjectId specifies the project ID. YikeUserIds specifies a comma-separated list of Yike user IDs, which are not Alibaba Cloud UIDs. Currently, only the default workspace of the Alibaba Cloud account is supported, and projects in newly created workspaces are not supported. This operation follows the behavior of the original member API operation: adding an existing member resets the project permissions. Regular members are assigned the Edit permission, and SuperAdmins of the default workspace retain the Manage permission. Only Alibaba Cloud accounts that have activated ProductionOpenAPI are supported. Default Alibaba Cloud account projects (pd_Alibaba Cloud account ID) are not supported.
 *
 * @param request AddProjectMembersRequest
 * @return AddProjectMembersResponse
 */
AddProjectMembersResponse Client::addProjectMembers(const AddProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addProjectMembersWithOptions(request, runtime);
}

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
BatchGetMediasResponse Client::batchGetMediasWithOptions(const BatchGetMediasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasBizConfig()) {
    query["BizConfig"] = request.getBizConfig();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasReturnDynamicMeta()) {
    query["ReturnDynamicMeta"] = request.getReturnDynamicMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetMedias"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetMediasResponse>();
}

/**
 * @summary Retrieves the information of multiple media assets.
 *
 * @description ## Request description
 * This API operation queries media asset content understanding jobs.
 *
 * @param request BatchGetMediasRequest
 * @return BatchGetMediasResponse
 */
BatchGetMediasResponse Client::batchGetMedias(const BatchGetMediasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediasWithOptions(request, runtime);
}

/**
 * @summary Queries video character replacement jobs in batches.
 *
 * @description Queries the status and results of video character replacement jobs in batches. JobIds is a comma-separated string of job IDs. The response includes a JobList. The input parameters for each job are located in the AppInputConfig field. For the single query operation GetVideoCharacterReplaceJob, the corresponding field is AppParams. When the Status is Finished, you can retrieve the output media assets from Result.
 *
 * @param request BatchGetVideoCharacterReplaceJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetVideoCharacterReplaceJobsResponse
 */
BatchGetVideoCharacterReplaceJobsResponse Client::batchGetVideoCharacterReplaceJobsWithOptions(const BatchGetVideoCharacterReplaceJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetVideoCharacterReplaceJobs"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetVideoCharacterReplaceJobsResponse>();
}

/**
 * @summary Queries video character replacement jobs in batches.
 *
 * @description Queries the status and results of video character replacement jobs in batches. JobIds is a comma-separated string of job IDs. The response includes a JobList. The input parameters for each job are located in the AppInputConfig field. For the single query operation GetVideoCharacterReplaceJob, the corresponding field is AppParams. When the Status is Finished, you can retrieve the output media assets from Result.
 *
 * @param request BatchGetVideoCharacterReplaceJobsRequest
 * @return BatchGetVideoCharacterReplaceJobsResponse
 */
BatchGetVideoCharacterReplaceJobsResponse Client::batchGetVideoCharacterReplaceJobs(const BatchGetVideoCharacterReplaceJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetVideoCharacterReplaceJobsWithOptions(request, runtime);
}

/**
 * @summary Cancels a generation task.
 *
 * @param request CancelGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelGenerationJobResponse
 */
CancelGenerationJobResponse Client::cancelGenerationJobWithOptions(const CancelGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelGenerationJobResponse>();
}

/**
 * @summary Cancels a generation task.
 *
 * @param request CancelGenerationJobRequest
 * @return CancelGenerationJobResponse
 */
CancelGenerationJobResponse Client::cancelGenerationJob(const CancelGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelGenerationJobWithOptions(request, runtime);
}

/**
 * @summary Creates a media asset category.
 *
 * @description Categories support up to three levels of hierarchy, and each level supports up to 100 subcategories.
 *
 * @param request CreateAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAssetCategoryResponse
 */
CreateAssetCategoryResponse Client::createAssetCategoryWithOptions(const CreateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAssetCategoryResponse>();
}

/**
 * @summary Creates a media asset category.
 *
 * @description Categories support up to three levels of hierarchy, and each level supports up to 100 subcategories.
 *
 * @param request CreateAssetCategoryRequest
 * @return CreateAssetCategoryResponse
 */
CreateAssetCategoryResponse Client::createAssetCategory(const CreateAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAssetCategoryWithOptions(request, runtime);
}

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
CreateInfiniteCanvasResponse Client::createInfiniteCanvasWithOptions(const CreateInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverUrl()) {
    query["CoverUrl"] = request.getCoverUrl();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInfiniteCanvas"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInfiniteCanvasResponse>();
}

/**
 * @summary Creates an infinite canvas.
 *
 * @description ## Request description
 * This API queries media asset content understanding jobs.
 *
 * @param request CreateInfiniteCanvasRequest
 * @return CreateInfiniteCanvasResponse
 */
CreateInfiniteCanvasResponse Client::createInfiniteCanvas(const CreateInfiniteCanvasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInfiniteCanvasWithOptions(request, runtime);
}

/**
 * @summary Creates a project.
 *
 * @description Creates a project in a specified workspace and returns the ProjectId. If WorkspaceId is not specified, the default workspace of the current account is used. After the project is created, you can call GetProject to query the details or call ListProjects to list projects.
 *
 * @param request CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Creates a project.
 *
 * @description Creates a project in a specified workspace and returns the ProjectId. If WorkspaceId is not specified, the default workspace of the current account is used. After the project is created, you can call GetProject to query the details or call ListProjects to list projects.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary Creates a studio.
 *
 * @description Creates a studio and triggers automatic creation of a default project for the studio. Returns the WorkspaceId and the ProjectId of the default project. You can directly use the ProjectId without creating the default project again.
 *
 * @param request CreateWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserCountLimit()) {
    query["UserCountLimit"] = request.getUserCountLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates a studio.
 *
 * @description Creates a studio and triggers automatic creation of a default project for the studio. Returns the WorkspaceId and the ProjectId of the default project. You can directly use the ProjectId without creating the default project again.
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a media asset category.
 *
 * @description This operation also deletes its subcategories, including level-2 and level-3 subcategories. Proceed with caution.
 *
 * @param request DeleteAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAssetCategoryResponse
 */
DeleteAssetCategoryResponse Client::deleteAssetCategoryWithOptions(const DeleteAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAssetCategoryResponse>();
}

/**
 * @summary Deletes a media asset category.
 *
 * @description This operation also deletes its subcategories, including level-2 and level-3 subcategories. Proceed with caution.
 *
 * @param request DeleteAssetCategoryRequest
 * @return DeleteAssetCategoryResponse
 */
DeleteAssetCategoryResponse Client::deleteAssetCategory(const DeleteAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAssetCategoryWithOptions(request, runtime);
}

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
DeleteInfiniteCanvasResponse Client::deleteInfiniteCanvasWithOptions(const DeleteInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCanvasId()) {
    query["CanvasId"] = request.getCanvasId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInfiniteCanvas"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInfiniteCanvasResponse>();
}

/**
 * @summary Deletes an infinite canvas.
 *
 * @description ## Request description
 * This API operation queries media asset content understanding jobs.
 *
 * @param request DeleteInfiniteCanvasRequest
 * @return DeleteInfiniteCanvasResponse
 */
DeleteInfiniteCanvasResponse Client::deleteInfiniteCanvas(const DeleteInfiniteCanvasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInfiniteCanvasWithOptions(request, runtime);
}

/**
 * @summary Deletes media asset information.
 *
 * @param request DeleteMediasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediasResponse
 */
DeleteMediasResponse Client::deleteMediasWithOptions(const DeleteMediasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizConfig()) {
    query["BizConfig"] = request.getBizConfig();
  }

  if (!!request.hasDeletePhysicalFiles()) {
    query["DeletePhysicalFiles"] = request.getDeletePhysicalFiles();
  }

  if (!!request.hasInputURLs()) {
    query["InputURLs"] = request.getInputURLs();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMedias"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediasResponse>();
}

/**
 * @summary Deletes media asset information.
 *
 * @param request DeleteMediasRequest
 * @return DeleteMediasResponse
 */
DeleteMediasResponse Client::deleteMedias(const DeleteMediasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediasWithOptions(request, runtime);
}

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
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary Deletes a project.
 *
 * @description Deletes a project by ProjectId. The caller must have project management permissions.
 * Default projects cannot be deleted. If you attempt to delete a default project, DefaultProductionNotSupported is returned. This operation marks the project as deleted and does not physically delete all assets in the project.
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectWithOptions(request, runtime);
}

/**
 * @summary Retrieves the logon token for an enterprise account.
 *
 * @description >Notice:  The AI generation-related API operations in the current 2026-03-19 API version will be retired soon. Upgrade to the 2026-07-07 API version.
 *
 * @param request GenerateYikeLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateYikeLoginTokenResponse
 */
GenerateYikeLoginTokenResponse Client::generateYikeLoginTokenWithOptions(const GenerateYikeLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCreateProduction()) {
    query["AutoCreateProduction"] = request.getAutoCreateProduction();
  }

  if (!!request.hasExpires()) {
    query["Expires"] = request.getExpires();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.getNickName();
  }

  if (!!request.hasProductionAuth()) {
    query["ProductionAuth"] = request.getProductionAuth();
  }

  if (!!request.hasSubUserCredit()) {
    query["SubUserCredit"] = request.getSubUserCredit();
  }

  if (!!request.hasTenant()) {
    query["Tenant"] = request.getTenant();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateYikeLoginToken"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateYikeLoginTokenResponse>();
}

/**
 * @summary Retrieves the logon token for an enterprise account.
 *
 * @description >Notice:  The AI generation-related API operations in the current 2026-03-19 API version will be retired soon. Upgrade to the 2026-07-07 API version.
 *
 * @param request GenerateYikeLoginTokenRequest
 * @return GenerateYikeLoginTokenResponse
 */
GenerateYikeLoginTokenResponse Client::generateYikeLoginToken(const GenerateYikeLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateYikeLoginTokenWithOptions(request, runtime);
}

/**
 * @summary Queries an asynchronous task of the agent node.
 *
 * @param request GetAgentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentJobResponse
 */
GetAgentJobResponse Client::getAgentJobWithOptions(const GetAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentJobResponse>();
}

/**
 * @summary Queries an asynchronous task of the agent node.
 *
 * @param request GetAgentJobRequest
 * @return GetAgentJobResponse
 */
GetAgentJobResponse Client::getAgentJob(const GetAgentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified category and a list of its subcategories.
 *
 * @param request GetAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssetCategoryResponse
 */
GetAssetCategoryResponse Client::getAssetCategoryWithOptions(const GetAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssetCategoryResponse>();
}

/**
 * @summary Retrieves the details of a specified category and a list of its subcategories.
 *
 * @param request GetAssetCategoryRequest
 * @return GetAssetCategoryResponse
 */
GetAssetCategoryResponse Client::getAssetCategory(const GetAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries an image generation task.
 *
 * @param request GetImageGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageGenerationJobResponse
 */
GetImageGenerationJobResponse Client::getImageGenerationJobWithOptions(const GetImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageGenerationJobResponse>();
}

/**
 * @summary Queries an image generation task.
 *
 * @param request GetImageGenerationJobRequest
 * @return GetImageGenerationJobResponse
 */
GetImageGenerationJobResponse Client::getImageGenerationJob(const GetImageGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageGenerationJobWithOptions(request, runtime);
}

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
GetInfiniteCanvasResponse Client::getInfiniteCanvasWithOptions(const GetInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCanvasId()) {
    query["CanvasId"] = request.getCanvasId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInfiniteCanvas"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInfiniteCanvasResponse>();
}

/**
 * @summary Queries an infinite canvas.
 *
 * @description ## Request description
 * This API queries media asset content understanding jobs.
 *
 * @param request GetInfiniteCanvasRequest
 * @return GetInfiniteCanvasResponse
 */
GetInfiniteCanvasResponse Client::getInfiniteCanvas(const GetInfiniteCanvasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInfiniteCanvasWithOptions(request, runtime);
}

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
GetMediaResponse Client::getMediaWithOptions(const GetMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasBizConfig()) {
    query["BizConfig"] = request.getBizConfig();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaResponse>();
}

/**
 * @summary Queries media assets.
 *
 * @description ## Request description
 * This API operation queries media asset content understanding jobs.
 *
 * @param request GetMediaRequest
 * @return GetMediaResponse
 */
GetMediaResponse Client::getMedia(const GetMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaWithOptions(request, runtime);
}

/**
 * @summary Queries media content understanding jobs.
 *
 * @description ## Request description
 * This API operation queries media content understanding jobs.
 *
 * @param request GetMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJobWithOptions(const GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaComprehensionJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaComprehensionJobResponse>();
}

/**
 * @summary Queries media content understanding jobs.
 *
 * @description ## Request description
 * This API operation queries media content understanding jobs.
 *
 * @param request GetMediaComprehensionJobRequest
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJob(const GetMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a project.
 *
 * @description Queries the basic information of a project and the project permissions of the current caller by ProjectId. The project information is located in the Project object of the response and does not include the project asset list.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary Queries the details of a project.
 *
 * @description Queries the basic information of a project and the project permissions of the current caller by ProjectId. The project information is located in the Project object of the response and does not include the project asset list.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary Queries a creative script generation task.
 *
 * @param request GetRemakeScriptJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRemakeScriptJobResponse
 */
GetRemakeScriptJobResponse Client::getRemakeScriptJobWithOptions(const GetRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRemakeScriptJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRemakeScriptJobResponse>();
}

/**
 * @summary Queries a creative script generation task.
 *
 * @param request GetRemakeScriptJobRequest
 * @return GetRemakeScriptJobResponse
 */
GetRemakeScriptJobResponse Client::getRemakeScriptJob(const GetRemakeScriptJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRemakeScriptJobWithOptions(request, runtime);
}

/**
 * @summary Queries a video character replacement task.
 *
 * @description Queries the status and result of a single task by using the JobId returned by the submit operation. When Status is Finished, you can read the output media assets in Result. Executing indicates that the task is still running.
 * This operation uses AppParams to return the task input parameters. The corresponding field name in the batch query operation is AppInputConfig. The output results are categorized into ImageResult, VideoResult, and AudioResult. Each item contains MediaId and OutputUrl.
 *
 * @param request GetVideoCharacterReplaceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoCharacterReplaceJobResponse
 */
GetVideoCharacterReplaceJobResponse Client::getVideoCharacterReplaceJobWithOptions(const GetVideoCharacterReplaceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoCharacterReplaceJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoCharacterReplaceJobResponse>();
}

/**
 * @summary Queries a video character replacement task.
 *
 * @description Queries the status and result of a single task by using the JobId returned by the submit operation. When Status is Finished, you can read the output media assets in Result. Executing indicates that the task is still running.
 * This operation uses AppParams to return the task input parameters. The corresponding field name in the batch query operation is AppInputConfig. The output results are categorized into ImageResult, VideoResult, and AudioResult. Each item contains MediaId and OutputUrl.
 *
 * @param request GetVideoCharacterReplaceJobRequest
 * @return GetVideoCharacterReplaceJobResponse
 */
GetVideoCharacterReplaceJobResponse Client::getVideoCharacterReplaceJob(const GetVideoCharacterReplaceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoCharacterReplaceJobWithOptions(request, runtime);
}

/**
 * @summary Queries video creative generation jobs.
 *
 * @param request GetVideoCreativeGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoCreativeGenerationJobResponse
 */
GetVideoCreativeGenerationJobResponse Client::getVideoCreativeGenerationJobWithOptions(const GetVideoCreativeGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoCreativeGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoCreativeGenerationJobResponse>();
}

/**
 * @summary Queries video creative generation jobs.
 *
 * @param request GetVideoCreativeGenerationJobRequest
 * @return GetVideoCreativeGenerationJobResponse
 */
GetVideoCreativeGenerationJobResponse Client::getVideoCreativeGenerationJob(const GetVideoCreativeGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoCreativeGenerationJobWithOptions(request, runtime);
}

/**
 * @summary Queries the status, input parameters, and video results of a video text removal job.
 *
 * @description Queries the status, input, parameters, and final results of a video text removal job based on the `JobId`.
 *
 * @param request GetVideoDetextJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoDetextJobResponse
 */
GetVideoDetextJobResponse Client::getVideoDetextJobWithOptions(const GetVideoDetextJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVideoDetextJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoDetextJobResponse>();
}

/**
 * @summary Queries the status, input parameters, and video results of a video text removal job.
 *
 * @description Queries the status, input, parameters, and final results of a video text removal job based on the `JobId`.
 *
 * @param request GetVideoDetextJobRequest
 * @return GetVideoDetextJobResponse
 */
GetVideoDetextJobResponse Client::getVideoDetextJob(const GetVideoDetextJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoDetextJobWithOptions(request, runtime);
}

/**
 * @summary Queries a video generation job.
 *
 * @param request GetVideoGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoGenerationJobResponse
 */
GetVideoGenerationJobResponse Client::getVideoGenerationJobWithOptions(const GetVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoGenerationJobResponse>();
}

/**
 * @summary Queries a video generation job.
 *
 * @param request GetVideoGenerationJobRequest
 * @return GetVideoGenerationJobResponse
 */
GetVideoGenerationJobResponse Client::getVideoGenerationJob(const GetVideoGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoGenerationJobWithOptions(request, runtime);
}

/**
 * @summary Queries a content understanding and creative script generation task.
 *
 * @description Queries the task status based on the JobId returned by SubmitVideoRemakeJob. Upon completion, returns the download URLs of the JSON files for the video content understanding results and the creative script. If the task fails, returns ErrorCode and ErrorMessage.
 *
 * @param request GetVideoRemakeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoRemakeJobResponse
 */
GetVideoRemakeJobResponse Client::getVideoRemakeJobWithOptions(const GetVideoRemakeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoRemakeJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoRemakeJobResponse>();
}

/**
 * @summary Queries a content understanding and creative script generation task.
 *
 * @description Queries the task status based on the JobId returned by SubmitVideoRemakeJob. Upon completion, returns the download URLs of the JSON files for the video content understanding results and the creative script. If the task fails, returns ErrorCode and ErrorMessage.
 *
 * @param request GetVideoRemakeJobRequest
 * @return GetVideoRemakeJobResponse
 */
GetVideoRemakeJobResponse Client::getVideoRemakeJob(const GetVideoRemakeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoRemakeJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video rendering and compositing task.
 *
 * @param request GetVideoRenderJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoRenderJobResponse
 */
GetVideoRenderJobResponse Client::getVideoRenderJobWithOptions(const GetVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoRenderJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoRenderJobResponse>();
}

/**
 * @summary Submits a video rendering and compositing task.
 *
 * @param request GetVideoRenderJobRequest
 * @return GetVideoRenderJobResponse
 */
GetVideoRenderJobResponse Client::getVideoRenderJob(const GetVideoRenderJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoRenderJobWithOptions(request, runtime);
}

/**
 * @summary Queries the status, input parameters, and multilingual outputs of a video translation job.
 *
 * @description Queries the status, input, parameters, and final results of a video translation job based on JobId.
 *
 * @param request GetVideoTranslationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoTranslationJobResponse
 */
GetVideoTranslationJobResponse Client::getVideoTranslationJobWithOptions(const GetVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVideoTranslationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoTranslationJobResponse>();
}

/**
 * @summary Queries the status, input parameters, and multilingual outputs of a video translation job.
 *
 * @description Queries the status, input, parameters, and final results of a video translation job based on JobId.
 *
 * @param request GetVideoTranslationJobRequest
 * @return GetVideoTranslationJobResponse
 */
GetVideoTranslationJobResponse Client::getVideoTranslationJob(const GetVideoTranslationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoTranslationJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the membership plan and credit information of the Yike main account.
 *
 * @param request GetYikeAccountCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAccountCreditResponse
 */
GetYikeAccountCreditResponse Client::getYikeAccountCreditWithOptions(const GetYikeAccountCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetYikeAccountCredit"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAccountCreditResponse>();
}

/**
 * @summary Retrieves the membership plan and credit information of the Yike main account.
 *
 * @param request GetYikeAccountCreditRequest
 * @return GetYikeAccountCreditResponse
 */
GetYikeAccountCreditResponse Client::getYikeAccountCredit(const GetYikeAccountCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAccountCreditWithOptions(request, runtime);
}

/**
 * @summary Queries the actual credits consumed by a task.
 *
 * @param request GetYikeJobCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeJobCreditResponse
 */
GetYikeJobCreditResponse Client::getYikeJobCreditWithOptions(const GetYikeJobCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetYikeJobCredit"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeJobCreditResponse>();
}

/**
 * @summary Queries the actual credits consumed by a task.
 *
 * @param request GetYikeJobCreditRequest
 * @return GetYikeJobCreditResponse
 */
GetYikeJobCreditResponse Client::getYikeJobCredit(const GetYikeJobCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeJobCreditWithOptions(request, runtime);
}

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
ImportMediaResponse Client::importMediaWithOptions(const ImportMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizConfig()) {
    query["BizConfig"] = request.getBizConfig();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDynamicMetaData()) {
    query["DynamicMetaData"] = request.getDynamicMetaData();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasImportSource()) {
    query["ImportSource"] = request.getImportSource();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.getMediaTags();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegisterConfig()) {
    query["RegisterConfig"] = request.getRegisterConfig();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasYikeAssetConfig()) {
    query["YikeAssetConfig"] = request.getYikeAssetConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportMediaResponse>();
}

/**
 * @summary Imports media assets.
 *
 * @description ## Request description
 * This API operation queries media content understanding jobs.
 *
 * @param request ImportMediaRequest
 * @return ImportMediaResponse
 */
ImportMediaResponse Client::importMedia(const ImportMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importMediaWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of categories.
 *
 * @param request ListAssetCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAssetCategoriesResponse
 */
ListAssetCategoriesResponse Client::listAssetCategoriesWithOptions(const ListAssetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAssetCategories"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAssetCategoriesResponse>();
}

/**
 * @summary Retrieves a paginated list of categories.
 *
 * @param request ListAssetCategoriesRequest
 * @return ListAssetCategoriesResponse
 */
ListAssetCategoriesResponse Client::listAssetCategories(const ListAssetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssetCategoriesWithOptions(request, runtime);
}

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
ListInfiniteCanvasesResponse Client::listInfiniteCanvasesWithOptions(const ListInfiniteCanvasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInfiniteCanvases"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInfiniteCanvasesResponse>();
}

/**
 * @summary Queries the list of infinite canvases.
 *
 * @description ## Request description
 * This operation queries media asset content understanding jobs.
 *
 * @param request ListInfiniteCanvasesRequest
 * @return ListInfiniteCanvasesResponse
 */
ListInfiniteCanvasesResponse Client::listInfiniteCanvases(const ListInfiniteCanvasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInfiniteCanvasesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of projects.
 *
 * @description Queries the list of projects accessible to the current caller. You can use WorkspaceId to filter projects by workspace.
 * For pagination, specify both PageNo and PageSize with valid positive integers starting from 1. If valid values are not provided for both parameters, the query defaults to page 1 with 10 entries per page. The response returns ProjectList but does not return TotalCount. MaxResults and NextToken are retained for compatibility and are not used for current pagination.
 *
 * @param request ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary Queries the list of projects.
 *
 * @description Queries the list of projects accessible to the current caller. You can use WorkspaceId to filter projects by workspace.
 * For pagination, specify both PageNo and PageSize with valid positive integers starting from 1. If valid values are not provided for both parameters, the query defaults to page 1 with 10 entries per page. The response returns ProjectList but does not return TotalCount. MaxResults and NextToken are retained for compatibility and are not used for current pagination.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of workspaces.
 *
 * @description Queries a list of workspaces accessible to the current caller. Pagination is supported by using PageNo and PageSize. The default value of PageNo is 1, and the default value of PageSize is 10. The response includes WorkspaceList and TotalCount. The ID of the default project for a workspace is returned in the DefaultProjectId field.
 *
 * @param request ListWorkspacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Queries a list of workspaces.
 *
 * @description Queries a list of workspaces accessible to the current caller. Pagination is supported by using PageNo and PageSize. The default value of PageNo is 1, and the default value of PageSize is 10. The response includes WorkspaceList and TotalCount. The ID of the default project for a workspace is returned in the DefaultProjectId field.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkspacesWithOptions(request, runtime);
}

/**
 * @summary Pre-validates a video character replacement task.
 *
 * @description Validates the input materials of a specified application before submitting a task. AppParams is a JSON-serialized string. The field names must be consistent with the input definition of the application corresponding to AppId. Image, audio, and video materials must match the input types and be accessible.
 * If Status is Success, the validation passes and Result is an empty array. If Status is Failed, Result returns the failed parameter Key and ErrorCode for each item. This operation does not create a task. After the validation passes, call SubmitVideoCharacterReplaceJob to submit the task.
 *
 * @param request PrecheckVideoCharacterReplaceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrecheckVideoCharacterReplaceJobResponse
 */
PrecheckVideoCharacterReplaceJobResponse Client::precheckVideoCharacterReplaceJobWithOptions(const PrecheckVideoCharacterReplaceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppParams()) {
    query["AppParams"] = request.getAppParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrecheckVideoCharacterReplaceJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrecheckVideoCharacterReplaceJobResponse>();
}

/**
 * @summary Pre-validates a video character replacement task.
 *
 * @description Validates the input materials of a specified application before submitting a task. AppParams is a JSON-serialized string. The field names must be consistent with the input definition of the application corresponding to AppId. Image, audio, and video materials must match the input types and be accessible.
 * If Status is Success, the validation passes and Result is an empty array. If Status is Failed, Result returns the failed parameter Key and ErrorCode for each item. This operation does not create a task. After the validation passes, call SubmitVideoCharacterReplaceJob to submit the task.
 *
 * @param request PrecheckVideoCharacterReplaceJobRequest
 * @return PrecheckVideoCharacterReplaceJobResponse
 */
PrecheckVideoCharacterReplaceJobResponse Client::precheckVideoCharacterReplaceJob(const PrecheckVideoCharacterReplaceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return precheckVideoCharacterReplaceJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves media asset information that matches the specified parameters.
 *
 * @param request SearchMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMediaWithOptions(const SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizConfig()) {
    query["BizConfig"] = request.getBizConfig();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasMatch()) {
    query["Match"] = request.getMatch();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasScrollToken()) {
    query["ScrollToken"] = request.getScrollToken();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaResponse>();
}

/**
 * @summary Retrieves media asset information that matches the specified parameters.
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary Submits an asynchronous task for an agent node.
 *
 * @param request SubmitAgentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAgentJobResponse
 */
SubmitAgentJobResponse Client::submitAgentJobWithOptions(const SubmitAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.getNotifyUrl();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSkill()) {
    query["Skill"] = request.getSkill();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAgentJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAgentJobResponse>();
}

/**
 * @summary Submits an asynchronous task for an agent node.
 *
 * @param request SubmitAgentJobRequest
 * @return SubmitAgentJobResponse
 */
SubmitAgentJobResponse Client::submitAgentJob(const SubmitAgentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAgentJobWithOptions(request, runtime);
}

/**
 * @summary Submits an image generation task.
 *
 * @param request SubmitImageGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImageGenerationJobResponse
 */
SubmitImageGenerationJobResponse Client::submitImageGenerationJobWithOptions(const SubmitImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    query["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasN()) {
    query["N"] = request.getN();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitImageGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImageGenerationJobResponse>();
}

/**
 * @summary Submits an image generation task.
 *
 * @param request SubmitImageGenerationJobRequest
 * @return SubmitImageGenerationJobResponse
 */
SubmitImageGenerationJobResponse Client::submitImageGenerationJob(const SubmitImageGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitImageGenerationJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media asset content understanding job.
 *
 * @description ## Request description
 * This operation performs content understanding based on the provided media asset files, such as video URLs. Additionally, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
 *
 * @param request SubmitMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJobWithOptions(const SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaComprehensionJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaComprehensionJobResponse>();
}

/**
 * @summary Submits a media asset content understanding job.
 *
 * @description ## Request description
 * This operation performs content understanding based on the provided media asset files, such as video URLs. Additionally, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
 *
 * @param request SubmitMediaComprehensionJobRequest
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJob(const SubmitMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary Submits a creative script generation task.
 *
 * @description This API generates a new voiceover script based on content understanding results and new product or avatar information. It also supports passing custom parameters through the UserData field, which are returned as-is in the callback.
 *
 * @param request SubmitRemakeScriptJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitRemakeScriptJobResponse
 */
SubmitRemakeScriptJobResponse Client::submitRemakeScriptJobWithOptions(const SubmitRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRemakeParams()) {
    query["RemakeParams"] = request.getRemakeParams();
  }

  if (!!request.hasRemakeType()) {
    query["RemakeType"] = request.getRemakeType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitRemakeScriptJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitRemakeScriptJobResponse>();
}

/**
 * @summary Submits a creative script generation task.
 *
 * @description This API generates a new voiceover script based on content understanding results and new product or avatar information. It also supports passing custom parameters through the UserData field, which are returned as-is in the callback.
 *
 * @param request SubmitRemakeScriptJobRequest
 * @return SubmitRemakeScriptJobResponse
 */
SubmitRemakeScriptJobResponse Client::submitRemakeScriptJob(const SubmitRemakeScriptJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitRemakeScriptJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video character replacement task.
 *
 * @description Submits a video character replacement node via asynchronous commit. Invoke PrecheckVideoCharacterReplaceJob with the same AppId and AppParams to validate the input assets first.
 * The returned JobId only indicates that the node is submitted, not completed. Use GetVideoCharacterReplaceJob or BatchGetVideoCharacterReplaceJobs to query the status and output results. ProjectId specifies the project, and FolderId specifies the file folder.
 *
 * @param request SubmitVideoCharacterReplaceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoCharacterReplaceJobResponse
 */
SubmitVideoCharacterReplaceJobResponse Client::submitVideoCharacterReplaceJobWithOptions(const SubmitVideoCharacterReplaceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppParams()) {
    body["AppParams"] = request.getAppParams();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitVideoCharacterReplaceJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoCharacterReplaceJobResponse>();
}

/**
 * @summary Submits a video character replacement task.
 *
 * @description Submits a video character replacement node via asynchronous commit. Invoke PrecheckVideoCharacterReplaceJob with the same AppId and AppParams to validate the input assets first.
 * The returned JobId only indicates that the node is submitted, not completed. Use GetVideoCharacterReplaceJob or BatchGetVideoCharacterReplaceJobs to query the status and output results. ProjectId specifies the project, and FolderId specifies the file folder.
 *
 * @param request SubmitVideoCharacterReplaceJobRequest
 * @return SubmitVideoCharacterReplaceJobResponse
 */
SubmitVideoCharacterReplaceJobResponse Client::submitVideoCharacterReplaceJob(const SubmitVideoCharacterReplaceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoCharacterReplaceJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video creative generation job.
 *
 * @param request SubmitVideoCreativeGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoCreativeGenerationJobResponse
 */
SubmitVideoCreativeGenerationJobResponse Client::submitVideoCreativeGenerationJobWithOptions(const SubmitVideoCreativeGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasAvatarData()) {
    query["AvatarData"] = request.getAvatarData();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
  }

  if (!!request.hasOutputLanguages()) {
    query["OutputLanguages"] = request.getOutputLanguages();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasUserMaterials()) {
    query["UserMaterials"] = request.getUserMaterials();
  }

  if (!!request.hasWithSubtitles()) {
    query["WithSubtitles"] = request.getWithSubtitles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVideoCreativeGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoCreativeGenerationJobResponse>();
}

/**
 * @summary Submits a video creative generation job.
 *
 * @param request SubmitVideoCreativeGenerationJobRequest
 * @return SubmitVideoCreativeGenerationJobResponse
 */
SubmitVideoCreativeGenerationJobResponse Client::submitVideoCreativeGenerationJob(const SubmitVideoCreativeGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoCreativeGenerationJobWithOptions(request, runtime);
}

/**
 * @summary Submits an asynchronous video text erasure task that supports full-area erasure, time ranges, and specified regions.
 *
 * @description Submits an asynchronous video text erasure task. The input can be an accessible video URL or a Yike video media asset ID. You can configure the erasure time range and text region.
 *
 * @param request SubmitVideoDetextJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoDetextJobResponse
 */
SubmitVideoDetextJobResponse Client::submitVideoDetextJobWithOptions(const SubmitVideoDetextJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    body["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasOutput()) {
    body["Output"] = request.getOutput();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitVideoDetextJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoDetextJobResponse>();
}

/**
 * @summary Submits an asynchronous video text erasure task that supports full-area erasure, time ranges, and specified regions.
 *
 * @description Submits an asynchronous video text erasure task. The input can be an accessible video URL or a Yike video media asset ID. You can configure the erasure time range and text region.
 *
 * @param request SubmitVideoDetextJobRequest
 * @return SubmitVideoDetextJobResponse
 */
SubmitVideoDetextJobResponse Client::submitVideoDetextJob(const SubmitVideoDetextJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoDetextJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video generation task.
 *
 * @param request SubmitVideoGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoGenerationJobResponse
 */
SubmitVideoGenerationJobResponse Client::submitVideoGenerationJobWithOptions(const SubmitVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    query["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasN()) {
    query["N"] = request.getN();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.getOutput();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVideoGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoGenerationJobResponse>();
}

/**
 * @summary Submits a video generation task.
 *
 * @param request SubmitVideoGenerationJobRequest
 * @return SubmitVideoGenerationJobResponse
 */
SubmitVideoGenerationJobResponse Client::submitVideoGenerationJob(const SubmitVideoGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoGenerationJobWithOptions(request, runtime);
}

/**
 * @summary Submits a content understanding and creative script generation task.
 *
 * @description Submits the original video and remake information such as new products and characters to asynchronously complete video content understanding and creative script generation. Uses the returned JobId to call GetVideoRemakeJob to query the progress and outputs. Video rendering requires a separate call to SubmitVideoRenderJob.
 *
 * @param request SubmitVideoRemakeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoRemakeJobResponse
 */
SubmitVideoRemakeJobResponse Client::submitVideoRemakeJobWithOptions(const SubmitVideoRemakeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasRemakeParams()) {
    query["RemakeParams"] = request.getRemakeParams();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVideoRemakeJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoRemakeJobResponse>();
}

/**
 * @summary Submits a content understanding and creative script generation task.
 *
 * @description Submits the original video and remake information such as new products and characters to asynchronously complete video content understanding and creative script generation. Uses the returned JobId to call GetVideoRemakeJob to query the progress and outputs. Video rendering requires a separate call to SubmitVideoRenderJob.
 *
 * @param request SubmitVideoRemakeJobRequest
 * @return SubmitVideoRemakeJobResponse
 */
SubmitVideoRemakeJobResponse Client::submitVideoRemakeJob(const SubmitVideoRemakeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoRemakeJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video rendering and compositing task.
 *
 * @param request SubmitVideoRenderJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoRenderJobResponse
 */
SubmitVideoRenderJobResponse Client::submitVideoRenderJobWithOptions(const SubmitVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScript()) {
    query["Script"] = request.getScript();
  }

  if (!!request.hasSettings()) {
    query["Settings"] = request.getSettings();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVideoRenderJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoRenderJobResponse>();
}

/**
 * @summary Submits a video rendering and compositing task.
 *
 * @param request SubmitVideoRenderJobRequest
 * @return SubmitVideoRenderJobResponse
 */
SubmitVideoRenderJobResponse Client::submitVideoRenderJob(const SubmitVideoRenderJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoRenderJobWithOptions(request, runtime);
}

/**
 * @summary Submits an asynchronous video translation task that supports subtitle translation, voice translation, primary subtitle removal, and on-screen text translation.
 *
 * @description Submits an asynchronous video translation task. The input supports a media URL or a Yike media asset ID. The task parameters are used to select the source language, target language, and the translation capabilities to be enabled.
 *
 * @param request SubmitVideoTranslationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJobWithOptions(const SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    body["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.getJobType();
  }

  if (!!request.hasOutput()) {
    body["Output"] = request.getOutput();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitVideoTranslationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoTranslationJobResponse>();
}

/**
 * @summary Submits an asynchronous video translation task that supports subtitle translation, voice translation, primary subtitle removal, and on-screen text translation.
 *
 * @description Submits an asynchronous video translation task. The input supports a media URL or a Yike media asset ID. The task parameters are used to select the source language, target language, and the translation capabilities to be enabled.
 *
 * @param request SubmitVideoTranslationJobRequest
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJob(const SubmitVideoTranslationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoTranslationJobWithOptions(request, runtime);
}

/**
 * @summary Updates a media asset category.
 *
 * @description After you create a media asset category, you can call this operation to update the name of the category by specifying its ID.
 *
 * @param request UpdateAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssetCategoryResponse
 */
UpdateAssetCategoryResponse Client::updateAssetCategoryWithOptions(const UpdateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAssetCategoryResponse>();
}

/**
 * @summary Updates a media asset category.
 *
 * @description After you create a media asset category, you can call this operation to update the name of the category by specifying its ID.
 *
 * @param request UpdateAssetCategoryRequest
 * @return UpdateAssetCategoryResponse
 */
UpdateAssetCategoryResponse Client::updateAssetCategory(const UpdateAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssetCategoryWithOptions(request, runtime);
}

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
UpdateInfiniteCanvasResponse Client::updateInfiniteCanvasWithOptions(const UpdateInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCanvasId()) {
    query["CanvasId"] = request.getCanvasId();
  }

  if (!!request.hasCoverUrl()) {
    query["CoverUrl"] = request.getCoverUrl();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInfiniteCanvas"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInfiniteCanvasResponse>();
}

/**
 * @summary Updates the information of an infinite canvas.
 *
 * @description ## Request description
 * This API queries media asset content understanding jobs.
 *
 * @param request UpdateInfiniteCanvasRequest
 * @return UpdateInfiniteCanvasResponse
 */
UpdateInfiniteCanvasResponse Client::updateInfiniteCanvas(const UpdateInfiniteCanvasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInfiniteCanvasWithOptions(request, runtime);
}

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
UpdateMediaResponse Client::updateMediaWithOptions(const UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppendTags()) {
    query["AppendTags"] = request.getAppendTags();
  }

  if (!!request.hasBizConfig()) {
    query["BizConfig"] = request.getBizConfig();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDynamicMetaData()) {
    query["DynamicMetaData"] = request.getDynamicMetaData();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.getMediaTags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaResponse>();
}

/**
 * @summary Updates media asset information.
 *
 * @description ## Request description
 * This API queries media asset content understanding jobs.
 *
 * @param request UpdateMediaRequest
 * @return UpdateMediaResponse
 */
UpdateMediaResponse Client::updateMedia(const UpdateMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a project.
 *
 * @description Updates the name of a project specified by ProjectId. Use Title to specify the new name. This operation only supports modifying the project name. You cannot modify the description or cover image. The caller must have edit permissions for the project.
 *
 * @param request UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary Updates the name of a project.
 *
 * @description Updates the name of a project specified by ProjectId. Use Title to specify the new name. This operation only supports modifying the project name. You cannot modify the description or cover image. The caller must have edit permissions for the project.
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Yike20260707