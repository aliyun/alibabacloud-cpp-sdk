#include <darabonba/Core.hpp>
#include <alibabacloud/AiMiaoBi20230801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AiMiaoBi20230801::Models;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{

AlibabaCloud::AiMiaoBi20230801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aimiaobi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加审核自定义词库记录
 *
 * @param tmpReq AddAuditTermsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAuditTermsResponse
 */
AddAuditTermsResponse Client::addAuditTermsWithOptions(const AddAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAuditTermsShrinkRequest request = AddAuditTermsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExceptionWord()) {
    request.setExceptionWordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExceptionWord(), "ExceptionWord", "json"));
  }

  json body = {};
  if (!!request.hasExceptionWordShrink()) {
    body["ExceptionWord"] = request.getExceptionWordShrink();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasSuggestWord()) {
    body["SuggestWord"] = request.getSuggestWord();
  }

  if (!!request.hasTermsDesc()) {
    body["TermsDesc"] = request.getTermsDesc();
  }

  if (!!request.hasTermsName()) {
    body["TermsName"] = request.getTermsName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddAuditTerms"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAuditTermsResponse>();
}

/**
 * @summary 添加审核自定义词库记录
 *
 * @param request AddAuditTermsRequest
 * @return AddAuditTermsResponse
 */
AddAuditTermsResponse Client::addAuditTerms(const AddAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAuditTermsWithOptions(request, runtime);
}

/**
 * @summary 添加文档到数据集
 *
 * @param tmpReq AddDatasetDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDatasetDocumentResponse
 */
AddDatasetDocumentResponse Client::addDatasetDocumentWithOptions(const AddDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddDatasetDocumentShrinkRequest request = AddDatasetDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocument()) {
    request.setDocumentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocument(), "Document", "json"));
  }

  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocumentShrink()) {
    body["Document"] = request.getDocumentShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddDatasetDocument"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDatasetDocumentResponse>();
}

/**
 * @summary 添加文档到数据集
 *
 * @param request AddDatasetDocumentRequest
 * @return AddDatasetDocumentResponse
 */
AddDatasetDocumentResponse Client::addDatasetDocument(const AddDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary 生成剪辑视频任务
 *
 * @param tmpReq AsyncCreateClipsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncCreateClipsTaskResponse
 */
AsyncCreateClipsTaskResponse Client::asyncCreateClipsTaskWithOptions(const AsyncCreateClipsTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AsyncCreateClipsTaskShrinkRequest request = AsyncCreateClipsTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColorWords()) {
    request.setColorWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getColorWords(), "ColorWords", "json"));
  }

  if (!!tmpReq.hasStickers()) {
    request.setStickersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStickers(), "Stickers", "json"));
  }

  json body = {};
  if (!!request.hasCloseMusic()) {
    body["CloseMusic"] = request.getCloseMusic();
  }

  if (!!request.hasCloseSubtitle()) {
    body["CloseSubtitle"] = request.getCloseSubtitle();
  }

  if (!!request.hasCloseVoice()) {
    body["CloseVoice"] = request.getCloseVoice();
  }

  if (!!request.hasColorWordsShrink()) {
    body["ColorWords"] = request.getColorWordsShrink();
  }

  if (!!request.hasCustomVoiceUrl()) {
    body["CustomVoiceUrl"] = request.getCustomVoiceUrl();
  }

  if (!!request.hasCustomVoiceVolume()) {
    body["CustomVoiceVolume"] = request.getCustomVoiceVolume();
  }

  if (!!request.hasHeight()) {
    body["Height"] = request.getHeight();
  }

  if (!!request.hasMusicUrl()) {
    body["MusicUrl"] = request.getMusicUrl();
  }

  if (!!request.hasMusicVolume()) {
    body["MusicVolume"] = request.getMusicVolume();
  }

  if (!!request.hasStickersShrink()) {
    body["Stickers"] = request.getStickersShrink();
  }

  if (!!request.hasSubtitleFontSize()) {
    body["SubtitleFontSize"] = request.getSubtitleFontSize();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasVoiceStyle()) {
    body["VoiceStyle"] = request.getVoiceStyle();
  }

  if (!!request.hasVoiceVolume()) {
    body["VoiceVolume"] = request.getVoiceVolume();
  }

  if (!!request.hasWidth()) {
    body["Width"] = request.getWidth();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AsyncCreateClipsTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncCreateClipsTaskResponse>();
}

/**
 * @summary 生成剪辑视频任务
 *
 * @param request AsyncCreateClipsTaskRequest
 * @return AsyncCreateClipsTaskResponse
 */
AsyncCreateClipsTaskResponse Client::asyncCreateClipsTask(const AsyncCreateClipsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncCreateClipsTaskWithOptions(request, runtime);
}

/**
 * @summary 智能剪辑timeline
 *
 * @param request AsyncCreateClipsTimeLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncCreateClipsTimeLineResponse
 */
AsyncCreateClipsTimeLineResponse Client::asyncCreateClipsTimeLineWithOptions(const AsyncCreateClipsTimeLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdditionalContent()) {
    body["AdditionalContent"] = request.getAdditionalContent();
  }

  if (!!request.hasCustomContent()) {
    body["CustomContent"] = request.getCustomContent();
  }

  if (!!request.hasNoRefVideo()) {
    body["NoRefVideo"] = request.getNoRefVideo();
  }

  if (!!request.hasProcessPrompt()) {
    body["ProcessPrompt"] = request.getProcessPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AsyncCreateClipsTimeLine"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncCreateClipsTimeLineResponse>();
}

/**
 * @summary 智能剪辑timeline
 *
 * @param request AsyncCreateClipsTimeLineRequest
 * @return AsyncCreateClipsTimeLineResponse
 */
AsyncCreateClipsTimeLineResponse Client::asyncCreateClipsTimeLine(const AsyncCreateClipsTimeLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncCreateClipsTimeLineWithOptions(request, runtime);
}

/**
 * @summary 编辑剪辑任务的timeline
 *
 * @param tmpReq AsyncEditTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncEditTimelineResponse
 */
AsyncEditTimelineResponse Client::asyncEditTimelineWithOptions(const AsyncEditTimelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AsyncEditTimelineShrinkRequest request = AsyncEditTimelineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTimelines()) {
    request.setTimelinesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTimelines(), "Timelines", "json"));
  }

  json body = {};
  if (!!request.hasAutoClips()) {
    body["AutoClips"] = request.getAutoClips();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTimelinesShrink()) {
    body["Timelines"] = request.getTimelinesShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AsyncEditTimeline"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncEditTimelineResponse>();
}

/**
 * @summary 编辑剪辑任务的timeline
 *
 * @param request AsyncEditTimelineRequest
 * @return AsyncEditTimelineResponse
 */
AsyncEditTimelineResponse Client::asyncEditTimeline(const AsyncEditTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncEditTimelineWithOptions(request, runtime);
}

/**
 * @summary 上传招标书文件
 *
 * @param request AsyncUploadTenderDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncUploadTenderDocResponse
 */
AsyncUploadTenderDocResponse Client::asyncUploadTenderDocWithOptions(const AsyncUploadTenderDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasTenderDocName()) {
    body["TenderDocName"] = request.getTenderDocName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AsyncUploadTenderDoc"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncUploadTenderDocResponse>();
}

/**
 * @summary 上传招标书文件
 *
 * @param request AsyncUploadTenderDocRequest
 * @return AsyncUploadTenderDocResponse
 */
AsyncUploadTenderDocResponse Client::asyncUploadTenderDoc(const AsyncUploadTenderDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncUploadTenderDocWithOptions(request, runtime);
}

/**
 * @summary 上传剪辑素材
 *
 * @param tmpReq AsyncUploadVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncUploadVideoResponse
 */
AsyncUploadVideoResponse Client::asyncUploadVideoWithOptions(const AsyncUploadVideoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AsyncUploadVideoShrinkRequest request = AsyncUploadVideoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceVideo()) {
    request.setReferenceVideoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceVideo(), "ReferenceVideo", "json"));
  }

  if (!!tmpReq.hasSourceVideos()) {
    request.setSourceVideosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceVideos(), "SourceVideos", "json"));
  }

  if (!!tmpReq.hasVideoRoles()) {
    request.setVideoRolesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoRoles(), "VideoRoles", "json"));
  }

  json body = {};
  if (!!request.hasAnlysisPrompt()) {
    body["AnlysisPrompt"] = request.getAnlysisPrompt();
  }

  if (!!request.hasFaceIdentitySimilarityMinScore()) {
    body["FaceIdentitySimilarityMinScore"] = request.getFaceIdentitySimilarityMinScore();
  }

  if (!!request.hasReferenceVideoShrink()) {
    body["ReferenceVideo"] = request.getReferenceVideoShrink();
  }

  if (!!request.hasRemoveSubtitle()) {
    body["RemoveSubtitle"] = request.getRemoveSubtitle();
  }

  if (!!request.hasSourceVideosShrink()) {
    body["SourceVideos"] = request.getSourceVideosShrink();
  }

  if (!!request.hasSplitInterval()) {
    body["SplitInterval"] = request.getSplitInterval();
  }

  if (!!request.hasVideoRolesShrink()) {
    body["VideoRoles"] = request.getVideoRolesShrink();
  }

  if (!!request.hasVideoShotFaceIdentityCount()) {
    body["VideoShotFaceIdentityCount"] = request.getVideoShotFaceIdentityCount();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AsyncUploadVideo"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncUploadVideoResponse>();
}

/**
 * @summary 上传剪辑素材
 *
 * @param request AsyncUploadVideoRequest
 * @return AsyncUploadVideoResponse
 */
AsyncUploadVideoResponse Client::asyncUploadVideo(const AsyncUploadVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncUploadVideoWithOptions(request, runtime);
}

/**
 * @summary 标书写作接口
 *
 * @param request AsyncWritingBiddingDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncWritingBiddingDocResponse
 */
AsyncWritingBiddingDocResponse Client::asyncWritingBiddingDocWithOptions(const AsyncWritingBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCompanyKeyword()) {
    body["CompanyKeyword"] = request.getCompanyKeyword();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AsyncWritingBiddingDoc"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncWritingBiddingDocResponse>();
}

/**
 * @summary 标书写作接口
 *
 * @param request AsyncWritingBiddingDocRequest
 * @return AsyncWritingBiddingDocResponse
 */
AsyncWritingBiddingDocResponse Client::asyncWritingBiddingDoc(const AsyncWritingBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncWritingBiddingDocWithOptions(request, runtime);
}

/**
 * @summary 绑定PPT作品信息
 *
 * @param request BindPptArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPptArtifactResponse
 */
