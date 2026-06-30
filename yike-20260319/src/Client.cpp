#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260319.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Yike20260319::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Yike20260319
{

AlibabaCloud::Yike20260319::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "yike.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds a member to a Yike project.
 *
 * @param request AddYikeProductionMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddYikeProductionMembersResponse
 */
AddYikeProductionMembersResponse Client::addYikeProductionMembersWithOptions(const AddYikeProductionMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  if (!!request.hasYikeUserIds()) {
    query["YikeUserIds"] = request.getYikeUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddYikeProductionMembers"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddYikeProductionMembersResponse>();
}

/**
 * @summary Adds a member to a Yike project.
 *
 * @param request AddYikeProductionMembersRequest
 * @return AddYikeProductionMembersResponse
 */
AddYikeProductionMembersResponse Client::addYikeProductionMembers(const AddYikeProductionMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addYikeProductionMembersWithOptions(request, runtime);
}

/**
 * @summary Increases user credits.
 *
 * @param request AddYikeUserCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddYikeUserCreditResponse
 */
AddYikeUserCreditResponse Client::addYikeUserCreditWithOptions(const AddYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredit()) {
    query["Credit"] = request.getCredit();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddYikeUserCredit"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddYikeUserCreditResponse>();
}

/**
 * @summary Increases user credits.
 *
 * @param request AddYikeUserCreditRequest
 * @return AddYikeUserCreditResponse
 */
AddYikeUserCreditResponse Client::addYikeUserCredit(const AddYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary Retrieves multiple Yike AI application generation tasks in a batch.
 *
 * @param request BatchGetYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetYikeAIAppJobResponse
 */
BatchGetYikeAIAppJobResponse Client::batchGetYikeAIAppJobWithOptions(const BatchGetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetYikeAIAppJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetYikeAIAppJobResponse>();
}

/**
 * @summary Retrieves multiple Yike AI application generation tasks in a batch.
 *
 * @param request BatchGetYikeAIAppJobRequest
 * @return BatchGetYikeAIAppJobResponse
 */
BatchGetYikeAIAppJobResponse Client::batchGetYikeAIAppJob(const BatchGetYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about multiple media assets in a batch.
 *
 * @param request BatchGetYikeAssetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetYikeAssetMediaInfosResponse
 */
BatchGetYikeAssetMediaInfosResponse Client::batchGetYikeAssetMediaInfosWithOptions(const BatchGetYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetYikeAssetMediaInfos"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetYikeAssetMediaInfosResponse>();
}

/**
 * @summary Retrieves information about multiple media assets in a batch.
 *
 * @param request BatchGetYikeAssetMediaInfosRequest
 * @return BatchGetYikeAssetMediaInfosResponse
 */
BatchGetYikeAssetMediaInfosResponse Client::batchGetYikeAssetMediaInfos(const BatchGetYikeAssetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetYikeAssetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves the upload credential for a media asset.
 *
 * @param request CreateYikeAssetUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeAssetUploadResponse
 */
CreateYikeAssetUploadResponse Client::createYikeAssetUploadWithOptions(const CreateYikeAssetUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileExt()) {
    query["FileExt"] = request.getFileExt();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYikeAssetUpload"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeAssetUploadResponse>();
}

/**
 * @summary Retrieves the upload credential for a media asset.
 *
 * @param request CreateYikeAssetUploadRequest
 * @return CreateYikeAssetUploadResponse
 */
CreateYikeAssetUploadResponse Client::createYikeAssetUpload(const CreateYikeAssetUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeAssetUploadWithOptions(request, runtime);
}

/**
 * @summary Creates a project.
 *
 * @param request CreateYikeProductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeProductionResponse
 */
CreateYikeProductionResponse Client::createYikeProductionWithOptions(const CreateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CreateYikeProduction"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeProductionResponse>();
}

/**
 * @summary Creates a project.
 *
 * @param request CreateYikeProductionRequest
 * @return CreateYikeProductionResponse
 */
CreateYikeProductionResponse Client::createYikeProduction(const CreateYikeProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeProductionWithOptions(request, runtime);
}

/**
 * @summary Creates a sub-account user in WonderClip.
 *
 * @param request CreateYikeUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeUserResponse
 */
CreateYikeUserResponse Client::createYikeUserWithOptions(const CreateYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNickname()) {
    query["Nickname"] = request.getNickname();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProductionIds()) {
    query["ProductionIds"] = request.getProductionIds();
  }

  if (!!request.hasUserNamePrefix()) {
    query["UserNamePrefix"] = request.getUserNamePrefix();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYikeUser"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeUserResponse>();
}

/**
 * @summary Creates a sub-account user in WonderClip.
 *
 * @param request CreateYikeUserRequest
 * @return CreateYikeUserResponse
 */
CreateYikeUserResponse Client::createYikeUser(const CreateYikeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeUserWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateYikeWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeWorkspaceResponse
 */
CreateYikeWorkspaceResponse Client::createYikeWorkspaceWithOptions(const CreateYikeWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CreateYikeWorkspace"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateYikeWorkspaceRequest
 * @return CreateYikeWorkspaceResponse
 */
CreateYikeWorkspaceResponse Client::createYikeWorkspace(const CreateYikeWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes media asset information.
 *
 * @param request DeleteYikeAssetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteYikeAssetMediaInfosResponse
 */
DeleteYikeAssetMediaInfosResponse Client::deleteYikeAssetMediaInfosWithOptions(const DeleteYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicDelete()) {
    query["LogicDelete"] = request.getLogicDelete();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteYikeAssetMediaInfos"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteYikeAssetMediaInfosResponse>();
}

/**
 * @summary Deletes media asset information.
 *
 * @param request DeleteYikeAssetMediaInfosRequest
 * @return DeleteYikeAssetMediaInfosResponse
 */
DeleteYikeAssetMediaInfosResponse Client::deleteYikeAssetMediaInfos(const DeleteYikeAssetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteYikeAssetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an AI application task.
 *
 * @param request GetYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAIAppJobResponse
 */
GetYikeAIAppJobResponse Client::getYikeAIAppJobWithOptions(const GetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeAIAppJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAIAppJobResponse>();
}

/**
 * @summary Retrieves the details of an AI application task.
 *
 * @param request GetYikeAIAppJobRequest
 * @return GetYikeAIAppJobResponse
 */
GetYikeAIAppJobResponse Client::getYikeAIAppJob(const GetYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Queries an agent task.
 *
 * @param request GetYikeAgentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAgentJobResponse
 */
GetYikeAgentJobResponse Client::getYikeAgentJobWithOptions(const GetYikeAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetYikeAgentJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAgentJobResponse>();
}

/**
 * @summary Queries an agent task.
 *
 * @param request GetYikeAgentJobRequest
 * @return GetYikeAgentJobResponse
 */
GetYikeAgentJobResponse Client::getYikeAgentJob(const GetYikeAgentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAgentJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the content information of a media asset.
 *
 * @param request GetYikeAssetMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAssetMediaInfoResponse
 */
GetYikeAssetMediaInfoResponse Client::getYikeAssetMediaInfoWithOptions(const GetYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeAssetMediaInfo"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAssetMediaInfoResponse>();
}

/**
 * @summary Retrieves the content information of a media asset.
 *
 * @param request GetYikeAssetMediaInfoRequest
 * @return GetYikeAssetMediaInfoResponse
 */
GetYikeAssetMediaInfoResponse Client::getYikeAssetMediaInfo(const GetYikeAssetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAssetMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information and results of an editing project export task.
 *
 * @param request GetYikeProjectExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeProjectExportJobResponse
 */
GetYikeProjectExportJobResponse Client::getYikeProjectExportJobWithOptions(const GetYikeProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeProjectExportJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeProjectExportJobResponse>();
}

/**
 * @summary Queries the information and results of an editing project export task.
 *
 * @param request GetYikeProjectExportJobRequest
 * @return GetYikeProjectExportJobResponse
 */
GetYikeProjectExportJobResponse Client::getYikeProjectExportJob(const GetYikeProjectExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeProjectExportJobWithOptions(request, runtime);
}

/**
 * @summary Queries a Yike prompt enhancement and audio repair video generation task.
 *
 * @param request GetYikePromptExpansionVoiceFixJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikePromptExpansionVoiceFixJobResponse
 */
GetYikePromptExpansionVoiceFixJobResponse Client::getYikePromptExpansionVoiceFixJobWithOptions(const GetYikePromptExpansionVoiceFixJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetYikePromptExpansionVoiceFixJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikePromptExpansionVoiceFixJobResponse>();
}

/**
 * @summary Queries a Yike prompt enhancement and audio repair video generation task.
 *
 * @param request GetYikePromptExpansionVoiceFixJobRequest
 * @return GetYikePromptExpansionVoiceFixJobResponse
 */
GetYikePromptExpansionVoiceFixJobResponse Client::getYikePromptExpansionVoiceFixJob(const GetYikePromptExpansionVoiceFixJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikePromptExpansionVoiceFixJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves a storyboard task.
 *
 * @param request GetYikeStoryboardJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeStoryboardJobResponse
 */
GetYikeStoryboardJobResponse Client::getYikeStoryboardJobWithOptions(const GetYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeStoryboardJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeStoryboardJobResponse>();
}

/**
 * @summary Retrieves a storyboard task.
 *
 * @param request GetYikeStoryboardJobRequest
 * @return GetYikeStoryboardJobResponse
 */
GetYikeStoryboardJobResponse Client::getYikeStoryboardJob(const GetYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeStoryboardJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a WonderClip sub-account.
 *
 * @param request GetYikeUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeUserResponse
 */
GetYikeUserResponse Client::getYikeUserWithOptions(const GetYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeUser"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeUserResponse>();
}

/**
 * @summary Retrieves information about a WonderClip sub-account.
 *
 * @param request GetYikeUserRequest
 * @return GetYikeUserResponse
 */
GetYikeUserResponse Client::getYikeUser(const GetYikeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeUserWithOptions(request, runtime);
}

/**
 * @summary Queries the credit balance of a WonderClip user.
 *
 * @param request GetYikeUserCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeUserCreditResponse
 */
GetYikeUserCreditResponse Client::getYikeUserCreditWithOptions(const GetYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeUserCredit"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeUserCreditResponse>();
}

/**
 * @summary Queries the credit balance of a WonderClip user.
 *
 * @param request GetYikeUserCreditRequest
 * @return GetYikeUserCreditResponse
 */
GetYikeUserCreditResponse Client::getYikeUserCredit(const GetYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary Queries an intelligent video generation task for a narration-only video without a digital human.
 *
 * @param request GetYikeVoiceNarratorJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeVoiceNarratorJobResponse
 */
GetYikeVoiceNarratorJobResponse Client::getYikeVoiceNarratorJobWithOptions(const GetYikeVoiceNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetYikeVoiceNarratorJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeVoiceNarratorJobResponse>();
}

/**
 * @summary Queries an intelligent video generation task for a narration-only video without a digital human.
 *
 * @param request GetYikeVoiceNarratorJobRequest
 * @return GetYikeVoiceNarratorJobResponse
 */
GetYikeVoiceNarratorJobResponse Client::getYikeVoiceNarratorJob(const GetYikeVoiceNarratorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeVoiceNarratorJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of folders.
 *
 * @param request ListYikeAssetFoldersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListYikeAssetFoldersResponse
 */
ListYikeAssetFoldersResponse Client::listYikeAssetFoldersWithOptions(const ListYikeAssetFoldersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListYikeAssetFolders"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListYikeAssetFoldersResponse>();
}

/**
 * @summary Retrieves the list of folders.
 *
 * @param request ListYikeAssetFoldersRequest
 * @return ListYikeAssetFoldersResponse
 */
ListYikeAssetFoldersResponse Client::listYikeAssetFolders(const ListYikeAssetFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeAssetFoldersWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of Yike projects.
 *
 * @param request ListYikeProductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListYikeProductionsResponse
 */
ListYikeProductionsResponse Client::listYikeProductionsWithOptions(const ListYikeProductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

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
    {"action" , "ListYikeProductions"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListYikeProductionsResponse>();
}

/**
 * @summary Retrieves a list of Yike projects.
 *
 * @param request ListYikeProductionsRequest
 * @return ListYikeProductionsResponse
 */
ListYikeProductionsResponse Client::listYikeProductions(const ListYikeProductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeProductionsWithOptions(request, runtime);
}

/**
 * @summary Get Yike Workspace List
 *
 * @param request ListYikeWorkspacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListYikeWorkspacesResponse
 */
ListYikeWorkspacesResponse Client::listYikeWorkspacesWithOptions(const ListYikeWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListYikeWorkspaces"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListYikeWorkspacesResponse>();
}

/**
 * @summary Get Yike Workspace List
 *
 * @param request ListYikeWorkspacesRequest
 * @return ListYikeWorkspacesResponse
 */
ListYikeWorkspacesResponse Client::listYikeWorkspaces(const ListYikeWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeWorkspacesWithOptions(request, runtime);
}

/**
 * @summary Checks whether the application parameters are valid.
 *
 * @param request PrecheckYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrecheckYikeAIAppJobResponse
 */
PrecheckYikeAIAppJobResponse Client::precheckYikeAIAppJobWithOptions(const PrecheckYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "PrecheckYikeAIAppJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrecheckYikeAIAppJobResponse>();
}

/**
 * @summary Checks whether the application parameters are valid.
 *
 * @param request PrecheckYikeAIAppJobRequest
 * @return PrecheckYikeAIAppJobResponse
 */
PrecheckYikeAIAppJobResponse Client::precheckYikeAIAppJob(const PrecheckYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return precheckYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Registers a Yike media asset.
 *
 * @param request RegisterYikeAssetMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterYikeAssetMediaInfoResponse
 */
RegisterYikeAssetMediaInfoResponse Client::registerYikeAssetMediaInfoWithOptions(const RegisterYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterYikeAssetMediaInfo"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterYikeAssetMediaInfoResponse>();
}

/**
 * @summary Registers a Yike media asset.
 *
 * @param request RegisterYikeAssetMediaInfoRequest
 * @return RegisterYikeAssetMediaInfoResponse
 */
RegisterYikeAssetMediaInfoResponse Client::registerYikeAssetMediaInfo(const RegisterYikeAssetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerYikeAssetMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Resumes the execution of a storyboard task.
 *
 * @param request ResumeYikeStoryboardJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeYikeStoryboardJobResponse
 */
ResumeYikeStoryboardJobResponse Client::resumeYikeStoryboardJobWithOptions(const ResumeYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeYikeStoryboardJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeYikeStoryboardJobResponse>();
}

/**
 * @summary Resumes the execution of a storyboard task.
 *
 * @param request ResumeYikeStoryboardJobRequest
 * @return ResumeYikeStoryboardJobResponse
 */
ResumeYikeStoryboardJobResponse Client::resumeYikeStoryboardJob(const ResumeYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeYikeStoryboardJobWithOptions(request, runtime);
}

/**
 * @summary Configures event callbacks for the business system.
 *
 * @param request SetYikeCallbackConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetYikeCallbackConfigResponse
 */
SetYikeCallbackConfigResponse Client::setYikeCallbackConfigWithOptions(const SetYikeCallbackConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallbackConfig()) {
    query["CallbackConfig"] = request.getCallbackConfig();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetYikeCallbackConfig"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetYikeCallbackConfigResponse>();
}

/**
 * @summary Configures event callbacks for the business system.
 *
 * @param request SetYikeCallbackConfigRequest
 * @return SetYikeCallbackConfigResponse
 */
SetYikeCallbackConfigResponse Client::setYikeCallbackConfig(const SetYikeCallbackConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setYikeCallbackConfigWithOptions(request, runtime);
}

/**
 * @summary Sets the user role.
 *
 * @param request SetYikeUserRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetYikeUserRoleResponse
 */
SetYikeUserRoleResponse Client::setYikeUserRoleWithOptions(const SetYikeUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetYikeUserRole"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetYikeUserRoleResponse>();
}

/**
 * @summary Sets the user role.
 *
 * @param request SetYikeUserRoleRequest
 * @return SetYikeUserRoleResponse
 */
SetYikeUserRoleResponse Client::setYikeUserRole(const SetYikeUserRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setYikeUserRoleWithOptions(request, runtime);
}

/**
 * @summary Reclaims credits from a user.
 *
 * @param request SubYikeUserCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubYikeUserCreditResponse
 */
SubYikeUserCreditResponse Client::subYikeUserCreditWithOptions(const SubYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredit()) {
    query["Credit"] = request.getCredit();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubYikeUserCredit"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubYikeUserCreditResponse>();
}

/**
 * @summary Reclaims credits from a user.
 *
 * @param request SubYikeUserCreditRequest
 * @return SubYikeUserCreditResponse
 */
SubYikeUserCreditResponse Client::subYikeUserCredit(const SubYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary Submits an AI application task to Yike AI.
 *
 * @param request SubmitYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeAIAppJobResponse
 */
SubmitYikeAIAppJobResponse Client::submitYikeAIAppJobWithOptions(const SubmitYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasProductionId()) {
    body["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitYikeAIAppJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeAIAppJobResponse>();
}

/**
 * @summary Submits an AI application task to Yike AI.
 *
 * @param request SubmitYikeAIAppJobRequest
 * @return SubmitYikeAIAppJobResponse
 */
SubmitYikeAIAppJobResponse Client::submitYikeAIAppJob(const SubmitYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Creates an intelligent video production task for a digital human oral broadcasting scenario. This task is applicable to video scenarios such as influencer product promotion and knowledge sharing.
 *
 * @description ## Operation description
 * This API operation generates a video featuring a virtual human delivering an oral broadcast based on the provided text content and other parameters such as digital human information and common scenario type. You must specify key configuration items including the text type (raw script or oral broadcast script), video dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
 *
 * @param request SubmitYikeAvatarNarratorJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeAvatarNarratorJobResponse
 */
SubmitYikeAvatarNarratorJobResponse Client::submitYikeAvatarNarratorJobWithOptions(const SubmitYikeAvatarNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobParams()) {
    body["JobParams"] = request.getJobParams();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitYikeAvatarNarratorJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeAvatarNarratorJobResponse>();
}

/**
 * @summary Creates an intelligent video production task for a digital human oral broadcasting scenario. This task is applicable to video scenarios such as influencer product promotion and knowledge sharing.
 *
 * @description ## Operation description
 * This API operation generates a video featuring a virtual human delivering an oral broadcast based on the provided text content and other parameters such as digital human information and common scenario type. You must specify key configuration items including the text type (raw script or oral broadcast script), video dimensions, and resolution. You can also choose whether to add subtitles or specify the output language. In addition, you can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
 *
 * @param request SubmitYikeAvatarNarratorJobRequest
 * @return SubmitYikeAvatarNarratorJobResponse
 */
SubmitYikeAvatarNarratorJobResponse Client::submitYikeAvatarNarratorJob(const SubmitYikeAvatarNarratorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeAvatarNarratorJobWithOptions(request, runtime);
}

/**
 * @summary Submits an online editing project export task that supports exporting pure audio and SRT subtitles.
 *
 * @param request SubmitYikeProjectExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeProjectExportJobResponse
 */
SubmitYikeProjectExportJobResponse Client::submitYikeProjectExportJobWithOptions(const SubmitYikeProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportType()) {
    query["ExportType"] = request.getExportType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitYikeProjectExportJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeProjectExportJobResponse>();
}

/**
 * @summary Submits an online editing project export task that supports exporting pure audio and SRT subtitles.
 *
 * @param request SubmitYikeProjectExportJobRequest
 * @return SubmitYikeProjectExportJobResponse
 */
SubmitYikeProjectExportJobResponse Client::submitYikeProjectExportJob(const SubmitYikeProjectExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeProjectExportJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video generation task with prompt enhancement and audio repair.
 *
 * @param request SubmitYikePromptExpansionVoiceFixJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikePromptExpansionVoiceFixJobResponse
 */
SubmitYikePromptExpansionVoiceFixJobResponse Client::submitYikePromptExpansionVoiceFixJobWithOptions(const SubmitYikePromptExpansionVoiceFixJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobParams()) {
    body["JobParams"] = request.getJobParams();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitYikePromptExpansionVoiceFixJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikePromptExpansionVoiceFixJobResponse>();
}

/**
 * @summary Submits a video generation task with prompt enhancement and audio repair.
 *
 * @param request SubmitYikePromptExpansionVoiceFixJobRequest
 * @return SubmitYikePromptExpansionVoiceFixJobResponse
 */
SubmitYikePromptExpansionVoiceFixJobResponse Client::submitYikePromptExpansionVoiceFixJob(const SubmitYikePromptExpansionVoiceFixJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikePromptExpansionVoiceFixJobWithOptions(request, runtime);
}

/**
 * @summary Submits a storyboard generation task.
 *
 * @description Ensure that your credits remain above 5,000 when calling this operation. Insufficient credits may cause the task to be interrupted.
 *
 * @param request SubmitYikeStoryboardJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeStoryboardJobResponse
 */
SubmitYikeStoryboardJobResponse Client::submitYikeStoryboardJobWithOptions(const SubmitYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasExecMode()) {
    query["ExecMode"] = request.getExecMode();
  }

  if (!!request.hasKeepOriginDialogue()) {
    query["KeepOriginDialogue"] = request.getKeepOriginDialogue();
  }

  if (!!request.hasModelParams()) {
    query["ModelParams"] = request.getModelParams();
  }

  if (!!request.hasNarrationVoiceId()) {
    query["NarrationVoiceId"] = request.getNarrationVoiceId();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasShotPromptMode()) {
    query["ShotPromptMode"] = request.getShotPromptMode();
  }

  if (!!request.hasSkipFailureShot()) {
    query["SkipFailureShot"] = request.getSkipFailureShot();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVideoModel()) {
    query["VideoModel"] = request.getVideoModel();
  }

  json body = {};
  if (!!request.hasFileURL()) {
    body["FileURL"] = request.getFileURL();
  }

  if (!!request.hasShotSplitMode()) {
    body["ShotSplitMode"] = request.getShotSplitMode();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStyleId()) {
    body["StyleId"] = request.getStyleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitYikeStoryboardJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeStoryboardJobResponse>();
}

/**
 * @summary Submits a storyboard generation task.
 *
 * @description Ensure that your credits remain above 5,000 when calling this operation. Insufficient credits may cause the task to be interrupted.
 *
 * @param request SubmitYikeStoryboardJobRequest
 * @return SubmitYikeStoryboardJobResponse
 */
SubmitYikeStoryboardJobResponse Client::submitYikeStoryboardJob(const SubmitYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeStoryboardJobWithOptions(request, runtime);
}

/**
 * @summary Creates an intelligent video generation task for a voiceover-only scenario (without a digital human). This task is applicable to video scenarios such as product showcases and news broadcasts.
 *
 * @param request SubmitYikeVoiceNarratorJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeVoiceNarratorJobResponse
 */
SubmitYikeVoiceNarratorJobResponse Client::submitYikeVoiceNarratorJobWithOptions(const SubmitYikeVoiceNarratorJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobParams()) {
    body["JobParams"] = request.getJobParams();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitYikeVoiceNarratorJob"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeVoiceNarratorJobResponse>();
}

/**
 * @summary Creates an intelligent video generation task for a voiceover-only scenario (without a digital human). This task is applicable to video scenarios such as product showcases and news broadcasts.
 *
 * @param request SubmitYikeVoiceNarratorJobRequest
 * @return SubmitYikeVoiceNarratorJobResponse
 */
SubmitYikeVoiceNarratorJobResponse Client::submitYikeVoiceNarratorJob(const SubmitYikeVoiceNarratorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeVoiceNarratorJobWithOptions(request, runtime);
}

/**
 * @summary Update a Yike project
 *
 * @param request UpdateYikeProductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateYikeProductionResponse
 */
UpdateYikeProductionResponse Client::updateYikeProductionWithOptions(const UpdateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateYikeProduction"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateYikeProductionResponse>();
}

/**
 * @summary Update a Yike project
 *
 * @param request UpdateYikeProductionRequest
 * @return UpdateYikeProductionResponse
 */
UpdateYikeProductionResponse Client::updateYikeProduction(const UpdateYikeProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateYikeProductionWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a Yike project member.
 *
 * @param request UpdateYikeProductionMemberAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateYikeProductionMemberAuthResponse
 */
UpdateYikeProductionMemberAuthResponse Client::updateYikeProductionMemberAuthWithOptions(const UpdateYikeProductionMemberAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuth()) {
    query["Auth"] = request.getAuth();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateYikeProductionMemberAuth"},
    {"version" , "2026-03-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateYikeProductionMemberAuthResponse>();
}

/**
 * @summary Modifies the permissions of a Yike project member.
 *
 * @param request UpdateYikeProductionMemberAuthRequest
 * @return UpdateYikeProductionMemberAuthResponse
 */
UpdateYikeProductionMemberAuthResponse Client::updateYikeProductionMemberAuth(const UpdateYikeProductionMemberAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateYikeProductionMemberAuthWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Yike20260319