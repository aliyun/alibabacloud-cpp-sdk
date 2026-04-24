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
  this->_endpointRule = "";
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
 * @summary 增加用户积分
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
 * @summary 增加用户积分
 *
 * @param request AddYikeUserCreditRequest
 * @return AddYikeUserCreditResponse
 */
AddYikeUserCreditResponse Client::addYikeUserCredit(const AddYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary 批量获取一刻AI应用生成任务
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
 * @summary 批量获取一刻AI应用生成任务
 *
 * @param request BatchGetYikeAIAppJobRequest
 * @return BatchGetYikeAIAppJobResponse
 */
BatchGetYikeAIAppJobResponse Client::batchGetYikeAIAppJob(const BatchGetYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary 批量获取媒资信息
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
 * @summary 批量获取媒资信息
 *
 * @param request BatchGetYikeAssetMediaInfosRequest
 * @return BatchGetYikeAssetMediaInfosResponse
 */
BatchGetYikeAssetMediaInfosResponse Client::batchGetYikeAssetMediaInfos(const BatchGetYikeAssetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetYikeAssetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary 获取一刻媒资上传凭证
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
 * @summary 获取一刻媒资上传凭证
 *
 * @param request CreateYikeAssetUploadRequest
 * @return CreateYikeAssetUploadResponse
 */
CreateYikeAssetUploadResponse Client::createYikeAssetUpload(const CreateYikeAssetUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeAssetUploadWithOptions(request, runtime);
}

/**
 * @summary 创建一刻项目
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
 * @summary 创建一刻项目
 *
 * @param request CreateYikeProductionRequest
 * @return CreateYikeProductionResponse
 */
CreateYikeProductionResponse Client::createYikeProduction(const CreateYikeProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeProductionWithOptions(request, runtime);
}

/**
 * @summary 创建一刻子用户
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
 * @summary 创建一刻子用户
 *
 * @param request CreateYikeUserRequest
 * @return CreateYikeUserResponse
 */
CreateYikeUserResponse Client::createYikeUser(const CreateYikeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeUserWithOptions(request, runtime);
}

/**
 * @summary 创建工作室
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
 * @summary 创建工作室
 *
 * @param request CreateYikeWorkspaceRequest
 * @return CreateYikeWorkspaceResponse
 */
CreateYikeWorkspaceResponse Client::createYikeWorkspace(const CreateYikeWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 删除媒资信息
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
 * @summary 删除媒资信息
 *
 * @param request DeleteYikeAssetMediaInfosRequest
 * @return DeleteYikeAssetMediaInfosResponse
 */
DeleteYikeAssetMediaInfosResponse Client::deleteYikeAssetMediaInfos(const DeleteYikeAssetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteYikeAssetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary 获取一刻AI应用任务
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
 * @summary 获取一刻AI应用任务
 *
 * @param request GetYikeAIAppJobRequest
 * @return GetYikeAIAppJobResponse
 */
GetYikeAIAppJobResponse Client::getYikeAIAppJob(const GetYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary 获取一刻媒资内容信息
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
 * @summary 获取一刻媒资内容信息
 *
 * @param request GetYikeAssetMediaInfoRequest
 * @return GetYikeAssetMediaInfoResponse
 */
GetYikeAssetMediaInfoResponse Client::getYikeAssetMediaInfo(const GetYikeAssetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAssetMediaInfoWithOptions(request, runtime);
}

/**
 * @summary 获取一刻故事板任务
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
 * @summary 获取一刻故事板任务
 *
 * @param request GetYikeStoryboardJobRequest
 * @return GetYikeStoryboardJobResponse
 */
GetYikeStoryboardJobResponse Client::getYikeStoryboardJob(const GetYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeStoryboardJobWithOptions(request, runtime);
}

/**
 * @summary 获取一刻子用户信息
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
 * @summary 获取一刻子用户信息
 *
 * @param request GetYikeUserRequest
 * @return GetYikeUserResponse
 */
GetYikeUserResponse Client::getYikeUser(const GetYikeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeUserWithOptions(request, runtime);
}

/**
 * @summary 查询一刻用户积分
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
 * @summary 查询一刻用户积分
 *
 * @param request GetYikeUserCreditRequest
 * @return GetYikeUserCreditResponse
 */
GetYikeUserCreditResponse Client::getYikeUserCredit(const GetYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary 获取一刻文件夹列表
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
 * @summary 获取一刻文件夹列表
 *
 * @param request ListYikeAssetFoldersRequest
 * @return ListYikeAssetFoldersResponse
 */
ListYikeAssetFoldersResponse Client::listYikeAssetFolders(const ListYikeAssetFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeAssetFoldersWithOptions(request, runtime);
}

/**
 * @summary 获取一刻项目列表
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
 * @summary 获取一刻项目列表
 *
 * @param request ListYikeProductionsRequest
 * @return ListYikeProductionsResponse
 */
ListYikeProductionsResponse Client::listYikeProductions(const ListYikeProductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeProductionsWithOptions(request, runtime);
}

/**
 * @summary 检查应用参数是否合法
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
 * @summary 检查应用参数是否合法
 *
 * @param request PrecheckYikeAIAppJobRequest
 * @return PrecheckYikeAIAppJobResponse
 */
PrecheckYikeAIAppJobResponse Client::precheckYikeAIAppJob(const PrecheckYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return precheckYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary 注册一刻媒资
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
 * @summary 注册一刻媒资
 *
 * @param request RegisterYikeAssetMediaInfoRequest
 * @return RegisterYikeAssetMediaInfoResponse
 */
RegisterYikeAssetMediaInfoResponse Client::registerYikeAssetMediaInfo(const RegisterYikeAssetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerYikeAssetMediaInfoWithOptions(request, runtime);
}

/**
 * @summary 故事板任务恢复继续执行任务
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
 * @summary 故事板任务恢复继续执行任务
 *
 * @param request ResumeYikeStoryboardJobRequest
 * @return ResumeYikeStoryboardJobResponse
 */
ResumeYikeStoryboardJobResponse Client::resumeYikeStoryboardJob(const ResumeYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeYikeStoryboardJobWithOptions(request, runtime);
}

/**
 * @summary 配置一刻事件回调
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
 * @summary 配置一刻事件回调
 *
 * @param request SetYikeCallbackConfigRequest
 * @return SetYikeCallbackConfigResponse
 */
SetYikeCallbackConfigResponse Client::setYikeCallbackConfig(const SetYikeCallbackConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setYikeCallbackConfigWithOptions(request, runtime);
}

/**
 * @summary 设置用户角色
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
 * @summary 设置用户角色
 *
 * @param request SetYikeUserRoleRequest
 * @return SetYikeUserRoleResponse
 */
SetYikeUserRoleResponse Client::setYikeUserRole(const SetYikeUserRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setYikeUserRoleWithOptions(request, runtime);
}

/**
 * @summary 扣减用户积分
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
 * @summary 扣减用户积分
 *
 * @param request SubYikeUserCreditRequest
 * @return SubYikeUserCreditResponse
 */
SubYikeUserCreditResponse Client::subYikeUserCredit(const SubYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary 提交一刻AI应用任务
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
 * @summary 提交一刻AI应用任务
 *
 * @param request SubmitYikeAIAppJobRequest
 * @return SubmitYikeAIAppJobResponse
 */
SubmitYikeAIAppJobResponse Client::submitYikeAIAppJob(const SubmitYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary 提交一刻故事板任务
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
 * @summary 提交一刻故事板任务
 *
 * @param request SubmitYikeStoryboardJobRequest
 * @return SubmitYikeStoryboardJobResponse
 */
SubmitYikeStoryboardJobResponse Client::submitYikeStoryboardJob(const SubmitYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeStoryboardJobWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Yike20260319