BindPptArtifactResponse Client::bindPptArtifactWithOptions(const BindPptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArtifactId()) {
    body["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BindPptArtifact"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPptArtifactResponse>();
}

/**
 * @summary 绑定PPT作品信息
 *
 * @param request BindPptArtifactRequest
 * @return BindPptArtifactResponse
 */
BindPptArtifactResponse Client::bindPptArtifact(const BindPptArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPptArtifactWithOptions(request, runtime);
}

/**
 * @summary 取消异步任务
 *
 * @param request CancelAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAsyncTaskResponse
 */
CancelAsyncTaskResponse Client::cancelAsyncTaskWithOptions(const CancelAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelAsyncTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAsyncTaskResponse>();
}

/**
 * @summary 取消异步任务
 *
 * @param request CancelAsyncTaskRequest
 * @return CancelAsyncTaskResponse
 */
CancelAsyncTaskResponse Client::cancelAsyncTask(const CancelAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 取消审核任务
 *
 * @param request CancelAuditTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAuditTaskResponse
 */
CancelAuditTaskResponse Client::cancelAuditTaskWithOptions(const CancelAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArticleId()) {
    body["ArticleId"] = request.getArticleId();
  }

  if (!!request.hasContentAuditTaskId()) {
    body["ContentAuditTaskId"] = request.getContentAuditTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelAuditTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAuditTaskResponse>();
}

/**
 * @summary 取消审核任务
 *
 * @param request CancelAuditTaskRequest
 * @return CancelAuditTaskResponse
 */
CancelAuditTaskResponse Client::cancelAuditTask(const CancelAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAuditTaskWithOptions(request, runtime);
}

/**
 * @summary 取消深度写作任务
 *
 * @param request CancelDeepWriteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDeepWriteTaskResponse
 */
CancelDeepWriteTaskResponse Client::cancelDeepWriteTaskWithOptions(const CancelDeepWriteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelDeepWriteTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDeepWriteTaskResponse>();
}

/**
 * @summary 取消深度写作任务
 *
 * @param request CancelDeepWriteTaskRequest
 * @return CancelDeepWriteTaskResponse
 */
CancelDeepWriteTaskResponse Client::cancelDeepWriteTask(const CancelDeepWriteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDeepWriteTaskWithOptions(request, runtime);
}

/**
 * @summary 清除所有干预内容
 *
 * @param request ClearIntervenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearIntervenesResponse
 */
ClearIntervenesResponse Client::clearIntervenesWithOptions(const ClearIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearIntervenes"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearIntervenesResponse>();
}

/**
 * @summary 清除所有干预内容
 *
 * @param request ClearIntervenesRequest
 * @return ClearIntervenesResponse
 */
ClearIntervenesResponse Client::clearIntervenes(const ClearIntervenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearIntervenesWithOptions(request, runtime);
}

/**
 * @summary 是否将本次提交自定义规则库得到的解析结果用于审核任务。由于解析结果可能不满足用户需求，因此我们为您提供了该接口用于二次确认。如果对提交的规则库解析满意，则可以直接将本次提交任务的 TaskId 作为入参，系统会对您上传的规则库做后处理，使它可以被用于审核。反之，您可以重新调用 SubmitAuditNote 接口上传修改之后的规则库。
 *
 * @param request ConfirmAndPostProcessAuditNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmAndPostProcessAuditNoteResponse
 */
ConfirmAndPostProcessAuditNoteResponse Client::confirmAndPostProcessAuditNoteWithOptions(const ConfirmAndPostProcessAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfirmAndPostProcessAuditNote"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmAndPostProcessAuditNoteResponse>();
}

/**
 * @summary 是否将本次提交自定义规则库得到的解析结果用于审核任务。由于解析结果可能不满足用户需求，因此我们为您提供了该接口用于二次确认。如果对提交的规则库解析满意，则可以直接将本次提交任务的 TaskId 作为入参，系统会对您上传的规则库做后处理，使它可以被用于审核。反之，您可以重新调用 SubmitAuditNote 接口上传修改之后的规则库。
 *
 * @param request ConfirmAndPostProcessAuditNoteRequest
 * @return ConfirmAndPostProcessAuditNoteResponse
 */
ConfirmAndPostProcessAuditNoteResponse Client::confirmAndPostProcessAuditNote(const ConfirmAndPostProcessAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmAndPostProcessAuditNoteWithOptions(request, runtime);
}

/**
 * @summary 数据集管理-创建
 *
 * @param tmpReq CreateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDatasetShrinkRequest request = CreateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatasetConfig()) {
    request.setDatasetConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDatasetConfig(), "DatasetConfig", "json"));
  }

  if (!!tmpReq.hasDocumentHandleConfig()) {
    request.setDocumentHandleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocumentHandleConfig(), "DocumentHandleConfig", "json"));
  }

  json body = {};
  if (!!request.hasDatasetConfigShrink()) {
    body["DatasetConfig"] = request.getDatasetConfigShrink();
  }

  if (!!request.hasDatasetDescription()) {
    body["DatasetDescription"] = request.getDatasetDescription();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    body["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasDocumentHandleConfigShrink()) {
    body["DocumentHandleConfig"] = request.getDocumentHandleConfigShrink();
  }

  if (!!request.hasInvokeType()) {
    body["InvokeType"] = request.getInvokeType();
  }

  if (!!request.hasSearchDatasetEnable()) {
    body["SearchDatasetEnable"] = request.getSearchDatasetEnable();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary 数据集管理-创建
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary 通用配置-创建
 *
 * @param request CreateGeneralConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGeneralConfigResponse
 */
CreateGeneralConfigResponse Client::createGeneralConfigWithOptions(const CreateGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigKey()) {
    body["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateGeneralConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGeneralConfigResponse>();
}

/**
 * @summary 通用配置-创建
 *
 * @param request CreateGeneralConfigRequest
 * @return CreateGeneralConfigResponse
 */
CreateGeneralConfigResponse Client::createGeneralConfig(const CreateGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary 文档管理-创建
 *
 * @param tmpReq CreateGeneratedContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGeneratedContentResponse
 */
CreateGeneratedContentResponse Client::createGeneratedContentWithOptions(const CreateGeneratedContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGeneratedContentShrinkRequest request = CreateGeneratedContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKeywords()) {
    request.setKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeywords(), "Keywords", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentDomain()) {
    body["ContentDomain"] = request.getContentDomain();
  }

  if (!!request.hasContentText()) {
    body["ContentText"] = request.getContentText();
  }

  if (!!request.hasKeywordsShrink()) {
    body["Keywords"] = request.getKeywordsShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGeneratedContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGeneratedContentResponse>();
}

/**
 * @summary 文档管理-创建
 *
 * @param request CreateGeneratedContentRequest
 * @return CreateGeneratedContentResponse
 */
CreateGeneratedContentResponse Client::createGeneratedContent(const CreateGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary 获取授权token
 *
 * @param request CreateTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTokenResponse
 */
CreateTokenResponse Client::createTokenWithOptions(const CreateTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateToken"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTokenResponse>();
}

/**
 * @summary 获取授权token
 *
 * @param request CreateTokenRequest
 * @return CreateTokenResponse
 */
CreateTokenResponse Client::createToken(const CreateTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTokenWithOptions(request, runtime);
}

/**
 * @summary 删除用户账户下所有可供审核使用的自定义规则库。删除后无法找回，如果您有对规则库存档的需求，请预先使用 DownloadAuditNote 接口保存需要的规则库。
 *
 * @param request DeleteAuditNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAuditNoteResponse
 */
DeleteAuditNoteResponse Client::deleteAuditNoteWithOptions(const DeleteAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAuditNote"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAuditNoteResponse>();
}

/**
 * @summary 删除用户账户下所有可供审核使用的自定义规则库。删除后无法找回，如果您有对规则库存档的需求，请预先使用 DownloadAuditNote 接口保存需要的规则库。
 *
 * @param request DeleteAuditNoteRequest
 * @return DeleteAuditNoteResponse
 */
DeleteAuditNoteResponse Client::deleteAuditNote(const DeleteAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuditNoteWithOptions(request, runtime);
}

/**
 * @summary 删除指定的词库记录
 *
 * @param tmpReq DeleteAuditTermsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAuditTermsResponse
 */
DeleteAuditTermsResponse Client::deleteAuditTermsWithOptions(const DeleteAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAuditTermsShrinkRequest request = DeleteAuditTermsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIdList()) {
    request.setIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIdList(), "IdList", "json"));
  }

  json body = {};
  if (!!request.hasIdListShrink()) {
    body["IdList"] = request.getIdListShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAuditTerms"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAuditTermsResponse>();
}

/**
 * @summary 删除指定的词库记录
 *
 * @param request DeleteAuditTermsRequest
 * @return DeleteAuditTermsResponse
 */
DeleteAuditTermsResponse Client::deleteAuditTerms(const DeleteAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuditTermsWithOptions(request, runtime);
}

/**
 * @summary 删除自定义文本
 *
 * @param request DeleteCustomTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomTextResponse
 */
DeleteCustomTextResponse Client::deleteCustomTextWithOptions(const DeleteCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCustomText"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomTextResponse>();
}

/**
 * @summary 删除自定义文本
 *
 * @param request DeleteCustomTextRequest
 * @return DeleteCustomTextResponse
 */
DeleteCustomTextResponse Client::deleteCustomText(const DeleteCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTextWithOptions(request, runtime);
}

/**
 * @summary 根据主题删除自定义主题事件
 *
 * @param request DeleteCustomTopicByTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomTopicByTopicResponse
 */
DeleteCustomTopicByTopicResponse Client::deleteCustomTopicByTopicWithOptions(const DeleteCustomTopicByTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCustomTopicByTopic"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomTopicByTopicResponse>();
}

/**
 * @summary 根据主题删除自定义主题事件
 *
 * @param request DeleteCustomTopicByTopicRequest
 * @return DeleteCustomTopicByTopicResponse
 */
DeleteCustomTopicByTopicResponse Client::deleteCustomTopicByTopic(const DeleteCustomTopicByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTopicByTopicWithOptions(request, runtime);
}

/**
 * @summary 根据自定义观点ID删除自定义观点
 *
 * @param request DeleteCustomTopicViewPointByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomTopicViewPointByIdResponse
 */
DeleteCustomTopicViewPointByIdResponse Client::deleteCustomTopicViewPointByIdWithOptions(const DeleteCustomTopicViewPointByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCustomViewPointId()) {
    body["CustomViewPointId"] = request.getCustomViewPointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCustomTopicViewPointById"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomTopicViewPointByIdResponse>();
}

/**
 * @summary 根据自定义观点ID删除自定义观点
 *
 * @param request DeleteCustomTopicViewPointByIdRequest
 * @return DeleteCustomTopicViewPointByIdResponse
 */
DeleteCustomTopicViewPointByIdResponse Client::deleteCustomTopicViewPointById(const DeleteCustomTopicViewPointByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTopicViewPointByIdWithOptions(request, runtime);
}

/**
 * @summary 数据集管理-删除
 *
 * @param request DeleteDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary 数据集管理-删除
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetWithOptions(request, runtime);
}

/**
 * @summary 删除数据集文档
 *
 * @param request DeleteDatasetDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetDocumentResponse
 */
DeleteDatasetDocumentResponse Client::deleteDatasetDocumentWithOptions(const DeleteDatasetDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasDocUuid()) {
    body["DocUuid"] = request.getDocUuid();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetDocument"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetDocumentResponse>();
}

/**
 * @summary 删除数据集文档
 *
 * @param request DeleteDatasetDocumentRequest
 * @return DeleteDatasetDocumentResponse
 */
DeleteDatasetDocumentResponse Client::deleteDatasetDocument(const DeleteDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary 妙读删除多个文档
 *
 * @param tmpReq DeleteDocsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocsResponse
 */
DeleteDocsResponse Client::deleteDocsWithOptions(const DeleteDocsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDocsShrinkRequest request = DeleteDocsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  json body = {};
  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDocs"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocsResponse>();
}

/**
 * @summary 妙读删除多个文档
 *
 * @param request DeleteDocsRequest
 * @return DeleteDocsResponse
 */
DeleteDocsResponse Client::deleteDocs(const DeleteDocsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocsWithOptions(request, runtime);
}

/**
 * @summary 删除指定的用于事实性审核的 URL。
 *
 * @param request DeleteFactAuditUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFactAuditUrlResponse
 */
DeleteFactAuditUrlResponse Client::deleteFactAuditUrlWithOptions(const DeleteFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFactAuditUrl"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFactAuditUrlResponse>();
}

/**
 * @summary 删除指定的用于事实性审核的 URL。
 *
 * @param request DeleteFactAuditUrlRequest
 * @return DeleteFactAuditUrlResponse
 */
DeleteFactAuditUrlResponse Client::deleteFactAuditUrl(const DeleteFactAuditUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFactAuditUrlWithOptions(request, runtime);
}

/**
 * @summary 通用配置-删除
 *
 * @param request DeleteGeneralConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGeneralConfigResponse
 */
DeleteGeneralConfigResponse Client::deleteGeneralConfigWithOptions(const DeleteGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigKey()) {
    body["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteGeneralConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGeneralConfigResponse>();
}

/**
 * @summary 通用配置-删除
 *
 * @param request DeleteGeneralConfigRequest
 * @return DeleteGeneralConfigResponse
 */
DeleteGeneralConfigResponse Client::deleteGeneralConfig(const DeleteGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary 文档管理-删除。
 *
 * @param request DeleteGeneratedContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGeneratedContentResponse
 */
DeleteGeneratedContentResponse Client::deleteGeneratedContentWithOptions(const DeleteGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteGeneratedContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGeneratedContentResponse>();
}

/**
 * @summary 文档管理-删除。
 *
 * @param request DeleteGeneratedContentRequest
 * @return DeleteGeneratedContentResponse
 */
DeleteGeneratedContentResponse Client::deleteGeneratedContent(const DeleteGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary 删除干预规则
 *
 * @param request DeleteInterveneRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInterveneRuleResponse
 */
DeleteInterveneRuleResponse Client::deleteInterveneRuleWithOptions(const DeleteInterveneRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInterveneRule"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInterveneRuleResponse>();
}

/**
 * @summary 删除干预规则
 *
 * @param request DeleteInterveneRuleRequest
 * @return DeleteInterveneRuleResponse
 */
DeleteInterveneRuleResponse Client::deleteInterveneRule(const DeleteInterveneRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInterveneRuleWithOptions(request, runtime);
}

/**
 * @summary 根据ID删除素材
 *
 * @param request DeleteMaterialByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMaterialByIdResponse
 */
DeleteMaterialByIdResponse Client::deleteMaterialByIdWithOptions(const DeleteMaterialByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteMaterialById"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMaterialByIdResponse>();
}

/**
 * @summary 根据ID删除素材
 *
 * @param request DeleteMaterialByIdRequest
 * @return DeleteMaterialByIdResponse
 */
DeleteMaterialByIdResponse Client::deleteMaterialById(const DeleteMaterialByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaterialByIdWithOptions(request, runtime);
}

/**
 * @summary 删除指定自定义文体
 *
 * @param request DeleteStyleLearningResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStyleLearningResultResponse
 */
DeleteStyleLearningResultResponse Client::deleteStyleLearningResultWithOptions(const DeleteStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteStyleLearningResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStyleLearningResultResponse>();
}

/**
 * @summary 删除指定自定义文体
 *
 * @param request DeleteStyleLearningResultRequest
 * @return DeleteStyleLearningResultResponse
 */
DeleteStyleLearningResultResponse Client::deleteStyleLearningResult(const DeleteStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary 从链接中提取文档内容
 *
 * @param tmpReq DocumentExtractionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocumentExtractionResponse
 */
DocumentExtractionResponse Client::documentExtractionWithOptions(const DocumentExtractionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DocumentExtractionShrinkRequest request = DocumentExtractionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUrls()) {
    request.setUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUrls(), "Urls", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasUrlsShrink()) {
    body["Urls"] = request.getUrlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocumentExtraction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocumentExtractionResponse>();
}

/**
 * @summary 从链接中提取文档内容
 *
 * @param request DocumentExtractionRequest
 * @return DocumentExtractionResponse
 */
DocumentExtractionResponse Client::documentExtraction(const DocumentExtractionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return documentExtractionWithOptions(request, runtime);
}

/**
 * @summary 您可以通过调用该接口下载结构化后的规则库，供您进行进一步处理。该接口同时拥有两个功能：下载未后处理的结构化规则库，或下载当前可用于审核的结构化规则库。具体使用方法，请参考入参说明。
 *
 * @param request DownloadAuditNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadAuditNoteResponse
 */
DownloadAuditNoteResponse Client::downloadAuditNoteWithOptions(const DownloadAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DownloadAuditNote"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadAuditNoteResponse>();
}

/**
 * @summary 您可以通过调用该接口下载结构化后的规则库，供您进行进一步处理。该接口同时拥有两个功能：下载未后处理的结构化规则库，或下载当前可用于审核的结构化规则库。具体使用方法，请参考入参说明。
 *
 * @param request DownloadAuditNoteRequest
 * @return DownloadAuditNoteResponse
 */
DownloadAuditNoteResponse Client::downloadAuditNote(const DownloadAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadAuditNoteWithOptions(request, runtime);
}

/**
 * @summary 标书下载接口
 *
 * @param request DownloadBiddingDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadBiddingDocResponse
 */
DownloadBiddingDocResponse Client::downloadBiddingDocWithOptions(const DownloadBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DownloadBiddingDoc"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadBiddingDocResponse>();
}

/**
 * @summary 标书下载接口
 *
 * @param request DownloadBiddingDocRequest
 * @return DownloadBiddingDocResponse
 */
DownloadBiddingDocResponse Client::downloadBiddingDoc(const DownloadBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadBiddingDocWithOptions(request, runtime);
}

/**
 * @summary 编辑审核自定义词库记录
 *
 * @param tmpReq EditAuditTermsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditAuditTermsResponse
 */
EditAuditTermsResponse Client::editAuditTermsWithOptions(const EditAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EditAuditTermsShrinkRequest request = EditAuditTermsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExceptionWord()) {
    request.setExceptionWordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExceptionWord(), "ExceptionWord", "json"));
  }

  json body = {};
  if (!!request.hasExceptionWordShrink()) {
    body["ExceptionWord"] = request.getExceptionWordShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasSuggestWord()) {
    body["SuggestWord"] = request.getSuggestWord();
  }

  if (!!request.hasTermsDesc()) {
    body["TermsDesc"] = request.getTermsDesc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EditAuditTerms"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditAuditTermsResponse>();
}

/**
 * @summary 编辑审核自定义词库记录
 *
 * @param request EditAuditTermsRequest
 * @return EditAuditTermsResponse
 */
EditAuditTermsResponse Client::editAuditTerms(const EditAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editAuditTermsWithOptions(request, runtime);
}

/**
 * @summary 编辑标书内容接口
 *
 * @param request EditBiddingDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditBiddingDocResponse
 */
EditBiddingDocResponse Client::editBiddingDocWithOptions(const EditBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentFormat()) {
    body["ContentFormat"] = request.getContentFormat();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.getContentType();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EditBiddingDoc"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditBiddingDocResponse>();
}

/**
 * @summary 编辑标书内容接口
 *
 * @param request EditBiddingDocRequest
 * @return EditBiddingDocResponse
 */
EditBiddingDocResponse Client::editBiddingDoc(const EditBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editBiddingDocWithOptions(request, runtime);
}

/**
 * @summary 导出企业VOC分析任务明细列表
 *
 * @param tmpReq ExportAnalysisTagDetailByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportAnalysisTagDetailByTaskIdResponse
 */
ExportAnalysisTagDetailByTaskIdResponse Client::exportAnalysisTagDetailByTaskIdWithOptions(const ExportAnalysisTagDetailByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportAnalysisTagDetailByTaskIdShrinkRequest request = ExportAnalysisTagDetailByTaskIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategories()) {
    request.setCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategories(), "Categories", "json"));
  }

  json body = {};
  if (!!request.hasCategoriesShrink()) {
    body["Categories"] = request.getCategoriesShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportAnalysisTagDetailByTaskId"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportAnalysisTagDetailByTaskIdResponse>();
}

/**
 * @summary 导出企业VOC分析任务明细列表
 *
 * @param request ExportAnalysisTagDetailByTaskIdRequest
 * @return ExportAnalysisTagDetailByTaskIdResponse
 */
ExportAnalysisTagDetailByTaskIdResponse Client::exportAnalysisTagDetailByTaskId(const ExportAnalysisTagDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportAnalysisTagDetailByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 导出智能审核报告
 *
 * @param request ExportAuditContentResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportAuditContentResultResponse
 */
ExportAuditContentResultResponse Client::exportAuditContentResultWithOptions(const ExportAuditContentResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportAuditContentResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportAuditContentResultResponse>();
}

/**
 * @summary 导出智能审核报告
 *
 * @param request ExportAuditContentResultRequest
 * @return ExportAuditContentResultResponse
 */
ExportAuditContentResultResponse Client::exportAuditContentResult(const ExportAuditContentResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportAuditContentResultWithOptions(request, runtime);
}

/**
 * @summary 导出-自定义数据源-选题视角分析任务结果
 *
 * @param request ExportCustomSourceAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCustomSourceAnalysisTaskResponse
 */
ExportCustomSourceAnalysisTaskResponse Client::exportCustomSourceAnalysisTaskWithOptions(const ExportCustomSourceAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportCustomSourceAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportCustomSourceAnalysisTaskResponse>();
}

/**
 * @summary 导出-自定义数据源-选题视角分析任务结果
 *
 * @param request ExportCustomSourceAnalysisTaskRequest
 * @return ExportCustomSourceAnalysisTaskResponse
 */
ExportCustomSourceAnalysisTaskResponse Client::exportCustomSourceAnalysisTask(const ExportCustomSourceAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCustomSourceAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 文档管理-导出。
 *
 * @param request ExportGeneratedContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportGeneratedContentResponse
 */
ExportGeneratedContentResponse Client::exportGeneratedContentWithOptions(const ExportGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportGeneratedContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportGeneratedContentResponse>();
}

/**
 * @summary 文档管理-导出。
 *
 * @param request ExportGeneratedContentRequest
 * @return ExportGeneratedContentResponse
 */
ExportGeneratedContentResponse Client::exportGeneratedContent(const ExportGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary 导出选题策划文档，响应为一个可公开访问的URL。一小时后失效
 *
 * @param tmpReq ExportHotTopicPlanningProposalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportHotTopicPlanningProposalsResponse
 */
ExportHotTopicPlanningProposalsResponse Client::exportHotTopicPlanningProposalsWithOptions(const ExportHotTopicPlanningProposalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportHotTopicPlanningProposalsShrinkRequest request = ExportHotTopicPlanningProposalsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomViewPointIds()) {
    request.setCustomViewPointIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomViewPointIds(), "CustomViewPointIds", "json"));
  }

  if (!!tmpReq.hasTitles()) {
    request.setTitlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTitles(), "Titles", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCustomViewPointIdsShrink()) {
    body["CustomViewPointIds"] = request.getCustomViewPointIdsShrink();
  }

  if (!!request.hasExportType()) {
    body["ExportType"] = request.getExportType();
  }

  if (!!request.hasTitlesShrink()) {
    body["Titles"] = request.getTitlesShrink();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  if (!!request.hasViewPointType()) {
    body["ViewPointType"] = request.getViewPointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportHotTopicPlanningProposals"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportHotTopicPlanningProposalsResponse>();
}

/**
 * @summary 导出选题策划文档，响应为一个可公开访问的URL。一小时后失效
 *
 * @param request ExportHotTopicPlanningProposalsRequest
 * @return ExportHotTopicPlanningProposalsResponse
 */
ExportHotTopicPlanningProposalsResponse Client::exportHotTopicPlanningProposals(const ExportHotTopicPlanningProposalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportHotTopicPlanningProposalsWithOptions(request, runtime);
}

/**
 * @summary 导出所有干预内容
 *
 * @param request ExportIntervenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportIntervenesResponse
 */
ExportIntervenesResponse Client::exportIntervenesWithOptions(const ExportIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportIntervenes"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportIntervenesResponse>();
}

/**
 * @summary 导出所有干预内容
 *
 * @param request ExportIntervenesRequest
 * @return ExportIntervenesResponse
 */
ExportIntervenesResponse Client::exportIntervenes(const ExportIntervenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportIntervenesWithOptions(request, runtime);
}

/**
 * @summary 反馈某次生成的结果
 *
 * @param tmpReq FeedbackDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FeedbackDialogueResponse
 */
FeedbackDialogueResponse Client::feedbackDialogueWithOptions(const FeedbackDialogueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FeedbackDialogueShrinkRequest request = FeedbackDialogueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRatingTags()) {
    request.setRatingTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRatingTags(), "RatingTags", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCustomerResponse()) {
    body["CustomerResponse"] = request.getCustomerResponse();
  }

  if (!!request.hasGoodText()) {
    body["GoodText"] = request.getGoodText();
  }

  if (!!request.hasModifiedResponse()) {
    body["ModifiedResponse"] = request.getModifiedResponse();
  }

  if (!!request.hasRating()) {
    body["Rating"] = request.getRating();
  }

  if (!!request.hasRatingTagsShrink()) {
    body["RatingTags"] = request.getRatingTagsShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FeedbackDialogue"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FeedbackDialogueResponse>();
}

/**
 * @summary 反馈某次生成的结果
 *
 * @param request FeedbackDialogueRequest
 * @return FeedbackDialogueResponse
 */
FeedbackDialogueResponse Client::feedbackDialogue(const FeedbackDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return feedbackDialogueWithOptions(request, runtime);
}

/**
 * @summary 获取词库导出任务结果
 *
 * @param request FetchExportTermsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchExportTermsTaskResponse
 */
FetchExportTermsTaskResponse Client::fetchExportTermsTaskWithOptions(const FetchExportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "FetchExportTermsTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchExportTermsTaskResponse>();
}

/**
 * @summary 获取词库导出任务结果
 *
 * @param request FetchExportTermsTaskRequest
 * @return FetchExportTermsTaskResponse
 */
FetchExportTermsTaskResponse Client::fetchExportTermsTask(const FetchExportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchExportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary 获取异步导出文档任务结果
 *
 * @param request FetchExportWordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchExportWordTaskResponse
 */
FetchExportWordTaskResponse Client::fetchExportWordTaskWithOptions(const FetchExportWordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FetchExportWordTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchExportWordTaskResponse>();
}

/**
 * @summary 获取异步导出文档任务结果
 *
 * @param request FetchExportWordTaskRequest
 * @return FetchExportWordTaskResponse
 */
FetchExportWordTaskResponse Client::fetchExportWordTask(const FetchExportWordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchExportWordTaskWithOptions(request, runtime);
}

/**
 * @summary 获取图片任务执行结果
 *
 * @param tmpReq FetchImageTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchImageTaskResponse
 */
FetchImageTaskResponse Client::fetchImageTaskWithOptions(const FetchImageTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FetchImageTaskShrinkRequest request = FetchImageTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIdList()) {
    request.setTaskIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIdList(), "TaskIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasArticleTaskId()) {
    body["ArticleTaskId"] = request.getArticleTaskId();
  }

  if (!!request.hasTaskIdListShrink()) {
    body["TaskIdList"] = request.getTaskIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FetchImageTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchImageTaskResponse>();
}

/**
 * @summary 获取图片任务执行结果
 *
 * @param request FetchImageTaskRequest
 * @return FetchImageTaskResponse
 */
FetchImageTaskResponse Client::fetchImageTask(const FetchImageTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchImageTaskWithOptions(request, runtime);
}

/**
 * @summary 获取导入词库任务结果
 *
 * @param request FetchImportTermsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchImportTermsTaskResponse
 */
FetchImportTermsTaskResponse Client::fetchImportTermsTaskWithOptions(const FetchImportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "FetchImportTermsTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchImportTermsTaskResponse>();
}

/**
 * @summary 获取导入词库任务结果
 *
 * @param request FetchImportTermsTaskRequest
 * @return FetchImportTermsTaskResponse
 */
FetchImportTermsTaskResponse Client::fetchImportTermsTask(const FetchImportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchImportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary 生成内容导出文档任务
 *
 * @param request GenerateExportWordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateExportWordTaskResponse
 */
GenerateExportWordTaskResponse Client::generateExportWordTaskWithOptions(const GenerateExportWordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasGeneratedContentId()) {
    body["GeneratedContentId"] = request.getGeneratedContentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateExportWordTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateExportWordTaskResponse>();
}

/**
 * @summary 生成内容导出文档任务
 *
 * @param request GenerateExportWordTaskRequest
 * @return GenerateExportWordTaskResponse
 */
GenerateExportWordTaskResponse Client::generateExportWordTask(const GenerateExportWordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateExportWordTaskWithOptions(request, runtime);
}

/**
 * @summary 生成临时可访问的公开url
 *
 * @param request GenerateFileUrlByKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateFileUrlByKeyResponse
 */
GenerateFileUrlByKeyResponse Client::generateFileUrlByKeyWithOptions(const GenerateFileUrlByKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateFileUrlByKey"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateFileUrlByKeyResponse>();
}

/**
 * @summary 生成临时可访问的公开url
 *
 * @param request GenerateFileUrlByKeyRequest
 * @return GenerateFileUrlByKeyResponse
 */
GenerateFileUrlByKeyResponse Client::generateFileUrlByKey(const GenerateFileUrlByKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateFileUrlByKeyWithOptions(request, runtime);
}

/**
 * @summary 智能配图，图片生成任务
 *
 * @param tmpReq GenerateImageTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateImageTaskResponse
 */
GenerateImageTaskResponse Client::generateImageTaskWithOptions(const GenerateImageTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateImageTaskShrinkRequest request = GenerateImageTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParagraphList()) {
    request.setParagraphListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParagraphList(), "ParagraphList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasArticleTaskId()) {
    body["ArticleTaskId"] = request.getArticleTaskId();
  }

  if (!!request.hasParagraphListShrink()) {
    body["ParagraphList"] = request.getParagraphListShrink();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasStyle()) {
    body["Style"] = request.getStyle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateImageTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateImageTaskResponse>();
}

/**
 * @summary 智能配图，图片生成任务
 *
 * @param request GenerateImageTaskRequest
 * @return GenerateImageTaskResponse
 */
GenerateImageTaskResponse Client::generateImageTask(const GenerateImageTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateImageTaskWithOptions(request, runtime);
}

/**
 * @summary 生成上传配置
 *
 * @param request GenerateUploadConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUploadConfigResponse
 */
GenerateUploadConfigResponse Client::generateUploadConfigWithOptions(const GenerateUploadConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasParentDir()) {
    body["ParentDir"] = request.getParentDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateUploadConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUploadConfigResponse>();
}

/**
 * @summary 生成上传配置
 *
 * @param request GenerateUploadConfigRequest
 * @return GenerateUploadConfigResponse
 */
GenerateUploadConfigResponse Client::generateUploadConfig(const GenerateUploadConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadConfigWithOptions(request, runtime);
}

/**
 * @summary 视角生成
 *
 * @param tmpReq GenerateViewPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateViewPointResponse
 */
GenerateViewPointResponse Client::generateViewPointWithOptions(const GenerateViewPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateViewPointShrinkRequest request = GenerateViewPointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateViewPoint"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateViewPointResponse>();
}

/**
 * @summary 视角生成
 *
 * @param request GenerateViewPointRequest
 * @return GenerateViewPointResponse
 */
GenerateViewPointResponse Client::generateViewPoint(const GenerateViewPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateViewPointWithOptions(request, runtime);
}

/**
 * @summary 查询规则库后处理的进度。与 ConfirmAndPostProcessAuditNote 接口配合使用，供您查询当前后处理任务的状态。
 *
 * @param request GetAuditNotePostProcessingStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditNotePostProcessingStatusResponse
 */
GetAuditNotePostProcessingStatusResponse Client::getAuditNotePostProcessingStatusWithOptions(const GetAuditNotePostProcessingStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAuditNotePostProcessingStatus"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditNotePostProcessingStatusResponse>();
}

/**
 * @summary 查询规则库后处理的进度。与 ConfirmAndPostProcessAuditNote 接口配合使用，供您查询当前后处理任务的状态。
 *
 * @param request GetAuditNotePostProcessingStatusRequest
 * @return GetAuditNotePostProcessingStatusResponse
 */
GetAuditNotePostProcessingStatusResponse Client::getAuditNotePostProcessingStatus(const GetAuditNotePostProcessingStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditNotePostProcessingStatusWithOptions(request, runtime);
}

/**
 * @summary 查询用户上传规则库的处理状态。通过该接口，用户可以查询到当前规则库上传任务的状态，并获取到解析后的规则库文件大小、存储路径等信息。
 *
 * @param request GetAuditNoteProcessingStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditNoteProcessingStatusResponse
 */
GetAuditNoteProcessingStatusResponse Client::getAuditNoteProcessingStatusWithOptions(const GetAuditNoteProcessingStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAuditNoteProcessingStatus"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditNoteProcessingStatusResponse>();
}

/**
 * @summary 查询用户上传规则库的处理状态。通过该接口，用户可以查询到当前规则库上传任务的状态，并获取到解析后的规则库文件大小、存储路径等信息。
 *
 * @param request GetAuditNoteProcessingStatusRequest
 * @return GetAuditNoteProcessingStatusResponse
 */
GetAuditNoteProcessingStatusResponse Client::getAuditNoteProcessingStatus(const GetAuditNoteProcessingStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditNoteProcessingStatusWithOptions(request, runtime);
}

/**
 * @summary 获得剪辑任务状态
 *
 * @param request GetAutoClipsTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoClipsTaskInfoResponse
 */
GetAutoClipsTaskInfoResponse Client::getAutoClipsTaskInfoWithOptions(const GetAutoClipsTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAutoClipsTaskInfo"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoClipsTaskInfoResponse>();
}

/**
 * @summary 获得剪辑任务状态
 *
 * @param request GetAutoClipsTaskInfoRequest
 * @return GetAutoClipsTaskInfoResponse
 */
GetAutoClipsTaskInfoResponse Client::getAutoClipsTaskInfo(const GetAutoClipsTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoClipsTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 查询用户当前可供审核的规则库信息，只能查询到当前可用于审核的规则库。如果您想看到自定义规则库的具体内容，请使用 DownloadAuditNote 接口。
 *
 * @param request GetAvailableAuditNotesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAvailableAuditNotesResponse
 */
GetAvailableAuditNotesResponse Client::getAvailableAuditNotesWithOptions(const GetAvailableAuditNotesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAvailableAuditNotes"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAvailableAuditNotesResponse>();
}

/**
 * @summary 查询用户当前可供审核的规则库信息，只能查询到当前可用于审核的规则库。如果您想看到自定义规则库的具体内容，请使用 DownloadAuditNote 接口。
 *
 * @param request GetAvailableAuditNotesRequest
 * @return GetAvailableAuditNotesResponse
 */
GetAvailableAuditNotesResponse Client::getAvailableAuditNotes(const GetAvailableAuditNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAvailableAuditNotesWithOptions(request, runtime);
}

/**
 * @summary 获得标书写作结果接口
 *
 * @param request GetBiddingDocInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBiddingDocInfoResponse
 */
GetBiddingDocInfoResponse Client::getBiddingDocInfoWithOptions(const GetBiddingDocInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBiddingDocInfo"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBiddingDocInfoResponse>();
}

/**
 * @summary 获得标书写作结果接口
 *
 * @param request GetBiddingDocInfoRequest
 * @return GetBiddingDocInfoResponse
 */
GetBiddingDocInfoResponse Client::getBiddingDocInfo(const GetBiddingDocInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBiddingDocInfoWithOptions(request, runtime);
}

/**
 * @summary 获得标书功能剩余额度
 *
 * @param request GetBiddingRemainLimitNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBiddingRemainLimitNumResponse
 */
GetBiddingRemainLimitNumResponse Client::getBiddingRemainLimitNumWithOptions(const GetBiddingRemainLimitNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiName()) {
    body["ApiName"] = request.getApiName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBiddingRemainLimitNum"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBiddingRemainLimitNumResponse>();
}

/**
 * @summary 获得标书功能剩余额度
 *
 * @param request GetBiddingRemainLimitNumRequest
 * @return GetBiddingRemainLimitNumResponse
 */
GetBiddingRemainLimitNumResponse Client::getBiddingRemainLimitNum(const GetBiddingRemainLimitNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBiddingRemainLimitNumWithOptions(request, runtime);
}

/**
 * @summary 获取某次标签挖掘结果分类
 *
 * @param request GetCategoriesByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCategoriesByTaskIdResponse
 */
GetCategoriesByTaskIdResponse Client::getCategoriesByTaskIdWithOptions(const GetCategoriesByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCategoriesByTaskId"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCategoriesByTaskIdResponse>();
}

/**
 * @summary 获取某次标签挖掘结果分类
 *
 * @param request GetCategoriesByTaskIdRequest
 * @return GetCategoriesByTaskIdResponse
 */
GetCategoriesByTaskIdResponse Client::getCategoriesByTaskId(const GetCategoriesByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCategoriesByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 获取自定义播报单任务结果
 *
 * @param request GetCustomHotTopicBroadcastJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomHotTopicBroadcastJobResponse
 */
GetCustomHotTopicBroadcastJobResponse Client::getCustomHotTopicBroadcastJobWithOptions(const GetCustomHotTopicBroadcastJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCustomHotTopicBroadcastJob"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomHotTopicBroadcastJobResponse>();
}

/**
 * @summary 获取自定义播报单任务结果
 *
 * @param request GetCustomHotTopicBroadcastJobRequest
 * @return GetCustomHotTopicBroadcastJobResponse
 */
GetCustomHotTopicBroadcastJobResponse Client::getCustomHotTopicBroadcastJob(const GetCustomHotTopicBroadcastJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomHotTopicBroadcastJobWithOptions(request, runtime);
}

/**
 * @summary 获取自定义数据源-选题视角分析任务结果
 *
 * @param request GetCustomSourceTopicAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomSourceTopicAnalysisTaskResponse
 */
GetCustomSourceTopicAnalysisTaskResponse Client::getCustomSourceTopicAnalysisTaskWithOptions(const GetCustomSourceTopicAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCustomSourceTopicAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomSourceTopicAnalysisTaskResponse>();
}

/**
 * @summary 获取自定义数据源-选题视角分析任务结果
 *
 * @param request GetCustomSourceTopicAnalysisTaskRequest
 * @return GetCustomSourceTopicAnalysisTaskResponse
 */
GetCustomSourceTopicAnalysisTaskResponse Client::getCustomSourceTopicAnalysisTask(const GetCustomSourceTopicAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomSourceTopicAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 获取自定义文本
 *
 * @param request GetCustomTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomTextResponse
 */
GetCustomTextResponse Client::getCustomTextWithOptions(const GetCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCustomText"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomTextResponse>();
}

/**
 * @summary 获取自定义文本
 *
 * @param request GetCustomTextRequest
 * @return GetCustomTextResponse
 */
GetCustomTextResponse Client::getCustomText(const GetCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomTextWithOptions(request, runtime);
}

/**
 * @summary 获取自定义选题视角分析任务结果
 *
 * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
 */
GetCustomTopicSelectionPerspectiveAnalysisTaskResponse Client::getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(const GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCustomTopicSelectionPerspectiveAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomTopicSelectionPerspectiveAnalysisTaskResponse>();
}

/**
 * @summary 获取自定义选题视角分析任务结果
 *
 * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
 * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
 */
GetCustomTopicSelectionPerspectiveAnalysisTaskResponse Client::getCustomTopicSelectionPerspectiveAnalysisTask(const GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 获取系统数据源配置和个人配置
 *
 * @param request GetDataSourceOrderConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceOrderConfigResponse
 */
GetDataSourceOrderConfigResponse Client::getDataSourceOrderConfigWithOptions(const GetDataSourceOrderConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasGenerateTechnology()) {
    body["GenerateTechnology"] = request.getGenerateTechnology();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDataSourceOrderConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceOrderConfigResponse>();
}

/**
 * @summary 获取系统数据源配置和个人配置
 *
 * @param request GetDataSourceOrderConfigRequest
 * @return GetDataSourceOrderConfigResponse
 */
GetDataSourceOrderConfigResponse Client::getDataSourceOrderConfig(const GetDataSourceOrderConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceOrderConfigWithOptions(request, runtime);
}

/**
 * @summary 数据集管理-详情
 *
 * @param request GetDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResponse>();
}

/**
 * @summary 数据集管理-详情
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetWithOptions(request, runtime);
}

/**
 * @summary 获取数据集文档
 *
 * @param tmpReq GetDatasetDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetDocumentResponse
 */
GetDatasetDocumentResponse Client::getDatasetDocumentWithOptions(const GetDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDatasetDocumentShrinkRequest request = GetDatasetDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIncludeFields()) {
    request.setIncludeFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeFields(), "IncludeFields", "json"));
  }

  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasDocUuid()) {
    body["DocUuid"] = request.getDocUuid();
  }

  if (!!request.hasIncludeFieldsShrink()) {
    body["IncludeFields"] = request.getIncludeFieldsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDatasetDocument"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetDocumentResponse>();
}

/**
 * @summary 获取数据集文档
 *
 * @param request GetDatasetDocumentRequest
 * @return GetDatasetDocumentResponse
 */
GetDatasetDocumentResponse Client::getDatasetDocument(const GetDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary 查询深度写作任务
 *
 * @param request GetDeepWriteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeepWriteTaskResponse
 */
GetDeepWriteTaskResponse Client::getDeepWriteTaskWithOptions(const GetDeepWriteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDeepWriteTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeepWriteTaskResponse>();
}

/**
 * @summary 查询深度写作任务
 *
 * @param request GetDeepWriteTaskRequest
 * @return GetDeepWriteTaskResponse
 */
GetDeepWriteTaskResponse Client::getDeepWriteTask(const GetDeepWriteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeepWriteTaskWithOptions(request, runtime);
}

/**
 * @summary 查询深度写作任务的结果
 *
 * @param request GetDeepWriteTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeepWriteTaskResultResponse
 */
GetDeepWriteTaskResultResponse Client::getDeepWriteTaskResultWithOptions(const GetDeepWriteTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDeepWriteTaskResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeepWriteTaskResultResponse>();
}

/**
 * @summary 查询深度写作任务的结果
 *
 * @param request GetDeepWriteTaskResultRequest
 * @return GetDeepWriteTaskResultResponse
 */
GetDeepWriteTaskResultResponse Client::getDeepWriteTaskResult(const GetDeepWriteTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeepWriteTaskResultWithOptions(request, runtime);
}

/**
 * @summary 获取文档聚合任务结果
 *
 * @param request GetDocClusterTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocClusterTaskResponse
 */
GetDocClusterTaskResponse Client::getDocClusterTaskWithOptions(const GetDocClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocClusterTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocClusterTaskResponse>();
}

/**
 * @summary 获取文档聚合任务结果
 *
 * @param request GetDocClusterTaskRequest
 * @return GetDocClusterTaskResponse
 */
GetDocClusterTaskResponse Client::getDocClusterTask(const GetDocClusterTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocClusterTaskWithOptions(request, runtime);
}

/**
 * @summary 妙读获取文档信息
 *
 * @param request GetDocInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocInfoResponse
 */
GetDocInfoResponse Client::getDocInfoWithOptions(const GetDocInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDocInfo"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocInfoResponse>();
}

/**
 * @summary 妙读获取文档信息
 *
 * @param request GetDocInfoRequest
 * @return GetDocInfoResponse
 */
GetDocInfoResponse Client::getDocInfo(const GetDocInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocInfoWithOptions(request, runtime);
}

/**
 * @summary 获取企业VOC分析任务结果
 *
 * @param request GetEnterpriseVocAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnterpriseVocAnalysisTaskResponse
 */
GetEnterpriseVocAnalysisTaskResponse Client::getEnterpriseVocAnalysisTaskWithOptions(const GetEnterpriseVocAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetEnterpriseVocAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnterpriseVocAnalysisTaskResponse>();
}

/**
 * @summary 获取企业VOC分析任务结果
 *
 * @param request GetEnterpriseVocAnalysisTaskRequest
 * @return GetEnterpriseVocAnalysisTaskResponse
 */
GetEnterpriseVocAnalysisTaskResponse Client::getEnterpriseVocAnalysisTask(const GetEnterpriseVocAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEnterpriseVocAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 获取当前正用于事实性审核的信源 URL。
 *
 * @param request GetFactAuditUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFactAuditUrlResponse
 */
GetFactAuditUrlResponse Client::getFactAuditUrlWithOptions(const GetFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFactAuditUrl"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFactAuditUrlResponse>();
}

/**
 * @summary 获取当前正用于事实性审核的信源 URL。
 *
 * @param request GetFactAuditUrlRequest
 * @return GetFactAuditUrlResponse
 */
GetFactAuditUrlResponse Client::getFactAuditUrl(const GetFactAuditUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFactAuditUrlWithOptions(request, runtime);
}

/**
 * @summary 妙读获得文档字数
 *
 * @param request GetFileContentLengthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileContentLengthResponse
 */
GetFileContentLengthResponse Client::getFileContentLengthWithOptions(const GetFileContentLengthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocName()) {
    body["DocName"] = request.getDocName();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFileContentLength"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileContentLengthResponse>();
}

/**
 * @summary 妙读获得文档字数
 *
 * @param request GetFileContentLengthRequest
 * @return GetFileContentLengthResponse
 */
GetFileContentLengthResponse Client::getFileContentLength(const GetFileContentLengthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileContentLengthWithOptions(request, runtime);
}

/**
 * @summary 通用配置-查询
 *
 * @param request GetGeneralConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGeneralConfigResponse
 */
GetGeneralConfigResponse Client::getGeneralConfigWithOptions(const GetGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigKey()) {
    body["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetGeneralConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGeneralConfigResponse>();
}

/**
 * @summary 通用配置-查询
 *
 * @param request GetGeneralConfigRequest
 * @return GetGeneralConfigResponse
 */
GetGeneralConfigResponse Client::getGeneralConfig(const GetGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary 文档管理-查询详情。
 *
 * @param request GetGeneratedContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGeneratedContentResponse
 */
GetGeneratedContentResponse Client::getGeneratedContentWithOptions(const GetGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGeneratedContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGeneratedContentResponse>();
}

/**
 * @summary 文档管理-查询详情。
 *
 * @param request GetGeneratedContentRequest
 * @return GetGeneratedContentResponse
 */
GetGeneratedContentResponse Client::getGeneratedContent(const GetGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary 查询新闻播报单
 *
 * @param tmpReq GetHotTopicBroadcastRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotTopicBroadcastResponse
 */
GetHotTopicBroadcastResponse Client::getHotTopicBroadcastWithOptions(const GetHotTopicBroadcastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotTopicBroadcastShrinkRequest request = GetHotTopicBroadcastShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLocations()) {
    request.setLocationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocations(), "Locations", "json"));
  }

  if (!!tmpReq.hasStepForCustomSummaryStyleConfig()) {
    request.setStepForCustomSummaryStyleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStepForCustomSummaryStyleConfig(), "StepForCustomSummaryStyleConfig", "json"));
  }

  if (!!tmpReq.hasStepForNewsBroadcastContentConfig()) {
    request.setStepForNewsBroadcastContentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStepForNewsBroadcastContentConfig(), "StepForNewsBroadcastContentConfig", "json"));
  }

  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopics(), "Topics", "json"));
  }

  json body = {};
  if (!!request.hasCalcTotalToken()) {
    body["CalcTotalToken"] = request.getCalcTotalToken();
  }

  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasHotTopicVersion()) {
    body["HotTopicVersion"] = request.getHotTopicVersion();
  }

  if (!!request.hasLocationQuery()) {
    body["LocationQuery"] = request.getLocationQuery();
  }

  if (!!request.hasLocationsShrink()) {
    body["Locations"] = request.getLocationsShrink();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasStepForCustomSummaryStyleConfigShrink()) {
    body["StepForCustomSummaryStyleConfig"] = request.getStepForCustomSummaryStyleConfigShrink();
  }

  if (!!request.hasStepForNewsBroadcastContentConfigShrink()) {
    body["StepForNewsBroadcastContentConfig"] = request.getStepForNewsBroadcastContentConfigShrink();
  }

  if (!!request.hasTopicsShrink()) {
    body["Topics"] = request.getTopicsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetHotTopicBroadcast"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotTopicBroadcastResponse>();
}

/**
 * @summary 查询新闻播报单
 *
 * @param request GetHotTopicBroadcastRequest
 * @return GetHotTopicBroadcastResponse
 */
GetHotTopicBroadcastResponse Client::getHotTopicBroadcast(const GetHotTopicBroadcastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotTopicBroadcastWithOptions(request, runtime);
}

/**
 * @summary 获得干预全局回复
 *
 * @param request GetInterveneGlobalReplyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInterveneGlobalReplyResponse
 */
GetInterveneGlobalReplyResponse Client::getInterveneGlobalReplyWithOptions(const GetInterveneGlobalReplyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInterveneGlobalReply"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInterveneGlobalReplyResponse>();
}

/**
 * @summary 获得干预全局回复
 *
 * @param request GetInterveneGlobalReplyRequest
 * @return GetInterveneGlobalReplyResponse
 */
GetInterveneGlobalReplyResponse Client::getInterveneGlobalReply(const GetInterveneGlobalReplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneGlobalReplyWithOptions(request, runtime);
}

/**
 * @summary 获得导入任务信息
 *
 * @param request GetInterveneImportTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInterveneImportTaskInfoResponse
 */
GetInterveneImportTaskInfoResponse Client::getInterveneImportTaskInfoWithOptions(const GetInterveneImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInterveneImportTaskInfo"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInterveneImportTaskInfoResponse>();
}

/**
 * @summary 获得导入任务信息
 *
 * @param request GetInterveneImportTaskInfoRequest
 * @return GetInterveneImportTaskInfoResponse
 */
GetInterveneImportTaskInfoResponse Client::getInterveneImportTaskInfo(const GetInterveneImportTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneImportTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 获得干预项规则详情
 *
 * @param request GetInterveneRuleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInterveneRuleDetailResponse
 */
GetInterveneRuleDetailResponse Client::getInterveneRuleDetailWithOptions(const GetInterveneRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInterveneRuleDetail"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInterveneRuleDetailResponse>();
}

/**
 * @summary 获得干预项规则详情
 *
 * @param request GetInterveneRuleDetailRequest
 * @return GetInterveneRuleDetailResponse
 */
GetInterveneRuleDetailResponse Client::getInterveneRuleDetail(const GetInterveneRuleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneRuleDetailWithOptions(request, runtime);
}

/**
 * @summary 获得干预导入模版文件下载地址
 *
 * @param request GetInterveneTemplateFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInterveneTemplateFileUrlResponse
 */
GetInterveneTemplateFileUrlResponse Client::getInterveneTemplateFileUrlWithOptions(const GetInterveneTemplateFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInterveneTemplateFileUrl"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInterveneTemplateFileUrlResponse>();
}

/**
 * @summary 获得干预导入模版文件下载地址
 *
 * @param request GetInterveneTemplateFileUrlRequest
 * @return GetInterveneTemplateFileUrlResponse
 */
GetInterveneTemplateFileUrlResponse Client::getInterveneTemplateFileUrl(const GetInterveneTemplateFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneTemplateFileUrlWithOptions(request, runtime);
}

/**
 * @summary 根据ID获取素材内容
 *
 * @param request GetMaterialByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMaterialByIdResponse
 */
GetMaterialByIdResponse Client::getMaterialByIdWithOptions(const GetMaterialByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMaterialById"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMaterialByIdResponse>();
}

/**
 * @summary 根据ID获取素材内容
 *
 * @param request GetMaterialByIdRequest
 * @return GetMaterialByIdResponse
 */
GetMaterialByIdResponse Client::getMaterialById(const GetMaterialByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMaterialByIdWithOptions(request, runtime);
}

/**
 * @summary 获取PPT组件的配置
 *
 * @param request GetPptConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPptConfigResponse
 */
GetPptConfigResponse Client::getPptConfigWithOptions(const GetPptConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPptConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPptConfigResponse>();
}

/**
 * @summary 获取PPT组件的配置
 *
 * @param request GetPptConfigRequest
 * @return GetPptConfigResponse
 */
GetPptConfigResponse Client::getPptConfig(const GetPptConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPptConfigWithOptions(request, runtime);
}

/**
 * @summary 获取当前用户的配置
 *
 * @param request GetPropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPropertiesResponse
 */
GetPropertiesResponse Client::getPropertiesWithOptions(const GetPropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProperties"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPropertiesResponse>();
}

/**
 * @summary 获取当前用户的配置
 *
 * @param request GetPropertiesRequest
 * @return GetPropertiesResponse
 */
GetPropertiesResponse Client::getProperties(const GetPropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPropertiesWithOptions(request, runtime);
}

/**
 * @summary 查询智能审核结果
 *
 * @param request GetSmartAuditResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartAuditResultResponse
 */
GetSmartAuditResultResponse Client::getSmartAuditResultWithOptions(const GetSmartAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSmartAuditResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmartAuditResultResponse>();
}

/**
 * @summary 查询智能审核结果
 *
 * @param request GetSmartAuditResultRequest
 * @return GetSmartAuditResultResponse
 */
GetSmartAuditResultResponse Client::getSmartAuditResult(const GetSmartAuditResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartAuditResultWithOptions(request, runtime);
}

/**
 * @summary 查询一键成片剪辑任务
 *
 * @param request GetSmartClipTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartClipTaskResponse
 */
GetSmartClipTaskResponse Client::getSmartClipTaskWithOptions(const GetSmartClipTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSmartClipTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmartClipTaskResponse>();
}

/**
 * @summary 查询一键成片剪辑任务
 *
 * @param request GetSmartClipTaskRequest
 * @return GetSmartClipTaskResponse
 */
GetSmartClipTaskResponse Client::getSmartClipTask(const GetSmartClipTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartClipTaskWithOptions(request, runtime);
}

/**
 * @summary 获取文体学习分析结果
 *
 * @param request GetStyleLearningResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStyleLearningResultResponse
 */
GetStyleLearningResultResponse Client::getStyleLearningResultWithOptions(const GetStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetStyleLearningResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStyleLearningResultResponse>();
}

/**
 * @summary 获取文体学习分析结果
 *
 * @param request GetStyleLearningResultRequest
 * @return GetStyleLearningResultResponse
 */
GetStyleLearningResultResponse Client::getStyleLearningResult(const GetStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary 根据ID获取热点事件信息
 *
 * @param request GetTopicByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicByIdResponse
 */
GetTopicByIdResponse Client::getTopicByIdWithOptions(const GetTopicByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTopicById"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicByIdResponse>();
}

/**
 * @summary 根据ID获取热点事件信息
 *
 * @param request GetTopicByIdRequest
 * @return GetTopicByIdResponse
 */
GetTopicByIdResponse Client::getTopicById(const GetTopicByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicByIdWithOptions(request, runtime);
}

/**
 * @summary 获取选题视角分析任务结果
 *
 * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
 */
GetTopicSelectionPerspectiveAnalysisTaskResponse Client::getTopicSelectionPerspectiveAnalysisTaskWithOptions(const GetTopicSelectionPerspectiveAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTopicSelectionPerspectiveAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicSelectionPerspectiveAnalysisTaskResponse>();
}

/**
 * @summary 获取选题视角分析任务结果
 *
 * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
 * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
 */
GetTopicSelectionPerspectiveAnalysisTaskResponse Client::getTopicSelectionPerspectiveAnalysisTask(const GetTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 导入干预文件
 *
 * @param request ImportInterveneFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportInterveneFileResponse
 */
ImportInterveneFileResponse Client::importInterveneFileWithOptions(const ImportInterveneFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasDocName()) {
    body["DocName"] = request.getDocName();
  }

  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportInterveneFile"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportInterveneFileResponse>();
}

/**
 * @summary 导入干预文件
 *
 * @param request ImportInterveneFileRequest
 * @return ImportInterveneFileResponse
 */
ImportInterveneFileResponse Client::importInterveneFile(const ImportInterveneFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importInterveneFileWithOptions(request, runtime);
}

/**
 * @summary 异步导入干预文件
 *
 * @param request ImportInterveneFileAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportInterveneFileAsyncResponse
 */
ImportInterveneFileAsyncResponse Client::importInterveneFileAsyncWithOptions(const ImportInterveneFileAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasDocName()) {
    body["DocName"] = request.getDocName();
  }

  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportInterveneFileAsync"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportInterveneFileAsyncResponse>();
}

/**
 * @summary 异步导入干预文件
 *
 * @param request ImportInterveneFileAsyncRequest
 * @return ImportInterveneFileAsyncResponse
 */
ImportInterveneFileAsyncResponse Client::importInterveneFileAsync(const ImportInterveneFileAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importInterveneFileAsyncWithOptions(request, runtime);
}

/**
 * @summary 初始化PPT创建操作
 *
 * @param request InitiatePptCreationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitiatePptCreationResponse
 */
InitiatePptCreationResponse Client::initiatePptCreationWithOptions(const InitiatePptCreationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOutline()) {
    body["Outline"] = request.getOutline();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InitiatePptCreation"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitiatePptCreationResponse>();
}

/**
 * @summary 初始化PPT创建操作
 *
 * @param request InitiatePptCreationRequest
 * @return InitiatePptCreationResponse
 */
InitiatePptCreationResponse Client::initiatePptCreation(const InitiatePptCreationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initiatePptCreationWithOptions(request, runtime);
}

/**
 * @summary 设置干预全局回复
 *
 * @param tmpReq InsertInterveneGlobalReplyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertInterveneGlobalReplyResponse
 */
InsertInterveneGlobalReplyResponse Client::insertInterveneGlobalReplyWithOptions(const InsertInterveneGlobalReplyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertInterveneGlobalReplyShrinkRequest request = InsertInterveneGlobalReplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReplyMessagList()) {
    request.setReplyMessagListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReplyMessagList(), "ReplyMessagList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasReplyMessagListShrink()) {
    body["ReplyMessagList"] = request.getReplyMessagListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertInterveneGlobalReply"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertInterveneGlobalReplyResponse>();
}

/**
 * @summary 设置干预全局回复
 *
 * @param request InsertInterveneGlobalReplyRequest
 * @return InsertInterveneGlobalReplyResponse
 */
InsertInterveneGlobalReplyResponse Client::insertInterveneGlobalReply(const InsertInterveneGlobalReplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertInterveneGlobalReplyWithOptions(request, runtime);
}

/**
 * @summary 插入干预规则
 *
 * @param tmpReq InsertInterveneRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertInterveneRuleResponse
 */
InsertInterveneRuleResponse Client::insertInterveneRuleWithOptions(const InsertInterveneRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertInterveneRuleShrinkRequest request = InsertInterveneRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInterveneRuleConfig()) {
    request.setInterveneRuleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInterveneRuleConfig(), "InterveneRuleConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasInterveneRuleConfigShrink()) {
    body["InterveneRuleConfig"] = request.getInterveneRuleConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertInterveneRule"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertInterveneRuleResponse>();
}

/**
 * @summary 插入干预规则
 *
 * @param request InsertInterveneRuleRequest
 * @return InsertInterveneRuleResponse
 */
InsertInterveneRuleResponse Client::insertInterveneRule(const InsertInterveneRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertInterveneRuleWithOptions(request, runtime);
}

/**
 * @summary 分页获取企业VOC分析任务明细列表
 *
 * @param tmpReq ListAnalysisTagDetailByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnalysisTagDetailByTaskIdResponse
 */
ListAnalysisTagDetailByTaskIdResponse Client::listAnalysisTagDetailByTaskIdWithOptions(const ListAnalysisTagDetailByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAnalysisTagDetailByTaskIdShrinkRequest request = ListAnalysisTagDetailByTaskIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategories()) {
    request.setCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategories(), "Categories", "json"));
  }

  json body = {};
  if (!!request.hasCategoriesShrink()) {
    body["Categories"] = request.getCategoriesShrink();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAnalysisTagDetailByTaskId"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnalysisTagDetailByTaskIdResponse>();
}

/**
 * @summary 分页获取企业VOC分析任务明细列表
 *
 * @param request ListAnalysisTagDetailByTaskIdRequest
 * @return ListAnalysisTagDetailByTaskIdResponse
 */
ListAnalysisTagDetailByTaskIdResponse Client::listAnalysisTagDetailByTaskId(const ListAnalysisTagDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnalysisTagDetailByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param tmpReq ListAsyncTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasksWithOptions(const ListAsyncTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAsyncTasksShrinkRequest request = ListAsyncTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskStatusList()) {
    request.setTaskStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskStatusList(), "TaskStatusList", "json"));
  }

  if (!!tmpReq.hasTaskTypeList()) {
    request.setTaskTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskTypeList(), "TaskTypeList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasTaskCode()) {
    body["TaskCode"] = request.getTaskCode();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTaskStatusListShrink()) {
    body["TaskStatusList"] = request.getTaskStatusListShrink();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTaskTypeListShrink()) {
    body["TaskTypeList"] = request.getTaskTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAsyncTasks"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsyncTasksResponse>();
}

/**
 * @summary 查询任务列表
 *
 * @param request ListAsyncTasksRequest
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasks(const ListAsyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsyncTasksWithOptions(request, runtime);
}

/**
 * @summary 获取审核维度列表
 *
 * @param request ListAuditContentErrorTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuditContentErrorTypesResponse
 */
ListAuditContentErrorTypesResponse Client::listAuditContentErrorTypesWithOptions(const ListAuditContentErrorTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAuditContentErrorTypes"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuditContentErrorTypesResponse>();
}

/**
 * @summary 获取审核维度列表
 *
 * @param request ListAuditContentErrorTypesRequest
 * @return ListAuditContentErrorTypesResponse
 */
ListAuditContentErrorTypesResponse Client::listAuditContentErrorTypes(const ListAuditContentErrorTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditContentErrorTypesWithOptions(request, runtime);
}

/**
 * @summary 获取词库列表
 *
 * @param request ListAuditTermsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuditTermsResponse
 */
ListAuditTermsResponse Client::listAuditTermsWithOptions(const ListAuditTermsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTermsName()) {
    body["TermsName"] = request.getTermsName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAuditTerms"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuditTermsResponse>();
}

/**
 * @summary 获取词库列表
 *
 * @param request ListAuditTermsRequest
 * @return ListAuditTermsResponse
 */
ListAuditTermsResponse Client::listAuditTerms(const ListAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditTermsWithOptions(request, runtime);
}

/**
 * @summary 获得标书写作任务列表
 *
 * @param request ListBiddingDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBiddingDocResponse
 */
ListBiddingDocResponse Client::listBiddingDocWithOptions(const ListBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBiddingDoc"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBiddingDocResponse>();
}

/**
 * @summary 获得标书写作任务列表
 *
 * @param request ListBiddingDocRequest
 * @return ListBiddingDocResponse
 */
ListBiddingDocResponse Client::listBiddingDoc(const ListBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBiddingDocWithOptions(request, runtime);
}

/**
 * @summary 获取系统自定义预设
 *
 * @param request ListBuildConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBuildConfigsResponse
 */
ListBuildConfigsResponse Client::listBuildConfigsWithOptions(const ListBuildConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListBuildConfigs"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBuildConfigsResponse>();
}

/**
 * @summary 获取系统自定义预设
 *
 * @param request ListBuildConfigsRequest
 * @return ListBuildConfigsResponse
 */
ListBuildConfigsResponse Client::listBuildConfigs(const ListBuildConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBuildConfigsWithOptions(request, runtime);
}

/**
 * @summary 自定义文本列表
 *
 * @param request ListCustomTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomTextResponse
 */
ListCustomTextResponse Client::listCustomTextWithOptions(const ListCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCustomText"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomTextResponse>();
}

/**
 * @summary 自定义文本列表
 *
 * @param request ListCustomTextRequest
 * @return ListCustomTextResponse
 */
ListCustomTextResponse Client::listCustomText(const ListCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomTextWithOptions(request, runtime);
}

/**
 * @summary 自定义视角列表
 *
 * @param tmpReq ListCustomViewPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomViewPointsResponse
 */
ListCustomViewPointsResponse Client::listCustomViewPointsWithOptions(const ListCustomViewPointsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCustomViewPointsShrinkRequest request = ListCustomViewPointsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttitudes()) {
    request.setAttitudesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttitudes(), "Attitudes", "json"));
  }

  if (!!tmpReq.hasCustomViewPointIds()) {
    request.setCustomViewPointIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomViewPointIds(), "CustomViewPointIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasAttitude()) {
    body["Attitude"] = request.getAttitude();
  }

  if (!!request.hasAttitudesShrink()) {
    body["Attitudes"] = request.getAttitudesShrink();
  }

  if (!!request.hasCustomViewPointId()) {
    body["CustomViewPointId"] = request.getCustomViewPointId();
  }

  if (!!request.hasCustomViewPointIdsShrink()) {
    body["CustomViewPointIds"] = request.getCustomViewPointIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicId()) {
    body["TopicId"] = request.getTopicId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCustomViewPoints"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomViewPointsResponse>();
}

