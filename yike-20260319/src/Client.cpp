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