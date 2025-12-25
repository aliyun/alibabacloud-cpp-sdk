#include <darabonba/Core.hpp>
#include <alibabacloud/AnyTrans20250707.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AnyTrans20250707::Models;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{

AlibabaCloud::AnyTrans20250707::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("anytrans", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 通义多模态翻译批量翻译
 *
 * @param tmpReq BatchTranslateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchTranslateResponse
 */
BatchTranslateResponse Client::batchTranslateWithOptions(const BatchTranslateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchTranslateShrinkRequest request = BatchTranslateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  if (!!tmpReq.hasText()) {
    request.setTextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.text(), "text", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["appName"] = request.appName();
  }

  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasTextShrink()) {
    body["text"] = request.textShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchTranslate"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/batch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchTranslateResponse>();
}

/**
 * @summary 通义多模态翻译批量翻译
 *
 * @param request BatchTranslateRequest
 * @return BatchTranslateResponse
 */
BatchTranslateResponse Client::batchTranslate(const BatchTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchTranslateWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译批量翻译(供js sdk使用)
 *
 * @param tmpReq BatchTranslateForHtmlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchTranslateForHtmlResponse
 */
BatchTranslateForHtmlResponse Client::batchTranslateForHtmlWithOptions(const BatchTranslateForHtmlRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchTranslateForHtmlShrinkRequest request = BatchTranslateForHtmlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  if (!!tmpReq.hasText()) {
    request.setTextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.text(), "text", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["appName"] = request.appName();
  }

  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasTextShrink()) {
    body["text"] = request.textShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchTranslateForHtml"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/batchForHtml")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchTranslateForHtmlResponse>();
}

/**
 * @summary 通义多模态翻译批量翻译(供js sdk使用)
 *
 * @param request BatchTranslateForHtmlRequest
 * @return BatchTranslateForHtmlResponse
 */
BatchTranslateForHtmlResponse Client::batchTranslateForHtml(const BatchTranslateForHtmlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchTranslateForHtmlWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译获文档翻译任务
 *
 * @param request GetDocTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocTranslateTaskResponse
 */
GetDocTranslateTaskResponse Client::getDocTranslateTaskWithOptions(const GetDocTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/doc/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译获文档翻译任务
 *
 * @param request GetDocTranslateTaskRequest
 * @return GetDocTranslateTaskResponse
 */
GetDocTranslateTaskResponse Client::getDocTranslateTask(const GetDocTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译获取html翻译结果
 *
 * @param request GetHtmlTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHtmlTranslateTaskResponse
 */
GetHtmlTranslateTaskResponse Client::getHtmlTranslateTaskWithOptions(const GetHtmlTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHtmlTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/html/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHtmlTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译获取html翻译结果
 *
 * @param request GetHtmlTranslateTaskRequest
 * @return GetHtmlTranslateTaskResponse
 */
GetHtmlTranslateTaskResponse Client::getHtmlTranslateTask(const GetHtmlTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHtmlTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译获取图片翻译任务
 *
 * @param request GetImageTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageTranslateTaskResponse
 */
GetImageTranslateTaskResponse Client::getImageTranslateTaskWithOptions(const GetImageTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetImageTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/image/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译获取图片翻译任务
 *
 * @param request GetImageTranslateTaskRequest
 * @return GetImageTranslateTaskResponse
 */
GetImageTranslateTaskResponse Client::getImageTranslateTask(const GetImageTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getImageTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译获取长文翻译结果
 *
 * @param request GetLongTextTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLongTextTranslateTaskResponse
 */
GetLongTextTranslateTaskResponse Client::getLongTextTranslateTaskWithOptions(const GetLongTextTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetLongTextTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/longText/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLongTextTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译获取长文翻译结果
 *
 * @param request GetLongTextTranslateTaskRequest
 * @return GetLongTextTranslateTaskResponse
 */
GetLongTextTranslateTaskResponse Client::getLongTextTranslateTask(const GetLongTextTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLongTextTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译提交文档翻译任务
 *
 * @param tmpReq SubmitDocTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocTranslateTaskResponse
 */
SubmitDocTranslateTaskResponse Client::submitDocTranslateTaskWithOptions(const SubmitDocTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitDocTranslateTaskShrinkRequest request = SubmitDocTranslateTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  json body = {};
  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitDocTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/doc/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译提交文档翻译任务
 *
 * @param request SubmitDocTranslateTaskRequest
 * @return SubmitDocTranslateTaskResponse
 */
SubmitDocTranslateTaskResponse Client::submitDocTranslateTask(const SubmitDocTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitDocTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译提交html翻译任务
 *
 * @param tmpReq SubmitHtmlTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitHtmlTranslateTaskResponse
 */
SubmitHtmlTranslateTaskResponse Client::submitHtmlTranslateTaskWithOptions(const SubmitHtmlTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitHtmlTranslateTaskShrinkRequest request = SubmitHtmlTranslateTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  json body = {};
  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitHtmlTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/html/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitHtmlTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译提交html翻译任务
 *
 * @param request SubmitHtmlTranslateTaskRequest
 * @return SubmitHtmlTranslateTaskResponse
 */
SubmitHtmlTranslateTaskResponse Client::submitHtmlTranslateTask(const SubmitHtmlTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitHtmlTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译提交图片翻译任务
 *
 * @param tmpReq SubmitImageTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImageTranslateTaskResponse
 */
SubmitImageTranslateTaskResponse Client::submitImageTranslateTaskWithOptions(const SubmitImageTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitImageTranslateTaskShrinkRequest request = SubmitImageTranslateTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  if (!!tmpReq.hasTargetLanguage()) {
    request.setTargetLanguageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targetLanguage(), "targetLanguage", "json"));
  }

  json body = {};
  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguageShrink()) {
    body["targetLanguage"] = request.targetLanguageShrink();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitImageTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/image/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImageTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译提交图片翻译任务
 *
 * @param request SubmitImageTranslateTaskRequest
 * @return SubmitImageTranslateTaskResponse
 */
SubmitImageTranslateTaskResponse Client::submitImageTranslateTask(const SubmitImageTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitImageTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译提交长文翻译任务
 *
 * @param tmpReq SubmitLongTextTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitLongTextTranslateTaskResponse
 */
SubmitLongTextTranslateTaskResponse Client::submitLongTextTranslateTaskWithOptions(const SubmitLongTextTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitLongTextTranslateTaskShrinkRequest request = SubmitLongTextTranslateTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  json body = {};
  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitLongTextTranslateTask"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/longText/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitLongTextTranslateTaskResponse>();
}

/**
 * @summary 通义多模态翻译提交长文翻译任务
 *
 * @param request SubmitLongTextTranslateTaskRequest
 * @return SubmitLongTextTranslateTaskResponse
 */
SubmitLongTextTranslateTaskResponse Client::submitLongTextTranslateTask(const SubmitLongTextTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitLongTextTranslateTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译术语编辑
 *
 * @param tmpReq TermEditRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TermEditResponse
 */
TermEditResponse Client::termEditWithOptions(const TermEditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TermEditShrinkRequest request = TermEditShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.action();
  }

  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TermEdit"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/intervene/edit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TermEditResponse>();
}

/**
 * @summary 通义多模态翻译术语编辑
 *
 * @param request TermEditRequest
 * @return TermEditResponse
 */
TermEditResponse Client::termEdit(const TermEditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return termEditWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译术语查询
 *
 * @param tmpReq TermQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TermQueryResponse
 */
TermQueryResponse Client::termQueryWithOptions(const TermQueryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TermQueryShrinkRequest request = TermQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  json body = {};
  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TermQuery"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/intervene/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TermQueryResponse>();
}

/**
 * @summary 通义多模态翻译术语查询
 *
 * @param request TermQueryRequest
 * @return TermQueryResponse
 */
TermQueryResponse Client::termQuery(const TermQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return termQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 通义多模态翻译文本翻译
 *
 * @param tmpReq TextTranslateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TextTranslateResponse
 */
TextTranslateResponse Client::textTranslateWithOptions(const TextTranslateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TextTranslateShrinkRequest request = TextTranslateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "ext", "json"));
  }

  json body = {};
  if (!!request.hasExtShrink()) {
    body["ext"] = request.extShrink();
  }

  if (!!request.hasFormat()) {
    body["format"] = request.format();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["sourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["targetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TextTranslate"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/anytrans/translate/text")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TextTranslateResponse>();
}

/**
 * @summary 通义多模态翻译文本翻译
 *
 * @param request TextTranslateRequest
 * @return TextTranslateResponse
 */
TextTranslateResponse Client::textTranslate(const TextTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return textTranslateWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AnyTrans20250707