/**
 * @summary 自定义视角列表
 *
 * @param request ListCustomViewPointsRequest
 * @return ListCustomViewPointsResponse
 */
ListCustomViewPointsResponse Client::listCustomViewPoints(const ListCustomViewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomViewPointsWithOptions(request, runtime);
}

/**
 * @summary 查询数据集文档列表
 *
 * @param tmpReq ListDatasetDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetDocumentsResponse
 */
ListDatasetDocumentsResponse Client::listDatasetDocumentsWithOptions(const ListDatasetDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDatasetDocumentsShrinkRequest request = ListDatasetDocumentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeFields()) {
    request.setExcludeFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeFields(), "ExcludeFields", "json"));
  }

  if (!!tmpReq.hasIncludeFields()) {
    request.setIncludeFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeFields(), "IncludeFields", "json"));
  }

  json body = {};
  if (!!request.hasDatasetDescription()) {
    body["DatasetDescription"] = request.getDatasetDescription();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasExcludeFieldsShrink()) {
    body["ExcludeFields"] = request.getExcludeFieldsShrink();
  }

  if (!!request.hasIncludeFieldsShrink()) {
    body["IncludeFields"] = request.getIncludeFieldsShrink();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDatasetDocuments"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetDocumentsResponse>();
}

/**
 * @summary 查询数据集文档列表
 *
 * @param request ListDatasetDocumentsRequest
 * @return ListDatasetDocumentsResponse
 */
