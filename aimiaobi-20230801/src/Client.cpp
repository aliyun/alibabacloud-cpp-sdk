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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "aimiaobi.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Add a custom term to the audit dictionary.
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
 * @summary Add a custom term to the audit dictionary.
 *
 * @param request AddAuditTermsRequest
 * @return AddAuditTermsResponse
 */
AddAuditTermsResponse Client::addAuditTerms(const AddAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAuditTermsWithOptions(request, runtime);
}

/**
 * @summary Adds a document to a data source.
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
 * @summary Adds a document to a data source.
 *
 * @param request AddDatasetDocumentRequest
 * @return AddDatasetDocumentResponse
 */
AddDatasetDocumentResponse Client::addDatasetDocument(const AddDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary Generates a video clip.
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

  if (!!tmpReq.hasHighDefSourceVideos()) {
    request.setHighDefSourceVideosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHighDefSourceVideos(), "HighDefSourceVideos", "json"));
  }

  if (!!tmpReq.hasStickers()) {
    request.setStickersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStickers(), "Stickers", "json"));
  }

  json body = {};
  if (!!request.hasAdaptMode()) {
    body["AdaptMode"] = request.getAdaptMode();
  }

  if (!!request.hasAlignment()) {
    body["Alignment"] = request.getAlignment();
  }

  if (!!request.hasCloseMusic()) {
    body["CloseMusic"] = request.getCloseMusic();
  }

  if (!!request.hasCloseSubtitle()) {
    body["CloseSubtitle"] = request.getCloseSubtitle();
  }

  if (!!request.hasCloseVoice()) {
    body["CloseVoice"] = request.getCloseVoice();
  }

  if (!!request.hasClosingCreditsUrl()) {
    body["ClosingCreditsUrl"] = request.getClosingCreditsUrl();
  }

  if (!!request.hasColorWordsShrink()) {
    body["ColorWords"] = request.getColorWordsShrink();
  }

  if (!!request.hasCosyVoiceAppKey()) {
    body["CosyVoiceAppKey"] = request.getCosyVoiceAppKey();
  }

  if (!!request.hasCosyVoiceToken()) {
    body["CosyVoiceToken"] = request.getCosyVoiceToken();
  }

  if (!!request.hasCustomVoiceStyle()) {
    body["CustomVoiceStyle"] = request.getCustomVoiceStyle();
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

  if (!!request.hasHighDefSourceVideosShrink()) {
    body["HighDefSourceVideos"] = request.getHighDefSourceVideosShrink();
  }

  if (!!request.hasMusicStyle()) {
    body["MusicStyle"] = request.getMusicStyle();
  }

  if (!!request.hasMusicUrl()) {
    body["MusicUrl"] = request.getMusicUrl();
  }

  if (!!request.hasMusicVolume()) {
    body["MusicVolume"] = request.getMusicVolume();
  }

  if (!!request.hasOpeningCreditsUrl()) {
    body["OpeningCreditsUrl"] = request.getOpeningCreditsUrl();
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

  if (!!request.hasTextWidth()) {
    body["TextWidth"] = request.getTextWidth();
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
 * @summary Generates a video clip.
 *
 * @param request AsyncCreateClipsTaskRequest
 * @return AsyncCreateClipsTaskResponse
 */
AsyncCreateClipsTaskResponse Client::asyncCreateClipsTask(const AsyncCreateClipsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncCreateClipsTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a timeline for smart video editing.
 *
 * @param tmpReq AsyncCreateClipsTimeLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncCreateClipsTimeLineResponse
 */
AsyncCreateClipsTimeLineResponse Client::asyncCreateClipsTimeLineWithOptions(const AsyncCreateClipsTimeLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AsyncCreateClipsTimeLineShrinkRequest request = AsyncCreateClipsTimeLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHighLightConfig()) {
    request.setHighLightConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHighLightConfig(), "HighLightConfig", "json"));
  }

  json body = {};
  if (!!request.hasAdditionalContent()) {
    body["AdditionalContent"] = request.getAdditionalContent();
  }

  if (!!request.hasCustomContent()) {
    body["CustomContent"] = request.getCustomContent();
  }

  if (!!request.hasHighLightConfigShrink()) {
    body["HighLightConfig"] = request.getHighLightConfigShrink();
  }

  if (!!request.hasNoRefVideo()) {
    body["NoRefVideo"] = request.getNoRefVideo();
  }

  if (!!request.hasProcessPrompt()) {
    body["ProcessPrompt"] = request.getProcessPrompt();
  }

  if (!!request.hasRecommendAudio()) {
    body["RecommendAudio"] = request.getRecommendAudio();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTimelineScene()) {
    body["TimelineScene"] = request.getTimelineScene();
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
 * @summary Creates a timeline for smart video editing.
 *
 * @param request AsyncCreateClipsTimeLineRequest
 * @return AsyncCreateClipsTimeLineResponse
 */
AsyncCreateClipsTimeLineResponse Client::asyncCreateClipsTimeLine(const AsyncCreateClipsTimeLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncCreateClipsTimeLineWithOptions(request, runtime);
}

/**
 * @summary Edits the timeline of a video editing task.
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
 * @summary Edits the timeline of a video editing task.
 *
 * @param request AsyncEditTimelineRequest
 * @return AsyncEditTimelineResponse
 */
AsyncEditTimelineResponse Client::asyncEditTimeline(const AsyncEditTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncEditTimelineWithOptions(request, runtime);
}

/**
 * @summary Upload a tender document.
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
 * @summary Upload a tender document.
 *
 * @param request AsyncUploadTenderDocRequest
 * @return AsyncUploadTenderDocResponse
 */
AsyncUploadTenderDocResponse Client::asyncUploadTenderDoc(const AsyncUploadTenderDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncUploadTenderDocWithOptions(request, runtime);
}

/**
 * @summary Uploads video assets for editing.
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
  if (!!request.hasAdaptiveThreshold()) {
    body["AdaptiveThreshold"] = request.getAdaptiveThreshold();
  }

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

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
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
 * @summary Uploads video assets for editing.
 *
 * @param request AsyncUploadVideoRequest
 * @return AsyncUploadVideoResponse
 */
AsyncUploadVideoResponse Client::asyncUploadVideo(const AsyncUploadVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncUploadVideoWithOptions(request, runtime);
}

/**
 * @summary An API for writing bidding documents.
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
 * @summary An API for writing bidding documents.
 *
 * @param request AsyncWritingBiddingDocRequest
 * @return AsyncWritingBiddingDocResponse
 */
AsyncWritingBiddingDocResponse Client::asyncWritingBiddingDoc(const AsyncWritingBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncWritingBiddingDocWithOptions(request, runtime);
}

/**
 * @summary Binds a PowerPoint (PPT) artifact.
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

  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
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
 * @summary Binds a PowerPoint (PPT) artifact.
 *
 * @param request BindPptArtifactRequest
 * @return BindPptArtifactResponse
 */
BindPptArtifactResponse Client::bindPptArtifact(const BindPptArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPptArtifactWithOptions(request, runtime);
}

/**
 * @summary Cancels pending asynchronous tasks.
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
 * @summary Cancels pending asynchronous tasks.
 *
 * @param request CancelAsyncTaskRequest
 * @return CancelAsyncTaskResponse
 */
CancelAsyncTaskResponse Client::cancelAsyncTask(const CancelAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Cancel an audit task.
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
 * @summary Cancel an audit task.
 *
 * @param request CancelAuditTaskRequest
 * @return CancelAuditTaskResponse
 */
CancelAuditTaskResponse Client::cancelAuditTask(const CancelAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAuditTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels a deep writing task.
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
 * @summary Cancels a deep writing task.
 *
 * @param request CancelDeepWriteTaskRequest
 * @return CancelDeepWriteTaskResponse
 */
CancelDeepWriteTaskResponse Client::cancelDeepWriteTask(const CancelDeepWriteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDeepWriteTaskWithOptions(request, runtime);
}

/**
 * @summary Clears all intervention content.
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
 * @summary Clears all intervention content.
 *
 * @param request ClearIntervenesRequest
 * @return ClearIntervenesResponse
 */
ClearIntervenesResponse Client::clearIntervenes(const ClearIntervenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearIntervenesWithOptions(request, runtime);
}

/**
 * @summary This interface confirms whether the parsing results from your custom rule library submission are used for audit tasks. Because parsing results may not meet your requirements, use this interface to perform a second confirmation. If you are satisfied with the parsing of your submitted rule library, provide the TaskId from that submission as an input parameter. The system then post-processes your uploaded rule library and makes it available for auditing. Otherwise, invoke the SubmitAuditNote interface again to upload the modified rule library.
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
 * @summary This interface confirms whether the parsing results from your custom rule library submission are used for audit tasks. Because parsing results may not meet your requirements, use this interface to perform a second confirmation. If you are satisfied with the parsing of your submitted rule library, provide the TaskId from that submission as an input parameter. The system then post-processes your uploaded rule library and makes it available for auditing. Otherwise, invoke the SubmitAuditNote interface again to upload the modified rule library.
 *
 * @param request ConfirmAndPostProcessAuditNoteRequest
 * @return ConfirmAndPostProcessAuditNoteResponse
 */
ConfirmAndPostProcessAuditNoteResponse Client::confirmAndPostProcessAuditNote(const ConfirmAndPostProcessAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmAndPostProcessAuditNoteWithOptions(request, runtime);
}

/**
 * @summary Batch add permissions:\\
 * \\- Dataset permissions\\
 *
 * @param tmpReq CreateDataPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataPermissionsResponse
 */
CreateDataPermissionsResponse Client::createDataPermissionsWithOptions(const CreateDataPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataPermissionsShrinkRequest request = CreateDataPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissionUserInfos()) {
    request.setPermissionUserInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissionUserInfos(), "PermissionUserInfos", "json"));
  }

  json body = {};
  if (!!request.hasDataId()) {
    body["DataId"] = request.getDataId();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.getDataType();
  }

  if (!!request.hasPermissionUserInfosShrink()) {
    body["PermissionUserInfos"] = request.getPermissionUserInfosShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataPermissions"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataPermissionsResponse>();
}

/**
 * @summary Batch add permissions:\\
 * \\- Dataset permissions\\
 *
 * @param request CreateDataPermissionsRequest
 * @return CreateDataPermissionsResponse
 */
CreateDataPermissionsResponse Client::createDataPermissions(const CreateDataPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataPermissionsWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset.
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
  if (!!request.hasAccessLevel()) {
    body["AccessLevel"] = request.getAccessLevel();
  }

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
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary General configurations — Create
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
 * @summary General configurations — Create
 *
 * @param request CreateGeneralConfigRequest
 * @return CreateGeneralConfigResponse
 */
CreateGeneralConfigResponse Client::createGeneralConfig(const CreateGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary Saves an article created in Miaobi. This operation supports rich text.
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
 * @summary Saves an article created in Miaobi. This operation supports rich text.
 *
 * @param request CreateGeneratedContentRequest
 * @return CreateGeneratedContentResponse
 */
CreateGeneratedContentResponse Client::createGeneratedContent(const CreateGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary Creates a temporary token for the online inference API.
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
 * @summary Creates a temporary token for the online inference API.
 *
 * @param request CreateTokenRequest
 * @return CreateTokenResponse
 */
CreateTokenResponse Client::createToken(const CreateTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes all custom rule libraries available for audit under the user account. This operation is irreversible. To archive rule libraries, use the DownloadAuditNote API to save them before deletion.
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
 * @summary Deletes all custom rule libraries available for audit under the user account. This operation is irreversible. To archive rule libraries, use the DownloadAuditNote API to save them before deletion.
 *
 * @param request DeleteAuditNoteRequest
 * @return DeleteAuditNoteResponse
 */
DeleteAuditNoteResponse Client::deleteAuditNote(const DeleteAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuditNoteWithOptions(request, runtime);
}

/**
 * @summary Deletes specified term records.
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
 * @summary Deletes specified term records.
 *
 * @param request DeleteAuditTermsRequest
 * @return DeleteAuditTermsResponse
 */
DeleteAuditTermsResponse Client::deleteAuditTerms(const DeleteAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuditTermsWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom text.
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
 * @summary Deletes a custom text.
 *
 * @param request DeleteCustomTextRequest
 * @return DeleteCustomTextResponse
 */
DeleteCustomTextResponse Client::deleteCustomText(const DeleteCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTextWithOptions(request, runtime);
}

/**
 * @summary Delete a custom hot spot event by topic name.
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
 * @summary Delete a custom hot spot event by topic name.
 *
 * @param request DeleteCustomTopicByTopicRequest
 * @return DeleteCustomTopicByTopicResponse
 */
DeleteCustomTopicByTopicResponse Client::deleteCustomTopicByTopic(const DeleteCustomTopicByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTopicByTopicWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom topic viewpoint by its ID.
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
 * @summary Deletes a custom topic viewpoint by its ID.
 *
 * @param request DeleteCustomTopicViewPointByIdRequest
 * @return DeleteCustomTopicViewPointByIdResponse
 */
DeleteCustomTopicViewPointByIdResponse Client::deleteCustomTopicViewPointById(const DeleteCustomTopicViewPointByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTopicViewPointByIdWithOptions(request, runtime);
}

/**
 * @summary Batch delete dataset permissions
 *
 * @param tmpReq DeleteDataPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataPermissionsResponse
 */
DeleteDataPermissionsResponse Client::deleteDataPermissionsWithOptions(const DeleteDataPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataPermissionsShrinkRequest request = DeleteDataPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataPermissions"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataPermissionsResponse>();
}

/**
 * @summary Batch delete dataset permissions
 *
 * @param request DeleteDataPermissionsRequest
 * @return DeleteDataPermissionsResponse
 */
DeleteDataPermissionsResponse Client::deleteDataPermissions(const DeleteDataPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataPermissionsWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataset from the data source.
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
 * @summary Deletes a dataset from the data source.
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetWithOptions(request, runtime);
}

/**
 * @summary Delete source documents.
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
 * @summary Delete source documents.
 *
 * @param request DeleteDatasetDocumentRequest
 * @return DeleteDatasetDocumentResponse
 */
DeleteDatasetDocumentResponse Client::deleteDatasetDocument(const DeleteDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple documents.
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
 * @summary Deletes multiple documents.
 *
 * @param request DeleteDocsRequest
 * @return DeleteDocsResponse
 */
DeleteDocsResponse Client::deleteDocs(const DeleteDocsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocsWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified URL used for factuality audit.
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
 * @summary Deletes the specified URL used for factuality audit.
 *
 * @param request DeleteFactAuditUrlRequest
 * @return DeleteFactAuditUrlResponse
 */
DeleteFactAuditUrlResponse Client::deleteFactAuditUrl(const DeleteFactAuditUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFactAuditUrlWithOptions(request, runtime);
}

/**
 * @summary Deletes general configurations.
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
 * @summary Deletes general configurations.
 *
 * @param request DeleteGeneralConfigRequest
 * @return DeleteGeneralConfigResponse
 */
DeleteGeneralConfigResponse Client::deleteGeneralConfig(const DeleteGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes an article created in MiaoBi.
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
 * @summary Deletes an article created in MiaoBi.
 *
 * @param request DeleteGeneratedContentRequest
 * @return DeleteGeneratedContentResponse
 */
DeleteGeneratedContentResponse Client::deleteGeneratedContent(const DeleteGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary Deletes an intervention rule.
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
 * @summary Deletes an intervention rule.
 *
 * @param request DeleteInterveneRuleRequest
 * @return DeleteInterveneRuleResponse
 */
DeleteInterveneRuleResponse Client::deleteInterveneRule(const DeleteInterveneRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInterveneRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a material from the material library.
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
 * @summary Deletes a material from the material library.
 *
 * @param request DeleteMaterialByIdRequest
 * @return DeleteMaterialByIdResponse
 */
DeleteMaterialByIdResponse Client::deleteMaterialById(const DeleteMaterialByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaterialByIdWithOptions(request, runtime);
}

/**
 * @summary Delete a PPT work
 *
 * @description - This API operation uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI portal is not compatible with the SSE inference protocol. You cannot directly test this API operation in the portal. For more information about how to call this API operation using the software development kit (SDK) for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, see [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request DeletePptArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePptArtifactResponse
 */
DeletePptArtifactResponse Client::deletePptArtifactWithOptions(const DeletePptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasPptArtifactId()) {
    body["PptArtifactId"] = request.getPptArtifactId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePptArtifact"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePptArtifactResponse>();
}

/**
 * @summary Delete a PPT work
 *
 * @description - This API operation uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI portal is not compatible with the SSE inference protocol. You cannot directly test this API operation in the portal. For more information about how to call this API operation using the software development kit (SDK) for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, see [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request DeletePptArtifactRequest
 * @return DeletePptArtifactResponse
 */
DeletePptArtifactResponse Client::deletePptArtifact(const DeletePptArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePptArtifactWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified custom style.
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
 * @summary Deletes a specified custom style.
 *
 * @param request DeleteStyleLearningResultRequest
 * @return DeleteStyleLearningResultResponse
 */
DeleteStyleLearningResultResponse Client::deleteStyleLearningResult(const DeleteStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary Extracts the content of documents from URLs.
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
 * @summary Extracts the content of documents from URLs.
 *
 * @param request DocumentExtractionRequest
 * @return DocumentExtractionResponse
 */
DocumentExtractionResponse Client::documentExtraction(const DocumentExtractionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return documentExtractionWithOptions(request, runtime);
}

/**
 * @summary Call this API to download the structured rule library for further processing. You can use this API to download either the structured rule library before post-processing or the structured rule library currently available for auditing. For specific usage, see the input parameter descriptions.
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
 * @summary Call this API to download the structured rule library for further processing. You can use this API to download either the structured rule library before post-processing or the structured rule library currently available for auditing. For specific usage, see the input parameter descriptions.
 *
 * @param request DownloadAuditNoteRequest
 * @return DownloadAuditNoteResponse
 */
DownloadAuditNoteResponse Client::downloadAuditNote(const DownloadAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadAuditNoteWithOptions(request, runtime);
}

/**
 * @summary API for downloading bidding documents
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
 * @summary API for downloading bidding documents
 *
 * @param request DownloadBiddingDocRequest
 * @return DownloadBiddingDocResponse
 */
DownloadBiddingDocResponse Client::downloadBiddingDoc(const DownloadBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadBiddingDocWithOptions(request, runtime);
}

/**
 * @summary Edit custom audit term records.
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
 * @summary Edit custom audit term records.
 *
 * @param request EditAuditTermsRequest
 * @return EditAuditTermsResponse
 */
EditAuditTermsResponse Client::editAuditTerms(const EditAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editAuditTermsWithOptions(request, runtime);
}

/**
 * @summary Edits the content of a bidding document.
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
 * @summary Edits the content of a bidding document.
 *
 * @param request EditBiddingDocRequest
 * @return EditBiddingDocResponse
 */
EditBiddingDocResponse Client::editBiddingDoc(const EditBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editBiddingDocWithOptions(request, runtime);
}

/**
 * @summary Exports the tag details for a specified enterprise VOC analysis task.
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
 * @summary Exports the tag details for a specified enterprise VOC analysis task.
 *
 * @param request ExportAnalysisTagDetailByTaskIdRequest
 * @return ExportAnalysisTagDetailByTaskIdResponse
 */
ExportAnalysisTagDetailByTaskIdResponse Client::exportAnalysisTagDetailByTaskId(const ExportAnalysisTagDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportAnalysisTagDetailByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Exports an automated review report.
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
 * @summary Exports an automated review report.
 *
 * @param request ExportAuditContentResultRequest
 * @return ExportAuditContentResultResponse
 */
ExportAuditContentResultResponse Client::exportAuditContentResult(const ExportAuditContentResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportAuditContentResultWithOptions(request, runtime);
}

/**
 * @summary Exports custom data source topic perspective analysis task results.
 *
 * @param request ExportCustomSourceAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCustomSourceAnalysisTaskResponse
 */
ExportCustomSourceAnalysisTaskResponse Client::exportCustomSourceAnalysisTaskWithOptions(const ExportCustomSourceAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExportType()) {
    body["ExportType"] = request.getExportType();
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
 * @summary Exports custom data source topic perspective analysis task results.
 *
 * @param request ExportCustomSourceAnalysisTaskRequest
 * @return ExportCustomSourceAnalysisTaskResponse
 */
ExportCustomSourceAnalysisTaskResponse Client::exportCustomSourceAnalysisTask(const ExportCustomSourceAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCustomSourceAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Exports the history of articles created in MiaoBi.
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
 * @summary Exports the history of articles created in MiaoBi.
 *
 * @param request ExportGeneratedContentRequest
 * @return ExportGeneratedContentResponse
 */
ExportGeneratedContentResponse Client::exportGeneratedContent(const ExportGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary Exports topic planning documents and provides a publicly accessible URL that expires in one hour.
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
 * @summary Exports topic planning documents and provides a publicly accessible URL that expires in one hour.
 *
 * @param request ExportHotTopicPlanningProposalsRequest
 * @return ExportHotTopicPlanningProposalsResponse
 */
ExportHotTopicPlanningProposalsResponse Client::exportHotTopicPlanningProposals(const ExportHotTopicPlanningProposalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportHotTopicPlanningProposalsWithOptions(request, runtime);
}

/**
 * @summary Exports all interventions.
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
 * @summary Exports all interventions.
 *
 * @param request ExportIntervenesRequest
 * @return ExportIntervenesResponse
 */
ExportIntervenesResponse Client::exportIntervenes(const ExportIntervenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportIntervenesWithOptions(request, runtime);
}

/**
 * @summary Exports a PPT artifact.
 *
 * @param request ExportPptArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportPptArtifactResponse
 */
ExportPptArtifactResponse Client::exportPptArtifactWithOptions(const ExportPptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEdit()) {
    body["Edit"] = request.getEdit();
  }

  if (!!request.hasExportFileType()) {
    body["ExportFileType"] = request.getExportFileType();
  }

  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasPptArtifactId()) {
    body["PptArtifactId"] = request.getPptArtifactId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasZip()) {
    body["Zip"] = request.getZip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportPptArtifact"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportPptArtifactResponse>();
}

/**
 * @summary Exports a PPT artifact.
 *
 * @param request ExportPptArtifactRequest
 * @return ExportPptArtifactResponse
 */
ExportPptArtifactResponse Client::exportPptArtifact(const ExportPptArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportPptArtifactWithOptions(request, runtime);
}

/**
 * @summary Provides feedback on the quality of the content that the model generates.
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
 * @summary Provides feedback on the quality of the content that the model generates.
 *
 * @param request FeedbackDialogueRequest
 * @return FeedbackDialogueResponse
 */
FeedbackDialogueResponse Client::feedbackDialogue(const FeedbackDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return feedbackDialogueWithOptions(request, runtime);
}

/**
 * @summary Retrieves the results of a term library export task.
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
 * @summary Retrieves the results of a term library export task.
 *
 * @param request FetchExportTermsTaskRequest
 * @return FetchExportTermsTaskResponse
 */
FetchExportTermsTaskResponse Client::fetchExportTermsTask(const FetchExportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchExportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary Fetches the result of an asynchronous document export task.
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
 * @summary Fetches the result of an asynchronous document export task.
 *
 * @param request FetchExportWordTaskRequest
 * @return FetchExportWordTaskResponse
 */
FetchExportWordTaskResponse Client::fetchExportWordTask(const FetchExportWordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchExportWordTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieve the results of image generation tasks.
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
 * @summary Retrieve the results of image generation tasks.
 *
 * @param request FetchImageTaskRequest
 * @return FetchImageTaskResponse
 */
FetchImageTaskResponse Client::fetchImageTask(const FetchImageTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchImageTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a term import task.
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
 * @summary Retrieves the result of a term import task.
 *
 * @param request FetchImportTermsTaskRequest
 * @return FetchImportTermsTaskResponse
 */
FetchImportTermsTaskResponse Client::fetchImportTermsTask(const FetchImportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchImportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieve the layout task result.
 *
 * @param request FetchParseDocumentLayoutTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchParseDocumentLayoutTaskResponse
 */
FetchParseDocumentLayoutTaskResponse Client::fetchParseDocumentLayoutTaskWithOptions(const FetchParseDocumentLayoutTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "FetchParseDocumentLayoutTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchParseDocumentLayoutTaskResponse>();
}

/**
 * @summary Retrieve the layout task result.
 *
 * @param request FetchParseDocumentLayoutTaskRequest
 * @return FetchParseDocumentLayoutTaskResponse
 */
FetchParseDocumentLayoutTaskResponse Client::fetchParseDocumentLayoutTask(const FetchParseDocumentLayoutTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchParseDocumentLayoutTaskWithOptions(request, runtime);
}

/**
 * @summary Start a task to export content as a Word document.
 *
 * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Start a task to export content as a Word document.
 *
 * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request GenerateExportWordTaskRequest
 * @return GenerateExportWordTaskResponse
 */
GenerateExportWordTaskResponse Client::generateExportWordTask(const GenerateExportWordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateExportWordTaskWithOptions(request, runtime);
}

/**
 * @summary Generate a temporary public URL.
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
 * @summary Generate a temporary public URL.
 *
 * @param request GenerateFileUrlByKeyRequest
 * @return GenerateFileUrlByKeyResponse
 */
GenerateFileUrlByKeyResponse Client::generateFileUrlByKey(const GenerateFileUrlByKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateFileUrlByKeyWithOptions(request, runtime);
}

/**
 * @summary Asynchronously generates an image from text.
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
 * @summary Asynchronously generates an image from text.
 *
 * @param request GenerateImageTaskRequest
 * @return GenerateImageTaskResponse
 */
GenerateImageTaskResponse Client::generateImageTask(const GenerateImageTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateImageTaskWithOptions(request, runtime);
}

/**
 * @summary Generates a file upload configuration.
 * 1\\. Call this API to obtain the upload configuration. The API returns the `PostUrl` (an internal OSS address for AI Writing Assistant), temporary OSS authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`), and the unique file identifier `fileKey`.
 * 2\\. The client uses the `PostUrl` and the temporary authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`) to upload the file.
 * 3\\. Use the `fileKey` to call subsequent APIs that require a `fileKey`, such as `GenerateFileUrlByKey`.
 *
 * @description This API returns the address and credentials for file uploads. For more information, see [OSS Form Upload](https://help.aliyun.com/zh/oss/user-guide/form-upload?scm=20140722.H_31849._.OR_help-T_cn~zh-V_1).
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
 * @summary Generates a file upload configuration.
 * 1\\. Call this API to obtain the upload configuration. The API returns the `PostUrl` (an internal OSS address for AI Writing Assistant), temporary OSS authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`), and the unique file identifier `fileKey`.
 * 2\\. The client uses the `PostUrl` and the temporary authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`) to upload the file.
 * 3\\. Use the `fileKey` to call subsequent APIs that require a `fileKey`, such as `GenerateFileUrlByKey`.
 *
 * @description This API returns the address and credentials for file uploads. For more information, see [OSS Form Upload](https://help.aliyun.com/zh/oss/user-guide/form-upload?scm=20140722.H_31849._.OR_help-T_cn~zh-V_1).
 *
 * @param request GenerateUploadConfigRequest
 * @return GenerateUploadConfigResponse
 */
GenerateUploadConfigResponse Client::generateUploadConfig(const GenerateUploadConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadConfigWithOptions(request, runtime);
}

/**
 * @summary Generates viewpoints from article snippets.
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
 * @summary Generates viewpoints from article snippets.
 *
 * @param request GenerateViewPointRequest
 * @return GenerateViewPointResponse
 */
GenerateViewPointResponse Client::generateViewPoint(const GenerateViewPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateViewPointWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of a post-processing task for a rule library. Use this operation together with the ConfirmAndPostProcessAuditNote operation to check the status of the current post-processing task.
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
 * @summary Queries the progress of a post-processing task for a rule library. Use this operation together with the ConfirmAndPostProcessAuditNote operation to check the status of the current post-processing task.
 *
 * @param request GetAuditNotePostProcessingStatusRequest
 * @return GetAuditNotePostProcessingStatusResponse
 */
GetAuditNotePostProcessingStatusResponse Client::getAuditNotePostProcessingStatus(const GetAuditNotePostProcessingStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditNotePostProcessingStatusWithOptions(request, runtime);
}

/**
 * @summary Checks the processing status of an uploaded rule library. This operation returns the current status of the upload task, the size of the parsed rule library file, and its storage path.
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
 * @summary Checks the processing status of an uploaded rule library. This operation returns the current status of the upload task, the size of the parsed rule library file, and its storage path.
 *
 * @param request GetAuditNoteProcessingStatusRequest
 * @return GetAuditNoteProcessingStatusResponse
 */
GetAuditNoteProcessingStatusResponse Client::getAuditNoteProcessingStatus(const GetAuditNoteProcessingStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditNoteProcessingStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the status of a video editing task.
 *
 * @param request GetAutoClipsTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoClipsTaskInfoResponse
 */
GetAutoClipsTaskInfoResponse Client::getAutoClipsTaskInfoWithOptions(const GetAutoClipsTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasShowAnalysisResults()) {
    body["ShowAnalysisResults"] = request.getShowAnalysisResults();
  }

  if (!!request.hasShowResourceInfo()) {
    body["ShowResourceInfo"] = request.getShowResourceInfo();
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
 * @summary Retrieves the status of a video editing task.
 *
 * @param request GetAutoClipsTaskInfoRequest
 * @return GetAutoClipsTaskInfoResponse
 */
GetAutoClipsTaskInfoResponse Client::getAutoClipsTaskInfo(const GetAutoClipsTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoClipsTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Query the rule libraries that are currently available for audit. This operation returns only rule libraries that are active for auditing. To view the contents of a custom rule library, use the DownloadAuditNote API.
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
 * @summary Query the rule libraries that are currently available for audit. This operation returns only rule libraries that are active for auditing. To view the contents of a custom rule library, use the DownloadAuditNote API.
 *
 * @param request GetAvailableAuditNotesRequest
 * @return GetAvailableAuditNotesResponse
 */
GetAvailableAuditNotesResponse Client::getAvailableAuditNotes(const GetAvailableAuditNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAvailableAuditNotesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the generation results of a bidding document.
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
 * @summary Retrieves the generation results of a bidding document.
 *
 * @param request GetBiddingDocInfoRequest
 * @return GetBiddingDocInfoResponse
 */
GetBiddingDocInfoResponse Client::getBiddingDocInfo(const GetBiddingDocInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBiddingDocInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieve the remaining limit for the bidding feature.
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
 * @summary Retrieve the remaining limit for the bidding feature.
 *
 * @param request GetBiddingRemainLimitNumRequest
 * @return GetBiddingRemainLimitNumResponse
 */
GetBiddingRemainLimitNumResponse Client::getBiddingRemainLimitNum(const GetBiddingRemainLimitNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBiddingRemainLimitNumWithOptions(request, runtime);
}

/**
 * @summary Retrieves the classifications from a tag mining task.
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
 * @summary Retrieves the classifications from a tag mining task.
 *
 * @param request GetCategoriesByTaskIdRequest
 * @return GetCategoriesByTaskIdResponse
 */
GetCategoriesByTaskIdResponse Client::getCategoriesByTaskId(const GetCategoriesByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCategoriesByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the built-in resources for smart clipping.
 *
 * @param request GetClipsBuildInResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClipsBuildInResourceResponse
 */
GetClipsBuildInResourceResponse Client::getClipsBuildInResourceWithOptions(const GetClipsBuildInResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetClipsBuildInResource"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClipsBuildInResourceResponse>();
}

/**
 * @summary Retrieves the built-in resources for smart clipping.
 *
 * @param request GetClipsBuildInResourceRequest
 * @return GetClipsBuildInResourceResponse
 */
GetClipsBuildInResourceResponse Client::getClipsBuildInResource(const GetClipsBuildInResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClipsBuildInResourceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a custom hot topic broadcast job.
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
 * @summary Retrieves the result of a custom hot topic broadcast job.
 *
 * @param request GetCustomHotTopicBroadcastJobRequest
 * @return GetCustomHotTopicBroadcastJobResponse
 */
GetCustomHotTopicBroadcastJobResponse Client::getCustomHotTopicBroadcastJob(const GetCustomHotTopicBroadcastJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomHotTopicBroadcastJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the results of a topic analysis task for a custom data source.
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
 * @summary Retrieves the results of a topic analysis task for a custom data source.
 *
 * @param request GetCustomSourceTopicAnalysisTaskRequest
 * @return GetCustomSourceTopicAnalysisTaskResponse
 */
GetCustomSourceTopicAnalysisTaskResponse Client::getCustomSourceTopicAnalysisTask(const GetCustomSourceTopicAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomSourceTopicAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieve custom text.
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
 * @summary Retrieve custom text.
 *
 * @param request GetCustomTextRequest
 * @return GetCustomTextResponse
 */
GetCustomTextResponse Client::getCustomText(const GetCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomTextWithOptions(request, runtime);
}

/**
 * @summary Retrieve the result of a custom topic selection perspective analysis task.
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
 * @summary Retrieve the result of a custom topic selection perspective analysis task.
 *
 * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
 * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
 */
GetCustomTopicSelectionPerspectiveAnalysisTaskResponse Client::getCustomTopicSelectionPerspectiveAnalysisTask(const GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves configuration information for write data sources and general search data sources.
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
 * @summary Retrieves configuration information for write data sources and general search data sources.
 *
 * @param request GetDataSourceOrderConfigRequest
 * @return GetDataSourceOrderConfigResponse
 */
GetDataSourceOrderConfigResponse Client::getDataSourceOrderConfig(const GetDataSourceOrderConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceOrderConfigWithOptions(request, runtime);
}

/**
 * @summary Data source management details.
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
 * @summary Data source management details.
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetWithOptions(request, runtime);
}

/**
 * @summary Retrieve the data source document.
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
 * @summary Retrieve the data source document.
 *
 * @param request GetDatasetDocumentRequest
 * @return GetDatasetDocumentResponse
 */
GetDatasetDocumentResponse Client::getDatasetDocument(const GetDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary Queries deep writing tasks. You can use it to check the running status of a specific task.
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
 * @summary Queries deep writing tasks. You can use it to check the running status of a specific task.
 *
 * @param request GetDeepWriteTaskRequest
 * @return GetDeepWriteTaskResponse
 */
GetDeepWriteTaskResponse Client::getDeepWriteTask(const GetDeepWriteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeepWriteTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a deep writing task. If the task is not complete, the operation returns its current status—such as queued, running, failed, or canceled. If the task is complete, the operation returns a URL that points to a compressed package of the task output that you can download.
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
 * @summary Queries the result of a deep writing task. If the task is not complete, the operation returns its current status—such as queued, running, failed, or canceled. If the task is complete, the operation returns a URL that points to a compressed package of the task output that you can download.
 *
 * @param request GetDeepWriteTaskResultRequest
 * @return GetDeepWriteTaskResultResponse
 */
GetDeepWriteTaskResultResponse Client::getDeepWriteTaskResult(const GetDeepWriteTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeepWriteTaskResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a content aggregation task.
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
 * @summary Retrieves the result of a content aggregation task.
 *
 * @param request GetDocClusterTaskRequest
 * @return GetDocClusterTaskResponse
 */
GetDocClusterTaskResponse Client::getDocClusterTask(const GetDocClusterTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocClusterTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a document.
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
 * @summary Retrieves information about a document.
 *
 * @param request GetDocInfoRequest
 * @return GetDocInfoResponse
 */
GetDocInfoResponse Client::getDocInfo(const GetDocInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of an enterprise Voice of the Customer (VOC) analysis task.
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
 * @summary Retrieves the result of an enterprise Voice of the Customer (VOC) analysis task.
 *
 * @param request GetEnterpriseVocAnalysisTaskRequest
 * @return GetEnterpriseVocAnalysisTaskResponse
 */
GetEnterpriseVocAnalysisTaskResponse Client::getEnterpriseVocAnalysisTask(const GetEnterpriseVocAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEnterpriseVocAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the source URL that is currently used for factuality audit.
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
 * @summary Retrieves the source URL that is currently used for factuality audit.
 *
 * @param request GetFactAuditUrlRequest
 * @return GetFactAuditUrlResponse
 */
GetFactAuditUrlResponse Client::getFactAuditUrl(const GetFactAuditUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFactAuditUrlWithOptions(request, runtime);
}

/**
 * @summary MiaoRead calculates the word count for a document.
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
 * @summary MiaoRead calculates the word count for a document.
 *
 * @param request GetFileContentLengthRequest
 * @return GetFileContentLengthResponse
 */
GetFileContentLengthResponse Client::getFileContentLength(const GetFileContentLengthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileContentLengthWithOptions(request, runtime);
}

/**
 * @summary Queries general configurations.
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
 * @summary Queries general configurations.
 *
 * @param request GetGeneralConfigRequest
 * @return GetGeneralConfigResponse
 */
GetGeneralConfigResponse Client::getGeneralConfig(const GetGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary Get generated content. Queries the history of articles generated in MiaoBi.
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
 * @summary Get generated content. Queries the history of articles generated in MiaoBi.
 *
 * @param request GetGeneratedContentRequest
 * @return GetGeneratedContentResponse
 */
GetGeneratedContentResponse Client::getGeneratedContent(const GetGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary Query news broadcast orders.
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
 * @summary Query news broadcast orders.
 *
 * @param request GetHotTopicBroadcastRequest
 * @return GetHotTopicBroadcastResponse
 */
GetHotTopicBroadcastResponse Client::getHotTopicBroadcast(const GetHotTopicBroadcastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotTopicBroadcastWithOptions(request, runtime);
}

/**
 * @summary Retrieve the global intervention reply.
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
 * @summary Retrieve the global intervention reply.
 *
 * @param request GetInterveneGlobalReplyRequest
 * @return GetInterveneGlobalReplyResponse
 */
GetInterveneGlobalReplyResponse Client::getInterveneGlobalReply(const GetInterveneGlobalReplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneGlobalReplyWithOptions(request, runtime);
}

/**
 * @summary Gets information about an import task.
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
 * @summary Gets information about an import task.
 *
 * @param request GetInterveneImportTaskInfoRequest
 * @return GetInterveneImportTaskInfoResponse
 */
GetInterveneImportTaskInfoResponse Client::getInterveneImportTaskInfo(const GetInterveneImportTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneImportTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an intervention rule.
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
 * @summary Retrieves the details of an intervention rule.
 *
 * @param request GetInterveneRuleDetailRequest
 * @return GetInterveneRuleDetailResponse
 */
GetInterveneRuleDetailResponse Client::getInterveneRuleDetail(const GetInterveneRuleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneRuleDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URL for the intervention import template.
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
 * @summary Retrieves the download URL for the intervention import template.
 *
 * @param request GetInterveneTemplateFileUrlRequest
 * @return GetInterveneTemplateFileUrlResponse
 */
GetInterveneTemplateFileUrlResponse Client::getInterveneTemplateFileUrl(const GetInterveneTemplateFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInterveneTemplateFileUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves detailed information about a material from the Material Library.
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
 * @summary Retrieves detailed information about a material from the Material Library.
 *
 * @param request GetMaterialByIdRequest
 * @return GetMaterialByIdResponse
 */
GetMaterialByIdResponse Client::getMaterialById(const GetMaterialByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMaterialByIdWithOptions(request, runtime);
}

/**
 * @summary Queries information about a PPT artifact.
 *
 * @description Usage notes:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI portal is not compatible with the SSE protocol and cannot be used for direct debugging. For examples of how to call the API using an SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, [download it from the API portal](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request GetPptArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPptArtifactResponse
 */
GetPptArtifactResponse Client::getPptArtifactWithOptions(const GetPptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasPptArtifactId()) {
    body["PptArtifactId"] = request.getPptArtifactId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPptArtifact"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPptArtifactResponse>();
}

/**
 * @summary Queries information about a PPT artifact.
 *
 * @description Usage notes:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI portal is not compatible with the SSE protocol and cannot be used for direct debugging. For examples of how to call the API using an SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, [download it from the API portal](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request GetPptArtifactRequest
 * @return GetPptArtifactResponse
 */
GetPptArtifactResponse Client::getPptArtifact(const GetPptArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPptArtifactWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a PPT export task.
 *
 * @param request GetPptArtifactExportResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPptArtifactExportResultResponse
 */
GetPptArtifactExportResultResponse Client::getPptArtifactExportResultWithOptions(const GetPptArtifactExportResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExportTaskId()) {
    body["ExportTaskId"] = request.getExportTaskId();
  }

  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPptArtifactExportResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPptArtifactExportResultResponse>();
}

/**
 * @summary Retrieves the result of a PPT export task.
 *
 * @param request GetPptArtifactExportResultRequest
 * @return GetPptArtifactExportResultResponse
 */
GetPptArtifactExportResultResponse Client::getPptArtifactExportResult(const GetPptArtifactExportResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPptArtifactExportResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration of a PPT component.
 *
 * @param request GetPptConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPptConfigResponse
 */
GetPptConfigResponse Client::getPptConfigWithOptions(const GetPptConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

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
 * @summary Retrieves the configuration of a PPT component.
 *
 * @param request GetPptConfigRequest
 * @return GetPptConfigResponse
 */
GetPptConfigResponse Client::getPptConfig(const GetPptConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPptConfigWithOptions(request, runtime);
}

/**
 * @summary Gets information about a PPT task.
 *
 * @param request GetPptInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPptInfoResponse
 */
GetPptInfoResponse Client::getPptInfoWithOptions(const GetPptInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
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
    {"action" , "GetPptInfo"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPptInfoResponse>();
}

/**
 * @summary Gets information about a PPT task.
 *
 * @param request GetPptInfoRequest
 * @return GetPptInfoResponse
 */
GetPptInfoResponse Client::getPptInfo(const GetPptInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPptInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the filters for PowerPoint (PPT) templates.
 *
 * @param request GetPptTemplateSelectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPptTemplateSelectorResponse
 */
GetPptTemplateSelectorResponse Client::getPptTemplateSelectorWithOptions(const GetPptTemplateSelectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPptTemplateSelector"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPptTemplateSelectorResponse>();
}

/**
 * @summary Retrieves the filters for PowerPoint (PPT) templates.
 *
 * @param request GetPptTemplateSelectorRequest
 * @return GetPptTemplateSelectorResponse
 */
GetPptTemplateSelectorResponse Client::getPptTemplateSelector(const GetPptTemplateSelectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPptTemplateSelectorWithOptions(request, runtime);
}

/**
 * @summary Retrieves configuration information, such as intelligent configuration styles and inference-related metadata configurations.
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
 * @summary Retrieves configuration information, such as intelligent configuration styles and inference-related metadata configurations.
 *
 * @param request GetPropertiesRequest
 * @return GetPropertiesResponse
 */
GetPropertiesResponse Client::getProperties(const GetPropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPropertiesWithOptions(request, runtime);
}

/**
 * @summary Queries the result of an automated review.
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
 * @summary Queries the result of an automated review.
 *
 * @param request GetSmartAuditResultRequest
 * @return GetSmartAuditResultResponse
 */
GetSmartAuditResultResponse Client::getSmartAuditResult(const GetSmartAuditResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartAuditResultWithOptions(request, runtime);
}

/**
 * @summary Queries a one-click video editing task.
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
 * @summary Queries a one-click video editing task.
 *
 * @param request GetSmartClipTaskRequest
 * @return GetSmartClipTaskResponse
 */
GetSmartClipTaskResponse Client::getSmartClipTask(const GetSmartClipTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartClipTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the analysis result of a style learning task.
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
 * @summary Retrieves the analysis result of a style learning task.
 *
 * @param request GetStyleLearningResultRequest
 * @return GetStyleLearningResultResponse
 */
GetStyleLearningResultResponse Client::getStyleLearningResult(const GetStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary Retrieve hot topic event information by ID.
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
 * @summary Retrieve hot topic event information by ID.
 *
 * @param request GetTopicByIdRequest
 * @return GetTopicByIdResponse
 */
GetTopicByIdResponse Client::getTopicById(const GetTopicByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicByIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a topic selection perspective analysis task.
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
 * @summary Retrieves the result of a topic selection perspective analysis task.
 *
 * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
 * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
 */
GetTopicSelectionPerspectiveAnalysisTaskResponse Client::getTopicSelectionPerspectiveAnalysisTask(const GetTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Imports an intervention file.
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
 * @summary Imports an intervention file.
 *
 * @param request ImportInterveneFileRequest
 * @return ImportInterveneFileResponse
 */
ImportInterveneFileResponse Client::importInterveneFile(const ImportInterveneFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importInterveneFileWithOptions(request, runtime);
}

/**
 * @summary Asynchronously import an intervention file.
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
 * @summary Asynchronously import an intervention file.
 *
 * @param request ImportInterveneFileAsyncRequest
 * @return ImportInterveneFileAsyncResponse
 */
ImportInterveneFileAsyncResponse Client::importInterveneFileAsync(const ImportInterveneFileAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importInterveneFileAsyncWithOptions(request, runtime);
}

/**
 * @summary Important: This is a billable API operation.
 * This API performs two operations:
 * 1\\. Returns the initialization code for the "PPT Generation" frontend component.
 * 2\\. Performs billing.
 *
 * @param request InitiatePptCreationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitiatePptCreationResponse
 */
InitiatePptCreationResponse Client::initiatePptCreationWithOptions(const InitiatePptCreationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

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
 * @summary Important: This is a billable API operation.
 * This API performs two operations:
 * 1\\. Returns the initialization code for the "PPT Generation" frontend component.
 * 2\\. Performs billing.
 *
 * @param request InitiatePptCreationRequest
 * @return InitiatePptCreationResponse
 */
InitiatePptCreationResponse Client::initiatePptCreation(const InitiatePptCreationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initiatePptCreationWithOptions(request, runtime);
}

/**
 * @summary Starts a task to create a presentation.
 *
 * @param request InitiatePptCreationV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitiatePptCreationV2Response
 */
InitiatePptCreationV2Response Client::initiatePptCreationV2WithOptions(const InitiatePptCreationV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasIsMobile()) {
    body["IsMobile"] = request.getIsMobile();
  }

  if (!!request.hasOutline()) {
    body["Outline"] = request.getOutline();
  }

  if (!!request.hasPptTemplateId()) {
    body["PptTemplateId"] = request.getPptTemplateId();
  }

  if (!!request.hasPptTemplateType()) {
    body["PptTemplateType"] = request.getPptTemplateType();
  }

  if (!!request.hasPptTitle()) {
    body["PptTitle"] = request.getPptTitle();
  }

  if (!!request.hasProcessType()) {
    body["ProcessType"] = request.getProcessType();
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
    {"action" , "InitiatePptCreationV2"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitiatePptCreationV2Response>();
}

/**
 * @summary Starts a task to create a presentation.
 *
 * @param request InitiatePptCreationV2Request
 * @return InitiatePptCreationV2Response
 */
InitiatePptCreationV2Response Client::initiatePptCreationV2(const InitiatePptCreationV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initiatePptCreationV2WithOptions(request, runtime);
}

/**
 * @summary Sets global intervention replies.
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
 * @summary Sets global intervention replies.
 *
 * @param request InsertInterveneGlobalReplyRequest
 * @return InsertInterveneGlobalReplyResponse
 */
InsertInterveneGlobalReplyResponse Client::insertInterveneGlobalReply(const InsertInterveneGlobalReplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertInterveneGlobalReplyWithOptions(request, runtime);
}

/**
 * @summary Insert an intervention rule.
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
 * @summary Insert an intervention rule.
 *
 * @param request InsertInterveneRuleRequest
 * @return InsertInterveneRuleResponse
 */
InsertInterveneRuleResponse Client::insertInterveneRule(const InsertInterveneRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertInterveneRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of details for an enterprise Voice of the Customer (VOC) analysis task.
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
 * @summary Retrieves a paginated list of details for an enterprise Voice of the Customer (VOC) analysis task.
 *
 * @param request ListAnalysisTagDetailByTaskIdRequest
 * @return ListAnalysisTagDetailByTaskIdResponse
 */
ListAnalysisTagDetailByTaskIdResponse Client::listAnalysisTagDetailByTaskId(const ListAnalysisTagDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnalysisTagDetailByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of asynchronous tasks.
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
 * @summary Retrieves a list of asynchronous tasks.
 *
 * @param request ListAsyncTasksRequest
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasks(const ListAsyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsyncTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of audit dimensions.
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
 * @summary Retrieves a list of audit dimensions.
 *
 * @param request ListAuditContentErrorTypesRequest
 * @return ListAuditContentErrorTypesResponse
 */
ListAuditContentErrorTypesResponse Client::listAuditContentErrorTypes(const ListAuditContentErrorTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditContentErrorTypesWithOptions(request, runtime);
}

/**
 * @summary Retrieve a list of term libraries.
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
 * @summary Retrieve a list of term libraries.
 *
 * @param request ListAuditTermsRequest
 * @return ListAuditTermsResponse
 */
ListAuditTermsResponse Client::listAuditTerms(const ListAuditTermsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditTermsWithOptions(request, runtime);
}

/**
 * @summary Lists smart video editing tasks.
 *
 * @param request ListAutoClipsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoClipsTaskResponse
 */
ListAutoClipsTaskResponse Client::listAutoClipsTaskWithOptions(const ListAutoClipsTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListAutoClipsTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoClipsTaskResponse>();
}

/**
 * @summary Lists smart video editing tasks.
 *
 * @param request ListAutoClipsTaskRequest
 * @return ListAutoClipsTaskResponse
 */
ListAutoClipsTaskResponse Client::listAutoClipsTask(const ListAutoClipsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoClipsTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of bidding document writing tasks.
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
 * @summary Retrieves the list of bidding document writing tasks.
 *
 * @param request ListBiddingDocRequest
 * @return ListBiddingDocResponse
 */
ListBiddingDocResponse Client::listBiddingDoc(const ListBiddingDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBiddingDocWithOptions(request, runtime);
}

/**
 * @summary Retrieves the system-defined presets for the Generate Content workflow. These presets include options such as writing style, article length, output language, and the number of articles to generate.
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
 * @summary Retrieves the system-defined presets for the Generate Content workflow. These presets include options such as writing style, article length, output language, and the number of articles to generate.
 *
 * @param request ListBuildConfigsRequest
 * @return ListBuildConfigsResponse
 */
ListBuildConfigsResponse Client::listBuildConfigs(const ListBuildConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBuildConfigsWithOptions(request, runtime);
}

/**
 * @summary Retrieve a list of custom texts.
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
 * @summary Retrieve a list of custom texts.
 *
 * @param request ListCustomTextRequest
 * @return ListCustomTextResponse
 */
ListCustomTextResponse Client::listCustomText(const ListCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomTextWithOptions(request, runtime);
}

/**
 * @summary Lists custom viewpoints.
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
 * @summary Lists custom viewpoints.
 *
 * @param request ListCustomViewPointsRequest
 * @return ListCustomViewPointsResponse
 */
ListCustomViewPointsResponse Client::listCustomViewPoints(const ListCustomViewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomViewPointsWithOptions(request, runtime);
}

/**
 * @summary Permission to list datasets
 *
 * @param request ListDataPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataPermissionsResponse
 */
ListDataPermissionsResponse Client::listDataPermissionsWithOptions(const ListDataPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataId()) {
    body["DataId"] = request.getDataId();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.getDataType();
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
    {"action" , "ListDataPermissions"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataPermissionsResponse>();
}

/**
 * @summary Permission to list datasets
 *
 * @param request ListDataPermissionsRequest
 * @return ListDataPermissionsResponse
 */
ListDataPermissionsResponse Client::listDataPermissions(const ListDataPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataPermissionsWithOptions(request, runtime);
}

/**
 * @summary Lists data source documents.
 *
 * @param tmpReq ListDatasetDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetDocumentsResponse
 */
ListDatasetDocumentsResponse Client::listDatasetDocumentsWithOptions(const ListDatasetDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDatasetDocumentsShrinkRequest request = ListDatasetDocumentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryUuids()) {
    request.setCategoryUuidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryUuids(), "CategoryUuids", "json"));
  }

  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  if (!!tmpReq.hasDocUuids()) {
    request.setDocUuidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocUuids(), "DocUuids", "json"));
  }

  if (!!tmpReq.hasExcludeFields()) {
    request.setExcludeFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeFields(), "ExcludeFields", "json"));
  }

  if (!!tmpReq.hasIncludeFields()) {
    request.setIncludeFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeFields(), "IncludeFields", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasCategoryUuidsShrink()) {
    body["CategoryUuids"] = request.getCategoryUuidsShrink();
  }

  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasDatasetDescription()) {
    body["DatasetDescription"] = request.getDatasetDescription();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasDocUuidsShrink()) {
    body["DocUuids"] = request.getDocUuidsShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExcludeFieldsShrink()) {
    body["ExcludeFields"] = request.getExcludeFieldsShrink();
  }

  if (!!request.hasExtend1()) {
    body["Extend1"] = request.getExtend1();
  }

  if (!!request.hasExtend2()) {
    body["Extend2"] = request.getExtend2();
  }

  if (!!request.hasExtend3()) {
    body["Extend3"] = request.getExtend3();
  }

  if (!!request.hasIncludeFieldsShrink()) {
    body["IncludeFields"] = request.getIncludeFieldsShrink();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
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

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
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
 * @summary Lists data source documents.
 *
 * @param request ListDatasetDocumentsRequest
 * @return ListDatasetDocumentsResponse
 */
ListDatasetDocumentsResponse Client::listDatasetDocuments(const ListDatasetDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetDocumentsWithOptions(request, runtime);
}

/**
 * @summary Data source management - query
 *
 * @param request ListDatasetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const ListDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @summary Data source management - query
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetsWithOptions(request, runtime);
}

/**
 * @summary History of online inference scenarios.
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
 * @summary History of online inference scenarios.
 *
 * @param request ListDialoguesRequest
 * @return ListDialoguesResponse
 */
ListDialoguesResponse Client::listDialogues(const ListDialoguesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDialoguesWithOptions(request, runtime);
}

/**
 * @summary Miàodú retrieves the list of documents.
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
 * @summary Miàodú retrieves the list of documents.
 *
 * @param request ListDocsRequest
 * @return ListDocsResponse
 */
ListDocsResponse Client::listDocs(const ListDocsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocsWithOptions(request, runtime);
}

/**
 * @summary Searches government document libraries based on complex conditions.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Searches government document libraries based on complex conditions.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request ListDocumentRetrieveRequest
 * @return ListDocumentRetrieveResponse
 */
ListDocumentRetrieveResponse Client::listDocumentRetrieve(const ListDocumentRetrieveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentRetrieveWithOptions(request, runtime);
}

/**
 * @summary Lists the enterprise-specific PPT templates.
 *
 * @description Quanmiao supports iframe integration. For details, see the [Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request ListEnterprisePptTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterprisePptTemplatesResponse
 */
ListEnterprisePptTemplatesResponse Client::listEnterprisePptTemplatesWithOptions(const ListEnterprisePptTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  json body = {};
  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListEnterprisePptTemplates"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterprisePptTemplatesResponse>();
}

/**
 * @summary Lists the enterprise-specific PPT templates.
 *
 * @description Quanmiao supports iframe integration. For details, see the [Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request ListEnterprisePptTemplatesRequest
 * @return ListEnterprisePptTemplatesResponse
 */
ListEnterprisePptTemplatesResponse Client::listEnterprisePptTemplates(const ListEnterprisePptTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterprisePptTemplatesWithOptions(request, runtime);
}

/**
 * @summary List of novel perspectives.
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
 * @summary List of novel perspectives.
 *
 * @param request ListFreshViewPointsRequest
 * @return ListFreshViewPointsResponse
 */
ListFreshViewPointsResponse Client::listFreshViewPoints(const ListFreshViewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFreshViewPointsWithOptions(request, runtime);
}

/**
 * @summary Lists the general configurations.
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
 * @summary Lists the general configurations.
 *
 * @param request ListGeneralConfigsRequest
 * @return ListGeneralConfigsResponse
 */
ListGeneralConfigsResponse Client::listGeneralConfigs(const ListGeneralConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGeneralConfigsWithOptions(request, runtime);
}

/**
 * @summary Retrieve a list of documents: Query the history of articles created in MiaoBi.
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
 * @summary Retrieve a list of documents: Query the history of articles created in MiaoBi.
 *
 * @param request ListGeneratedContentsRequest
 * @return ListGeneratedContentsResponse
 */
ListGeneratedContentsResponse Client::listGeneratedContents(const ListGeneratedContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGeneratedContentsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of trending topic hotspots.
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
 * @summary Retrieves the list of trending topic hotspots.
 *
 * @param request ListHotNewsWithTypeRequest
 * @return ListHotNewsWithTypeResponse
 */
ListHotNewsWithTypeResponse Client::listHotNewsWithType(const ListHotNewsWithTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotNewsWithTypeWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of hot ranking sources for all platforms.
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
 * @summary Retrieve the list of hot ranking sources for all platforms.
 *
 * @param request ListHotSourcesRequest
 * @return ListHotSourcesResponse
 */
ListHotSourcesResponse Client::listHotSources(const ListHotSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotSourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of trending topics.
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
  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasCustomField()) {
    body["CustomField"] = request.getCustomField();
  }

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
 * @summary Retrieves a list of trending topics.
 *
 * @param request ListHotTopicsRequest
 * @return ListHotTopicsResponse
 */
ListHotTopicsResponse Client::listHotTopics(const ListHotTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotTopicsWithOptions(request, runtime);
}

/**
 * @summary List of popular viewpoints.
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
 * @summary List of popular viewpoints.
 *
 * @param request ListHotViewPointsRequest
 * @return ListHotViewPointsResponse
 */
ListHotViewPointsResponse Client::listHotViewPoints(const ListHotViewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotViewPointsWithOptions(request, runtime);
}

/**
 * @summary Lists the number of intervention projects.
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
 * @summary Lists the number of intervention projects.
 *
 * @param request ListInterveneCntRequest
 * @return ListInterveneCntResponse
 */
ListInterveneCntResponse Client::listInterveneCnt(const ListInterveneCntRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInterveneCntWithOptions(request, runtime);
}

/**
 * @summary Retrieve a list of import tasks.
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
 * @summary Retrieve a list of import tasks.
 *
 * @param request ListInterveneImportTasksRequest
 * @return ListInterveneImportTasksResponse
 */
ListInterveneImportTasksResponse Client::listInterveneImportTasks(const ListInterveneImportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInterveneImportTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of intervention rules.
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
 * @summary Retrieves a list of intervention rules.
 *
 * @param request ListInterveneRulesRequest
 * @return ListInterveneRulesResponse
 */
ListInterveneRulesResponse Client::listInterveneRules(const ListInterveneRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInterveneRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of intervention items.
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
 * @summary Retrieves the list of intervention items.
 *
 * @param request ListIntervenesRequest
 * @return ListIntervenesResponse
 */
ListIntervenesResponse Client::listIntervenes(const ListIntervenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervenesWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of materials from the Material Library.
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
 * @summary Retrieve the list of materials from the Material Library.
 *
 * @param request ListMaterialDocumentsRequest
 * @return ListMaterialDocumentsResponse
 */
ListMaterialDocumentsResponse Client::listMaterialDocuments(const ListMaterialDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMaterialDocumentsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of planning proposals.
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
 * @summary Retrieves a list of planning proposals.
 *
 * @param request ListPlanningProposalRequest
 * @return ListPlanningProposalResponse
 */
ListPlanningProposalResponse Client::listPlanningProposal(const ListPlanningProposalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPlanningProposalWithOptions(request, runtime);
}

/**
 * @summary Queries a list of PPT artifacts.
 *
 * @param request ListPptArtifactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPptArtifactsResponse
 */
ListPptArtifactsResponse Client::listPptArtifactsWithOptions(const ListPptArtifactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPptArtifacts"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPptArtifactsResponse>();
}

/**
 * @summary Queries a list of PPT artifacts.
 *
 * @param request ListPptArtifactsRequest
 * @return ListPptArtifactsResponse
 */
ListPptArtifactsResponse Client::listPptArtifacts(const ListPptArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPptArtifactsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of PowerPoint templates.
 *
 * @param request ListPptTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPptTemplatesResponse
 */
ListPptTemplatesResponse Client::listPptTemplatesWithOptions(const ListPptTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  json body = {};
  if (!!request.hasCareerId()) {
    body["CareerId"] = request.getCareerId();
  }

  if (!!request.hasColourId()) {
    body["ColourId"] = request.getColourId();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStyleId()) {
    body["StyleId"] = request.getStyleId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPptTemplates"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPptTemplatesResponse>();
}

/**
 * @summary Queries a list of PowerPoint templates.
 *
 * @param request ListPptTemplatesRequest
 * @return ListPptTemplatesResponse
 */
ListPptTemplatesResponse Client::listPptTemplates(const ListPptTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPptTemplatesWithOptions(request, runtime);
}

/**
 * @summary Lists the dialogue data for a search generation task.
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
 * @summary Lists the dialogue data for a search generation task.
 *
 * @param request ListSearchTaskDialogueDatasRequest
 * @return ListSearchTaskDialogueDatasResponse
 */
ListSearchTaskDialogueDatasResponse Client::listSearchTaskDialogueDatas(const ListSearchTaskDialogueDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchTaskDialogueDatasWithOptions(request, runtime);
}

/**
 * @summary Retrieves the task details for MiaoSou search generation tasks.
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
 * @summary Retrieves the task details for MiaoSou search generation tasks.
 *
 * @param request ListSearchTaskDialoguesRequest
 * @return ListSearchTaskDialoguesResponse
 */
ListSearchTaskDialoguesResponse Client::listSearchTaskDialogues(const ListSearchTaskDialoguesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchTaskDialoguesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of historical tasks generated by Miaosou Search.
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
 * @summary Queries the list of historical tasks generated by Miaosou Search.
 *
 * @param request ListSearchTasksRequest
 * @return ListSearchTasksResponse
 */
ListSearchTasksResponse Client::listSearchTasks(const ListSearchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of style learning analysis results.
 *
 * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Retrieves the list of style learning analysis results.
 *
 * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request ListStyleLearningResultRequest
 * @return ListStyleLearningResultResponse
 */
ListStyleLearningResultResponse Client::listStyleLearningResult(const ListStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary List of timeliness perspectives.
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
 * @summary List of timeliness perspectives.
 *
 * @param request ListTimedViewAttitudeRequest
 * @return ListTimedViewAttitudeResponse
 */
ListTimedViewAttitudeResponse Client::listTimedViewAttitude(const ListTimedViewAttitudeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTimedViewAttitudeWithOptions(request, runtime);
}

/**
 * @summary Retrieve hot spot recommendation events.
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
 * @summary Retrieve hot spot recommendation events.
 *
 * @param request ListTopicRecommendEventListRequest
 * @return ListTopicRecommendEventListResponse
 */
ListTopicRecommendEventListResponse Client::listTopicRecommendEventList(const ListTopicRecommendEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicRecommendEventListWithOptions(request, runtime);
}

/**
 * @summary Retrieves recommended viewpoints for hot spot events.
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
 * @summary Retrieves recommended viewpoints for hot spot events.
 *
 * @param request ListTopicViewPointRecommendEventListRequest
 * @return ListTopicViewPointRecommendEventListResponse
 */
ListTopicViewPointRecommendEventListResponse Client::listTopicViewPointRecommendEventList(const ListTopicViewPointRecommendEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicViewPointRecommendEventListWithOptions(request, runtime);
}

/**
 * @summary Retrieve version information for your purchased services.
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
 * @summary Retrieve version information for your purchased services.
 *
 * @param request ListVersionsRequest
 * @return ListVersionsResponse
 */
ListVersionsResponse Client::listVersions(const ListVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVersionsWithOptions(request, runtime);
}

/**
 * @summary List of viewpoints from netizens.
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
 * @summary List of viewpoints from netizens.
 *
 * @param request ListWebReviewPointsRequest
 * @return ListWebReviewPointsResponse
 */
ListWebReviewPointsResponse Client::listWebReviewPoints(const ListWebReviewPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWebReviewPointsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of writing styles.
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
 * @summary Retrieves the list of writing styles.
 *
 * @param request ListWritingStylesRequest
 * @return ListWritingStylesResponse
 */
ListWritingStylesResponse Client::listWritingStyles(const ListWritingStylesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWritingStylesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of submitted asynchronous task executions.
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
 * @summary Queries the details of submitted asynchronous task executions.
 *
 * @param request QueryAsyncTaskRequest
 * @return QueryAsyncTaskResponse
 */
QueryAsyncTaskResponse Client::queryAsyncTask(const QueryAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the results of an audit task.
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
 * @summary Queries the results of an audit task.
 *
 * @param request QueryAuditTaskRequest
 * @return QueryAuditTaskResponse
 */
QueryAuditTaskResponse Client::queryAuditTask(const QueryAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuditTaskWithOptions(request, runtime);
}

/**
 * @summary Queries video audit results.
 *
 * @description Queries video audit results by task ID. The response includes video information, shot information, and audit results.
 *
 * @param request QueryVideoAuditResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVideoAuditResultResponse
 */
QueryVideoAuditResultResponse Client::queryVideoAuditResultWithOptions(const QueryVideoAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryVideoAuditResult"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVideoAuditResultResponse>();
}

/**
 * @summary Queries video audit results.
 *
 * @description Queries video audit results by task ID. The response includes video information, shot information, and audit results.
 *
 * @param request QueryVideoAuditResultRequest
 * @return QueryVideoAuditResultResponse
 */
QueryVideoAuditResultResponse Client::queryVideoAuditResult(const QueryVideoAuditResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVideoAuditResultWithOptions(request, runtime);
}

/**
 * @summary Abbreviates the specified content.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunAbbreviationContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Abbreviates the specified content.
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
 * @summary Abbreviates the specified content.
 *
 * @param request RunAbbreviationContentRequest
 * @return RunAbbreviationContentResponse
 */
RunAbbreviationContentResponse Client::runAbbreviationContent(const RunAbbreviationContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runAbbreviationContentWithOptions(request, runtime);
}

/**
 * @summary MiaoBi: AI-assisted writing
 *
 * @description QuanMiao products support iframe embedding. For more information, see [QuanMiao Public Cloud iframe Customization for Customer Onboarding](https://help.aliyun.com/document_detail/3000990.html).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunAiHelperWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary MiaoBi: AI-assisted writing
 *
 * @description QuanMiao products support iframe embedding. For more information, see [QuanMiao Public Cloud iframe Customization for Customer Onboarding](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary MiaoBi: AI-assisted writing
 *
 * @description QuanMiao products support iframe embedding. For more information, see [QuanMiao Public Cloud iframe Customization for Customer Onboarding](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request RunAiHelperWritingRequest
 * @return RunAiHelperWritingResponse
 */
RunAiHelperWritingResponse Client::runAiHelperWriting(const RunAiHelperWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runAiHelperWritingWithOptions(request, runtime);
}

/**
 * @summary Miaodu generates mind maps of books.
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

  if (!!request.hasResponseFormat()) {
    body["ResponseFormat"] = request.getResponseFormat();
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunBookBrainmapResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Miaodu generates mind maps of books.
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

  if (!!request.hasResponseFormat()) {
    body["ResponseFormat"] = request.getResponseFormat();
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
 * @summary Miaodu generates mind maps of books.
 *
 * @param request RunBookBrainmapRequest
 * @return RunBookBrainmapResponse
 */
RunBookBrainmapResponse Client::runBookBrainmap(const RunBookBrainmapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runBookBrainmapWithOptions(request, runtime);
}

/**
 * @summary Extracts a summary, structured selling points, and hotwords from a book.
 *
 * @param request RunBookIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookIntroductionResponse
 */
FutureGenerator<RunBookIntroductionResponse> Client::runBookIntroductionWithSSE(const RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunBookIntroductionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Extracts a summary, structured selling points, and hotwords from a book.
 *
 * @param request RunBookIntroductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunBookIntroductionResponse
 */
RunBookIntroductionResponse Client::runBookIntroductionWithOptions(const RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCleanCache()) {
    body["CleanCache"] = request.getCleanCache();
  }

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
 * @summary Extracts a summary, structured selling points, and hotwords from a book.
 *
 * @param request RunBookIntroductionRequest
 * @return RunBookIntroductionResponse
 */
RunBookIntroductionResponse Client::runBookIntroduction(const RunBookIntroductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runBookIntroductionWithOptions(request, runtime);
}

/**
 * @summary A smart card interface for books.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunBookSmartCardResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary A smart card interface for books.
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
 * @summary A smart card interface for books.
 *
 * @param request RunBookSmartCardRequest
 * @return RunBookSmartCardResponse
 */
RunBookSmartCardResponse Client::runBookSmartCard(const RunBookSmartCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runBookSmartCardWithOptions(request, runtime);
}

/**
 * @summary Predicts user comments for a specified article.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunCommentGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Predicts user comments for a specified article.
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
 * @summary Predicts user comments for a specified article.
 *
 * @param request RunCommentGenerationRequest
 * @return RunCommentGenerationResponse
 */
RunCommentGenerationResponse Client::runCommentGeneration(const RunCommentGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommentGenerationWithOptions(request, runtime);
}

/**
 * @summary Continues generating content.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunContinueContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Continues generating content.
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
 * @summary Continues generating content.
 *
 * @param request RunContinueContentRequest
 * @return RunContinueContentResponse
 */
RunContinueContentResponse Client::runContinueContent(const RunContinueContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runContinueContentWithOptions(request, runtime);
}

/**
 * @summary Analyzes custom hot topics.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunCustomHotTopicAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Analyzes custom hot topics.
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
 * @summary Analyzes custom hot topics.
 *
 * @param request RunCustomHotTopicAnalysisRequest
 * @return RunCustomHotTopicAnalysisResponse
 */
RunCustomHotTopicAnalysisResponse Client::runCustomHotTopicAnalysis(const RunCustomHotTopicAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCustomHotTopicAnalysisWithOptions(request, runtime);
}

/**
 * @summary Perspective analysis of custom topics.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunCustomHotTopicViewPointAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Perspective analysis of custom topics.
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
 * @summary Perspective analysis of custom topics.
 *
 * @param request RunCustomHotTopicViewPointAnalysisRequest
 * @return RunCustomHotTopicViewPointAnalysisResponse
 */
RunCustomHotTopicViewPointAnalysisResponse Client::runCustomHotTopicViewPointAnalysis(const RunCustomHotTopicViewPointAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCustomHotTopicViewPointAnalysisWithOptions(request, runtime);
}

/**
 * @summary Queries deep writing events. The system returns detailed information about the task execution as a stream of Server-Sent Events (SSE).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDeepWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Queries deep writing events. The system returns detailed information about the task execution as a stream of Server-Sent Events (SSE).
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
 * @summary Queries deep writing events. The system returns detailed information about the task execution as a stream of Server-Sent Events (SSE).
 *
 * @param request RunDeepWritingRequest
 * @return RunDeepWritingResponse
 */
RunDeepWritingResponse Client::runDeepWriting(const RunDeepWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDeepWritingWithOptions(request, runtime);
}

/**
 * @summary Generate a three-level, multilingual mind map from an article or a book, with control over the number of second-level nodes and the word count of leaf nodes.
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

  if (!!request.hasResponseFormat()) {
    body["ResponseFormat"] = request.getResponseFormat();
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocBrainmapResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generate a three-level, multilingual mind map from an article or a book, with control over the number of second-level nodes and the word count of leaf nodes.
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

  if (!!request.hasResponseFormat()) {
    body["ResponseFormat"] = request.getResponseFormat();
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
 * @summary Generate a three-level, multilingual mind map from an article or a book, with control over the number of second-level nodes and the word count of leaf nodes.
 *
 * @param request RunDocBrainmapRequest
 * @return RunDocBrainmapResponse
 */
RunDocBrainmapResponse Client::runDocBrainmap(const RunDocBrainmapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocBrainmapWithOptions(request, runtime);
}

/**
 * @summary Generates a summary for an article, video, or URL, including a full-text summary, key points, and a chapter overview (i.e., segmented content with summaries and abstracts for each segment). It also supports multilingual input and output. If the user only requires a full-text summary of an article, they can use the RunDocSummary API. For details, see https://help.aliyun.com/zh/model-studio/api-aimiaobi-2023-08-01-rundocsummary.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocIntroductionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates a summary for an article, video, or URL, including a full-text summary, key points, and a chapter overview (i.e., segmented content with summaries and abstracts for each segment). It also supports multilingual input and output. If the user only requires a full-text summary of an article, they can use the RunDocSummary API. For details, see https://help.aliyun.com/zh/model-studio/api-aimiaobi-2023-08-01-rundocsummary.
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
 * @summary Generates a summary for an article, video, or URL, including a full-text summary, key points, and a chapter overview (i.e., segmented content with summaries and abstracts for each segment). It also supports multilingual input and output. If the user only requires a full-text summary of an article, they can use the RunDocSummary API. For details, see https://help.aliyun.com/zh/model-studio/api-aimiaobi-2023-08-01-rundocsummary.
 *
 * @param request RunDocIntroductionRequest
 * @return RunDocIntroductionResponse
 */
RunDocIntroductionResponse Client::runDocIntroduction(const RunDocIntroductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocIntroductionWithOptions(request, runtime);
}

/**
 * @summary Article Q&A: For a natural language query, provide a textual answer within the specified article scope (accompanied by images if available) and display source attribution information.  
 * Multimodal File Q&A: For a natural language query, provide a textual answer within the specified multimodal file scope, along with relevant images, video segments, or text, and display source attribution information.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocQaResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Article Q&A: For a natural language query, provide a textual answer within the specified article scope (accompanied by images if available) and display source attribution information.  
 * Multimodal File Q&A: For a natural language query, provide a textual answer within the specified multimodal file scope, along with relevant images, video segments, or text, and display source attribution information.
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
 * @summary Article Q&A: For a natural language query, provide a textual answer within the specified article scope (accompanied by images if available) and display source attribution information.  
 * Multimodal File Q&A: For a natural language query, provide a textual answer within the specified multimodal file scope, along with relevant images, video segments, or text, and display source attribution information.
 *
 * @param request RunDocQaRequest
 * @return RunDocQaResponse
 */
RunDocQaResponse Client::runDocQa(const RunDocQaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocQaWithOptions(request, runtime);
}

/**
 * @summary Automatically adds tags to selected text or a specified chat and generates a smart card note.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocSmartCardResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Automatically adds tags to selected text or a specified chat and generates a smart card note.
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
 * @summary Automatically adds tags to selected text or a specified chat and generates a smart card note.
 *
 * @param request RunDocSmartCardRequest
 * @return RunDocSmartCardResponse
 */
RunDocSmartCardResponse Client::runDocSmartCard(const RunDocSmartCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocSmartCardWithOptions(request, runtime);
}

/**
 * @summary Generates a summary of an article, video, or URL—that is, a concise overview of the entire content. It also supports multilingual input and output.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocSummaryResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates a summary of an article, video, or URL—that is, a concise overview of the entire content. It also supports multilingual input and output.
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
 * @summary Generates a summary of an article, video, or URL—that is, a concise overview of the entire content. It also supports multilingual input and output.
 *
 * @param request RunDocSummaryRequest
 * @return RunDocSummaryResponse
 */
RunDocSummaryResponse Client::runDocSummary(const RunDocSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocSummaryWithOptions(request, runtime);
}

/**
 * @summary An API for document translation between English and Chinese.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocTranslationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary An API for document translation between English and Chinese.
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
 * @summary An API for document translation between English and Chinese.
 *
 * @param request RunDocTranslationRequest
 * @return RunDocTranslationResponse
 */
RunDocTranslationResponse Client::runDocTranslation(const RunDocTranslationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocTranslationWithOptions(request, runtime);
}

/**
 * @summary Rewrites an article in a specified style.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunDocWashingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Rewrites an article in a specified style.
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
 * @summary Rewrites an article in a specified style.
 *
 * @param request RunDocWashingRequest
 * @return RunDocWashingResponse
 */
RunDocWashingResponse Client::runDocWashing(const RunDocWashingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runDocWashingWithOptions(request, runtime);
}

/**
 * @summary Expands content.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunExpandContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Expands content.
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
 * @summary Expands content.
 *
 * @param request RunExpandContentRequest
 * @return RunExpandContentResponse
 */
RunExpandContentResponse Client::runExpandContent(const RunExpandContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runExpandContentWithOptions(request, runtime);
}

/**
 * @summary Submits a query and returns several related queries.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunGenerateQuestionsResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Submits a query and returns several related queries.
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
 * @summary Submits a query and returns several related queries.
 *
 * @param request RunGenerateQuestionsRequest
 * @return RunGenerateQuestionsResponse
 */
RunGenerateQuestionsResponse Client::runGenerateQuestions(const RunGenerateQuestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runGenerateQuestionsWithOptions(request, runtime);
}

/**
 * @summary Extract keywords from a specified document. Keywords are domain-specific professional terms or concepts that represent and identify a particular industry or field. They accurately describe and summarize the core content, key people, major events, or technical terms in that domain.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunHotwordResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Extract keywords from a specified document. Keywords are domain-specific professional terms or concepts that represent and identify a particular industry or field. They accurately describe and summarize the core content, key people, major events, or technical terms in that domain.
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
 * @summary Extract keywords from a specified document. Keywords are domain-specific professional terms or concepts that represent and identify a particular industry or field. They accurately describe and summarize the core content, key people, major events, or technical terms in that domain.
 *
 * @param request RunHotwordRequest
 * @return RunHotwordResponse
 */
RunHotwordResponse Client::runHotword(const RunHotwordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runHotwordWithOptions(request, runtime);
}

/**
 * @summary Extracts and generates keywords using AMB.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunKeywordsExtractionGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Extracts and generates keywords using AMB.
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
 * @summary Extracts and generates keywords using AMB.
 *
 * @param request RunKeywordsExtractionGenerationRequest
 * @return RunKeywordsExtractionGenerationResponse
 */
RunKeywordsExtractionGenerationResponse Client::runKeywordsExtractionGeneration(const RunKeywordsExtractionGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runKeywordsExtractionGenerationWithOptions(request, runtime);
}

/**
 * @summary Generate an outline-style summary for multiple documents, videos, or URLs. The summary includes a consolidated overview and key points. This operation supports multiple input and output languages.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunMultiDocIntroductionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generate an outline-style summary for multiple documents, videos, or URLs. The summary includes a consolidated overview and key points. This operation supports multiple input and output languages.
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
 * @summary Generate an outline-style summary for multiple documents, videos, or URLs. The summary includes a consolidated overview and key points. This operation supports multiple input and output languages.
 *
 * @param request RunMultiDocIntroductionRequest
 * @return RunMultiDocIntroductionResponse
 */
RunMultiDocIntroductionResponse Client::runMultiDocIntroduction(const RunMultiDocIntroductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runMultiDocIntroductionWithOptions(request, runtime);
}

/**
 * @summary Generates a PowerPoint outline.
 *
 * @description Instructions:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - You cannot test this API directly in the OpenAPI Portal because the portal is not compatible with the SSE inference protocol. For examples of how to call the API using the SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/en/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, [click this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request RunPptOutlineGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPptOutlineGenerationResponse
 */
FutureGenerator<RunPptOutlineGenerationResponse> Client::runPptOutlineGenerationWithSSE(const RunPptOutlineGenerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunPptOutlineGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates a PowerPoint outline.
 *
 * @description Instructions:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - You cannot test this API directly in the OpenAPI Portal because the portal is not compatible with the SSE inference protocol. For examples of how to call the API using the SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/en/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, [click this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request RunPptOutlineGenerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPptOutlineGenerationResponse
 */
RunPptOutlineGenerationResponse Client::runPptOutlineGenerationWithOptions(const RunPptOutlineGenerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
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
 * @summary Generates a PowerPoint outline.
 *
 * @description Instructions:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - You cannot test this API directly in the OpenAPI Portal because the portal is not compatible with the SSE inference protocol. For examples of how to call the API using the SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/en/model-studio/ppt-generation-best-practices).
 * - To obtain the latest version of the asynchronous Java SDK, [click this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 *
 * @param request RunPptOutlineGenerationRequest
 * @return RunPptOutlineGenerationResponse
 */
RunPptOutlineGenerationResponse Client::runPptOutlineGeneration(const RunPptOutlineGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runPptOutlineGenerationWithOptions(request, runtime);
}

/**
 * @summary Enter writing instructions to quickly generate content.
 *
 * @description ### Access Instructions:
 * - The OpenAPI portal is incompatible with the Server-Sent Events (SSE) inference protocol. Therefore, you cannot directly debug this operation. For an example of how to call the API using an SDK, see [Miaobi Best Practices](https://help.aliyun.com/zh/model-studio/best-practices-for-miaobi-api?spm=a2c4g.11186623.help-menu-2400256.d_1_12_6_2_1_0.39892421FntuI2\\&scm=20140722.H_2844289._.OR_help-T_cn~zh-V_1).
 * - Click this [link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc) to download the latest version of the Java asynchronous SDK.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunQuickWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Enter writing instructions to quickly generate content.
 *
 * @description ### Access Instructions:
 * - The OpenAPI portal is incompatible with the Server-Sent Events (SSE) inference protocol. Therefore, you cannot directly debug this operation. For an example of how to call the API using an SDK, see [Miaobi Best Practices](https://help.aliyun.com/zh/model-studio/best-practices-for-miaobi-api?spm=a2c4g.11186623.help-menu-2400256.d_1_12_6_2_1_0.39892421FntuI2\\&scm=20140722.H_2844289._.OR_help-T_cn~zh-V_1).
 * - Click this [link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc) to download the latest version of the Java asynchronous SDK.
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
 * @summary Enter writing instructions to quickly generate content.
 *
 * @description ### Access Instructions:
 * - The OpenAPI portal is incompatible with the Server-Sent Events (SSE) inference protocol. Therefore, you cannot directly debug this operation. For an example of how to call the API using an SDK, see [Miaobi Best Practices](https://help.aliyun.com/zh/model-studio/best-practices-for-miaobi-api?spm=a2c4g.11186623.help-menu-2400256.d_1_12_6_2_1_0.39892421FntuI2\\&scm=20140722.H_2844289._.OR_help-T_cn~zh-V_1).
 * - Click this [link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc) to download the latest version of the Java asynchronous SDK.
 *
 * @param request RunQuickWritingRequest
 * @return RunQuickWritingResponse
 */
RunQuickWritingResponse Client::runQuickWriting(const RunQuickWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runQuickWritingWithOptions(request, runtime);
}

/**
 * @summary AI Miaosou – Intelligent Search Generation: This API delivers the search and generation capabilities of the Miaosou homepage. It supports general search and media asset search, along with features such as user query clarification, multimodal knowledge search, and multi-agent generation.
 * – General Search: Performs semantic retrieval on centralized knowledge data and applies multi-agent post-processing to the results, such as summary generation, abstracting, and timeline summarization.
 * – Media Asset Search: Conducts an exhaustive full-text search to retrieve highly relevant knowledge and supports multi-agent post-processing, such as clustering and news extraction.
 *
 * @description ### Integration notes:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI console does not support SSE inference protocols and cannot be used for direct testing. For SDK-based integration examples (Java and Python), see the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation.
 * - To obtain the latest version of the Java asynchronous SDK, click [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 * ### Data sources for search:
 * Supports three dataset types. See the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation for details.
 * - Built-in “Internet search” dataset: Supports open-domain text, images, and video (video is not yet available) from the Internet.
 * - Semantic (RAG) dataset: Manages enterprise private knowledge bases and supports text, images, video, and voice (voice is not yet available).
 * - Third-party API dataset: Integrates directly with your own enterprise search APIs.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunSearchGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary AI Miaosou – Intelligent Search Generation: This API delivers the search and generation capabilities of the Miaosou homepage. It supports general search and media asset search, along with features such as user query clarification, multimodal knowledge search, and multi-agent generation.
 * – General Search: Performs semantic retrieval on centralized knowledge data and applies multi-agent post-processing to the results, such as summary generation, abstracting, and timeline summarization.
 * – Media Asset Search: Conducts an exhaustive full-text search to retrieve highly relevant knowledge and supports multi-agent post-processing, such as clustering and news extraction.
 *
 * @description ### Integration notes:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI console does not support SSE inference protocols and cannot be used for direct testing. For SDK-based integration examples (Java and Python), see the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation.
 * - To obtain the latest version of the Java asynchronous SDK, click [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 * ### Data sources for search:
 * Supports three dataset types. See the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation for details.
 * - Built-in “Internet search” dataset: Supports open-domain text, images, and video (video is not yet available) from the Internet.
 * - Semantic (RAG) dataset: Manages enterprise private knowledge bases and supports text, images, video, and voice (voice is not yet available).
 * - Third-party API dataset: Integrates directly with your own enterprise search APIs.
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
 * @summary AI Miaosou – Intelligent Search Generation: This API delivers the search and generation capabilities of the Miaosou homepage. It supports general search and media asset search, along with features such as user query clarification, multimodal knowledge search, and multi-agent generation.
 * – General Search: Performs semantic retrieval on centralized knowledge data and applies multi-agent post-processing to the results, such as summary generation, abstracting, and timeline summarization.
 * – Media Asset Search: Conducts an exhaustive full-text search to retrieve highly relevant knowledge and supports multi-agent post-processing, such as clustering and news extraction.
 *
 * @description ### Integration notes:
 * - This API uses the HTTP Server-Sent Events (SSE) protocol.
 * - The OpenAPI console does not support SSE inference protocols and cannot be used for direct testing. For SDK-based integration examples (Java and Python), see the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation.
 * - To obtain the latest version of the Java asynchronous SDK, click [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
 * ### Data sources for search:
 * Supports three dataset types. See the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation for details.
 * - Built-in “Internet search” dataset: Supports open-domain text, images, and video (video is not yet available) from the Internet.
 * - Semantic (RAG) dataset: Manages enterprise private knowledge bases and supports text, images, video, and voice (voice is not yet available).
 * - Third-party API dataset: Integrates directly with your own enterprise search APIs.
 *
 * @param request RunSearchGenerationRequest
 * @return RunSearchGenerationResponse
 */
RunSearchGenerationResponse Client::runSearchGeneration(const RunSearchGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSearchGenerationWithOptions(request, runtime);
}

/**
 * @summary Miao Search enables text-to-text search.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunSearchSimilarArticlesResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Miao Search enables text-to-text search.
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
 * @summary Miao Search enables text-to-text search.
 *
 * @param request RunSearchSimilarArticlesRequest
 * @return RunSearchSimilarArticlesResponse
 */
RunSearchSimilarArticlesResponse Client::runSearchSimilarArticles(const RunSearchSimilarArticlesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSearchSimilarArticlesWithOptions(request, runtime);
}

/**
 * @summary Writes content in a step-by-step pattern using an outline and summaries.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Onboarding: Quanmiao Public Cloud iframe Customization](https://help.aliyun.com/document_detail/3000990.html).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunStepByStepWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Writes content in a step-by-step pattern using an outline and summaries.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Onboarding: Quanmiao Public Cloud iframe Customization](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Writes content in a step-by-step pattern using an outline and summaries.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Onboarding: Quanmiao Public Cloud iframe Customization](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request RunStepByStepWritingRequest
 * @return RunStepByStepWritingResponse
 */
RunStepByStepWritingResponse Client::runStepByStepWriting(const RunStepByStepWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runStepByStepWritingWithOptions(request, runtime);
}

/**
 * @summary Analyzes the stylistic features of content.
 *
 * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Solution](https://help.aliyun.com/document_detail/3000990.html).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunStyleFeatureAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Analyzes the stylistic features of content.
 *
 * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Solution](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Analyzes the stylistic features of content.
 *
 * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Solution](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request RunStyleFeatureAnalysisRequest
 * @return RunStyleFeatureAnalysisResponse
 */
RunStyleFeatureAnalysisResponse Client::runStyleFeatureAnalysis(const RunStyleFeatureAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runStyleFeatureAnalysisWithOptions(request, runtime);
}

/**
 * @summary Generates a summary of content.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunSummaryGenerateResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates a summary of content.
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
 * @summary Generates a summary of content.
 *
 * @param request RunSummaryGenerateRequest
 * @return RunSummaryGenerateResponse
 */
RunSummaryGenerateResponse Client::runSummaryGenerate(const RunSummaryGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSummaryGenerateWithOptions(request, runtime);
}

/**
 * @summary Polishes the specified text.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunTextPolishingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Polishes the specified text.
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
 * @summary Polishes the specified text.
 *
 * @param request RunTextPolishingRequest
 * @return RunTextPolishingResponse
 */
RunTextPolishingResponse Client::runTextPolishing(const RunTextPolishingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTextPolishingWithOptions(request, runtime);
}

/**
 * @summary Miaobi generates titles.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunTitleGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Miaobi generates titles.
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
 * @summary Miaobi generates titles.
 *
 * @param request RunTitleGenerationRequest
 * @return RunTitleGenerationResponse
 */
RunTitleGenerationResponse Client::runTitleGeneration(const RunTitleGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTitleGenerationWithOptions(request, runtime);
}

/**
 * @summary Selects and aggregates topics for MiaoCe.
 *
 * @description All Miao products support iframe embedding. For more information, see [Customer Integration: Miao Public Cloud iFrame Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunTopicSelectionMergeResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Selects and aggregates topics for MiaoCe.
 *
 * @description All Miao products support iframe embedding. For more information, see [Customer Integration: Miao Public Cloud iFrame Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Selects and aggregates topics for MiaoCe.
 *
 * @description All Miao products support iframe embedding. For more information, see [Customer Integration: Miao Public Cloud iFrame Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request RunTopicSelectionMergeRequest
 * @return RunTopicSelectionMergeResponse
 */
RunTopicSelectionMergeResponse Client::runTopicSelectionMerge(const RunTopicSelectionMergeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTopicSelectionMergeWithOptions(request, runtime);
}

/**
 * @summary Translates text for content creation using AMB.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunTranslateGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Translates text for content creation using AMB.
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
 * @summary Translates text for content creation using AMB.
 *
 * @param request RunTranslateGenerationRequest
 * @return RunTranslateGenerationResponse
 */
RunTranslateGenerationResponse Client::runTranslateGeneration(const RunTranslateGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTranslateGenerationWithOptions(request, runtime);
}

/**
 * @summary Generates video clip scripts using AI.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunVideoScriptGenerateResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates video clip scripts using AI.
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
 * @summary Generates video clip scripts using AI.
 *
 * @param request RunVideoScriptGenerateRequest
 * @return RunVideoScriptGenerateResponse
 */
RunVideoScriptGenerateResponse Client::runVideoScriptGenerate(const RunVideoScriptGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runVideoScriptGenerateWithOptions(request, runtime);
}

/**
 * @summary Calls AMB to rewrite text in a new tone.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunWriteToneGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Calls AMB to rewrite text in a new tone.
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
 * @summary Calls AMB to rewrite text in a new tone.
 *
 * @param request RunWriteToneGenerationRequest
 * @return RunWriteToneGenerationResponse
 */
RunWriteToneGenerationResponse Client::runWriteToneGeneration(const RunWriteToneGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runWriteToneGenerationWithOptions(request, runtime);
}

/**
 * @summary Direct writing.
 *
 * @description This API is deprecated. For more information, see [RunWritingV2](https://help.aliyun.com/document_detail/2922606.html).
 * The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao Public Cloud iframe customization](https://help.aliyun.com/document_detail/3000990.html).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunWritingResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Direct writing.
 *
 * @description This API is deprecated. For more information, see [RunWritingV2](https://help.aliyun.com/document_detail/2922606.html).
 * The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao Public Cloud iframe customization](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Direct writing.
 *
 * @description This API is deprecated. For more information, see [RunWritingV2](https://help.aliyun.com/document_detail/2922606.html).
 * The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao Public Cloud iframe customization](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request RunWritingRequest
 * @return RunWritingResponse
 */
RunWritingResponse Client::runWriting(const RunWritingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runWritingWithOptions(request, runtime);
}

/**
 * @summary AI writing
 *
 * @description For instructions on embedding Quanmiao products using an iframe, see [Customer integration_Quanmiao public cloud iframe customized solution](https://help.aliyun.com/document_detail/3000990.html).
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunWritingV2Response>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary AI writing
 *
 * @description For instructions on embedding Quanmiao products using an iframe, see [Customer integration_Quanmiao public cloud iframe customized solution](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary AI writing
 *
 * @description For instructions on embedding Quanmiao products using an iframe, see [Customer integration_Quanmiao public cloud iframe customized solution](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request RunWritingV2Request
 * @return RunWritingV2Response
 */
RunWritingV2Response Client::runWritingV2(const RunWritingV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runWritingV2WithOptions(request, runtime);
}

/**
 * @summary Saves custom text.
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
 * @summary Saves custom text.
 *
 * @param request SaveCustomTextRequest
 * @return SaveCustomTextResponse
 */
SaveCustomTextResponse Client::saveCustomText(const SaveCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveCustomTextWithOptions(request, runtime);
}

/**
 * @summary Saves the data source configuration for content creation and general search.
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
 * @summary Saves the data source configuration for content creation and general search.
 *
 * @param request SaveDataSourceOrderConfigRequest
 * @return SaveDataSourceOrderConfigResponse
 */
SaveDataSourceOrderConfigResponse Client::saveDataSourceOrderConfig(const SaveDataSourceOrderConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveDataSourceOrderConfigWithOptions(request, runtime);
}

/**
 * @summary Save material: Save material to the Material Library.
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
 * @summary Save material: Save material to the Material Library.
 *
 * @param request SaveMaterialDocumentRequest
 * @return SaveMaterialDocumentResponse
 */
SaveMaterialDocumentResponse Client::saveMaterialDocument(const SaveMaterialDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveMaterialDocumentWithOptions(request, runtime);
}

/**
 * @summary Configuration: Cloud storage parameter settings
 *
 * @param request SaveOrUpdateOssConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveOrUpdateOssConfigResponse
 */
SaveOrUpdateOssConfigResponse Client::saveOrUpdateOssConfigWithOptions(const SaveOrUpdateOssConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBucketName()) {
    body["BucketName"] = request.getBucketName();
  }

  if (!!request.hasEndPoint()) {
    body["EndPoint"] = request.getEndPoint();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SaveOrUpdateOssConfig"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveOrUpdateOssConfigResponse>();
}

/**
 * @summary Configuration: Cloud storage parameter settings
 *
 * @param request SaveOrUpdateOssConfigRequest
 * @return SaveOrUpdateOssConfigResponse
 */
SaveOrUpdateOssConfigResponse Client::saveOrUpdateOssConfig(const SaveOrUpdateOssConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveOrUpdateOssConfigWithOptions(request, runtime);
}

/**
 * @summary Saves a custom writing style.
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
 * @summary Saves a custom writing style.
 *
 * @param request SaveStyleLearningResultRequest
 * @return SaveStyleLearningResultResponse
 */
SaveStyleLearningResultResponse Client::saveStyleLearningResult(const SaveStyleLearningResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveStyleLearningResultWithOptions(request, runtime);
}

/**
 * @summary Searches documents in a data source.
 *
 * @param tmpReq SearchDatasetDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchDatasetDocumentsResponse
 */
SearchDatasetDocumentsResponse Client::searchDatasetDocumentsWithOptions(const SearchDatasetDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchDatasetDocumentsShrinkRequest request = SearchDatasetDocumentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryUuids()) {
    request.setCategoryUuidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryUuids(), "CategoryUuids", "json"));
  }

  if (!!tmpReq.hasDocIds()) {
    request.setDocIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocIds(), "DocIds", "json"));
  }

  if (!!tmpReq.hasDocTypes()) {
    request.setDocTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocTypes(), "DocTypes", "json"));
  }

  if (!!tmpReq.hasDocUuids()) {
    request.setDocUuidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocUuids(), "DocUuids", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasCategoryUuidsShrink()) {
    body["CategoryUuids"] = request.getCategoryUuidsShrink();
  }

  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDocIdsShrink()) {
    body["DocIds"] = request.getDocIdsShrink();
  }

  if (!!request.hasDocTypesShrink()) {
    body["DocTypes"] = request.getDocTypesShrink();
  }

  if (!!request.hasDocUuidsShrink()) {
    body["DocUuids"] = request.getDocUuidsShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExtend1()) {
    body["Extend1"] = request.getExtend1();
  }

  if (!!request.hasExtend2()) {
    body["Extend2"] = request.getExtend2();
  }

  if (!!request.hasExtend3()) {
    body["Extend3"] = request.getExtend3();
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

  if (!!request.hasSearchMode()) {
    body["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
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
 * @summary Searches documents in a data source.
 *
 * @param request SearchDatasetDocumentsRequest
 * @return SearchDatasetDocumentsResponse
 */
SearchDatasetDocumentsResponse Client::searchDatasetDocuments(const SearchDatasetDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDatasetDocumentsWithOptions(request, runtime);
}

/**
 * @summary Searches for news based on your input. This feature is currently limited to web search.
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
 * @summary Searches for news based on your input. This feature is currently limited to web search.
 *
 * @param request SearchNewsRequest
 * @return SearchNewsResponse
 */
SearchNewsResponse Client::searchNews(const SearchNewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchNewsWithOptions(request, runtime);
}

/**
 * @summary Executes predefined asynchronous tasks.
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
 * @summary Executes predefined asynchronous tasks.
 *
 * @param request SubmitAsyncTaskRequest
 * @return SubmitAsyncTaskResponse
 */
SubmitAsyncTaskResponse Client::submitAsyncTask(const SubmitAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Model Studio provides the same feature as the Intelligent Proofreading module in Alibaba Cloud public cloud: uploading a custom rule library. Due to authentication restrictions, you must pass the file key (FileKey) of your custom rule library file as an input parameter to successfully call this API. After you call this API, Model Studio processes your custom rule library and returns a structured result in XLSX format. You can call GetAuditNoteProcessingStatus to check the processing status or call DownloadAuditNote to download the processed rule library. This API is under active development and will eventually accept a publicly accessible file URL instead of a FileKey.
 *
 * @description All Model Studio products support iframe embedding. For details, see [Customer Integration: Model Studio Public Cloud iFrame Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
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
 * @summary Model Studio provides the same feature as the Intelligent Proofreading module in Alibaba Cloud public cloud: uploading a custom rule library. Due to authentication restrictions, you must pass the file key (FileKey) of your custom rule library file as an input parameter to successfully call this API. After you call this API, Model Studio processes your custom rule library and returns a structured result in XLSX format. You can call GetAuditNoteProcessingStatus to check the processing status or call DownloadAuditNote to download the processed rule library. This API is under active development and will eventually accept a publicly accessible file URL instead of a FileKey.
 *
 * @description All Model Studio products support iframe embedding. For details, see [Customer Integration: Model Studio Public Cloud iFrame Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
 *
 * @param request SubmitAuditNoteRequest
 * @return SubmitAuditNoteResponse
 */
SubmitAuditNoteResponse Client::submitAuditNote(const SubmitAuditNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAuditNoteWithOptions(request, runtime);
}

/**
 * @summary Submits an audit task.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
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
 * @summary Submits an audit task.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
 *
 * @param request SubmitAuditTaskRequest
 * @return SubmitAuditTaskResponse
 */
SubmitAuditTaskResponse Client::submitAuditTask(const SubmitAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAuditTaskWithOptions(request, runtime);
}

/**
 * @summary You can submit a custom broadcast list job.
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
 * @summary You can submit a custom broadcast list job.
 *
 * @param request SubmitCustomHotTopicBroadcastJobRequest
 * @return SubmitCustomHotTopicBroadcastJobResponse
 */
SubmitCustomHotTopicBroadcastJobResponse Client::submitCustomHotTopicBroadcastJob(const SubmitCustomHotTopicBroadcastJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomHotTopicBroadcastJobWithOptions(request, runtime);
}

/**
 * @summary Submit topic trend analysis using a custom data source
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

  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTopics(), "Topics", "json"));
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

  if (!!request.hasTopicsShrink()) {
    body["Topics"] = request.getTopicsShrink();
  }

  if (!!request.hasTopicsFileUrl()) {
    body["TopicsFileUrl"] = request.getTopicsFileUrl();
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
 * @summary Submit topic trend analysis using a custom data source
 *
 * @param request SubmitCustomSourceTopicAnalysisRequest
 * @return SubmitCustomSourceTopicAnalysisResponse
 */
SubmitCustomSourceTopicAnalysisResponse Client::submitCustomSourceTopicAnalysis(const SubmitCustomSourceTopicAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomSourceTopicAnalysisWithOptions(request, runtime);
}

/**
 * @summary Submits a custom analysis task to analyze hot topic perspectives.
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
 * @summary Submits a custom analysis task to analyze hot topic perspectives.
 *
 * @param request SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
 * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
 */
SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse Client::submitCustomTopicSelectionPerspectiveAnalysisTask(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary You can submit a deep writing task. You can provide information such as questions, instructions, and attachments, based on the topic you want to research or analyze. The system schedules and executes this task in the background.
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
 * @summary You can submit a deep writing task. You can provide information such as questions, instructions, and attachments, based on the topic you want to research or analyze. The system schedules and executes this task in the background.
 *
 * @param request SubmitDeepWriteTaskRequest
 * @return SubmitDeepWriteTaskResponse
 */
SubmitDeepWriteTaskResponse Client::submitDeepWriteTask(const SubmitDeepWriteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDeepWriteTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a content clustering task.
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
 * @summary Submits a content clustering task.
 *
 * @param request SubmitDocClusterTaskRequest
 * @return SubmitDocClusterTaskResponse
 */
SubmitDocClusterTaskResponse Client::submitDocClusterTask(const SubmitDocClusterTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDocClusterTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a Voice of the Customer (VOC) asynchronous task.
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
 * @summary Submits a Voice of the Customer (VOC) asynchronous task.
 *
 * @param request SubmitEnterpriseVocAnalysisTaskRequest
 * @return SubmitEnterpriseVocAnalysisTaskResponse
 */
SubmitEnterpriseVocAnalysisTaskResponse Client::submitEnterpriseVocAnalysisTask(const SubmitEnterpriseVocAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitEnterpriseVocAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Export task for a thesaurus
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
 * @summary Export task for a thesaurus
 *
 * @param request SubmitExportTermsTaskRequest
 * @return SubmitExportTermsTaskResponse
 */
SubmitExportTermsTaskResponse Client::submitExportTermsTask(const SubmitExportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitExportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary MiaoBi provides a factuality audit capability that verifies facts using web search and supports custom configuration of search source URLs.
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
 * @summary MiaoBi provides a factuality audit capability that verifies facts using web search and supports custom configuration of search source URLs.
 *
 * @param request SubmitFactAuditUrlRequest
 * @return SubmitFactAuditUrlResponse
 */
SubmitFactAuditUrlResponse Client::submitFactAuditUrl(const SubmitFactAuditUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitFactAuditUrlWithOptions(request, runtime);
}

/**
 * @summary Submit a custom dictionary import task.
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
 * @summary Submit a custom dictionary import task.
 *
 * @param request SubmitImportTermsTaskRequest
 * @return SubmitImportTermsTaskResponse
 */
SubmitImportTermsTaskResponse Client::submitImportTermsTask(const SubmitImportTermsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitImportTermsTaskWithOptions(request, runtime);
}

/**
 * @summary 提交版本任务
 *
 * @param request SubmitParseDocumentLayoutTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitParseDocumentLayoutTaskResponse
 */
SubmitParseDocumentLayoutTaskResponse Client::submitParseDocumentLayoutTaskWithOptions(const SubmitParseDocumentLayoutTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  json body = {};
  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitParseDocumentLayoutTask"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitParseDocumentLayoutTaskResponse>();
}

/**
 * @summary 提交版本任务
 *
 * @param request SubmitParseDocumentLayoutTaskRequest
 * @return SubmitParseDocumentLayoutTaskResponse
 */
SubmitParseDocumentLayoutTaskResponse Client::submitParseDocumentLayoutTask(const SubmitParseDocumentLayoutTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitParseDocumentLayoutTaskWithOptions(request, runtime);
}

/**
 * @summary Submit a smart audit request.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao public cloud iframe customization guide](https://help.aliyun.com/document_detail/3000990.html).
 * # Supported audit types
 * ## Audit category overview
 * | Audit category                 | Description                                                                                                                                                                                                                                                               |
 * | ------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
 * | Content accuracy               | Errors due to phonetic or visual similarity; punctuation errors; misuse of Chinese structural particles (的/地/得); inappropriate word choice or syntax errors; incorrect personal names; incorrect place names; incorrect references; errors in proper nouns or terminology |
 * | Formatting issues              | Inconsistent capitalization; numeric errors; nonstandard units of measurement; use of traditional Chinese characters                                                                                                                                                      |
 * | Content structure issues       | Redundant text; repeated segments; logical contradictions; unfilled placeholders                                                                                                                                                                                          |
 * | Political sensitivity issues   | Sensitive content or directional risks; name or sorting errors; conventional phrasing errors; nonstandard institutional names; misquoting important speeches; references to disgraced officials; mismatched name-title pairings; incorrect title expressions              |
 * | Security and compliance issues | Violence or terrorism; pornography; prohibited content; insults; disgraced celebrities; personal privacy violations; reporting standard violations                                                                                                                        |
 * | Legal errors                   | Incorrect citation of laws and regulations; errors in legal provisions                                                                                                                                                                                                    |
 * | Other domain-specific errors   | Violations of advertising law; financial information errors; scientific or technical term errors                                                                                                                                                                          |
 * | Factuality check               | Factuality verification: correct or incorrect items                                                                                                                                                                                                                       |
 * | Image audit                    | Image content moderation                                                                                                                                                                                                                                                  |
 * | Custom word library            | Custom word library audit                                                                                                                                                                                                                                                 |
 * | Rule library audit             | Rule library audit                                                                                                                                                                                                                                                        |
 * | English proofreading           | Terminology standardization; verb tense accuracy; punctuation and quotation marks; spelling and language variants; sentence structure and clarity; numeric and percentage formatting; standardized phrasing                                                               |
 * ***
 * ## Sub-audit code values
 * ### 1. Content accuracy
 * | Description                                    | Code                 |
 * | ---------------------------------------------- | -------------------- |
 * | Phonetic or visual similarity errors           | PhoneticSimilarError |
 * | Punctuation errors                             | PunctuationError     |
 * | Misuse of Chinese structural particles (的/地/得) | ParticleUsageError   |
 * | Inappropriate word choice or syntax errors     | WordError            |
 * | Incorrect personal names                       | PersonNameError      |
 * | Incorrect place names                          | LocationError        |
 * | Incorrect references                           | ReferenceError       |
 * | Errors in proper nouns or terminology          | NounItemError        |
 * ### 2. Formatting issues
 * | Description                           | Code                    |
 * | ------------------------------------- | ----------------------- |
 * | Inconsistent capitalization           | CapitalizationError     |
 * | Numeric errors                        | NumberError             |
 * | Nonstandard units of measurement      | UnitError               |
 * | Use of traditional Chinese characters | TraditionalChineseError |
 * ### 3. Content structure issues
 * | Description            | Code                 |
 * | ---------------------- | -------------------- |
 * | Redundant text         | WordRedundancy       |
 * | Repeated segments      | DuplicateError       |
 * | Logical contradictions | LogicContradiction   |
 * | Unfilled placeholders  | PlaceholderNotFilled |
 * ### 4. Political sensitivity issues
 * | Description                            | Code                        |
 * | -------------------------------------- | --------------------------- |
 * | Sensitive content or directional risks | SensitiveContentRisk        |
 * | Name or sorting errors                 | NameOrderError              |
 * | Conventional phrasing errors           | ConventionalExpressionError |
 * | Nonstandard institutional names        | DepartmentNameError         |
 * | Misquoting important speeches          | ImportantSpeechError        |
 * | References to disgraced officials      | FallenOfficialError         |
 * | Mismatched name-title pairings         | LeaderTitleMatchError       |
 * | Incorrect title expressions            | TitleError                  |
 * ### 5. Security and compliance issues
 * | Description                   | Code                   |
 * | ----------------------------- | ---------------------- |
 * | Violence or terrorism         | ViolenceTerrorismError |
 * | Pornography                   | PornographyError       |
 * | Prohibited content            | ProhibitedContentError |
 * | Insults                       | InsultError            |
 * | Disgraced celebrities         | DisgracedArtistError   |
 * | Personal privacy violations   | PersonalPrivacyError   |
 * | Reporting standard violations | ReportingStandardError |
 * ### 6. Legal errors
 * | Description                                | Code                 |
 * | ------------------------------------------ | -------------------- |
 * | Incorrect citation of laws and regulations | LegalReferenceError  |
 * | Errors in legal provisions                 | LegalProvisionsError |
 * ### 7. Other domain-specific errors
 * | Description                         | Code                            |
 * | ----------------------------------- | ------------------------------- |
 * | Violations of advertising law       | AdvertisingProhibitedWordsError |
 * | Financial information errors        | FinancialInformationError       |
 * | Scientific or technical term errors | TechnicalTermError              |
 * ### 8. Factuality check
 * | Description                              | Code           |
 * | ---------------------------------------- | -------------- |
 * | Factuality verification – correct item   | CorrectFact    |
 * | Factuality verification – incorrect item | WrongFactError |
 * ### 9. Image audit
 * | Description | Code       |
 * | ----------- | ---------- |
 * | Image audit | ImageAudit |
 * ### 10. Custom word library
 * | Description         | Code        |
 * | ------------------- | ----------- |
 * | Custom word library | WordLibrary |
 * ### 11. Rule library audit
 * | Description        | Code              |
 * | ------------------ | ----------------- |
 * | Rule library audit | WrongQuestionBook |
 * ### 12. English proofreading
 * | Description                       | Code                         |
 * | --------------------------------- | ---------------------------- |
 * | Terminology standardization       | TerminologyNormalisation     |
 * | Verb tense accuracy               | VerbTenseAccuracy            |
 * | Punctuation and quotation marks   | PunctuationAndQuotationMarks |
 * | Spelling and language variants    | SpellingAndLanguageVariety   |
 * | Sentence structure and clarity    | SentenceStructureAndClarity  |
 * | Numeric and percentage formatting | NumericAndPercentageStyle    |
 * | Other standardized phrasing       | Others                       |
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
 * @summary Submit a smart audit request.
 *
 * @description The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao public cloud iframe customization guide](https://help.aliyun.com/document_detail/3000990.html).
 * # Supported audit types
 * ## Audit category overview
 * | Audit category                 | Description                                                                                                                                                                                                                                                               |
 * | ------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
 * | Content accuracy               | Errors due to phonetic or visual similarity; punctuation errors; misuse of Chinese structural particles (的/地/得); inappropriate word choice or syntax errors; incorrect personal names; incorrect place names; incorrect references; errors in proper nouns or terminology |
 * | Formatting issues              | Inconsistent capitalization; numeric errors; nonstandard units of measurement; use of traditional Chinese characters                                                                                                                                                      |
 * | Content structure issues       | Redundant text; repeated segments; logical contradictions; unfilled placeholders                                                                                                                                                                                          |
 * | Political sensitivity issues   | Sensitive content or directional risks; name or sorting errors; conventional phrasing errors; nonstandard institutional names; misquoting important speeches; references to disgraced officials; mismatched name-title pairings; incorrect title expressions              |
 * | Security and compliance issues | Violence or terrorism; pornography; prohibited content; insults; disgraced celebrities; personal privacy violations; reporting standard violations                                                                                                                        |
 * | Legal errors                   | Incorrect citation of laws and regulations; errors in legal provisions                                                                                                                                                                                                    |
 * | Other domain-specific errors   | Violations of advertising law; financial information errors; scientific or technical term errors                                                                                                                                                                          |
 * | Factuality check               | Factuality verification: correct or incorrect items                                                                                                                                                                                                                       |
 * | Image audit                    | Image content moderation                                                                                                                                                                                                                                                  |
 * | Custom word library            | Custom word library audit                                                                                                                                                                                                                                                 |
 * | Rule library audit             | Rule library audit                                                                                                                                                                                                                                                        |
 * | English proofreading           | Terminology standardization; verb tense accuracy; punctuation and quotation marks; spelling and language variants; sentence structure and clarity; numeric and percentage formatting; standardized phrasing                                                               |
 * ***
 * ## Sub-audit code values
 * ### 1. Content accuracy
 * | Description                                    | Code                 |
 * | ---------------------------------------------- | -------------------- |
 * | Phonetic or visual similarity errors           | PhoneticSimilarError |
 * | Punctuation errors                             | PunctuationError     |
 * | Misuse of Chinese structural particles (的/地/得) | ParticleUsageError   |
 * | Inappropriate word choice or syntax errors     | WordError            |
 * | Incorrect personal names                       | PersonNameError      |
 * | Incorrect place names                          | LocationError        |
 * | Incorrect references                           | ReferenceError       |
 * | Errors in proper nouns or terminology          | NounItemError        |
 * ### 2. Formatting issues
 * | Description                           | Code                    |
 * | ------------------------------------- | ----------------------- |
 * | Inconsistent capitalization           | CapitalizationError     |
 * | Numeric errors                        | NumberError             |
 * | Nonstandard units of measurement      | UnitError               |
 * | Use of traditional Chinese characters | TraditionalChineseError |
 * ### 3. Content structure issues
 * | Description            | Code                 |
 * | ---------------------- | -------------------- |
 * | Redundant text         | WordRedundancy       |
 * | Repeated segments      | DuplicateError       |
 * | Logical contradictions | LogicContradiction   |
 * | Unfilled placeholders  | PlaceholderNotFilled |
 * ### 4. Political sensitivity issues
 * | Description                            | Code                        |
 * | -------------------------------------- | --------------------------- |
 * | Sensitive content or directional risks | SensitiveContentRisk        |
 * | Name or sorting errors                 | NameOrderError              |
 * | Conventional phrasing errors           | ConventionalExpressionError |
 * | Nonstandard institutional names        | DepartmentNameError         |
 * | Misquoting important speeches          | ImportantSpeechError        |
 * | References to disgraced officials      | FallenOfficialError         |
 * | Mismatched name-title pairings         | LeaderTitleMatchError       |
 * | Incorrect title expressions            | TitleError                  |
 * ### 5. Security and compliance issues
 * | Description                   | Code                   |
 * | ----------------------------- | ---------------------- |
 * | Violence or terrorism         | ViolenceTerrorismError |
 * | Pornography                   | PornographyError       |
 * | Prohibited content            | ProhibitedContentError |
 * | Insults                       | InsultError            |
 * | Disgraced celebrities         | DisgracedArtistError   |
 * | Personal privacy violations   | PersonalPrivacyError   |
 * | Reporting standard violations | ReportingStandardError |
 * ### 6. Legal errors
 * | Description                                | Code                 |
 * | ------------------------------------------ | -------------------- |
 * | Incorrect citation of laws and regulations | LegalReferenceError  |
 * | Errors in legal provisions                 | LegalProvisionsError |
 * ### 7. Other domain-specific errors
 * | Description                         | Code                            |
 * | ----------------------------------- | ------------------------------- |
 * | Violations of advertising law       | AdvertisingProhibitedWordsError |
 * | Financial information errors        | FinancialInformationError       |
 * | Scientific or technical term errors | TechnicalTermError              |
 * ### 8. Factuality check
 * | Description                              | Code           |
 * | ---------------------------------------- | -------------- |
 * | Factuality verification – correct item   | CorrectFact    |
 * | Factuality verification – incorrect item | WrongFactError |
 * ### 9. Image audit
 * | Description | Code       |
 * | ----------- | ---------- |
 * | Image audit | ImageAudit |
 * ### 10. Custom word library
 * | Description         | Code        |
 * | ------------------- | ----------- |
 * | Custom word library | WordLibrary |
 * ### 11. Rule library audit
 * | Description        | Code              |
 * | ------------------ | ----------------- |
 * | Rule library audit | WrongQuestionBook |
 * ### 12. English proofreading
 * | Description                       | Code                         |
 * | --------------------------------- | ---------------------------- |
 * | Terminology standardization       | TerminologyNormalisation     |
 * | Verb tense accuracy               | VerbTenseAccuracy            |
 * | Punctuation and quotation marks   | PunctuationAndQuotationMarks |
 * | Spelling and language variants    | SpellingAndLanguageVariety   |
 * | Sentence structure and clarity    | SentenceStructureAndClarity  |
 * | Numeric and percentage formatting | NumericAndPercentageStyle    |
 * | Other standardized phrasing       | Others                       |
 *
 * @param request SubmitSmartAuditRequest
 * @return SubmitSmartAuditResponse
 */
SubmitSmartAuditResponse Client::submitSmartAudit(const SubmitSmartAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmartAuditWithOptions(request, runtime);
}

/**
 * @summary Submits a one-click video editing task.
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
 * @summary Submits a one-click video editing task.
 *
 * @param request SubmitSmartClipTaskRequest
 * @return SubmitSmartClipTaskResponse
 */
SubmitSmartClipTaskResponse Client::submitSmartClipTask(const SubmitSmartClipTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmartClipTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a hot spot analysis task for topic selection.
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
 * @summary Submits a hot spot analysis task for topic selection.
 *
 * @param request SubmitTopicSelectionPerspectiveAnalysisTaskRequest
 * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
 */
SubmitTopicSelectionPerspectiveAnalysisTaskResponse Client::submitTopicSelectionPerspectiveAnalysisTask(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a video for review.
 *
 * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration_Quanmiao Public Cloud iframe Customization Solution](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
 *
 * @param request SubmitVideoAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoAuditResponse
 */
SubmitVideoAuditResponse Client::submitVideoAuditWithOptions(const SubmitVideoAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExt()) {
    body["Ext"] = request.getExt();
  }

  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasSnapshotInterval()) {
    body["SnapshotInterval"] = request.getSnapshotInterval();
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
    {"action" , "SubmitVideoAudit"},
    {"version" , "2023-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoAuditResponse>();
}

/**
 * @summary Submits a video for review.
 *
 * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration_Quanmiao Public Cloud iframe Customization Solution](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
 *
 * @param request SubmitVideoAuditRequest
 * @return SubmitVideoAuditResponse
 */
SubmitVideoAuditResponse Client::submitVideoAudit(const SubmitVideoAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoAuditWithOptions(request, runtime);
}

/**
 * @summary Updates custom text.
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
 * @summary Updates custom text.
 *
 * @param request UpdateCustomTextRequest
 * @return UpdateCustomTextResponse
 */
UpdateCustomTextResponse Client::updateCustomText(const UpdateCustomTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomTextWithOptions(request, runtime);
}

/**
 * @summary This operation updates a data source.
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
  if (!!request.hasAccessLevel()) {
    body["AccessLevel"] = request.getAccessLevel();
  }

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
 * @summary This operation updates a data source.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetWithOptions(request, runtime);
}

/**
 * @summary Updates a document in a dataset.
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
 * @summary Updates a document in a dataset.
 *
 * @param request UpdateDatasetDocumentRequest
 * @return UpdateDatasetDocumentResponse
 */
UpdateDatasetDocumentResponse Client::updateDatasetDocument(const UpdateDatasetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetDocumentWithOptions(request, runtime);
}

/**
 * @summary Updates general configurations.
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
 * @summary Updates general configurations.
 *
 * @param request UpdateGeneralConfigRequest
 * @return UpdateGeneralConfigResponse
 */
UpdateGeneralConfigResponse Client::updateGeneralConfig(const UpdateGeneralConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGeneralConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the history of an article created in AiMiaoBi.
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
 * @summary Updates the history of an article created in AiMiaoBi.
 *
 * @param request UpdateGeneratedContentRequest
 * @return UpdateGeneratedContentResponse
 */
UpdateGeneratedContentResponse Client::updateGeneratedContent(const UpdateGeneratedContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGeneratedContentWithOptions(request, runtime);
}

/**
 * @summary Update a material in the Material Library.
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
 * @summary Update a material in the Material Library.
 *
 * @param request UpdateMaterialDocumentRequest
 * @return UpdateMaterialDocumentResponse
 */
UpdateMaterialDocumentResponse Client::updateMaterialDocument(const UpdateMaterialDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMaterialDocumentWithOptions(request, runtime);
}

/**
 * @summary Use MiaoDu to upload books.
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
 * @summary Use MiaoDu to upload books.
 *
 * @param request UploadBookRequest
 * @return UploadBookResponse
 */
UploadBookResponse Client::uploadBook(const UploadBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadBookWithOptions(request, runtime);
}

/**
 * @summary Upload document API for Miaodu.
 *
 * @description Document upload is implemented through asynchronous invocation. After the invocation, you must use the getDocInfo API to periodically check the document status. Only when the document status becomes 1 can you proceed with subsequent operations such as generating a document summary, creating a full-text mind map, summarizing Q&A content, extracting keywords, or rewriting.
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
 * @summary Upload document API for Miaodu.
 *
 * @description Document upload is implemented through asynchronous invocation. After the invocation, you must use the getDocInfo API to periodically check the document status. Only when the document status becomes 1 can you proceed with subsequent operations such as generating a document summary, creating a full-text mind map, summarizing Q&A content, extracting keywords, or rewriting.
 *
 * @param request UploadDocRequest
 * @return UploadDocResponse
 */
UploadDocResponse Client::uploadDoc(const UploadDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDocWithOptions(request, runtime);
}

/**
 * @summary Validates an enterprise VOC upload template.
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
 * @summary Validates an enterprise VOC upload template.
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