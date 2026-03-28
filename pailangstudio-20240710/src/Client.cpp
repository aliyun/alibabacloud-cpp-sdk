#include <darabonba/Core.hpp>
#include <alibabacloud/PAILangStudio20240710.hpp>
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
using namespace AlibabaCloud::PAILangStudio20240710::Models;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{

AlibabaCloud::PAILangStudio20240710::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("pailangstudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Create a deployment job.
 *
 * @param request CreateDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeploymentResponse
 */
CreateDeploymentResponse Client::createDeploymentWithOptions(const CreateDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasAutoApproval()) {
    body["AutoApproval"] = request.getAutoApproval();
  }

  if (!!request.hasChatHistoryConfig()) {
    body["ChatHistoryConfig"] = request.getChatHistoryConfig();
  }

  if (!!request.hasContentModerationConfig()) {
    body["ContentModerationConfig"] = request.getContentModerationConfig();
  }

  if (!!request.hasDeploymentConfig()) {
    body["DeploymentConfig"] = request.getDeploymentConfig();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableTrace()) {
    body["EnableTrace"] = request.getEnableTrace();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceSnapshotId()) {
    body["ResourceSnapshotId"] = request.getResourceSnapshotId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceName()) {
    body["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasWorkDir()) {
    body["WorkDir"] = request.getWorkDir();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDeployment"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/deployments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeploymentResponse>();
}

/**
 * @summary Create a deployment job.
 *
 * @param request CreateDeploymentRequest
 * @return CreateDeploymentResponse
 */
CreateDeploymentResponse Client::createDeployment(const CreateDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDeploymentWithOptions(request, headers, runtime);
}

/**
 * @summary Create a knowledge base.
 *
 * @param request CreateKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseResponse
 */
CreateKnowledgeBaseResponse Client::createKnowledgeBaseWithOptions(const CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasChunkConfig()) {
    body["ChunkConfig"] = request.getChunkConfig();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.getDataSources();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEmbeddingConfig()) {
    body["EmbeddingConfig"] = request.getEmbeddingConfig();
  }

  if (!!request.hasIndexColumnConfig()) {
    body["IndexColumnConfig"] = request.getIndexColumnConfig();
  }

  if (!!request.hasKnowledgeBaseType()) {
    body["KnowledgeBaseType"] = request.getKnowledgeBaseType();
  }

  if (!!request.hasMetaDataConfig()) {
    body["MetaDataConfig"] = request.getMetaDataConfig();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputDir()) {
    body["OutputDir"] = request.getOutputDir();
  }

  if (!!request.hasRuntimeId()) {
    body["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasVectorDBConfig()) {
    body["VectorDBConfig"] = request.getVectorDBConfig();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseResponse>();
}

/**
 * @summary Create a knowledge base.
 *
 * @param request CreateKnowledgeBaseRequest
 * @return CreateKnowledgeBaseResponse
 */
CreateKnowledgeBaseResponse Client::createKnowledgeBase(const CreateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseWithOptions(request, headers, runtime);
}

/**
 * @summary Create a Knowledge Base Task.
 *
 * @param request CreateKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseJobResponse
 */
CreateKnowledgeBaseJobResponse Client::createKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const CreateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEcsSpecs()) {
    body["EcsSpecs"] = request.getEcsSpecs();
  }

  if (!!request.hasEmbeddingConfig()) {
    body["EmbeddingConfig"] = request.getEmbeddingConfig();
  }

  if (!!request.hasJobAction()) {
    body["JobAction"] = request.getJobAction();
  }

  if (!!request.hasMaxRunningTimeInSeconds()) {
    body["MaxRunningTimeInSeconds"] = request.getMaxRunningTimeInSeconds();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseJobResponse>();
}

/**
 * @summary Create a Knowledge Base Task.
 *
 * @param request CreateKnowledgeBaseJobRequest
 * @return CreateKnowledgeBaseJobResponse
 */
CreateKnowledgeBaseJobResponse Client::createKnowledgeBaseJob(const string &KnowledgeBaseId, const CreateKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseJobWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary Create a runtime.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/pai/dsw-billing-description?spm=a2c4g.11186623.help-menu-30347.d_1_1_3.fb4453d9l200bE) of PAI-DSW product.
 *
 * @param request CreateRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuntimeResponse
 */
CreateRuntimeResponse Client::createRuntimeWithOptions(const CreateRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasAutoUpdateImage()) {
    body["AutoUpdateImage"] = request.getAutoUpdateImage();
  }

  if (!!request.hasCredentialConfig()) {
    body["CredentialConfig"] = request.getCredentialConfig();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.getDataSources();
  }

  if (!!request.hasEcsSpec()) {
    body["EcsSpec"] = request.getEcsSpec();
  }

  if (!!request.hasEnvs()) {
    body["Envs"] = request.getEnvs();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasRunTimeout()) {
    body["RunTimeout"] = request.getRunTimeout();
  }

  if (!!request.hasRuntimeName()) {
    body["RuntimeName"] = request.getRuntimeName();
  }

  if (!!request.hasRuntimeType()) {
    body["RuntimeType"] = request.getRuntimeType();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkDir()) {
    body["WorkDir"] = request.getWorkDir();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRuntime"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/runtimes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuntimeResponse>();
}

/**
 * @summary Create a runtime.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/pai/dsw-billing-description?spm=a2c4g.11186623.help-menu-30347.d_1_1_3.fb4453d9l200bE) of PAI-DSW product.
 *
 * @param request CreateRuntimeRequest
 * @return CreateRuntimeResponse
 */
CreateRuntimeResponse Client::createRuntime(const CreateRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRuntimeWithOptions(request, headers, runtime);
}

/**
 * @summary Create a snapshot.
 *
 * @param request CreateSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasCreationType()) {
    body["CreationType"] = request.getCreationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasSnapshotName()) {
    body["SnapshotName"] = request.getSnapshotName();
  }

  if (!!request.hasSnapshotResourceId()) {
    body["SnapshotResourceId"] = request.getSnapshotResourceId();
  }

  if (!!request.hasSnapshotResourceType()) {
    body["SnapshotResourceType"] = request.getSnapshotResourceType();
  }

  if (!!request.hasSourceStoragePath()) {
    body["SourceStoragePath"] = request.getSourceStoragePath();
  }

  if (!!request.hasWorkDir()) {
    body["WorkDir"] = request.getWorkDir();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/snapshots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary Create a snapshot.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSnapshotWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a deployment job.
 *
 * @param request DeleteDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentResponse
 */
DeleteDeploymentResponse Client::deleteDeploymentWithOptions(const string &DeploymentId, const DeleteDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeployment"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/deployments/" , Darabonba::Encode::Encoder::percentEncode(DeploymentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeploymentResponse>();
}

/**
 * @summary Delete a deployment job.
 *
 * @param request DeleteDeploymentRequest
 * @return DeleteDeploymentResponse
 */
DeleteDeploymentResponse Client::deleteDeployment(const string &DeploymentId, const DeleteDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDeploymentWithOptions(DeploymentId, request, headers, runtime);
}

/**
 * @summary Delete knowledge base.
 *
 * @param request DeleteKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const DeleteKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKnowledgeBaseResponse>();
}

/**
 * @summary Delete knowledge base.
 *
 * @param request DeleteKnowledgeBaseRequest
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBase(const string &KnowledgeBaseId, const DeleteKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary Delete Knowledge Base Task.
 *
 * @param request DeleteKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKnowledgeBaseJobResponse
 */
DeleteKnowledgeBaseJobResponse Client::deleteKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const DeleteKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseJobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKnowledgeBaseJobResponse>();
}

/**
 * @summary Delete Knowledge Base Task.
 *
 * @param request DeleteKnowledgeBaseJobRequest
 * @return DeleteKnowledgeBaseJobResponse
 */
DeleteKnowledgeBaseJobResponse Client::deleteKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const DeleteKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKnowledgeBaseJobWithOptions(KnowledgeBaseId, KnowledgeBaseJobId, request, headers, runtime);
}

/**
 * @summary Delete a runtime.
 *
 * @param request DeleteRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuntimeResponse
 */
DeleteRuntimeResponse Client::deleteRuntimeWithOptions(const string &RuntimeId, const DeleteRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRuntime"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/runtimes/" , Darabonba::Encode::Encoder::percentEncode(RuntimeId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuntimeResponse>();
}

/**
 * @summary Delete a runtime.
 *
 * @param request DeleteRuntimeRequest
 * @return DeleteRuntimeResponse
 */
DeleteRuntimeResponse Client::deleteRuntime(const string &RuntimeId, const DeleteRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRuntimeWithOptions(RuntimeId, request, headers, runtime);
}

/**
 * @summary Delete a snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const string &SnapshotId, const DeleteSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/snapshots/" , Darabonba::Encode::Encoder::percentEncode(SnapshotId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary Delete a snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const string &SnapshotId, const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSnapshotWithOptions(SnapshotId, request, headers, runtime);
}

/**
 * @summary Retrieve the details of a deployment job.
 *
 * @param request GetDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeploymentWithOptions(const string &DeploymentId, const GetDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeployment"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/deployments/" , Darabonba::Encode::Encoder::percentEncode(DeploymentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentResponse>();
}

/**
 * @summary Retrieve the details of a deployment job.
 *
 * @param request GetDeploymentRequest
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeployment(const string &DeploymentId, const GetDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeploymentWithOptions(DeploymentId, request, headers, runtime);
}

/**
 * @summary Get knowledge base.
 *
 * @param request GetKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const GetKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseResponse>();
}

/**
 * @summary Get knowledge base.
 *
 * @param request GetKnowledgeBaseRequest
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBase(const string &KnowledgeBaseId, const GetKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 查看知识库任务
 *
 * @param request GetKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseJobResponse
 */
GetKnowledgeBaseJobResponse Client::getKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const GetKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseJobResponse>();
}

/**
 * @summary 查看知识库任务
 *
 * @param request GetKnowledgeBaseJobRequest
 * @return GetKnowledgeBaseJobResponse
 */
GetKnowledgeBaseJobResponse Client::getKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const GetKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseJobWithOptions(KnowledgeBaseId, KnowledgeBaseJobId, request, headers, runtime);
}

/**
 * @summary Obtain the details of the runtime.
 *
 * @param request GetRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuntimeResponse
 */
GetRuntimeResponse Client::getRuntimeWithOptions(const string &RuntimeId, const GetRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRuntime"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/runtimes/" , Darabonba::Encode::Encoder::percentEncode(RuntimeId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuntimeResponse>();
}

/**
 * @summary Obtain the details of the runtime.
 *
 * @param request GetRuntimeRequest
 * @return GetRuntimeResponse
 */
GetRuntimeResponse Client::getRuntime(const string &RuntimeId, const GetRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRuntimeWithOptions(RuntimeId, request, headers, runtime);
}

/**
 * @summary Obtain snapshot details.
 *
 * @param request GetSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSnapshotResponse
 */
GetSnapshotResponse Client::getSnapshotWithOptions(const string &SnapshotId, const GetSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSnapshot"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/snapshots/" , Darabonba::Encode::Encoder::percentEncode(SnapshotId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSnapshotResponse>();
}

/**
 * @summary Obtain snapshot details.
 *
 * @param request GetSnapshotRequest
 * @return GetSnapshotResponse
 */
GetSnapshotResponse Client::getSnapshot(const string &SnapshotId, const GetSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSnapshotWithOptions(SnapshotId, request, headers, runtime);
}

/**
 * @summary Retrieve a list of deployment jobs.
 *
 * @param request ListDeploymentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeploymentsWithOptions(const ListDeploymentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasDeploymentId()) {
    query["DeploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasDeploymentStatus()) {
    query["DeploymentStatus"] = request.getDeploymentStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceSnapshotId()) {
    query["ResourceSnapshotId"] = request.getResourceSnapshotId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeployments"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/deployments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentsResponse>();
}

/**
 * @summary Retrieve a list of deployment jobs.
 *
 * @param request ListDeploymentsRequest
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeployments(const ListDeploymentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeploymentsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve the knowledge base segment list.
 *
 * @param request ListKnowledgeBaseChunksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseChunksResponse
 */
ListKnowledgeBaseChunksResponse Client::listKnowledgeBaseChunksWithOptions(const string &KnowledgeBaseId, const ListKnowledgeBaseChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChunkStatus()) {
    query["ChunkStatus"] = request.getChunkStatus();
  }

  if (!!request.hasMetaData()) {
    query["MetaData"] = request.getMetaData();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseChunks"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasechunks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseChunksResponse>();
}

/**
 * @summary Retrieve the knowledge base segment list.
 *
 * @param request ListKnowledgeBaseChunksRequest
 * @return ListKnowledgeBaseChunksResponse
 */
ListKnowledgeBaseChunksResponse Client::listKnowledgeBaseChunks(const string &KnowledgeBaseId, const ListKnowledgeBaseChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseChunksWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary Get the Knowledge Base task list.
 *
 * @param request ListKnowledgeBaseJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseJobsResponse
 */
ListKnowledgeBaseJobsResponse Client::listKnowledgeBaseJobsWithOptions(const string &KnowledgeBaseId, const ListKnowledgeBaseJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobAction()) {
    query["JobAction"] = request.getJobAction();
  }

  if (!!request.hasKnowledgeBaseJobId()) {
    query["KnowledgeBaseJobId"] = request.getKnowledgeBaseJobId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseJobs"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseJobsResponse>();
}

/**
 * @summary Get the Knowledge Base task list.
 *
 * @param request ListKnowledgeBaseJobsRequest
 * @return ListKnowledgeBaseJobsResponse
 */
ListKnowledgeBaseJobsResponse Client::listKnowledgeBaseJobs(const string &KnowledgeBaseId, const ListKnowledgeBaseJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseJobsWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary Queries a list of knowledge bases.
 *
 * @param request ListKnowledgeBasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBasesWithOptions(const ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasKnowledgeBaseId()) {
    query["KnowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  if (!!request.hasKnowledgeBaseType()) {
    query["KnowledgeBaseType"] = request.getKnowledgeBaseType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBases"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBasesResponse>();
}

/**
 * @summary Queries a list of knowledge bases.
 *
 * @param request ListKnowledgeBasesRequest
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBases(const ListKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBasesWithOptions(request, headers, runtime);
}

/**
 * @summary Get the list of runtimes.
 *
 * @param request ListRuntimesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRuntimesResponse
 */
ListRuntimesResponse Client::listRuntimesWithOptions(const ListRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuntimeId()) {
    query["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasRuntimeName()) {
    query["RuntimeName"] = request.getRuntimeName();
  }

  if (!!request.hasRuntimeStatus()) {
    query["RuntimeStatus"] = request.getRuntimeStatus();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  if (!!request.hasWorkDir()) {
    query["WorkDir"] = request.getWorkDir();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRuntimes"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/runtimes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRuntimesResponse>();
}

/**
 * @summary Get the list of runtimes.
 *
 * @param request ListRuntimesRequest
 * @return ListRuntimesResponse
 */
ListRuntimesResponse Client::listRuntimes(const ListRuntimesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRuntimesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve a snapshot list.
 *
 * @param request ListSnapshotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshotsWithOptions(const ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreationType()) {
    query["CreationType"] = request.getCreationType();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasSnapshotResourceId()) {
    query["SnapshotResourceId"] = request.getSnapshotResourceId();
  }

  if (!!request.hasSnapshotResourceType()) {
    query["SnapshotResourceType"] = request.getSnapshotResourceType();
  }

  if (!!request.hasSnapshotStatus()) {
    query["SnapshotStatus"] = request.getSnapshotStatus();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshots"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/snapshots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotsResponse>();
}

/**
 * @summary Retrieve a snapshot list.
 *
 * @param request ListSnapshotsRequest
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshots(const ListSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSnapshotsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve the knowledge base.
 *
 * @param request RetrieveKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveKnowledgeBaseResponse
 */
RetrieveKnowledgeBaseResponse Client::retrieveKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const RetrieveKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHybridStrategyConfig()) {
    body["HybridStrategyConfig"] = request.getHybridStrategyConfig();
  }

  if (!!request.hasMetaDataFilterConditions()) {
    body["MetaDataFilterConditions"] = request.getMetaDataFilterConditions();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasQueryMode()) {
    body["QueryMode"] = request.getQueryMode();
  }

  if (!!request.hasRerankConfig()) {
    body["RerankConfig"] = request.getRerankConfig();
  }

  if (!!request.hasRewriteConfig()) {
    body["RewriteConfig"] = request.getRewriteConfig();
  }

  if (!!request.hasScoreThreshold()) {
    body["ScoreThreshold"] = request.getScoreThreshold();
  }

  if (!!request.hasTopK()) {
    body["TopK"] = request.getTopK();
  }

  if (!!request.hasVersionName()) {
    body["VersionName"] = request.getVersionName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetrieveKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/action/retrieve")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveKnowledgeBaseResponse>();
}

/**
 * @summary Retrieve the knowledge base.
 *
 * @param request RetrieveKnowledgeBaseRequest
 * @return RetrieveKnowledgeBaseResponse
 */
RetrieveKnowledgeBaseResponse Client::retrieveKnowledgeBase(const string &KnowledgeBaseId, const RetrieveKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retrieveKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary Update a deployment job.
 *
 * @param request UpdateDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentResponse
 */
UpdateDeploymentResponse Client::updateDeploymentWithOptions(const string &DeploymentId, const UpdateDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoApproval()) {
    body["AutoApproval"] = request.getAutoApproval();
  }

  if (!!request.hasDeploymentConfig()) {
    body["DeploymentConfig"] = request.getDeploymentConfig();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasStageAction()) {
    body["StageAction"] = request.getStageAction();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeployment"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/deployments/" , Darabonba::Encode::Encoder::percentEncode(DeploymentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentResponse>();
}

/**
 * @summary Update a deployment job.
 *
 * @param request UpdateDeploymentRequest
 * @return UpdateDeploymentResponse
 */
UpdateDeploymentResponse Client::updateDeployment(const string &DeploymentId, const UpdateDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDeploymentWithOptions(DeploymentId, request, headers, runtime);
}

/**
 * @summary Update Knowledge Base.
 *
 * @param request UpdateKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoUpdateConfig()) {
    body["AutoUpdateConfig"] = request.getAutoUpdateConfig();
  }

  if (!!request.hasBindRuntime()) {
    body["BindRuntime"] = request.getBindRuntime();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMetaDataConfig()) {
    body["MetaDataConfig"] = request.getMetaDataConfig();
  }

  if (!!request.hasRuntimeId()) {
    body["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseResponse>();
}

/**
 * @summary Update Knowledge Base.
 *
 * @param request UpdateKnowledgeBaseRequest
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBase(const string &KnowledgeBaseId, const UpdateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary Update Knowledge Base Chunk
 *
 * @param request UpdateKnowledgeBaseChunkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseChunkResponse
 */
UpdateKnowledgeBaseChunkResponse Client::updateKnowledgeBaseChunkWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const UpdateKnowledgeBaseChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunkContent()) {
    body["ChunkContent"] = request.getChunkContent();
  }

  if (!!request.hasChunkStatus()) {
    body["ChunkStatus"] = request.getChunkStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseChunk"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasechunks/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseChunkId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseChunkResponse>();
}

/**
 * @summary Update Knowledge Base Chunk
 *
 * @param request UpdateKnowledgeBaseChunkRequest
 * @return UpdateKnowledgeBaseChunkResponse
 */
UpdateKnowledgeBaseChunkResponse Client::updateKnowledgeBaseChunk(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const UpdateKnowledgeBaseChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseChunkWithOptions(KnowledgeBaseId, KnowledgeBaseChunkId, request, headers, runtime);
}

/**
 * @summary Update Knowledge Base Task.
 *
 * @param request UpdateKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseJobResponse
 */
UpdateKnowledgeBaseJobResponse Client::updateKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const UpdateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseJobId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseJobResponse>();
}

/**
 * @summary Update Knowledge Base Task.
 *
 * @param request UpdateKnowledgeBaseJobRequest
 * @return UpdateKnowledgeBaseJobResponse
 */
UpdateKnowledgeBaseJobResponse Client::updateKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const UpdateKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseJobWithOptions(KnowledgeBaseId, KnowledgeBaseJobId, request, headers, runtime);
}

/**
 * @summary Update runtime.
 *
 * @param request UpdateRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuntimeResponse
 */
UpdateRuntimeResponse Client::updateRuntimeWithOptions(const string &RuntimeId, const UpdateRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["Action"] = request.getAction();
  }

  if (!!request.hasAutoUpdateImage()) {
    body["AutoUpdateImage"] = request.getAutoUpdateImage();
  }

  if (!!request.hasRunTimeout()) {
    body["RunTimeout"] = request.getRunTimeout();
  }

  if (!!request.hasVersion()) {
    body["Version"] = request.getVersion();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRuntime"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/runtimes/" , Darabonba::Encode::Encoder::percentEncode(RuntimeId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuntimeResponse>();
}

/**
 * @summary Update runtime.
 *
 * @param request UpdateRuntimeRequest
 * @return UpdateRuntimeResponse
 */
UpdateRuntimeResponse Client::updateRuntime(const string &RuntimeId, const UpdateRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRuntimeWithOptions(RuntimeId, request, headers, runtime);
}

/**
 * @summary Update a snapshot.
 *
 * @param request UpdateSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSnapshotResponse
 */
UpdateSnapshotResponse Client::updateSnapshotWithOptions(const string &SnapshotId, const UpdateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasSnapshotName()) {
    body["SnapshotName"] = request.getSnapshotName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSnapshot"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/snapshots/" , Darabonba::Encode::Encoder::percentEncode(SnapshotId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSnapshotResponse>();
}

/**
 * @summary Update a snapshot.
 *
 * @param request UpdateSnapshotRequest
 * @return UpdateSnapshotResponse
 */
UpdateSnapshotResponse Client::updateSnapshot(const string &SnapshotId, const UpdateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSnapshotWithOptions(SnapshotId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710