ListDatasetDocumentsResponse Client::listDatasetDocuments(const ListDatasetDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetDocumentsWithOptions(request, runtime);
}

/**
 * @summary 数据集管理-查询
 *
 * @param request ListDatasetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const ListDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    body["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIncludeConfig()) {
    body["IncludeConfig"] = request.getIncludeConfig();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchDatasetEnable()) {
    body["SearchDatasetEnable"] = request.getSearchDatasetEnable();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetsResponse>();
}

/**
 * @summary 数据集管理-查询
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetsWithOptions(request, runtime);
}

/**
 * @summary 生成历史列表
 *
 * @param request ListDialoguesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDialoguesResponse
 */
ListDialoguesResponse Client::listDialoguesWithOptions(const ListDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasDialogueType()) {
    body["DialogueType"] = request.getDialogueType();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDialogues"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDialoguesResponse>();
}

/**
 * @summary 生成历史列表
 *
 * @param request ListDialoguesRequest
 * @return ListDialoguesResponse
 */
ListDialoguesResponse Client::listDialogues(const ListDialoguesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDialoguesWithOptions(request, runtime);
}

/**
 * @summary 妙读获取文档列表
 *
 * @param tmpReq ListDocsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocsResponse
 */
ListDocsResponse Client::listDocsWithOptions(const ListDocsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDocsShrinkRequest request = ListDocsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "Statuses", "json"));
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDocName()) {
    body["DocName"] = request.getDocName();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasStatusesShrink()) {
    body["Statuses"] = request.getStatusesShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDocs"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocsResponse>();
}

/**
 * @summary 妙读获取文档列表
 *
 * @param request ListDocsRequest
 * @return ListDocsResponse
 */
ListDocsResponse Client::listDocs(const ListDocsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocsWithOptions(request, runtime);
}

/**
 * @summary 公文检索
 *
 * @param request ListDocumentRetrieveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocumentRetrieveResponse
 */
ListDocumentRetrieveResponse Client::listDocumentRetrieveWithOptions(const ListDocumentRetrieveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContentType()) {
    body["ContentType"] = request.getContentType();
  }

  if (!!request.hasElementScope()) {
    body["ElementScope"] = request.getElementScope();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOffice()) {
    body["Office"] = request.getOffice();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.getSource();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubContentType()) {
    body["SubContentType"] = request.getSubContentType();
  }

  if (!!request.hasSubjectClassify()) {
    body["SubjectClassify"] = request.getSubjectClassify();
  }

  if (!!request.hasWordSize()) {
    body["WordSize"] = request.getWordSize();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDocumentRetrieve"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocumentRetrieveResponse>();
}

/**
 * @summary 公文检索
 *
 * @param request ListDocumentRetrieveRequest
 * @return ListDocumentRetrieveResponse
 */
ListDocumentRetrieveResponse Client::listDocumentRetrieve(const ListDocumentRetrieveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentRetrieveWithOptions(request, runtime);
}

/**
 * @summary 新颖视角列表
 *
 * @param request ListFreshViewPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFreshViewPointsResponse
 */
ListFreshViewPointsResponse Client::listFreshViewPointsWithOptions(const ListFreshViewPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListFreshViewPoints"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFreshViewPointsResponse>();
}

/**
 * @summary 新颖视角列表
 *
 * @param request ListFreshViewPointsRequest
 * @return ListFreshViewPointsResponse
 */
ListFreshViewPointsResponse Client::listFreshViewPoints(const ListFreshViewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFreshViewPointsWithOptions(request, runtime);
}

/**
 * @summary 通用配置-列表
 *
 * @param request ListGeneralConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGeneralConfigsResponse
 */
ListGeneralConfigsResponse Client::listGeneralConfigsWithOptions(const ListGeneralConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListGeneralConfigs"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGeneralConfigsResponse>();
}

/**
 * @summary 通用配置-列表
 *
 * @param request ListGeneralConfigsRequest
 * @return ListGeneralConfigsResponse
 */
ListGeneralConfigsResponse Client::listGeneralConfigs(const ListGeneralConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGeneralConfigsWithOptions(request, runtime);
}

/**
 * @summary 文档管理-列表。
 *
 * @param request ListGeneratedContentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGeneratedContentsResponse
 */
ListGeneratedContentsResponse Client::listGeneratedContentsWithOptions(const ListGeneratedContentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasContentDomain()) {
    body["ContentDomain"] = request.getContentDomain();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.getDataType();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListGeneratedContents"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGeneratedContentsResponse>();
}

/**
 * @summary 文档管理-列表。
 *
 * @param request ListGeneratedContentsRequest
 * @return ListGeneratedContentsResponse
 */
ListGeneratedContentsResponse Client::listGeneratedContents(const ListGeneratedContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGeneratedContentsWithOptions(request, runtime);
}

/**
 * @summary 获取分类的热点新闻
 *
 * @param tmpReq ListHotNewsWithTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotNewsWithTypeResponse
 */
ListHotNewsWithTypeResponse Client::listHotNewsWithTypeWithOptions(const ListHotNewsWithTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotNewsWithTypeShrinkRequest request = ListHotNewsWithTypeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNewsTypes()) {
    request.setNewsTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNewsTypes(), "NewsTypes", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasNewsType()) {
    body["NewsType"] = request.getNewsType();
  }

  if (!!request.hasNewsTypesShrink()) {
    body["NewsTypes"] = request.getNewsTypesShrink();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotNewsWithType"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotNewsWithTypeResponse>();
}

/**
 * @summary 获取分类的热点新闻
 *
 * @param request ListHotNewsWithTypeRequest
 * @return ListHotNewsWithTypeResponse
 */
ListHotNewsWithTypeResponse Client::listHotNewsWithType(const ListHotNewsWithTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotNewsWithTypeWithOptions(request, runtime);
}

/**
 * @summary 获取所有平台热榜源列表
 *
 * @param request ListHotSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotSourcesResponse
 */
ListHotSourcesResponse Client::listHotSourcesWithOptions(const ListHotSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotSources"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotSourcesResponse>();
}

/**
 * @summary 获取所有平台热榜源列表
 *
 * @param request ListHotSourcesRequest
 * @return ListHotSourcesResponse
 */
ListHotSourcesResponse Client::listHotSources(const ListHotSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotSourcesWithOptions(request, runtime);
}

/**
 * @summary 获取热点事件列表
 *
 * @param tmpReq ListHotTopicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotTopicsResponse
 */
ListHotTopicsResponse Client::listHotTopicsWithOptions(const ListHotTopicsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotTopicsShrinkRequest request = ListHotTopicsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTopicIds()) {
    request.setTopicIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopicIds(), "TopicIds", "json"));
  }

  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopics(), "Topics", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTopicIdsShrink()) {
    body["TopicIds"] = request.getTopicIdsShrink();
  }

  if (!!request.hasTopicQuery()) {
    body["TopicQuery"] = request.getTopicQuery();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  if (!!request.hasTopicVersion()) {
    body["TopicVersion"] = request.getTopicVersion();
  }

  if (!!request.hasTopicsShrink()) {
    body["Topics"] = request.getTopicsShrink();
  }

  if (!!request.hasWithNews()) {
    body["WithNews"] = request.getWithNews();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotTopics"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotTopicsResponse>();
}

/**
 * @summary 获取热点事件列表
 *
 * @param request ListHotTopicsRequest
 * @return ListHotTopicsResponse
 */
ListHotTopicsResponse Client::listHotTopics(const ListHotTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotTopicsWithOptions(request, runtime);
}

/**
 * @summary 热门视角列表
 *
 * @param request ListHotViewPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotViewPointsResponse
 */
ListHotViewPointsResponse Client::listHotViewPointsWithOptions(const ListHotViewPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotViewPoints"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotViewPointsResponse>();
}

/**
 * @summary 热门视角列表
 *
 * @param request ListHotViewPointsRequest
 * @return ListHotViewPointsResponse
 */
ListHotViewPointsResponse Client::listHotViewPoints(const ListHotViewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotViewPointsWithOptions(request, runtime);
}

/**
 * @summary 获得干预项目数量列表
 *
 * @param request ListInterveneCntRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterveneCntResponse
 */
ListInterveneCntResponse Client::listInterveneCntWithOptions(const ListInterveneCntRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListInterveneCnt"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterveneCntResponse>();
}

/**
 * @summary 获得干预项目数量列表
 *
 * @param request ListInterveneCntRequest
 * @return ListInterveneCntResponse
 */
ListInterveneCntResponse Client::listInterveneCnt(const ListInterveneCntRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInterveneCntWithOptions(request, runtime);
}

/**
 * @summary 获得导入任务列表
 *
 * @param request ListInterveneImportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterveneImportTasksResponse
 */
ListInterveneImportTasksResponse Client::listInterveneImportTasksWithOptions(const ListInterveneImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListInterveneImportTasks"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterveneImportTasksResponse>();
}

/**
 * @summary 获得导入任务列表
 *
 * @param request ListInterveneImportTasksRequest
 * @return ListInterveneImportTasksResponse
 */
ListInterveneImportTasksResponse Client::listInterveneImportTasks(const ListInterveneImportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInterveneImportTasksWithOptions(request, runtime);
}

/**
 * @summary 获得干预规则列表
 *
 * @param request ListInterveneRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterveneRulesResponse
 */
ListInterveneRulesResponse Client::listInterveneRulesWithOptions(const ListInterveneRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListInterveneRules"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterveneRulesResponse>();
}

/**
 * @summary 获得干预规则列表
 *
 * @param request ListInterveneRulesRequest
 * @return ListInterveneRulesResponse
 */
ListInterveneRulesResponse Client::listInterveneRules(const ListInterveneRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInterveneRulesWithOptions(request, runtime);
}

/**
 * @summary 获得干预项列表
 *
 * @param request ListIntervenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervenesResponse
 */
ListIntervenesResponse Client::listIntervenesWithOptions(const ListIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasInterveneType()) {
    body["InterveneType"] = request.getInterveneType();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListIntervenes"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntervenesResponse>();
}

/**
 * @summary 获得干预项列表
 *
 * @param request ListIntervenesRequest
 * @return ListIntervenesResponse
 */
ListIntervenesResponse Client::listIntervenes(const ListIntervenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervenesWithOptions(request, runtime);
}

/**
 * @summary 查询素材列表
 *
 * @param tmpReq ListMaterialDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMaterialDocumentsResponse
 */
ListMaterialDocumentsResponse Client::listMaterialDocumentsWithOptions(const ListMaterialDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMaterialDocumentsShrinkRequest request = ListMaterialDocumentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocTypeList()) {
    request.setDocTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocTypeList(), "DocTypeList", "json"));
  }

  if (!!tmpReq.hasKeywords()) {
    request.setKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeywords(), "Keywords", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasDocTypeListShrink()) {
    body["DocTypeList"] = request.getDocTypeListShrink();
  }

  if (!!request.hasGeneratePublicUrl()) {
    body["GeneratePublicUrl"] = request.getGeneratePublicUrl();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasKeywordsShrink()) {
    body["Keywords"] = request.getKeywordsShrink();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasShareAttr()) {
    body["ShareAttr"] = request.getShareAttr();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUpdateTimeEnd()) {
    body["UpdateTimeEnd"] = request.getUpdateTimeEnd();
  }

  if (!!request.hasUpdateTimeStart()) {
    body["UpdateTimeStart"] = request.getUpdateTimeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListMaterialDocuments"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMaterialDocumentsResponse>();
}

/**
 * @summary 查询素材列表
 *
 * @param request ListMaterialDocumentsRequest
 * @return ListMaterialDocumentsResponse
 */
ListMaterialDocumentsResponse Client::listMaterialDocuments(const ListMaterialDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMaterialDocumentsWithOptions(request, runtime);
}

/**
 * @summary 获取选题策划列表
 *
 * @param tmpReq ListPlanningProposalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPlanningProposalResponse
 */
ListPlanningProposalResponse Client::listPlanningProposalWithOptions(const ListPlanningProposalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPlanningProposalShrinkRequest request = ListPlanningProposalShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomViewPointIds()) {
    request.setCustomViewPointIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomViewPointIds(), "CustomViewPointIds", "json"));
  }

  if (!!tmpReq.hasTitles()) {
    request.setTitlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTitles(), "Titles", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCustomViewPointId()) {
    body["CustomViewPointId"] = request.getCustomViewPointId();
  }

  if (!!request.hasCustomViewPointIdsShrink()) {
    body["CustomViewPointIds"] = request.getCustomViewPointIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTitlesShrink()) {
    body["Titles"] = request.getTitlesShrink();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  if (!!request.hasTopicVersion()) {
    body["TopicVersion"] = request.getTopicVersion();
  }

  if (!!request.hasViewPointType()) {
    body["ViewPointType"] = request.getViewPointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPlanningProposal"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPlanningProposalResponse>();
}

/**
 * @summary 获取选题策划列表
 *
 * @param request ListPlanningProposalRequest
 * @return ListPlanningProposalResponse
 */
ListPlanningProposalResponse Client::listPlanningProposal(const ListPlanningProposalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPlanningProposalWithOptions(request, runtime);
}

/**
 * @summary 查询搜索生成任务对话详情中数据列表
 *
 * @param request ListSearchTaskDialogueDatasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchTaskDialogueDatasResponse
 */
ListSearchTaskDialogueDatasResponse Client::listSearchTaskDialogueDatasWithOptions(const ListSearchTaskDialogueDatasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncludeContent()) {
    body["IncludeContent"] = request.getIncludeContent();
  }

  if (!!request.hasMultimodalSearchType()) {
    body["MultimodalSearchType"] = request.getMultimodalSearchType();
  }

  if (!!request.hasOriginalSessionId()) {
    body["OriginalSessionId"] = request.getOriginalSessionId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSearchModel()) {
    body["SearchModel"] = request.getSearchModel();
  }

  if (!!request.hasSearchModelDataValue()) {
    body["SearchModelDataValue"] = request.getSearchModelDataValue();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSearchTaskDialogueDatas"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchTaskDialogueDatasResponse>();
}

/**
 * @summary 查询搜索生成任务对话详情中数据列表
 *
 * @param request ListSearchTaskDialogueDatasRequest
 * @return ListSearchTaskDialogueDatasResponse
 */
ListSearchTaskDialogueDatasResponse Client::listSearchTaskDialogueDatas(const ListSearchTaskDialogueDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchTaskDialogueDatasWithOptions(request, runtime);
}

/**
 * @summary 查询妙搜搜索生成任务详情列表
 *
 * @param request ListSearchTaskDialoguesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchTaskDialoguesResponse
 */
ListSearchTaskDialoguesResponse Client::listSearchTaskDialoguesWithOptions(const ListSearchTaskDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSearchTaskDialogues"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchTaskDialoguesResponse>();
}

/**
 * @summary 查询妙搜搜索生成任务详情列表
 *
 * @param request ListSearchTaskDialoguesRequest
 * @return ListSearchTaskDialoguesResponse
 */
ListSearchTaskDialoguesResponse Client::listSearchTaskDialogues(const ListSearchTaskDialoguesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchTaskDialoguesWithOptions(request, runtime);
}

/**
 * @summary 查询妙搜搜索生成历史任务列表
 *
 * @param tmpReq ListSearchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchTasksResponse
 */
ListSearchTasksResponse Client::listSearchTasksWithOptions(const ListSearchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSearchTasksShrinkRequest request = ListSearchTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDialogueTypes()) {
    request.setDialogueTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDialogueTypes(), "DialogueTypes", "json"));
  }

  json body = {};
  if (!!request.hasDialogueTypesShrink()) {
    body["DialogueTypes"] = request.getDialogueTypesShrink();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSearchTasks"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchTasksResponse>();
}

/**
 * @summary 查询妙搜搜索生成历史任务列表
 *
 * @param request ListSearchTasksRequest
 * @return ListSearchTasksResponse
 */
ListSearchTasksResponse Client::listSearchTasks(const ListSearchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchTasksWithOptions(request, runtime);
}

/**
 * @summary 获取文体学习分析结果列表
 *
 * @param request ListStyleLearningResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStyleLearningResultResponse
 */
ListStyleLearningResultResponse Client::listStyleLearningResultWithOptions(const ListStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListStyleLearningResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStyleLearningResultResponse>();
}

/**
 * @summary 获取文体学习分析结果列表
 *
 * @param request ListStyleLearningResultRequest
 * @return ListStyleLearningResultResponse
 */
ListStyleLearningResultResponse Client::listStyleLearningResult(const ListStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary 时效性视角列表
 *
 * @param request ListTimedViewAttitudeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTimedViewAttitudeResponse
 */
ListTimedViewAttitudeResponse Client::listTimedViewAttitudeWithOptions(const ListTimedViewAttitudeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTimedViewAttitude"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTimedViewAttitudeResponse>();
}

/**
 * @summary 时效性视角列表
 *
 * @param request ListTimedViewAttitudeRequest
 * @return ListTimedViewAttitudeResponse
 */
ListTimedViewAttitudeResponse Client::listTimedViewAttitude(const ListTimedViewAttitudeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTimedViewAttitudeWithOptions(request, runtime);
}

/**
 * @summary 获取热点推荐事件
 *
 * @param request ListTopicRecommendEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicRecommendEventListResponse
 */
ListTopicRecommendEventListResponse Client::listTopicRecommendEventListWithOptions(const ListTopicRecommendEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTopicRecommendEventList"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicRecommendEventListResponse>();
}

/**
 * @summary 获取热点推荐事件
 *
 * @param request ListTopicRecommendEventListRequest
 * @return ListTopicRecommendEventListResponse
 */
ListTopicRecommendEventListResponse Client::listTopicRecommendEventList(const ListTopicRecommendEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicRecommendEventListWithOptions(request, runtime);
}

/**
 * @summary 获取主题事件推荐观点列表
 *
 * @param request ListTopicViewPointRecommendEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicViewPointRecommendEventListResponse
 */
ListTopicViewPointRecommendEventListResponse Client::listTopicViewPointRecommendEventListWithOptions(const ListTopicViewPointRecommendEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTopicViewPointRecommendEventList"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicViewPointRecommendEventListResponse>();
}

/**
 * @summary 获取主题事件推荐观点列表
 *
 * @param request ListTopicViewPointRecommendEventListRequest
 * @return ListTopicViewPointRecommendEventListResponse
 */
ListTopicViewPointRecommendEventListResponse Client::listTopicViewPointRecommendEventList(const ListTopicViewPointRecommendEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicViewPointRecommendEventListWithOptions(request, runtime);
}

/**
 * @summary 获取系统所有实例信息
 *
 * @param request ListVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVersionsResponse
 */
ListVersionsResponse Client::listVersionsWithOptions(const ListVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVersions"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVersionsResponse>();
}

/**
 * @summary 获取系统所有实例信息
 *
 * @param request ListVersionsRequest
 * @return ListVersionsResponse
 */
ListVersionsResponse Client::listVersions(const ListVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVersionsWithOptions(request, runtime);
}

/**
 * @summary 网友视角列表
 *
 * @param request ListWebReviewPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebReviewPointsResponse
 */
ListWebReviewPointsResponse Client::listWebReviewPointsWithOptions(const ListWebReviewPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWebReviewPoints"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebReviewPointsResponse>();
}

/**
 * @summary 网友视角列表
 *
 * @param request ListWebReviewPointsRequest
 * @return ListWebReviewPointsResponse
 */
ListWebReviewPointsResponse Client::listWebReviewPoints(const ListWebReviewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWebReviewPointsWithOptions(request, runtime);
}

/**
 * @summary 获取文体列表
 *
 * @param request ListWritingStylesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWritingStylesResponse
 */
ListWritingStylesResponse Client::listWritingStylesWithOptions(const ListWritingStylesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWritingStyles"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWritingStylesResponse>();
}

/**
 * @summary 获取文体列表
 *
 * @param request ListWritingStylesRequest
 * @return ListWritingStylesResponse
 */
ListWritingStylesResponse Client::listWritingStyles(const ListWritingStylesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWritingStylesWithOptions(request, runtime);
}

/**
 * @summary 根据taskId查询异步任务状态
 *
 * @param request QueryAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAsyncTaskResponse
 */
QueryAsyncTaskResponse Client::queryAsyncTaskWithOptions(const QueryAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryAsyncTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAsyncTaskResponse>();
}

/**
 * @summary 根据taskId查询异步任务状态
 *
 * @param request QueryAsyncTaskRequest
 * @return QueryAsyncTaskResponse
 */
QueryAsyncTaskResponse Client::queryAsyncTask(const QueryAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 查询审核结果
 *
 * @param request QueryAuditTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuditTaskResponse
 */
QueryAuditTaskResponse Client::queryAuditTaskWithOptions(const QueryAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArticleId()) {
    body["ArticleId"] = request.getArticleId();
  }

  if (!!request.hasContentAuditTaskId()) {
    body["ContentAuditTaskId"] = request.getContentAuditTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryAuditTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuditTaskResponse>();
}

/**
 * @summary 查询审核结果
 *
 * @param request QueryAuditTaskRequest
 * @return QueryAuditTaskResponse
 */
QueryAuditTaskResponse Client::queryAuditTask(const QueryAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuditTaskWithOptions(request, runtime);
}

/**
 * @summary 内容缩写
 *
 * @param request RunAbbreviationContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAbbreviationContentResponse
 */
FutureGenerator<RunAbbreviationContentResponse> Client::runAbbreviationContentWithSSE(const RunAbbreviationContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunAbbreviationContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunAbbreviationContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 内容缩写
 *
 * @param request RunAbbreviationContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAbbreviationContentResponse
 */
RunAbbreviationContentResponse Client::runAbbreviationContentWithOptions(const RunAbbreviationContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunAbbreviationContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunAbbreviationContentResponse>();
}

/**
 * @summary 内容缩写
 *
 * @param request RunAbbreviationContentRequest
 * @return RunAbbreviationContentResponse
 */
RunAbbreviationContentResponse Client::runAbbreviationContent(const RunAbbreviationContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runAbbreviationContentWithOptions(request, runtime);
}

/**
 * @summary 妙笔：AI助手写作
 *
 * @param tmpReq RunAiHelperWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAiHelperWritingResponse
 */
FutureGenerator<RunAiHelperWritingResponse> Client::runAiHelperWritingWithSSE(const RunAiHelperWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunAiHelperWritingShrinkRequest request = RunAiHelperWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWritingParams()) {
    request.setWritingParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingParams(), "WritingParams", "json"));
  }

  json body = {};
  if (!!request.hasDistributeWriting()) {
    body["DistributeWriting"] = request.getDistributeWriting();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptMode()) {
    body["PromptMode"] = request.getPromptMode();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingParamsShrink()) {
    body["WritingParams"] = request.getWritingParamsShrink();
  }

  if (!!request.hasWritingScene()) {
    body["WritingScene"] = request.getWritingScene();
  }

  if (!!request.hasWritingStyle()) {
    body["WritingStyle"] = request.getWritingStyle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunAiHelperWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunAiHelperWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙笔：AI助手写作
 *
 * @param tmpReq RunAiHelperWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAiHelperWritingResponse
 */
RunAiHelperWritingResponse Client::runAiHelperWritingWithOptions(const RunAiHelperWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunAiHelperWritingShrinkRequest request = RunAiHelperWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWritingParams()) {
    request.setWritingParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingParams(), "WritingParams", "json"));
  }

  json body = {};
  if (!!request.hasDistributeWriting()) {
    body["DistributeWriting"] = request.getDistributeWriting();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptMode()) {
    body["PromptMode"] = request.getPromptMode();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingParamsShrink()) {
    body["WritingParams"] = request.getWritingParamsShrink();
  }

  if (!!request.hasWritingScene()) {
    body["WritingScene"] = request.getWritingScene();
  }

  if (!!request.hasWritingStyle()) {
    body["WritingStyle"] = request.getWritingStyle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunAiHelperWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunAiHelperWritingResponse>();
}

/**
 * @summary 妙笔：AI助手写作
 *
 * @param request RunAiHelperWritingRequest
 * @return RunAiHelperWritingResponse
 */
RunAiHelperWritingResponse Client::runAiHelperWriting(const RunAiHelperWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runAiHelperWritingWithOptions(request, runtime);
}

/**
 * @summary 妙读生成书籍脑图
 *
 * @param request RunBookBrainmapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookBrainmapResponse
 */
FutureGenerator<RunBookBrainmapResponse> Client::runBookBrainmapWithSSE(const RunBookBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasNodeNumber()) {
    body["NodeNumber"] = request.getNodeNumber();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWordNumber()) {
    body["WordNumber"] = request.getWordNumber();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunBookBrainmap"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunBookBrainmapResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读生成书籍脑图
 *
 * @param request RunBookBrainmapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookBrainmapResponse
 */
RunBookBrainmapResponse Client::runBookBrainmapWithOptions(const RunBookBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasNodeNumber()) {
    body["NodeNumber"] = request.getNodeNumber();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWordNumber()) {
    body["WordNumber"] = request.getWordNumber();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunBookBrainmap"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunBookBrainmapResponse>();
}

/**
 * @summary 妙读生成书籍脑图
 *
 * @param request RunBookBrainmapRequest
 * @return RunBookBrainmapResponse
 */
RunBookBrainmapResponse Client::runBookBrainmap(const RunBookBrainmapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runBookBrainmapWithOptions(request, runtime);
}

/**
 * @summary 书籍导读接口
 *
 * @param request RunBookIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookIntroductionResponse
 */
FutureGenerator<RunBookIntroductionResponse> Client::runBookIntroductionWithSSE(const RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasKeyPointPrompt()) {
    body["KeyPointPrompt"] = request.getKeyPointPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummaryPrompt()) {
    body["SummaryPrompt"] = request.getSummaryPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunBookIntroduction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunBookIntroductionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 书籍导读接口
 *
 * @param request RunBookIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookIntroductionResponse
 */
RunBookIntroductionResponse Client::runBookIntroductionWithOptions(const RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasKeyPointPrompt()) {
    body["KeyPointPrompt"] = request.getKeyPointPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummaryPrompt()) {
    body["SummaryPrompt"] = request.getSummaryPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunBookIntroduction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunBookIntroductionResponse>();
}

/**
 * @summary 书籍导读接口
 *
 * @param request RunBookIntroductionRequest
 * @return RunBookIntroductionResponse
 */
RunBookIntroductionResponse Client::runBookIntroduction(const RunBookIntroductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runBookIntroductionWithOptions(request, runtime);
}

/**
 * @summary 书籍智能卡片接口
 *
 * @param request RunBookSmartCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookSmartCardResponse
 */
FutureGenerator<RunBookSmartCardResponse> Client::runBookSmartCardWithSSE(const RunBookSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunBookSmartCard"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunBookSmartCardResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 书籍智能卡片接口
 *
 * @param request RunBookSmartCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookSmartCardResponse
 */
RunBookSmartCardResponse Client::runBookSmartCardWithOptions(const RunBookSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunBookSmartCard"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunBookSmartCardResponse>();
}

/**
 * @summary 书籍智能卡片接口
 *
 * @param request RunBookSmartCardRequest
 * @return RunBookSmartCardResponse
 */
RunBookSmartCardResponse Client::runBookSmartCard(const RunBookSmartCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runBookSmartCardWithOptions(request, runtime);
}

/**
 * @summary 客户之声预测
 *
 * @param tmpReq RunCommentGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCommentGenerationResponse
 */
FutureGenerator<RunCommentGenerationResponse> Client::runCommentGenerationWithSSE(const RunCommentGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunCommentGenerationShrinkRequest request = RunCommentGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLengthRange()) {
    request.setLengthRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLengthRange(), "LengthRange", "json"));
  }

  if (!!tmpReq.hasSentiment()) {
    request.setSentimentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSentiment(), "Sentiment", "json"));
  }

  if (!!tmpReq.hasType()) {
    request.setTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getType(), "Type", "json"));
  }

  json body = {};
  if (!!request.hasAllowEmoji()) {
    body["AllowEmoji"] = request.getAllowEmoji();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasLengthRangeShrink()) {
    body["LengthRange"] = request.getLengthRangeShrink();
  }

  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasNumComments()) {
    body["NumComments"] = request.getNumComments();
  }

  if (!!request.hasSentimentShrink()) {
    body["Sentiment"] = request.getSentimentShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSourceMaterial()) {
    body["SourceMaterial"] = request.getSourceMaterial();
  }

  if (!!request.hasStyle()) {
    body["Style"] = request.getStyle();
  }

  if (!!request.hasTypeShrink()) {
    body["Type"] = request.getTypeShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCommentGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunCommentGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 客户之声预测
 *
 * @param tmpReq RunCommentGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCommentGenerationResponse
 */
RunCommentGenerationResponse Client::runCommentGenerationWithOptions(const RunCommentGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunCommentGenerationShrinkRequest request = RunCommentGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLengthRange()) {
    request.setLengthRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLengthRange(), "LengthRange", "json"));
  }

  if (!!tmpReq.hasSentiment()) {
    request.setSentimentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSentiment(), "Sentiment", "json"));
  }

  if (!!tmpReq.hasType()) {
    request.setTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getType(), "Type", "json"));
  }

  json body = {};
  if (!!request.hasAllowEmoji()) {
    body["AllowEmoji"] = request.getAllowEmoji();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasLengthRangeShrink()) {
    body["LengthRange"] = request.getLengthRangeShrink();
  }

  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasNumComments()) {
    body["NumComments"] = request.getNumComments();
  }

  if (!!request.hasSentimentShrink()) {
    body["Sentiment"] = request.getSentimentShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSourceMaterial()) {
    body["SourceMaterial"] = request.getSourceMaterial();
  }

  if (!!request.hasStyle()) {
    body["Style"] = request.getStyle();
  }

  if (!!request.hasTypeShrink()) {
    body["Type"] = request.getTypeShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCommentGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCommentGenerationResponse>();
}

/**
 * @summary 客户之声预测
 *
 * @param request RunCommentGenerationRequest
 * @return RunCommentGenerationResponse
 */
RunCommentGenerationResponse Client::runCommentGeneration(const RunCommentGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommentGenerationWithOptions(request, runtime);
}

/**
 * @summary 内容续写
 *
 * @param request RunContinueContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContinueContentResponse
 */
FutureGenerator<RunContinueContentResponse> Client::runContinueContentWithSSE(const RunContinueContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunContinueContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunContinueContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 内容续写
 *
 * @param request RunContinueContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContinueContentResponse
 */
RunContinueContentResponse Client::runContinueContentWithOptions(const RunContinueContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunContinueContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunContinueContentResponse>();
}

/**
 * @summary 内容续写
 *
 * @param request RunContinueContentRequest
 * @return RunContinueContentResponse
 */
RunContinueContentResponse Client::runContinueContent(const RunContinueContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runContinueContentWithOptions(request, runtime);
}

/**
 * @summary 自定义热点话题分析
 *
 * @param request RunCustomHotTopicAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCustomHotTopicAnalysisResponse
 */
FutureGenerator<RunCustomHotTopicAnalysisResponse> Client::runCustomHotTopicAnalysisWithSSE(const RunCustomHotTopicAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAskUser()) {
    body["AskUser"] = request.getAskUser();
  }

  if (!!request.hasForceAnalysisExistsTopic()) {
    body["ForceAnalysisExistsTopic"] = request.getForceAnalysisExistsTopic();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUserBack()) {
    body["UserBack"] = request.getUserBack();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCustomHotTopicAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunCustomHotTopicAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 自定义热点话题分析
 *
 * @param request RunCustomHotTopicAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCustomHotTopicAnalysisResponse
 */
RunCustomHotTopicAnalysisResponse Client::runCustomHotTopicAnalysisWithOptions(const RunCustomHotTopicAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAskUser()) {
    body["AskUser"] = request.getAskUser();
  }

  if (!!request.hasForceAnalysisExistsTopic()) {
    body["ForceAnalysisExistsTopic"] = request.getForceAnalysisExistsTopic();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUserBack()) {
    body["UserBack"] = request.getUserBack();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCustomHotTopicAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCustomHotTopicAnalysisResponse>();
}

/**
 * @summary 自定义热点话题分析
 *
 * @param request RunCustomHotTopicAnalysisRequest
 * @return RunCustomHotTopicAnalysisResponse
 */
RunCustomHotTopicAnalysisResponse Client::runCustomHotTopicAnalysis(const RunCustomHotTopicAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCustomHotTopicAnalysisWithOptions(request, runtime);
}

/**
 * @summary 自定义选题视角分析
 *
 * @param request RunCustomHotTopicViewPointAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCustomHotTopicViewPointAnalysisResponse
 */
FutureGenerator<RunCustomHotTopicViewPointAnalysisResponse> Client::runCustomHotTopicViewPointAnalysisWithSSE(const RunCustomHotTopicViewPointAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAskUser()) {
    body["AskUser"] = request.getAskUser();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSearchQuery()) {
    body["SearchQuery"] = request.getSearchQuery();
  }

  if (!!request.hasSkipAskUser()) {
    body["SkipAskUser"] = request.getSkipAskUser();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicId()) {
    body["TopicId"] = request.getTopicId();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  if (!!request.hasTopicVersion()) {
    body["TopicVersion"] = request.getTopicVersion();
  }

  if (!!request.hasUserBack()) {
    body["UserBack"] = request.getUserBack();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCustomHotTopicViewPointAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunCustomHotTopicViewPointAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 自定义选题视角分析
 *
 * @param request RunCustomHotTopicViewPointAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCustomHotTopicViewPointAnalysisResponse
 */
RunCustomHotTopicViewPointAnalysisResponse Client::runCustomHotTopicViewPointAnalysisWithOptions(const RunCustomHotTopicViewPointAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAskUser()) {
    body["AskUser"] = request.getAskUser();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSearchQuery()) {
    body["SearchQuery"] = request.getSearchQuery();
  }

  if (!!request.hasSkipAskUser()) {
    body["SkipAskUser"] = request.getSkipAskUser();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasTopicId()) {
    body["TopicId"] = request.getTopicId();
  }

  if (!!request.hasTopicSource()) {
    body["TopicSource"] = request.getTopicSource();
  }

  if (!!request.hasTopicVersion()) {
    body["TopicVersion"] = request.getTopicVersion();
  }

  if (!!request.hasUserBack()) {
    body["UserBack"] = request.getUserBack();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCustomHotTopicViewPointAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCustomHotTopicViewPointAnalysisResponse>();
}

/**
 * @summary 自定义选题视角分析
 *
 * @param request RunCustomHotTopicViewPointAnalysisRequest
 * @return RunCustomHotTopicViewPointAnalysisResponse
 */
RunCustomHotTopicViewPointAnalysisResponse Client::runCustomHotTopicViewPointAnalysis(const RunCustomHotTopicViewPointAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCustomHotTopicViewPointAnalysisWithOptions(request, runtime);
}

/**
 * @summary 流式输出深度写作事件
 *
 * @param request RunDeepWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDeepWritingResponse
 */
FutureGenerator<RunDeepWritingResponse> Client::runDeepWritingWithSSE(const RunDeepWritingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCursor()) {
    body["Cursor"] = request.getCursor();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDeepWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDeepWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 流式输出深度写作事件
 *
 * @param request RunDeepWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDeepWritingResponse
 */
RunDeepWritingResponse Client::runDeepWritingWithOptions(const RunDeepWritingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCursor()) {
    body["Cursor"] = request.getCursor();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDeepWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDeepWritingResponse>();
}

/**
 * @summary 流式输出深度写作事件
 *
 * @param request RunDeepWritingRequest
 * @return RunDeepWritingResponse
 */
RunDeepWritingResponse Client::runDeepWriting(const RunDeepWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDeepWritingWithOptions(request, runtime);
}

/**
 * @summary 妙读脑图生成接口
 *
 * @param request RunDocBrainmapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocBrainmapResponse
 */
FutureGenerator<RunDocBrainmapResponse> Client::runDocBrainmapWithSSE(const RunDocBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasNodeNumber()) {
    body["NodeNumber"] = request.getNodeNumber();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWordNumber()) {
    body["WordNumber"] = request.getWordNumber();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasReferenceContent()) {
    body["referenceContent"] = request.getReferenceContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocBrainmap"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocBrainmapResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读脑图生成接口
 *
 * @param request RunDocBrainmapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocBrainmapResponse
 */
RunDocBrainmapResponse Client::runDocBrainmapWithOptions(const RunDocBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasNodeNumber()) {
    body["NodeNumber"] = request.getNodeNumber();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWordNumber()) {
    body["WordNumber"] = request.getWordNumber();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasReferenceContent()) {
    body["referenceContent"] = request.getReferenceContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocBrainmap"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocBrainmapResponse>();
}

/**
 * @summary 妙读脑图生成接口
 *
 * @param request RunDocBrainmapRequest
 * @return RunDocBrainmapResponse
 */
RunDocBrainmapResponse Client::runDocBrainmap(const RunDocBrainmapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocBrainmapWithOptions(request, runtime);
}

/**
 * @summary 妙读文档导读接口
 *
 * @param request RunDocIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocIntroductionResponse
 */
FutureGenerator<RunDocIntroductionResponse> Client::runDocIntroductionWithSSE(const RunDocIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasIntroductionPrompt()) {
    body["IntroductionPrompt"] = request.getIntroductionPrompt();
  }

  if (!!request.hasKeyPointPrompt()) {
    body["KeyPointPrompt"] = request.getKeyPointPrompt();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummaryPrompt()) {
    body["SummaryPrompt"] = request.getSummaryPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasReferenceContent()) {
    body["referenceContent"] = request.getReferenceContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocIntroduction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocIntroductionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读文档导读接口
 *
 * @param request RunDocIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocIntroductionResponse
 */
RunDocIntroductionResponse Client::runDocIntroductionWithOptions(const RunDocIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasIntroductionPrompt()) {
    body["IntroductionPrompt"] = request.getIntroductionPrompt();
  }

  if (!!request.hasKeyPointPrompt()) {
    body["KeyPointPrompt"] = request.getKeyPointPrompt();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummaryPrompt()) {
    body["SummaryPrompt"] = request.getSummaryPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasReferenceContent()) {
    body["referenceContent"] = request.getReferenceContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocIntroduction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocIntroductionResponse>();
}

/**
 * @summary 妙读文档导读接口
 *
 * @param request RunDocIntroductionRequest
 * @return RunDocIntroductionResponse
 */
RunDocIntroductionResponse Client::runDocIntroduction(const RunDocIntroductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocIntroductionWithOptions(request, runtime);
}

/**
 * @summary 妙读问答接口
 *
 * @param tmpReq RunDocQaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocQaResponse
 */
FutureGenerator<RunDocQaResponse> Client::runDocQaWithSSE(const RunDocQaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunDocQaShrinkRequest request = RunDocQaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryIds()) {
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryIds(), "CategoryIds", "json"));
  }

  if (!!tmpReq.hasConversationContexts()) {
    request.setConversationContextsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConversationContexts(), "ConversationContexts", "json"));
  }

  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  json body = {};
  if (!!request.hasCategoryIdsShrink()) {
    body["CategoryIds"] = request.getCategoryIdsShrink();
  }

  if (!!request.hasConversationContextsShrink()) {
    body["ConversationContexts"] = request.getConversationContextsShrink();
  }

  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSearchSource()) {
    body["SearchSource"] = request.getSearchSource();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocQa"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocQaResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读问答接口
 *
 * @param tmpReq RunDocQaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocQaResponse
 */
RunDocQaResponse Client::runDocQaWithOptions(const RunDocQaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunDocQaShrinkRequest request = RunDocQaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryIds()) {
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryIds(), "CategoryIds", "json"));
  }

  if (!!tmpReq.hasConversationContexts()) {
    request.setConversationContextsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConversationContexts(), "ConversationContexts", "json"));
  }

  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  json body = {};
  if (!!request.hasCategoryIdsShrink()) {
    body["CategoryIds"] = request.getCategoryIdsShrink();
  }

  if (!!request.hasConversationContextsShrink()) {
    body["ConversationContexts"] = request.getConversationContextsShrink();
  }

  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSearchSource()) {
    body["SearchSource"] = request.getSearchSource();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocQa"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocQaResponse>();
}

/**
 * @summary 妙读问答接口
 *
 * @param request RunDocQaRequest
 * @return RunDocQaResponse
 */
RunDocQaResponse Client::runDocQa(const RunDocQaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocQaWithOptions(request, runtime);
}

/**
 * @summary 文档智能卡片接口
 *
 * @param request RunDocSmartCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocSmartCardResponse
 */
FutureGenerator<RunDocSmartCardResponse> Client::runDocSmartCardWithSSE(const RunDocSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocSmartCard"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocSmartCardResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 文档智能卡片接口
 *
 * @param request RunDocSmartCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocSmartCardResponse
 */
RunDocSmartCardResponse Client::runDocSmartCardWithOptions(const RunDocSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocSmartCard"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocSmartCardResponse>();
}

/**
 * @summary 文档智能卡片接口
 *
 * @param request RunDocSmartCardRequest
 * @return RunDocSmartCardResponse
 */
RunDocSmartCardResponse Client::runDocSmartCard(const RunDocSmartCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocSmartCardWithOptions(request, runtime);
}

/**
 * @summary 妙读文档总结摘要接口
 *
 * @param request RunDocSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocSummaryResponse
 */
FutureGenerator<RunDocSummaryResponse> Client::runDocSummaryWithSSE(const RunDocSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasRecommendContent()) {
    body["RecommendContent"] = request.getRecommendContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocSummary"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocSummaryResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读文档总结摘要接口
 *
 * @param request RunDocSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocSummaryResponse
 */
RunDocSummaryResponse Client::runDocSummaryWithOptions(const RunDocSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasRecommendContent()) {
    body["RecommendContent"] = request.getRecommendContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocSummary"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocSummaryResponse>();
}

/**
 * @summary 妙读文档总结摘要接口
 *
 * @param request RunDocSummaryRequest
 * @return RunDocSummaryResponse
 */
RunDocSummaryResponse Client::runDocSummary(const RunDocSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocSummaryWithOptions(request, runtime);
}

/**
 * @summary 妙读文档翻译接口
 *
 * @param request RunDocTranslationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocTranslationResponse
 */
FutureGenerator<RunDocTranslationResponse> Client::runDocTranslationWithSSE(const RunDocTranslationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasRecommendContent()) {
    body["RecommendContent"] = request.getRecommendContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTransType()) {
    body["TransType"] = request.getTransType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocTranslation"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocTranslationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读文档翻译接口
 *
 * @param request RunDocTranslationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocTranslationResponse
 */
RunDocTranslationResponse Client::runDocTranslationWithOptions(const RunDocTranslationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasRecommendContent()) {
    body["RecommendContent"] = request.getRecommendContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTransType()) {
    body["TransType"] = request.getTransType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocTranslation"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocTranslationResponse>();
}

/**
 * @summary 妙读文档翻译接口
 *
 * @param request RunDocTranslationRequest
 * @return RunDocTranslationResponse
 */
RunDocTranslationResponse Client::runDocTranslation(const RunDocTranslationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocTranslationWithOptions(request, runtime);
}

/**
 * @summary 文档改写
 *
 * @param request RunDocWashingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocWashingResponse
 */
FutureGenerator<RunDocWashingResponse> Client::runDocWashingWithSSE(const RunDocWashingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasWordNumber()) {
    body["WordNumber"] = request.getWordNumber();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingTypeName()) {
    body["WritingTypeName"] = request.getWritingTypeName();
  }

  if (!!request.hasWritingTypeRefDoc()) {
    body["WritingTypeRefDoc"] = request.getWritingTypeRefDoc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocWashing"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunDocWashingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 文档改写
 *
 * @param request RunDocWashingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDocWashingResponse
 */
RunDocWashingResponse Client::runDocWashingWithOptions(const RunDocWashingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasWordNumber()) {
    body["WordNumber"] = request.getWordNumber();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingTypeName()) {
    body["WritingTypeName"] = request.getWritingTypeName();
  }

  if (!!request.hasWritingTypeRefDoc()) {
    body["WritingTypeRefDoc"] = request.getWritingTypeRefDoc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunDocWashing"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDocWashingResponse>();
}

/**
 * @summary 文档改写
 *
 * @param request RunDocWashingRequest
 * @return RunDocWashingResponse
 */
RunDocWashingResponse Client::runDocWashing(const RunDocWashingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocWashingWithOptions(request, runtime);
}

/**
 * @summary 内容扩写
 *
 * @param request RunExpandContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunExpandContentResponse
 */
FutureGenerator<RunExpandContentResponse> Client::runExpandContentWithSSE(const RunExpandContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunExpandContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunExpandContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 内容扩写
 *
 * @param request RunExpandContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunExpandContentResponse
 */
RunExpandContentResponse Client::runExpandContentWithOptions(const RunExpandContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunExpandContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunExpandContentResponse>();
}

/**
 * @summary 内容扩写
 *
 * @param request RunExpandContentRequest
 * @return RunExpandContentResponse
 */
RunExpandContentResponse Client::runExpandContent(const RunExpandContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runExpandContentWithOptions(request, runtime);
}

/**
 * @summary 妙读猜你想问接口
 *
 * @param request RunGenerateQuestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunGenerateQuestionsResponse
 */
FutureGenerator<RunGenerateQuestionsResponse> Client::runGenerateQuestionsWithSSE(const RunGenerateQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunGenerateQuestions"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunGenerateQuestionsResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读猜你想问接口
 *
 * @param request RunGenerateQuestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunGenerateQuestionsResponse
 */
RunGenerateQuestionsResponse Client::runGenerateQuestionsWithOptions(const RunGenerateQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunGenerateQuestions"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunGenerateQuestionsResponse>();
}

/**
 * @summary 妙读猜你想问接口
 *
 * @param request RunGenerateQuestionsRequest
 * @return RunGenerateQuestionsResponse
 */
RunGenerateQuestionsResponse Client::runGenerateQuestions(const RunGenerateQuestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runGenerateQuestionsWithOptions(request, runtime);
}

/**
 * @summary 妙读文档关键词抽取接口
 *
 * @param request RunHotwordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunHotwordResponse
 */
FutureGenerator<RunHotwordResponse> Client::runHotwordWithSSE(const RunHotwordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunHotword"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunHotwordResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙读文档关键词抽取接口
 *
 * @param request RunHotwordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunHotwordResponse
 */
RunHotwordResponse Client::runHotwordWithOptions(const RunHotwordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["DocId"] = request.getDocId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceContent()) {
    body["ReferenceContent"] = request.getReferenceContent();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunHotword"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunHotwordResponse>();
}

/**
 * @summary 妙读文档关键词抽取接口
 *
 * @param request RunHotwordRequest
 * @return RunHotwordResponse
 */
RunHotwordResponse Client::runHotword(const RunHotwordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runHotwordWithOptions(request, runtime);
}

/**
 * @summary AI妙笔-创作-抽取关键词
 *
 * @param tmpReq RunKeywordsExtractionGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunKeywordsExtractionGenerationResponse
 */
FutureGenerator<RunKeywordsExtractionGenerationResponse> Client::runKeywordsExtractionGenerationWithSSE(const RunKeywordsExtractionGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunKeywordsExtractionGenerationShrinkRequest request = RunKeywordsExtractionGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunKeywordsExtractionGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunKeywordsExtractionGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary AI妙笔-创作-抽取关键词
 *
 * @param tmpReq RunKeywordsExtractionGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunKeywordsExtractionGenerationResponse
 */
RunKeywordsExtractionGenerationResponse Client::runKeywordsExtractionGenerationWithOptions(const RunKeywordsExtractionGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunKeywordsExtractionGenerationShrinkRequest request = RunKeywordsExtractionGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunKeywordsExtractionGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunKeywordsExtractionGenerationResponse>();
}

/**
 * @summary AI妙笔-创作-抽取关键词
 *
 * @param request RunKeywordsExtractionGenerationRequest
 * @return RunKeywordsExtractionGenerationResponse
 */
RunKeywordsExtractionGenerationResponse Client::runKeywordsExtractionGeneration(const RunKeywordsExtractionGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runKeywordsExtractionGenerationWithOptions(request, runtime);
}

/**
 * @summary 文档批量导读
 *
 * @param tmpReq RunMultiDocIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMultiDocIntroductionResponse
 */
FutureGenerator<RunMultiDocIntroductionResponse> Client::runMultiDocIntroductionWithSSE(const RunMultiDocIntroductionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunMultiDocIntroductionShrinkRequest request = RunMultiDocIntroductionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  json body = {};
  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasKeyPointPrompt()) {
    body["KeyPointPrompt"] = request.getKeyPointPrompt();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummaryPrompt()) {
    body["SummaryPrompt"] = request.getSummaryPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunMultiDocIntroduction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunMultiDocIntroductionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 文档批量导读
 *
 * @param tmpReq RunMultiDocIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMultiDocIntroductionResponse
 */
RunMultiDocIntroductionResponse Client::runMultiDocIntroductionWithOptions(const RunMultiDocIntroductionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunMultiDocIntroductionShrinkRequest request = RunMultiDocIntroductionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  json body = {};
  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasKeyPointPrompt()) {
    body["KeyPointPrompt"] = request.getKeyPointPrompt();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummaryPrompt()) {
    body["SummaryPrompt"] = request.getSummaryPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunMultiDocIntroduction"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunMultiDocIntroductionResponse>();
}

/**
 * @summary 文档批量导读
 *
 * @param request RunMultiDocIntroductionRequest
 * @return RunMultiDocIntroductionResponse
 */
RunMultiDocIntroductionResponse Client::runMultiDocIntroduction(const RunMultiDocIntroductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runMultiDocIntroductionWithOptions(request, runtime);
}

/**
 * @summary 流式输出PPT大纲
 *
 * @param request RunPptOutlineGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPptOutlineGenerationResponse
 */
FutureGenerator<RunPptOutlineGenerationResponse> Client::runPptOutlineGenerationWithSSE(const RunPptOutlineGenerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunPptOutlineGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunPptOutlineGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 流式输出PPT大纲
 *
 * @param request RunPptOutlineGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPptOutlineGenerationResponse
 */
RunPptOutlineGenerationResponse Client::runPptOutlineGenerationWithOptions(const RunPptOutlineGenerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunPptOutlineGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunPptOutlineGenerationResponse>();
}

/**
 * @summary 流式输出PPT大纲
 *
 * @param request RunPptOutlineGenerationRequest
 * @return RunPptOutlineGenerationResponse
 */
RunPptOutlineGenerationResponse Client::runPptOutlineGeneration(const RunPptOutlineGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runPptOutlineGenerationWithOptions(request, runtime);
}

/**
 * @summary 快速写作
 *
 * @param tmpReq RunQuickWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunQuickWritingResponse
 */
FutureGenerator<RunQuickWritingResponse> Client::runQuickWritingWithSSE(const RunQuickWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunQuickWritingShrinkRequest request = RunQuickWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArticles()) {
    request.setArticlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArticles(), "Articles", "json"));
  }

  if (!!tmpReq.hasSearchSources()) {
    request.setSearchSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchSources(), "SearchSources", "json"));
  }

  json body = {};
  if (!!request.hasArticlesShrink()) {
    body["Articles"] = request.getArticlesShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSearchSourcesShrink()) {
    body["SearchSources"] = request.getSearchSourcesShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunQuickWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunQuickWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 快速写作
 *
 * @param tmpReq RunQuickWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunQuickWritingResponse
 */
RunQuickWritingResponse Client::runQuickWritingWithOptions(const RunQuickWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunQuickWritingShrinkRequest request = RunQuickWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArticles()) {
    request.setArticlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArticles(), "Articles", "json"));
  }

  if (!!tmpReq.hasSearchSources()) {
    request.setSearchSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchSources(), "SearchSources", "json"));
  }

  json body = {};
  if (!!request.hasArticlesShrink()) {
    body["Articles"] = request.getArticlesShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSearchSourcesShrink()) {
    body["SearchSources"] = request.getSearchSourcesShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunQuickWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunQuickWritingResponse>();
}

/**
 * @summary 快速写作
 *
 * @param request RunQuickWritingRequest
 * @return RunQuickWritingResponse
 */
RunQuickWritingResponse Client::runQuickWriting(const RunQuickWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runQuickWritingWithOptions(request, runtime);
}

/**
 * @summary AI妙搜-智能搜索生成
 *
 * @param tmpReq RunSearchGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSearchGenerationResponse
 */
FutureGenerator<RunSearchGenerationResponse> Client::runSearchGenerationWithSSE(const RunSearchGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSearchGenerationShrinkRequest request = RunSearchGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentContext()) {
    request.setAgentContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentContext(), "AgentContext", "json"));
  }

  if (!!tmpReq.hasChatConfig()) {
    request.setChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChatConfig(), "ChatConfig", "json"));
  }

  json body = {};
  if (!!request.hasAgentContextShrink()) {
    body["AgentContext"] = request.getAgentContextShrink();
  }

  if (!!request.hasChatConfigShrink()) {
    body["ChatConfig"] = request.getChatConfigShrink();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasOriginalSessionId()) {
    body["OriginalSessionId"] = request.getOriginalSessionId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSearchGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunSearchGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary AI妙搜-智能搜索生成
 *
 * @param tmpReq RunSearchGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSearchGenerationResponse
 */
RunSearchGenerationResponse Client::runSearchGenerationWithOptions(const RunSearchGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSearchGenerationShrinkRequest request = RunSearchGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentContext()) {
    request.setAgentContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentContext(), "AgentContext", "json"));
  }

  if (!!tmpReq.hasChatConfig()) {
    request.setChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChatConfig(), "ChatConfig", "json"));
  }

  json body = {};
  if (!!request.hasAgentContextShrink()) {
    body["AgentContext"] = request.getAgentContextShrink();
  }

  if (!!request.hasChatConfigShrink()) {
    body["ChatConfig"] = request.getChatConfigShrink();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasOriginalSessionId()) {
    body["OriginalSessionId"] = request.getOriginalSessionId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSearchGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSearchGenerationResponse>();
}

/**
 * @summary AI妙搜-智能搜索生成
 *
 * @param request RunSearchGenerationRequest
 * @return RunSearchGenerationResponse
 */
RunSearchGenerationResponse Client::runSearchGeneration(const RunSearchGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSearchGenerationWithOptions(request, runtime);
}

/**
 * @summary 妙搜-文搜文
 *
 * @param tmpReq RunSearchSimilarArticlesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSearchSimilarArticlesResponse
 */
FutureGenerator<RunSearchSimilarArticlesResponse> Client::runSearchSimilarArticlesWithSSE(const RunSearchSimilarArticlesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSearchSimilarArticlesShrinkRequest request = RunSearchSimilarArticlesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChatConfig()) {
    request.setChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChatConfig(), "ChatConfig", "json"));
  }

  json body = {};
  if (!!request.hasChatConfigShrink()) {
    body["ChatConfig"] = request.getChatConfigShrink();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSearchSimilarArticles"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunSearchSimilarArticlesResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙搜-文搜文
 *
 * @param tmpReq RunSearchSimilarArticlesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSearchSimilarArticlesResponse
 */
RunSearchSimilarArticlesResponse Client::runSearchSimilarArticlesWithOptions(const RunSearchSimilarArticlesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSearchSimilarArticlesShrinkRequest request = RunSearchSimilarArticlesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChatConfig()) {
    request.setChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChatConfig(), "ChatConfig", "json"));
  }

  json body = {};
  if (!!request.hasChatConfigShrink()) {
    body["ChatConfig"] = request.getChatConfigShrink();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSearchSimilarArticles"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSearchSimilarArticlesResponse>();
}

/**
 * @summary 妙搜-文搜文
 *
 * @param request RunSearchSimilarArticlesRequest
 * @return RunSearchSimilarArticlesResponse
 */
RunSearchSimilarArticlesResponse Client::runSearchSimilarArticles(const RunSearchSimilarArticlesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSearchSimilarArticlesWithOptions(request, runtime);
}

/**
 * @summary 创作-分步骤写作
 *
 * @param tmpReq RunStepByStepWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunStepByStepWritingResponse
 */
FutureGenerator<RunStepByStepWritingResponse> Client::runStepByStepWritingWithSSE(const RunStepByStepWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunStepByStepWritingShrinkRequest request = RunStepByStepWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  if (!!tmpReq.hasWritingConfig()) {
    request.setWritingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingConfig(), "WritingConfig", "json"));
  }

  json body = {};
  if (!!request.hasOriginSessionId()) {
    body["OriginSessionId"] = request.getOriginSessionId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingConfigShrink()) {
    body["WritingConfig"] = request.getWritingConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunStepByStepWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunStepByStepWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 创作-分步骤写作
 *
 * @param tmpReq RunStepByStepWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunStepByStepWritingResponse
 */
RunStepByStepWritingResponse Client::runStepByStepWritingWithOptions(const RunStepByStepWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunStepByStepWritingShrinkRequest request = RunStepByStepWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  if (!!tmpReq.hasWritingConfig()) {
    request.setWritingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingConfig(), "WritingConfig", "json"));
  }

  json body = {};
  if (!!request.hasOriginSessionId()) {
    body["OriginSessionId"] = request.getOriginSessionId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingConfigShrink()) {
    body["WritingConfig"] = request.getWritingConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunStepByStepWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunStepByStepWritingResponse>();
}

/**
 * @summary 创作-分步骤写作
 *
 * @param request RunStepByStepWritingRequest
 * @return RunStepByStepWritingResponse
 */
RunStepByStepWritingResponse Client::runStepByStepWriting(const RunStepByStepWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runStepByStepWritingWithOptions(request, runtime);
}

/**
 * @summary 内容特点分析
 *
 * @param tmpReq RunStyleFeatureAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunStyleFeatureAnalysisResponse
 */
FutureGenerator<RunStyleFeatureAnalysisResponse> Client::runStyleFeatureAnalysisWithSSE(const RunStyleFeatureAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunStyleFeatureAnalysisShrinkRequest request = RunStyleFeatureAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContents(), "Contents", "json"));
  }

  if (!!tmpReq.hasMaterialIds()) {
    request.setMaterialIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMaterialIds(), "MaterialIds", "json"));
  }

  json body = {};
  if (!!request.hasContentsShrink()) {
    body["Contents"] = request.getContentsShrink();
  }

  if (!!request.hasMaterialIdsShrink()) {
    body["MaterialIds"] = request.getMaterialIdsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunStyleFeatureAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunStyleFeatureAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 内容特点分析
 *
 * @param tmpReq RunStyleFeatureAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunStyleFeatureAnalysisResponse
 */
RunStyleFeatureAnalysisResponse Client::runStyleFeatureAnalysisWithOptions(const RunStyleFeatureAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunStyleFeatureAnalysisShrinkRequest request = RunStyleFeatureAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContents(), "Contents", "json"));
  }

  if (!!tmpReq.hasMaterialIds()) {
    request.setMaterialIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMaterialIds(), "MaterialIds", "json"));
  }

  json body = {};
  if (!!request.hasContentsShrink()) {
    body["Contents"] = request.getContentsShrink();
  }

  if (!!request.hasMaterialIdsShrink()) {
    body["MaterialIds"] = request.getMaterialIdsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunStyleFeatureAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunStyleFeatureAnalysisResponse>();
}

/**
 * @summary 内容特点分析
 *
 * @param request RunStyleFeatureAnalysisRequest
 * @return RunStyleFeatureAnalysisResponse
 */
RunStyleFeatureAnalysisResponse Client::runStyleFeatureAnalysis(const RunStyleFeatureAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runStyleFeatureAnalysisWithOptions(request, runtime);
}

/**
 * @summary 内容摘要生成
 *
 * @param request RunSummaryGenerateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSummaryGenerateResponse
 */
FutureGenerator<RunSummaryGenerateResponse> Client::runSummaryGenerateWithSSE(const RunSummaryGenerateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSummaryGenerate"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunSummaryGenerateResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 内容摘要生成
 *
 * @param request RunSummaryGenerateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSummaryGenerateResponse
 */
RunSummaryGenerateResponse Client::runSummaryGenerateWithOptions(const RunSummaryGenerateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSummaryGenerate"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSummaryGenerateResponse>();
}

/**
 * @summary 内容摘要生成
 *
 * @param request RunSummaryGenerateRequest
 * @return RunSummaryGenerateResponse
 */
RunSummaryGenerateResponse Client::runSummaryGenerate(const RunSummaryGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSummaryGenerateWithOptions(request, runtime);
}

/**
 * @summary 创作-文本润色
 *
 * @param request RunTextPolishingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTextPolishingResponse
 */
FutureGenerator<RunTextPolishingResponse> Client::runTextPolishingWithSSE(const RunTextPolishingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasOriginContent()) {
    body["OriginContent"] = request.getOriginContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTextPolishing"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunTextPolishingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 创作-文本润色
 *
 * @param request RunTextPolishingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTextPolishingResponse
 */
RunTextPolishingResponse Client::runTextPolishingWithOptions(const RunTextPolishingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasOriginContent()) {
    body["OriginContent"] = request.getOriginContent();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTextPolishing"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunTextPolishingResponse>();
}

/**
 * @summary 创作-文本润色
 *
 * @param request RunTextPolishingRequest
 * @return RunTextPolishingResponse
 */
RunTextPolishingResponse Client::runTextPolishing(const RunTextPolishingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTextPolishingWithOptions(request, runtime);
}

/**
 * @summary 妙笔：标题生成
 *
 * @param tmpReq RunTitleGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTitleGenerationResponse
 */
FutureGenerator<RunTitleGenerationResponse> Client::runTitleGenerationWithSSE(const RunTitleGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTitleGenerationShrinkRequest request = RunTitleGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeduplicatedTitles()) {
    request.setDeduplicatedTitlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeduplicatedTitles(), "DeduplicatedTitles", "json"));
  }

  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasDeduplicatedTitlesShrink()) {
    body["DeduplicatedTitles"] = request.getDeduplicatedTitlesShrink();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTitleCount()) {
    body["TitleCount"] = request.getTitleCount();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTitleGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunTitleGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙笔：标题生成
 *
 * @param tmpReq RunTitleGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTitleGenerationResponse
 */
RunTitleGenerationResponse Client::runTitleGenerationWithOptions(const RunTitleGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTitleGenerationShrinkRequest request = RunTitleGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeduplicatedTitles()) {
    request.setDeduplicatedTitlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeduplicatedTitles(), "DeduplicatedTitles", "json"));
  }

  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasDeduplicatedTitlesShrink()) {
    body["DeduplicatedTitles"] = request.getDeduplicatedTitlesShrink();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTitleCount()) {
    body["TitleCount"] = request.getTitleCount();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTitleGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunTitleGenerationResponse>();
}

/**
 * @summary 妙笔：标题生成
 *
 * @param request RunTitleGenerationRequest
 * @return RunTitleGenerationResponse
 */
RunTitleGenerationResponse Client::runTitleGeneration(const RunTitleGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTitleGenerationWithOptions(request, runtime);
}

/**
 * @summary 妙策选题策划聚合
 *
 * @param tmpReq RunTopicSelectionMergeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTopicSelectionMergeResponse
 */
FutureGenerator<RunTopicSelectionMergeResponse> Client::runTopicSelectionMergeWithSSE(const RunTopicSelectionMergeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTopicSelectionMergeShrinkRequest request = RunTopicSelectionMergeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopics(), "Topics", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTopicsShrink()) {
    body["Topics"] = request.getTopicsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTopicSelectionMerge"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunTopicSelectionMergeResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 妙策选题策划聚合
 *
 * @param tmpReq RunTopicSelectionMergeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTopicSelectionMergeResponse
 */
RunTopicSelectionMergeResponse Client::runTopicSelectionMergeWithOptions(const RunTopicSelectionMergeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTopicSelectionMergeShrinkRequest request = RunTopicSelectionMergeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopics(), "Topics", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTopicsShrink()) {
    body["Topics"] = request.getTopicsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTopicSelectionMerge"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunTopicSelectionMergeResponse>();
}

/**
 * @summary 妙策选题策划聚合
 *
 * @param request RunTopicSelectionMergeRequest
 * @return RunTopicSelectionMergeResponse
 */
RunTopicSelectionMergeResponse Client::runTopicSelectionMerge(const RunTopicSelectionMergeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTopicSelectionMergeWithOptions(request, runtime);
}

/**
 * @summary AI妙笔-创作-中英文翻译
 *
 * @param tmpReq RunTranslateGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTranslateGenerationResponse
 */
FutureGenerator<RunTranslateGenerationResponse> Client::runTranslateGenerationWithSSE(const RunTranslateGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTranslateGenerationShrinkRequest request = RunTranslateGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTranslateGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunTranslateGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary AI妙笔-创作-中英文翻译
 *
 * @param tmpReq RunTranslateGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTranslateGenerationResponse
 */
RunTranslateGenerationResponse Client::runTranslateGenerationWithOptions(const RunTranslateGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunTranslateGenerationShrinkRequest request = RunTranslateGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTranslateGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunTranslateGenerationResponse>();
}

/**
 * @summary AI妙笔-创作-中英文翻译
 *
 * @param request RunTranslateGenerationRequest
 * @return RunTranslateGenerationResponse
 */
RunTranslateGenerationResponse Client::runTranslateGeneration(const RunTranslateGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTranslateGenerationWithOptions(request, runtime);
}

/**
 * @summary AI生成视频剪辑脚本
 *
 * @param request RunVideoScriptGenerateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunVideoScriptGenerateResponse
 */
FutureGenerator<RunVideoScriptGenerateResponse> Client::runVideoScriptGenerateWithSSE(const RunVideoScriptGenerateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasScriptLength()) {
    body["ScriptLength"] = request.getScriptLength();
  }

  if (!!request.hasScriptNumber()) {
    body["ScriptNumber"] = request.getScriptNumber();
  }

  if (!!request.hasUseSearch()) {
    body["UseSearch"] = request.getUseSearch();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunVideoScriptGenerate"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunVideoScriptGenerateResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary AI生成视频剪辑脚本
 *
 * @param request RunVideoScriptGenerateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunVideoScriptGenerateResponse
 */
RunVideoScriptGenerateResponse Client::runVideoScriptGenerateWithOptions(const RunVideoScriptGenerateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasScriptLength()) {
    body["ScriptLength"] = request.getScriptLength();
  }

  if (!!request.hasScriptNumber()) {
    body["ScriptNumber"] = request.getScriptNumber();
  }

  if (!!request.hasUseSearch()) {
    body["UseSearch"] = request.getUseSearch();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunVideoScriptGenerate"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunVideoScriptGenerateResponse>();
}

/**
 * @summary AI生成视频剪辑脚本
 *
 * @param request RunVideoScriptGenerateRequest
 * @return RunVideoScriptGenerateResponse
 */
RunVideoScriptGenerateResponse Client::runVideoScriptGenerate(const RunVideoScriptGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runVideoScriptGenerateWithOptions(request, runtime);
}

/**
 * @summary AI妙笔-创作-文风改写
 *
 * @param tmpReq RunWriteToneGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWriteToneGenerationResponse
 */
FutureGenerator<RunWriteToneGenerationResponse> Client::runWriteToneGenerationWithSSE(const RunWriteToneGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunWriteToneGenerationShrinkRequest request = RunWriteToneGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunWriteToneGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunWriteToneGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary AI妙笔-创作-文风改写
 *
 * @param tmpReq RunWriteToneGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWriteToneGenerationResponse
 */
RunWriteToneGenerationResponse Client::runWriteToneGenerationWithOptions(const RunWriteToneGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunWriteToneGenerationShrinkRequest request = RunWriteToneGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  json body = {};
  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunWriteToneGeneration"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunWriteToneGenerationResponse>();
}

/**
 * @summary AI妙笔-创作-文风改写
 *
 * @param request RunWriteToneGenerationRequest
 * @return RunWriteToneGenerationResponse
 */
RunWriteToneGenerationResponse Client::runWriteToneGeneration(const RunWriteToneGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runWriteToneGenerationWithOptions(request, runtime);
}

/**
 * @summary 直接写作
 *
 * @param tmpReq RunWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWritingResponse
 */
FutureGenerator<RunWritingResponse> Client::runWritingWithSSE(const RunWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunWritingShrinkRequest request = RunWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  if (!!tmpReq.hasWritingConfig()) {
    request.setWritingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingConfig(), "WritingConfig", "json"));
  }

  json body = {};
  if (!!request.hasOriginSessionId()) {
    body["OriginSessionId"] = request.getOriginSessionId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingConfigShrink()) {
    body["WritingConfig"] = request.getWritingConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 直接写作
 *
 * @param tmpReq RunWritingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWritingResponse
 */
RunWritingResponse Client::runWritingWithOptions(const RunWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunWritingShrinkRequest request = RunWritingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReferenceData()) {
    request.setReferenceDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReferenceData(), "ReferenceData", "json"));
  }

  if (!!tmpReq.hasWritingConfig()) {
    request.setWritingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingConfig(), "WritingConfig", "json"));
  }

  json body = {};
  if (!!request.hasOriginSessionId()) {
    body["OriginSessionId"] = request.getOriginSessionId();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasReferenceDataShrink()) {
    body["ReferenceData"] = request.getReferenceDataShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingConfigShrink()) {
    body["WritingConfig"] = request.getWritingConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunWriting"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunWritingResponse>();
}

/**
 * @summary 直接写作
 *
 * @param request RunWritingRequest
 * @return RunWritingResponse
 */
RunWritingResponse Client::runWriting(const RunWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runWritingWithOptions(request, runtime);
}

/**
 * @summary 直接写作
 *
 * @param tmpReq RunWritingV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWritingV2Response
 */
FutureGenerator<RunWritingV2Response> Client::runWritingV2WithSSE(const RunWritingV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunWritingV2ShrinkRequest request = RunWritingV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArticles()) {
    request.setArticlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArticles(), "Articles", "json"));
  }

  if (!!tmpReq.hasKeywords()) {
    request.setKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeywords(), "Keywords", "json"));
  }

  if (!!tmpReq.hasMiniDocs()) {
    request.setMiniDocsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMiniDocs(), "MiniDocs", "json"));
  }

  if (!!tmpReq.hasOutlineList()) {
    request.setOutlineListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutlineList(), "OutlineList", "json"));
  }

  if (!!tmpReq.hasOutlines()) {
    request.setOutlinesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutlines(), "Outlines", "json"));
  }

  if (!!tmpReq.hasSearchSources()) {
    request.setSearchSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchSources(), "SearchSources", "json"));
  }

  if (!!tmpReq.hasSummarization()) {
    request.setSummarizationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSummarization(), "Summarization", "json"));
  }

  if (!!tmpReq.hasWritingParams()) {
    request.setWritingParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingParams(), "WritingParams", "json"));
  }

  json body = {};
  if (!!request.hasArticlesShrink()) {
    body["Articles"] = request.getArticlesShrink();
  }

  if (!!request.hasDistributeWriting()) {
    body["DistributeWriting"] = request.getDistributeWriting();
  }

  if (!!request.hasGcNumberSize()) {
    body["GcNumberSize"] = request.getGcNumberSize();
  }

  if (!!request.hasGcNumberSizeTag()) {
    body["GcNumberSizeTag"] = request.getGcNumberSizeTag();
  }

  if (!!request.hasKeywordsShrink()) {
    body["Keywords"] = request.getKeywordsShrink();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasMiniDocsShrink()) {
    body["MiniDocs"] = request.getMiniDocsShrink();
  }

  if (!!request.hasOutlineListShrink()) {
    body["OutlineList"] = request.getOutlineListShrink();
  }

  if (!!request.hasOutlinesShrink()) {
    body["Outlines"] = request.getOutlinesShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptMode()) {
    body["PromptMode"] = request.getPromptMode();
  }

  if (!!request.hasSearchSourcesShrink()) {
    body["SearchSources"] = request.getSearchSourcesShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSourceTraceMethod()) {
    body["SourceTraceMethod"] = request.getSourceTraceMethod();
  }

  if (!!request.hasStep()) {
    body["Step"] = request.getStep();
  }

  if (!!request.hasSummarizationShrink()) {
    body["Summarization"] = request.getSummarizationShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUseSearch()) {
    body["UseSearch"] = request.getUseSearch();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingParamsShrink()) {
    body["WritingParams"] = request.getWritingParamsShrink();
  }

  if (!!request.hasWritingScene()) {
    body["WritingScene"] = request.getWritingScene();
  }

  if (!!request.hasWritingStyle()) {
    body["WritingStyle"] = request.getWritingStyle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunWritingV2"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<RunWritingV2Response>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 直接写作
 *
 * @param tmpReq RunWritingV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWritingV2Response
 */
RunWritingV2Response Client::runWritingV2WithOptions(const RunWritingV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunWritingV2ShrinkRequest request = RunWritingV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArticles()) {
    request.setArticlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArticles(), "Articles", "json"));
  }

  if (!!tmpReq.hasKeywords()) {
    request.setKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeywords(), "Keywords", "json"));
  }

  if (!!tmpReq.hasMiniDocs()) {
    request.setMiniDocsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMiniDocs(), "MiniDocs", "json"));
  }

  if (!!tmpReq.hasOutlineList()) {
    request.setOutlineListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutlineList(), "OutlineList", "json"));
  }

  if (!!tmpReq.hasOutlines()) {
    request.setOutlinesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutlines(), "Outlines", "json"));
  }

  if (!!tmpReq.hasSearchSources()) {
    request.setSearchSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchSources(), "SearchSources", "json"));
  }

  if (!!tmpReq.hasSummarization()) {
    request.setSummarizationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSummarization(), "Summarization", "json"));
  }

  if (!!tmpReq.hasWritingParams()) {
    request.setWritingParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWritingParams(), "WritingParams", "json"));
  }

  json body = {};
  if (!!request.hasArticlesShrink()) {
    body["Articles"] = request.getArticlesShrink();
  }

  if (!!request.hasDistributeWriting()) {
    body["DistributeWriting"] = request.getDistributeWriting();
  }

  if (!!request.hasGcNumberSize()) {
    body["GcNumberSize"] = request.getGcNumberSize();
  }

  if (!!request.hasGcNumberSizeTag()) {
    body["GcNumberSizeTag"] = request.getGcNumberSizeTag();
  }

  if (!!request.hasKeywordsShrink()) {
    body["Keywords"] = request.getKeywordsShrink();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasMiniDocsShrink()) {
    body["MiniDocs"] = request.getMiniDocsShrink();
  }

  if (!!request.hasOutlineListShrink()) {
    body["OutlineList"] = request.getOutlineListShrink();
  }

  if (!!request.hasOutlinesShrink()) {
    body["Outlines"] = request.getOutlinesShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptMode()) {
    body["PromptMode"] = request.getPromptMode();
  }

  if (!!request.hasSearchSourcesShrink()) {
    body["SearchSources"] = request.getSearchSourcesShrink();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSourceTraceMethod()) {
    body["SourceTraceMethod"] = request.getSourceTraceMethod();
  }

  if (!!request.hasStep()) {
    body["Step"] = request.getStep();
  }

  if (!!request.hasSummarizationShrink()) {
    body["Summarization"] = request.getSummarizationShrink();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUseSearch()) {
    body["UseSearch"] = request.getUseSearch();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWritingParamsShrink()) {
    body["WritingParams"] = request.getWritingParamsShrink();
  }

  if (!!request.hasWritingScene()) {
    body["WritingScene"] = request.getWritingScene();
  }

  if (!!request.hasWritingStyle()) {
    body["WritingStyle"] = request.getWritingStyle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunWritingV2"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunWritingV2Response>();
}

/**
 * @summary 直接写作
 *
 * @param request RunWritingV2Request
 * @return RunWritingV2Response
 */
RunWritingV2Response Client::runWritingV2(const RunWritingV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runWritingV2WithOptions(request, runtime);
}

/**
 * @summary 保存自定义文本
 *
 * @param request SaveCustomTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveCustomTextResponse
 */
SaveCustomTextResponse Client::saveCustomTextWithOptions(const SaveCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveCustomText"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveCustomTextResponse>();
}

/**
 * @summary 保存自定义文本
 *
 * @param request SaveCustomTextRequest
 * @return SaveCustomTextResponse
 */
SaveCustomTextResponse Client::saveCustomText(const SaveCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveCustomTextWithOptions(request, runtime);
}

/**
 * @summary 保存用户的信源配置
 *
 * @param tmpReq SaveDataSourceOrderConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveDataSourceOrderConfigResponse
 */
SaveDataSourceOrderConfigResponse Client::saveDataSourceOrderConfigWithOptions(const SaveDataSourceOrderConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveDataSourceOrderConfigShrinkRequest request = SaveDataSourceOrderConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserConfigDataSourceList()) {
    request.setUserConfigDataSourceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserConfigDataSourceList(), "UserConfigDataSourceList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasGenerateTechnology()) {
    body["GenerateTechnology"] = request.getGenerateTechnology();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasUserConfigDataSourceListShrink()) {
    body["UserConfigDataSourceList"] = request.getUserConfigDataSourceListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveDataSourceOrderConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveDataSourceOrderConfigResponse>();
}

/**
 * @summary 保存用户的信源配置
 *
 * @param request SaveDataSourceOrderConfigRequest
 * @return SaveDataSourceOrderConfigResponse
 */
SaveDataSourceOrderConfigResponse Client::saveDataSourceOrderConfig(const SaveDataSourceOrderConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveDataSourceOrderConfigWithOptions(request, runtime);
}

/**
 * @summary 保存素材
 *
 * @param tmpReq SaveMaterialDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveMaterialDocumentResponse
 */
SaveMaterialDocumentResponse Client::saveMaterialDocumentWithOptions(const SaveMaterialDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveMaterialDocumentShrinkRequest request = SaveMaterialDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocKeywords()) {
    request.setDocKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocKeywords(), "DocKeywords", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasAuthor()) {
    body["Author"] = request.getAuthor();
  }

  if (!!request.hasBothSavePrivateAndShare()) {
    body["BothSavePrivateAndShare"] = request.getBothSavePrivateAndShare();
  }

  if (!!request.hasDocKeywordsShrink()) {
    body["DocKeywords"] = request.getDocKeywordsShrink();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasExternalUrl()) {
    body["ExternalUrl"] = request.getExternalUrl();
  }

  if (!!request.hasHtmlContent()) {
    body["HtmlContent"] = request.getHtmlContent();
  }

  if (!!request.hasPubTime()) {
    body["PubTime"] = request.getPubTime();
  }

  if (!!request.hasShareAttr()) {
    body["ShareAttr"] = request.getShareAttr();
  }

  if (!!request.hasSrcFrom()) {
    body["SrcFrom"] = request.getSrcFrom();
  }

  if (!!request.hasSummary()) {
    body["Summary"] = request.getSummary();
  }

  if (!!request.hasTextContent()) {
    body["TextContent"] = request.getTextContent();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveMaterialDocument"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveMaterialDocumentResponse>();
}

/**
 * @summary 保存素材
 *
 * @param request SaveMaterialDocumentRequest
 * @return SaveMaterialDocumentResponse
 */
SaveMaterialDocumentResponse Client::saveMaterialDocument(const SaveMaterialDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveMaterialDocumentWithOptions(request, runtime);
}

/**
 * @summary 保存自定义文体
 *
 * @param tmpReq SaveStyleLearningResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveStyleLearningResultResponse
 */
SaveStyleLearningResultResponse Client::saveStyleLearningResultWithOptions(const SaveStyleLearningResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveStyleLearningResultShrinkRequest request = SaveStyleLearningResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomTextIdList()) {
    request.setCustomTextIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomTextIdList(), "CustomTextIdList", "json"));
  }

  if (!!tmpReq.hasMaterialIdList()) {
    request.setMaterialIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMaterialIdList(), "MaterialIdList", "json"));
  }

  json body = {};
  if (!!request.hasAgentKey()) {
    body["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasAigcResult()) {
    body["AigcResult"] = request.getAigcResult();
  }

  if (!!request.hasCustomTextIdListShrink()) {
    body["CustomTextIdList"] = request.getCustomTextIdListShrink();
  }

  if (!!request.hasMaterialIdListShrink()) {
    body["MaterialIdList"] = request.getMaterialIdListShrink();
  }

  if (!!request.hasRewriteResult()) {
    body["RewriteResult"] = request.getRewriteResult();
  }

  if (!!request.hasStyleName()) {
    body["StyleName"] = request.getStyleName();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SaveStyleLearningResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveStyleLearningResultResponse>();
}

/**
 * @summary 保存自定义文体
 *
 * @param request SaveStyleLearningResultRequest
 * @return SaveStyleLearningResultResponse
 */
SaveStyleLearningResultResponse Client::saveStyleLearningResult(const SaveStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary 搜索数据集文档
 *
 * @param request SearchDatasetDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchDatasetDocumentsResponse
 */
SearchDatasetDocumentsResponse Client::searchDatasetDocumentsWithOptions(const SearchDatasetDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasExtend1()) {
    body["Extend1"] = request.getExtend1();
  }

  if (!!request.hasIncludeContent()) {
    body["IncludeContent"] = request.getIncludeContent();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SearchDatasetDocuments"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchDatasetDocumentsResponse>();
}

/**
 * @summary 搜索数据集文档
 *
 * @param request SearchDatasetDocumentsRequest
 * @return SearchDatasetDocumentsResponse
 */
SearchDatasetDocumentsResponse Client::searchDatasetDocuments(const SearchDatasetDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDatasetDocumentsWithOptions(request, runtime);
}

/**
 * @summary 新闻检索
 *
 * @param tmpReq SearchNewsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchNewsResponse
 */
SearchNewsResponse Client::searchNewsWithOptions(const SearchNewsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchNewsShrinkRequest request = SearchNewsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSearchSources()) {
    request.setSearchSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchSources(), "SearchSources", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasFilterNotNull()) {
    body["FilterNotNull"] = request.getFilterNotNull();
  }

  if (!!request.hasIncludeContent()) {
    body["IncludeContent"] = request.getIncludeContent();
  }

  if (!!request.hasPage()) {
    body["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSearchSourcesShrink()) {
    body["SearchSources"] = request.getSearchSourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchNews"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchNewsResponse>();
}

/**
 * @summary 新闻检索
 *
 * @param request SearchNewsRequest
 * @return SearchNewsResponse
 */
SearchNewsResponse Client::searchNews(const SearchNewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchNewsWithOptions(request, runtime);
}

/**
 * @summary 提交异步任务
 *
 * @param request SubmitAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAsyncTaskResponse
 */
SubmitAsyncTaskResponse Client::submitAsyncTaskWithOptions(const SubmitAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasTaskCode()) {
    body["TaskCode"] = request.getTaskCode();
  }

  if (!!request.hasTaskExecuteTime()) {
    body["TaskExecuteTime"] = request.getTaskExecuteTime();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskParam()) {
    body["TaskParam"] = request.getTaskParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitAsyncTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAsyncTaskResponse>();
}

/**
 * @summary 提交异步任务
 *
 * @param request SubmitAsyncTaskRequest
 * @return SubmitAsyncTaskResponse
 */
SubmitAsyncTaskResponse Client::submitAsyncTask(const SubmitAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 妙笔为您提供了与公有云“智能审校”模块中相同的上传自定义规则库的功能。由于鉴权限制，用户需要开通阿里云 OSS 服务后，将自定义规则库文件上传到 OSS 中，再使用该文件的 fileKey 作为入参才能顺利调用本接口。该接口在被调用后，会对用户的自定义规则库进行结构化处理，并生成一个 xlsx 格式的结构化解析结果。您可以调用 GetAuditNoteProcessingStatus 接口查询结构化处理状态，也可以调用 DownloadAuditNote 接口获取结构化之后的规则库。接口功能正在迭代中，预计会在未来使用可访问的文件 URL 作为入参。
 *
 * @param request SubmitAuditNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAuditNoteResponse
 */
SubmitAuditNoteResponse Client::submitAuditNoteWithOptions(const SubmitAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitAuditNote"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAuditNoteResponse>();
}

/**
 * @summary 妙笔为您提供了与公有云“智能审校”模块中相同的上传自定义规则库的功能。由于鉴权限制，用户需要开通阿里云 OSS 服务后，将自定义规则库文件上传到 OSS 中，再使用该文件的 fileKey 作为入参才能顺利调用本接口。该接口在被调用后，会对用户的自定义规则库进行结构化处理，并生成一个 xlsx 格式的结构化解析结果。您可以调用 GetAuditNoteProcessingStatus 接口查询结构化处理状态，也可以调用 DownloadAuditNote 接口获取结构化之后的规则库。接口功能正在迭代中，预计会在未来使用可访问的文件 URL 作为入参。
 *
 * @param request SubmitAuditNoteRequest
 * @return SubmitAuditNoteResponse
 */
SubmitAuditNoteResponse Client::submitAuditNote(const SubmitAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAuditNoteWithOptions(request, runtime);
}

/**
 * @summary 提交审核任务
 *
 * @param request SubmitAuditTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAuditTaskResponse
 */
SubmitAuditTaskResponse Client::submitAuditTaskWithOptions(const SubmitAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArticleId()) {
    body["ArticleId"] = request.getArticleId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasHtmlContent()) {
    body["HtmlContent"] = request.getHtmlContent();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitAuditTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAuditTaskResponse>();
}

/**
 * @summary 提交审核任务
 *
 * @param request SubmitAuditTaskRequest
 * @return SubmitAuditTaskResponse
 */
SubmitAuditTaskResponse Client::submitAuditTask(const SubmitAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAuditTaskWithOptions(request, runtime);
}

/**
 * @summary 提交自定义播报单任务
 *
 * @param tmpReq SubmitCustomHotTopicBroadcastJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCustomHotTopicBroadcastJobResponse
 */
SubmitCustomHotTopicBroadcastJobResponse Client::submitCustomHotTopicBroadcastJobWithOptions(const SubmitCustomHotTopicBroadcastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitCustomHotTopicBroadcastJobShrinkRequest request = SubmitCustomHotTopicBroadcastJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotTopicBroadcastConfig()) {
    request.setHotTopicBroadcastConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotTopicBroadcastConfig(), "HotTopicBroadcastConfig", "json"));
  }

  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopics(), "Topics", "json"));
  }

  json body = {};
  if (!!request.hasHotTopicBroadcastConfigShrink()) {
    body["HotTopicBroadcastConfig"] = request.getHotTopicBroadcastConfigShrink();
  }

  if (!!request.hasHotTopicVersion()) {
    body["HotTopicVersion"] = request.getHotTopicVersion();
  }

  if (!!request.hasTopicsShrink()) {
    body["Topics"] = request.getTopicsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitCustomHotTopicBroadcastJob"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCustomHotTopicBroadcastJobResponse>();
}

/**
 * @summary 提交自定义播报单任务
 *
 * @param request SubmitCustomHotTopicBroadcastJobRequest
 * @return SubmitCustomHotTopicBroadcastJobResponse
 */
SubmitCustomHotTopicBroadcastJobResponse Client::submitCustomHotTopicBroadcastJob(const SubmitCustomHotTopicBroadcastJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomHotTopicBroadcastJobWithOptions(request, runtime);
}

/**
 * @summary 从自定义数据源提交选题热点分析
 *
 * @param tmpReq SubmitCustomSourceTopicAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCustomSourceTopicAnalysisResponse
 */
SubmitCustomSourceTopicAnalysisResponse Client::submitCustomSourceTopicAnalysisWithOptions(const SubmitCustomSourceTopicAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitCustomSourceTopicAnalysisShrinkRequest request = SubmitCustomSourceTopicAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAnalysisTypes()) {
    request.setAnalysisTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAnalysisTypes(), "AnalysisTypes", "json"));
  }

  if (!!tmpReq.hasNews()) {
    request.setNewsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNews(), "News", "json"));
  }

  json body = {};
  if (!!request.hasAnalysisTypesShrink()) {
    body["AnalysisTypes"] = request.getAnalysisTypesShrink();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasMaxTopicSize()) {
    body["MaxTopicSize"] = request.getMaxTopicSize();
  }

  if (!!request.hasNewsShrink()) {
    body["News"] = request.getNewsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitCustomSourceTopicAnalysis"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCustomSourceTopicAnalysisResponse>();
}

/**
 * @summary 从自定义数据源提交选题热点分析
 *
 * @param request SubmitCustomSourceTopicAnalysisRequest
 * @return SubmitCustomSourceTopicAnalysisResponse
 */
SubmitCustomSourceTopicAnalysisResponse Client::submitCustomSourceTopicAnalysis(const SubmitCustomSourceTopicAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomSourceTopicAnalysisWithOptions(request, runtime);
}

/**
 * @summary 提交自定义热点选题视角分析任务
 *
 * @param tmpReq SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
 */
SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse Client::submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest request = SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocuments()) {
    request.setDocumentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocuments(), "Documents", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasDocumentsShrink()) {
    body["Documents"] = request.getDocumentsShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitCustomTopicSelectionPerspectiveAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse>();
}

/**
 * @summary 提交自定义热点选题视角分析任务
 *
 * @param request SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
 * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
 */
SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse Client::submitCustomTopicSelectionPerspectiveAnalysisTask(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 提交深度写作任务
 *
 * @param tmpReq SubmitDeepWriteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDeepWriteTaskResponse
 */
SubmitDeepWriteTaskResponse Client::submitDeepWriteTaskWithOptions(const SubmitDeepWriteTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitDeepWriteTaskShrinkRequest request = SubmitDeepWriteTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentOrchestration()) {
    request.setAgentOrchestrationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentOrchestration(), "AgentOrchestration", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  json query = {};
  if (!!request.hasAgentOrchestrationShrink()) {
    query["AgentOrchestration"] = request.getAgentOrchestrationShrink();
  }

  json body = {};
  if (!!request.hasFilesShrink()) {
    body["Files"] = request.getFilesShrink();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.getInput();
  }

  if (!!request.hasInstructions()) {
    body["Instructions"] = request.getInstructions();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitDeepWriteTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDeepWriteTaskResponse>();
}

/**
 * @summary 提交深度写作任务
 *
 * @param request SubmitDeepWriteTaskRequest
 * @return SubmitDeepWriteTaskResponse
 */
SubmitDeepWriteTaskResponse Client::submitDeepWriteTask(const SubmitDeepWriteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDeepWriteTaskWithOptions(request, runtime);
}

/**
 * @summary 提交文档聚合任务
 *
 * @param tmpReq SubmitDocClusterTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocClusterTaskResponse
 */
SubmitDocClusterTaskResponse Client::submitDocClusterTaskWithOptions(const SubmitDocClusterTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitDocClusterTaskShrinkRequest request = SubmitDocClusterTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocuments()) {
    request.setDocumentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocuments(), "Documents", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasDocumentsShrink()) {
    body["Documents"] = request.getDocumentsShrink();
  }

  if (!!request.hasSummaryLength()) {
    body["SummaryLength"] = request.getSummaryLength();
  }

  if (!!request.hasTitleLength()) {
    body["TitleLength"] = request.getTitleLength();
  }

  if (!!request.hasTopicCount()) {
    body["TopicCount"] = request.getTopicCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitDocClusterTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocClusterTaskResponse>();
}

/**
 * @summary 提交文档聚合任务
 *
 * @param request SubmitDocClusterTaskRequest
 * @return SubmitDocClusterTaskResponse
 */
SubmitDocClusterTaskResponse Client::submitDocClusterTask(const SubmitDocClusterTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDocClusterTaskWithOptions(request, runtime);
}

/**
 * @summary 提交VOC异步任务
 *
 * @param tmpReq SubmitEnterpriseVocAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitEnterpriseVocAnalysisTaskResponse
 */
SubmitEnterpriseVocAnalysisTaskResponse Client::submitEnterpriseVocAnalysisTaskWithOptions(const SubmitEnterpriseVocAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitEnterpriseVocAnalysisTaskShrinkRequest request = SubmitEnterpriseVocAnalysisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContentTags()) {
    request.setContentTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContentTags(), "ContentTags", "json"));
  }

  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContents(), "Contents", "json"));
  }

  if (!!tmpReq.hasFilterTags()) {
    request.setFilterTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterTags(), "FilterTags", "json"));
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasContentTagsShrink()) {
    body["ContentTags"] = request.getContentTagsShrink();
  }

  if (!!request.hasContentsShrink()) {
    body["Contents"] = request.getContentsShrink();
  }

  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasFilterTagsShrink()) {
    body["FilterTags"] = request.getFilterTagsShrink();
  }

  if (!!request.hasMaterialType()) {
    body["MaterialType"] = request.getMaterialType();
  }

  if (!!request.hasModelId()) {
    body["ModelId"] = request.getModelId();
  }

  if (!!request.hasPositiveSample()) {
    body["PositiveSample"] = request.getPositiveSample();
  }

  if (!!request.hasPositiveSampleFileKey()) {
    body["PositiveSampleFileKey"] = request.getPositiveSampleFileKey();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitEnterpriseVocAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitEnterpriseVocAnalysisTaskResponse>();
}

/**
 * @summary 提交VOC异步任务
 *
 * @param request SubmitEnterpriseVocAnalysisTaskRequest
 * @return SubmitEnterpriseVocAnalysisTaskResponse
 */
SubmitEnterpriseVocAnalysisTaskResponse Client::submitEnterpriseVocAnalysisTask(const SubmitEnterpriseVocAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitEnterpriseVocAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 导出词库任务
 *
 * @param request SubmitExportTermsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitExportTermsTaskResponse
 */
SubmitExportTermsTaskResponse Client::submitExportTermsTaskWithOptions(const SubmitExportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTermsName()) {
    body["TermsName"] = request.getTermsName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitExportTermsTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitExportTermsTaskResponse>();
}

/**
 * @summary 导出词库任务
 *
 * @param request SubmitExportTermsTaskRequest
 * @return SubmitExportTermsTaskResponse
 */
SubmitExportTermsTaskResponse Client::submitExportTermsTask(const SubmitExportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitExportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary 妙笔为您提供了新的事实性审核能力，在联网搜索并判断正误的前提下，还支持用户自定义配置搜索来源 URL。
 *
 * @param request SubmitFactAuditUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitFactAuditUrlResponse
 */
SubmitFactAuditUrlResponse Client::submitFactAuditUrlWithOptions(const SubmitFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitFactAuditUrl"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitFactAuditUrlResponse>();
}

/**
 * @summary 妙笔为您提供了新的事实性审核能力，在联网搜索并判断正误的前提下，还支持用户自定义配置搜索来源 URL。
 *
 * @param request SubmitFactAuditUrlRequest
 * @return SubmitFactAuditUrlResponse
 */
SubmitFactAuditUrlResponse Client::submitFactAuditUrl(const SubmitFactAuditUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitFactAuditUrlWithOptions(request, runtime);
}

/**
 * @summary 提交导入自定义词库任务
 *
 * @param request SubmitImportTermsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImportTermsTaskResponse
 */
SubmitImportTermsTaskResponse Client::submitImportTermsTaskWithOptions(const SubmitImportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasTermsName()) {
    body["TermsName"] = request.getTermsName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitImportTermsTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImportTermsTaskResponse>();
}

/**
 * @summary 提交导入自定义词库任务
 *
 * @param request SubmitImportTermsTaskRequest
 * @return SubmitImportTermsTaskResponse
 */
SubmitImportTermsTaskResponse Client::submitImportTermsTask(const SubmitImportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitImportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary 提交智能审核
 *
 * @param tmpReq SubmitSmartAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmartAuditResponse
 */
SubmitSmartAuditResponse Client::submitSmartAuditWithOptions(const SubmitSmartAuditRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSmartAuditShrinkRequest request = SubmitSmartAuditShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageUrlList()) {
    request.setImageUrlListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImageUrlList(), "ImageUrlList", "json"));
  }

  if (!!tmpReq.hasSubCodes()) {
    request.setSubCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubCodes(), "SubCodes", "json"));
  }

  if (!!tmpReq.hasImageUrls()) {
    request.setImageUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImageUrls(), "imageUrls", "json"));
  }

  json body = {};
  if (!!request.hasImageUrlListShrink()) {
    body["ImageUrlList"] = request.getImageUrlListShrink();
  }

  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  if (!!request.hasSubCodesShrink()) {
    body["SubCodes"] = request.getSubCodesShrink();
  }

  if (!!request.hasTermsName()) {
    body["TermsName"] = request.getTermsName();
  }

  if (!!request.hasText()) {
    body["Text"] = request.getText();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasImageUrlsShrink()) {
    body["imageUrls"] = request.getImageUrlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitSmartAudit"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSmartAuditResponse>();
}

/**
 * @summary 提交智能审核
 *
 * @param request SubmitSmartAuditRequest
 * @return SubmitSmartAuditResponse
 */
SubmitSmartAuditResponse Client::submitSmartAudit(const SubmitSmartAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmartAuditWithOptions(request, runtime);
}

/**
 * @summary 提交一键成片剪辑任务
 *
 * @param tmpReq SubmitSmartClipTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmartClipTaskResponse
 */
SubmitSmartClipTaskResponse Client::submitSmartClipTaskWithOptions(const SubmitSmartClipTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSmartClipTaskShrinkRequest request = SubmitSmartClipTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEditingConfig()) {
    request.setEditingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEditingConfig(), "EditingConfig", "json"));
  }

  if (!!tmpReq.hasInputConfig()) {
    request.setInputConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputConfig(), "InputConfig", "json"));
  }

  if (!!tmpReq.hasOutputConfig()) {
    request.setOutputConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutputConfig(), "OutputConfig", "json"));
  }

  json body = {};
  if (!!request.hasEditingConfigShrink()) {
    body["EditingConfig"] = request.getEditingConfigShrink();
  }

  if (!!request.hasExtendParam()) {
    body["ExtendParam"] = request.getExtendParam();
  }

  if (!!request.hasInputConfigShrink()) {
    body["InputConfig"] = request.getInputConfigShrink();
  }

  if (!!request.hasOutputConfigShrink()) {
    body["OutputConfig"] = request.getOutputConfigShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitSmartClipTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSmartClipTaskResponse>();
}

/**
 * @summary 提交一键成片剪辑任务
 *
 * @param request SubmitSmartClipTaskRequest
 * @return SubmitSmartClipTaskResponse
 */
SubmitSmartClipTaskResponse Client::submitSmartClipTask(const SubmitSmartClipTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmartClipTaskWithOptions(request, runtime);
}

/**
 * @summary 提交选题热点分析任务
 *
 * @param tmpReq SubmitTopicSelectionPerspectiveAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
 */
SubmitTopicSelectionPerspectiveAnalysisTaskResponse Client::submitTopicSelectionPerspectiveAnalysisTaskWithOptions(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest request = SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocuments()) {
    request.setDocumentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocuments(), "Documents", "json"));
  }

  if (!!tmpReq.hasPerspectiveTypes()) {
    request.setPerspectiveTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPerspectiveTypes(), "PerspectiveTypes", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasDocumentsShrink()) {
    body["Documents"] = request.getDocumentsShrink();
  }

  if (!!request.hasPerspectiveTypesShrink()) {
    body["PerspectiveTypes"] = request.getPerspectiveTypesShrink();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitTopicSelectionPerspectiveAnalysisTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTopicSelectionPerspectiveAnalysisTaskResponse>();
}

/**
 * @summary 提交选题热点分析任务
 *
 * @param request SubmitTopicSelectionPerspectiveAnalysisTaskRequest
 * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
 */
SubmitTopicSelectionPerspectiveAnalysisTaskResponse Client::submitTopicSelectionPerspectiveAnalysisTask(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary 更新自定义文本
 *
 * @param request UpdateCustomTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomTextResponse
 */
UpdateCustomTextResponse Client::updateCustomTextWithOptions(const UpdateCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCustomText"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomTextResponse>();
}

/**
 * @summary 更新自定义文本
 *
 * @param request UpdateCustomTextRequest
 * @return UpdateCustomTextResponse
 */
UpdateCustomTextResponse Client::updateCustomText(const UpdateCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomTextWithOptions(request, runtime);
}

/**
 * @summary 数据集管理-更新
 *
 * @param tmpReq UpdateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDatasetShrinkRequest request = UpdateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatasetConfig()) {
    request.setDatasetConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDatasetConfig(), "DatasetConfig", "json"));
  }

  json body = {};
  if (!!request.hasDatasetConfigShrink()) {
    body["DatasetConfig"] = request.getDatasetConfigShrink();
  }

  if (!!request.hasDatasetDescription()) {
    body["DatasetDescription"] = request.getDatasetDescription();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasSearchDatasetEnable()) {
    body["SearchDatasetEnable"] = request.getSearchDatasetEnable();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetResponse>();
}

/**
 * @summary 数据集管理-更新
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetWithOptions(request, runtime);
}

/**
 * @summary 修改数据集文档
 *
 * @param tmpReq UpdateDatasetDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetDocumentResponse
 */
UpdateDatasetDocumentResponse Client::updateDatasetDocumentWithOptions(const UpdateDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDatasetDocumentShrinkRequest request = UpdateDatasetDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocument()) {
    request.setDocumentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocument(), "Document", "json"));
  }

  json body = {};
  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocumentShrink()) {
    body["Document"] = request.getDocumentShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDatasetDocument"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetDocumentResponse>();
}

/**
 * @summary 修改数据集文档
 *
 * @param request UpdateDatasetDocumentRequest
 * @return UpdateDatasetDocumentResponse
 */
UpdateDatasetDocumentResponse Client::updateDatasetDocument(const UpdateDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary 通用配置-更新
 *
 * @param request UpdateGeneralConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGeneralConfigResponse
 */
UpdateGeneralConfigResponse Client::updateGeneralConfigWithOptions(const UpdateGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigKey()) {
    body["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateGeneralConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGeneralConfigResponse>();
}

/**
 * @summary 通用配置-更新
 *
 * @param request UpdateGeneralConfigRequest
 * @return UpdateGeneralConfigResponse
 */
UpdateGeneralConfigResponse Client::updateGeneralConfig(const UpdateGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary 文档管理-更新。
 *
 * @param tmpReq UpdateGeneratedContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGeneratedContentResponse
 */
UpdateGeneratedContentResponse Client::updateGeneratedContentWithOptions(const UpdateGeneratedContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGeneratedContentShrinkRequest request = UpdateGeneratedContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKeywords()) {
    request.setKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeywords(), "Keywords", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentText()) {
    body["ContentText"] = request.getContentText();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasKeywordsShrink()) {
    body["Keywords"] = request.getKeywordsShrink();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGeneratedContent"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGeneratedContentResponse>();
}

/**
 * @summary 文档管理-更新。
 *
 * @param request UpdateGeneratedContentRequest
 * @return UpdateGeneratedContentResponse
 */
UpdateGeneratedContentResponse Client::updateGeneratedContent(const UpdateGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary 根据ID更新素材
 *
 * @param tmpReq UpdateMaterialDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMaterialDocumentResponse
 */
UpdateMaterialDocumentResponse Client::updateMaterialDocumentWithOptions(const UpdateMaterialDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMaterialDocumentShrinkRequest request = UpdateMaterialDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocKeywords()) {
    request.setDocKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocKeywords(), "DocKeywords", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAuthor()) {
    body["Author"] = request.getAuthor();
  }

  if (!!request.hasDocKeywordsShrink()) {
    body["DocKeywords"] = request.getDocKeywordsShrink();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasExternalUrl()) {
    body["ExternalUrl"] = request.getExternalUrl();
  }

  if (!!request.hasHtmlContent()) {
    body["HtmlContent"] = request.getHtmlContent();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPubTime()) {
    body["PubTime"] = request.getPubTime();
  }

  if (!!request.hasShareAttr()) {
    body["ShareAttr"] = request.getShareAttr();
  }

  if (!!request.hasSrcFrom()) {
    body["SrcFrom"] = request.getSrcFrom();
  }

  if (!!request.hasSummary()) {
    body["Summary"] = request.getSummary();
  }

  if (!!request.hasTextContent()) {
    body["TextContent"] = request.getTextContent();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMaterialDocument"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMaterialDocumentResponse>();
}

/**
 * @summary 根据ID更新素材
 *
 * @param request UpdateMaterialDocumentRequest
 * @return UpdateMaterialDocumentResponse
 */
UpdateMaterialDocumentResponse Client::updateMaterialDocument(const UpdateMaterialDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMaterialDocumentWithOptions(request, runtime);
}

/**
 * @summary 妙读上传书籍
 *
 * @param tmpReq UploadBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadBookResponse
 */
UploadBookResponse Client::uploadBookWithOptions(const UploadBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadBookShrinkRequest request = UploadBookShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocs()) {
    request.setDocsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocs(), "Docs", "json"));
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDocsShrink()) {
    body["Docs"] = request.getDocsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadBook"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadBookResponse>();
}

/**
 * @summary 妙读上传书籍
 *
 * @param request UploadBookRequest
 * @return UploadBookResponse
 */
UploadBookResponse Client::uploadBook(const UploadBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadBookWithOptions(request, runtime);
}

/**
 * @summary 妙读上传文档接口
 *
 * @param tmpReq UploadDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDocResponse
 */
UploadDocResponse Client::uploadDocWithOptions(const UploadDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadDocShrinkRequest request = UploadDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocs()) {
    request.setDocsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocs(), "Docs", "json"));
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDocsShrink()) {
    body["Docs"] = request.getDocsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadDoc"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDocResponse>();
}

/**
 * @summary 妙读上传文档接口
 *
 * @param request UploadDocRequest
 * @return UploadDocResponse
 */
UploadDocResponse Client::uploadDoc(const UploadDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDocWithOptions(request, runtime);
}

/**
 * @summary 校验企业VOC上传模板
 *
 * @param request ValidateUploadTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateUploadTemplateResponse
 */
ValidateUploadTemplateResponse Client::validateUploadTemplateWithOptions(const ValidateUploadTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ValidateUploadTemplate"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateUploadTemplateResponse>();
}

/**
 * @summary 校验企业VOC上传模板
 *
 * @param request ValidateUploadTemplateRequest
 * @return ValidateUploadTemplateResponse
 */
ValidateUploadTemplateResponse Client::validateUploadTemplate(const ValidateUploadTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateUploadTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801