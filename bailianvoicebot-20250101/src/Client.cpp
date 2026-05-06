#include <darabonba/Core.hpp>
#include <alibabacloud/BailianVoiceBot20250101.hpp>
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
using namespace AlibabaCloud::BailianVoiceBot20250101::Models;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{

AlibabaCloud::BailianVoiceBot20250101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bailianvoicebot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建软电话测试通话
 *
 * @param request BridgeWebCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BridgeWebCallResponse
 */
BridgeWebCallResponse Client::bridgeWebCallWithOptions(const BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAudioCodec()) {
    query["AudioCodec"] = request.getAudioCodec();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasSampleRate()) {
    query["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSandbox()) {
    query["Sandbox"] = request.getSandbox();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BridgeWebCall"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BridgeWebCallResponse>();
}

/**
 * @summary 创建软电话测试通话
 *
 * @param request BridgeWebCallRequest
 * @return BridgeWebCallResponse
 */
BridgeWebCallResponse Client::bridgeWebCall(const BridgeWebCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bridgeWebCallWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasConcurrency()) {
    query["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNluAccessType()) {
    query["NluAccessType"] = request.getNluAccessType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary 创景场景版本
 *
 * @param tmpReq CreateApplicationVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationVersionResponse
 */
CreateApplicationVersionResponse Client::createApplicationVersionWithOptions(const CreateApplicationVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationVersionShrinkRequest request = CreateApplicationVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInteractionConfig()) {
    request.setInteractionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInteractionConfig(), "InteractionConfig", "json"));
  }

  if (!!tmpReq.hasRagConfig()) {
    request.setRagConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRagConfig(), "RagConfig", "json"));
  }

  if (!!tmpReq.hasScriptProfile()) {
    request.setScriptProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptProfile(), "ScriptProfile", "json"));
  }

  if (!!tmpReq.hasSynthesizerConfig()) {
    request.setSynthesizerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynthesizerConfig(), "SynthesizerConfig", "json"));
  }

  if (!!tmpReq.hasTranscriberConfig()) {
    request.setTranscriberConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscriberConfig(), "TranscriberConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasInteractionConfigShrink()) {
    query["InteractionConfig"] = request.getInteractionConfigShrink();
  }

  if (!!request.hasRagConfigShrink()) {
    query["RagConfig"] = request.getRagConfigShrink();
  }

  if (!!request.hasScriptProfileShrink()) {
    query["ScriptProfile"] = request.getScriptProfileShrink();
  }

  if (!!request.hasSourceVersionId()) {
    query["SourceVersionId"] = request.getSourceVersionId();
  }

  if (!!request.hasSynthesizerConfigShrink()) {
    query["SynthesizerConfig"] = request.getSynthesizerConfigShrink();
  }

  if (!!request.hasTranscriberConfigShrink()) {
    query["TranscriberConfig"] = request.getTranscriberConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationVersion"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationVersionResponse>();
}

/**
 * @summary 创景场景版本
 *
 * @param request CreateApplicationVersionRequest
 * @return CreateApplicationVersionResponse
 */
CreateApplicationVersionResponse Client::createApplicationVersion(const CreateApplicationVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationVersionWithOptions(request, runtime);
}

/**
 * @summary 创建克隆音
 *
 * @param request CreateCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloneVoiceResponse
 */
CreateCloneVoiceResponse Client::createCloneVoiceWithOptions(const CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCloneVoice"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloneVoiceResponse>();
}

/**
 * @summary 创建克隆音
 *
 * @param request CreateCloneVoiceRequest
 * @return CreateCloneVoiceResponse
 */
CreateCloneVoiceResponse Client::createCloneVoice(const CreateCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 创建变量
 *
 * @param request CreateVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVariableResponse
 */
CreateVariableResponse Client::createVariableWithOptions(const CreateVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVariable"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVariableResponse>();
}

/**
 * @summary 创建变量
 *
 * @param request CreateVariableRequest
 * @return CreateVariableResponse
 */
CreateVariableResponse Client::createVariable(const CreateVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVariableWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param tmpReq CreateVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVocabularyResponse
 */
CreateVocabularyResponse Client::createVocabularyWithOptions(const CreateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVocabularyShrinkRequest request = CreateVocabularyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWords()) {
    request.setWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWords(), "Words", "json"));
  }

  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasWordsShrink()) {
    body["Words"] = request.getWordsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVocabularyResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateVocabularyRequest
 * @return CreateVocabularyResponse
 */
CreateVocabularyResponse Client::createVocabulary(const CreateVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVocabularyWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param tmpReq CreateVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVoiceAccessProfileResponse
 */
CreateVoiceAccessProfileResponse Client::createVoiceAccessProfileWithOptions(const CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVoiceAccessProfileShrinkRequest request = CreateVoiceAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVoiceAccessProfile"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVoiceAccessProfileResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateVoiceAccessProfileRequest
 * @return CreateVoiceAccessProfileResponse
 */
CreateVoiceAccessProfileResponse Client::createVoiceAccessProfile(const CreateVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 删除应用
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary 删除应用
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloneVoiceResponse
 */
DeleteCloneVoiceResponse Client::deleteCloneVoiceWithOptions(const DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasCloneVoiceId()) {
    body["CloneVoiceId"] = request.getCloneVoiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCloneVoice"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloneVoiceResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteCloneVoiceRequest
 * @return DeleteCloneVoiceResponse
 */
DeleteCloneVoiceResponse Client::deleteCloneVoice(const DeleteCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 删除变量
 *
 * @param request DeleteVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVariableResponse
 */
DeleteVariableResponse Client::deleteVariableWithOptions(const DeleteVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasVariableId()) {
    body["VariableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVariable"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVariableResponse>();
}

/**
 * @summary 删除变量
 *
 * @param request DeleteVariableRequest
 * @return DeleteVariableResponse
 */
DeleteVariableResponse Client::deleteVariable(const DeleteVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVariableWithOptions(request, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVocabularyResponse
 */
DeleteVocabularyResponse Client::deleteVocabularyWithOptions(const DeleteVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasVocabularyId()) {
    body["VocabularyId"] = request.getVocabularyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVocabularyResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteVocabularyRequest
 * @return DeleteVocabularyResponse
 */
DeleteVocabularyResponse Client::deleteVocabulary(const DeleteVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVocabularyWithOptions(request, runtime);
}

/**
 * @summary 删除三方语音配置
 *
 * @param request DeleteVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVoiceAccessProfileResponse
 */
DeleteVoiceAccessProfileResponse Client::deleteVoiceAccessProfileWithOptions(const DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVoiceAccessProfile"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVoiceAccessProfileResponse>();
}

/**
 * @summary 删除三方语音配置
 *
 * @param request DeleteVoiceAccessProfileRequest
 * @return DeleteVoiceAccessProfileResponse
 */
DeleteVoiceAccessProfileResponse Client::deleteVoiceAccessProfile(const DeleteVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 禁用消息订阅
 *
 * @param request DisableSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSubscriptionResponse
 */
DisableSubscriptionResponse Client::disableSubscriptionWithOptions(const DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableSubscription"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSubscriptionResponse>();
}

/**
 * @summary 禁用消息订阅
 *
 * @param request DisableSubscriptionRequest
 * @return DisableSubscriptionResponse
 */
DisableSubscriptionResponse Client::disableSubscription(const DisableSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 导出热词
 *
 * @param tmpReq ExportVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportVocabularyResponse
 */
ExportVocabularyResponse Client::exportVocabularyWithOptions(const ExportVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportVocabularyShrinkRequest request = ExportVocabularyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVocabularyIds()) {
    request.setVocabularyIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVocabularyIds(), "VocabularyIds", "json"));
  }

  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasVocabularyIdsShrink()) {
    body["VocabularyIds"] = request.getVocabularyIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportVocabularyResponse>();
}

/**
 * @summary 导出热词
 *
 * @param request ExportVocabularyRequest
 * @return ExportVocabularyResponse
 */
ExportVocabularyResponse Client::exportVocabulary(const ExportVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportVocabularyWithOptions(request, runtime);
}

/**
 * @summary 获取文件上传信息
 *
 * @param request GenerateFileUploadParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateFileUploadParamsResponse
 */
GenerateFileUploadParamsResponse Client::generateFileUploadParamsWithOptions(const GenerateFileUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateFileUploadParams"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateFileUploadParamsResponse>();
}

/**
 * @summary 获取文件上传信息
 *
 * @param request GenerateFileUploadParamsRequest
 * @return GenerateFileUploadParamsResponse
 */
GenerateFileUploadParamsResponse Client::generateFileUploadParams(const GenerateFileUploadParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateFileUploadParamsWithOptions(request, runtime);
}

/**
 * @summary Get应用
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Get应用
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary 获取数据通道凭证
 *
 * @param request GetDataChannelCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataChannelCredentialResponse
 */
GetDataChannelCredentialResponse Client::getDataChannelCredentialWithOptions(const GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataChannelCredential"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataChannelCredentialResponse>();
}

/**
 * @summary 获取数据通道凭证
 *
 * @param request GetDataChannelCredentialRequest
 * @return GetDataChannelCredentialResponse
 */
GetDataChannelCredentialResponse Client::getDataChannelCredential(const GetDataChannelCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataChannelCredentialWithOptions(request, runtime);
}

/**
 * @summary 获取MQ配置
 *
 * @param request GetSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscriptionWithOptions(const GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSubscription"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionResponse>();
}

/**
 * @summary 获取MQ配置
 *
 * @param request GetSubscriptionRequest
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscription(const GetSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request GetVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVocabularyResponse
 */
GetVocabularyResponse Client::getVocabularyWithOptions(const GetVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasVocabularyId()) {
    body["VocabularyId"] = request.getVocabularyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVocabularyResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request GetVocabularyRequest
 * @return GetVocabularyResponse
 */
GetVocabularyResponse Client::getVocabulary(const GetVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVocabularyWithOptions(request, runtime);
}

/**
 * @summary 导入热词
 *
 * @param request ImportVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportVocabularyResponse
 */
ImportVocabularyResponse Client::importVocabularyWithOptions(const ImportVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportVocabularyResponse>();
}

/**
 * @summary 导入热词
 *
 * @param request ImportVocabularyRequest
 * @return ImportVocabularyResponse
 */
ImportVocabularyResponse Client::importVocabulary(const ImportVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importVocabularyWithOptions(request, runtime);
}

/**
 * @summary 查询应用
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary 查询应用
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary 获取背景音列表
 *
 * @param request ListBackgroundMusicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBackgroundMusicsResponse
 */
ListBackgroundMusicsResponse Client::listBackgroundMusicsWithOptions(const ListBackgroundMusicsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBackgroundMusics"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBackgroundMusicsResponse>();
}

/**
 * @summary 获取背景音列表
 *
 * @param request ListBackgroundMusicsRequest
 * @return ListBackgroundMusicsResponse
 */
ListBackgroundMusicsResponse Client::listBackgroundMusics(const ListBackgroundMusicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBackgroundMusicsWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ListCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloneVoiceResponse
 */
ListCloneVoiceResponse Client::listCloneVoiceWithOptions(const ListCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloneVoice"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloneVoiceResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListCloneVoiceRequest
 * @return ListCloneVoiceResponse
 */
ListCloneVoiceResponse Client::listCloneVoice(const ListCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 获取克隆音色可用模型列表
 *
 * @param request ListCloneVoiceModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloneVoiceModelsResponse
 */
ListCloneVoiceModelsResponse Client::listCloneVoiceModelsWithOptions(const ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloneVoiceModels"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloneVoiceModelsResponse>();
}

/**
 * @summary 获取克隆音色可用模型列表
 *
 * @param request ListCloneVoiceModelsRequest
 * @return ListCloneVoiceModelsResponse
 */
ListCloneVoiceModelsResponse Client::listCloneVoiceModels(const ListCloneVoiceModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloneVoiceModelsWithOptions(request, runtime);
}

/**
 * @summary 获取对话模型列表
 *
 * @param request ListNluModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNluModelsResponse
 */
ListNluModelsResponse Client::listNluModelsWithOptions(const ListNluModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNluModels"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNluModelsResponse>();
}

/**
 * @summary 获取对话模型列表
 *
 * @param request ListNluModelsRequest
 * @return ListNluModelsResponse
 */
ListNluModelsResponse Client::listNluModels(const ListNluModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNluModelsWithOptions(request, runtime);
}

/**
 * @summary 获取变量列表
 *
 * @param request ListVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVariableResponse
 */
ListVariableResponse Client::listVariableWithOptions(const ListVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    body["SearchPattern"] = request.getSearchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVariable"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVariableResponse>();
}

/**
 * @summary 获取变量列表
 *
 * @param request ListVariableRequest
 * @return ListVariableResponse
 */
ListVariableResponse Client::listVariable(const ListVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVariableWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVocabularyResponse
 */
ListVocabularyResponse Client::listVocabularyWithOptions(const ListVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVocabularyResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVocabularyRequest
 * @return ListVocabularyResponse
 */
ListVocabularyResponse Client::listVocabulary(const ListVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVocabularyWithOptions(request, runtime);
}

/**
 * @summary 获取三方语音配置列表
 *
 * @param request ListVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoiceAccessProfileResponse
 */
ListVoiceAccessProfileResponse Client::listVoiceAccessProfileWithOptions(const ListVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVoiceAccessProfile"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoiceAccessProfileResponse>();
}

/**
 * @summary 获取三方语音配置列表
 *
 * @param request ListVoiceAccessProfileRequest
 * @return ListVoiceAccessProfileResponse
 */
ListVoiceAccessProfileResponse Client::listVoiceAccessProfile(const ListVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 获取引擎列表
 *
 * @param request ListVoiceEnginesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoiceEnginesResponse
 */
ListVoiceEnginesResponse Client::listVoiceEnginesWithOptions(const ListVoiceEnginesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVoiceEngines"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoiceEnginesResponse>();
}

/**
 * @summary 获取引擎列表
 *
 * @param request ListVoiceEnginesRequest
 * @return ListVoiceEnginesResponse
 */
ListVoiceEnginesResponse Client::listVoiceEngines(const ListVoiceEnginesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoiceEnginesWithOptions(request, runtime);
}

/**
 * @summary 获取音色列表
 *
 * @param request ListVoicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoicesResponse
 */
ListVoicesResponse Client::listVoicesWithOptions(const ListVoicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasNlsAccessType()) {
    body["NlsAccessType"] = request.getNlsAccessType();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVoices"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoicesResponse>();
}

/**
 * @summary 获取音色列表
 *
 * @param request ListVoicesRequest
 * @return ListVoicesResponse
 */
ListVoicesResponse Client::listVoices(const ListVoicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoicesWithOptions(request, runtime);
}

/**
 * @summary 试听
 *
 * @param tmpReq PreviewVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewVoiceResponse
 */
PreviewVoiceResponse Client::previewVoiceWithOptions(const PreviewVoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PreviewVoiceShrinkRequest request = PreviewVoiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasNlsAccessType()) {
    body["NlsAccessType"] = request.getNlsAccessType();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  if (!!request.hasText()) {
    body["Text"] = request.getText();
  }

  if (!!request.hasVoice()) {
    body["Voice"] = request.getVoice();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PreviewVoice"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewVoiceResponse>();
}

/**
 * @summary 试听
 *
 * @param request PreviewVoiceRequest
 * @return PreviewVoiceResponse
 */
PreviewVoiceResponse Client::previewVoice(const PreviewVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return previewVoiceWithOptions(request, runtime);
}

/**
 * @summary 发布版本
 *
 * @param request PublishApplicationVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishApplicationVersionResponse
 */
PublishApplicationVersionResponse Client::publishApplicationVersionWithOptions(const PublishApplicationVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishApplicationVersion"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishApplicationVersionResponse>();
}

/**
 * @summary 发布版本
 *
 * @param request PublishApplicationVersionRequest
 * @return PublishApplicationVersionResponse
 */
PublishApplicationVersionResponse Client::publishApplicationVersion(const PublishApplicationVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishApplicationVersionWithOptions(request, runtime);
}

/**
 * @summary 修改应用
 *
 * @param request UpdateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplicationWithOptions(const UpdateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasConcurrency()) {
    query["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplication"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationResponse>();
}

/**
 * @summary 修改应用
 *
 * @param request UpdateApplicationRequest
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplication(const UpdateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationWithOptions(request, runtime);
}

/**
 * @summary 修改场景版本
 *
 * @param tmpReq UpdateApplicationVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationVersionResponse
 */
UpdateApplicationVersionResponse Client::updateApplicationVersionWithOptions(const UpdateApplicationVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApplicationVersionShrinkRequest request = UpdateApplicationVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInteractionConfig()) {
    request.setInteractionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInteractionConfig(), "InteractionConfig", "json"));
  }

  if (!!tmpReq.hasRagConfig()) {
    request.setRagConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRagConfig(), "RagConfig", "json"));
  }

  if (!!tmpReq.hasScriptProfile()) {
    request.setScriptProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptProfile(), "ScriptProfile", "json"));
  }

  if (!!tmpReq.hasSynthesizerConfig()) {
    request.setSynthesizerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynthesizerConfig(), "SynthesizerConfig", "json"));
  }

  if (!!tmpReq.hasTranscriberConfig()) {
    request.setTranscriberConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscriberConfig(), "TranscriberConfig", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBusinessUnitId()) {
    query["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasInteractionConfigShrink()) {
    query["InteractionConfig"] = request.getInteractionConfigShrink();
  }

  if (!!request.hasRagConfigShrink()) {
    query["RagConfig"] = request.getRagConfigShrink();
  }

  if (!!request.hasScriptProfileShrink()) {
    query["ScriptProfile"] = request.getScriptProfileShrink();
  }

  if (!!request.hasSynthesizerConfigShrink()) {
    query["SynthesizerConfig"] = request.getSynthesizerConfigShrink();
  }

  if (!!request.hasTranscriberConfigShrink()) {
    query["TranscriberConfig"] = request.getTranscriberConfigShrink();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationVersion"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationVersionResponse>();
}

/**
 * @summary 修改场景版本
 *
 * @param request UpdateApplicationVersionRequest
 * @return UpdateApplicationVersionResponse
 */
UpdateApplicationVersionResponse Client::updateApplicationVersion(const UpdateApplicationVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationVersionWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param request UpdateCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloneVoiceResponse
 */
UpdateCloneVoiceResponse Client::updateCloneVoiceWithOptions(const UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasCloneVoiceId()) {
    body["CloneVoiceId"] = request.getCloneVoiceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCloneVoice"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloneVoiceResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateCloneVoiceRequest
 * @return UpdateCloneVoiceResponse
 */
UpdateCloneVoiceResponse Client::updateCloneVoice(const UpdateCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 创建或更新MQ配置
 *
 * @param tmpReq UpdateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscriptionWithOptions(const UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSubscriptionShrinkRequest request = UpdateSubscriptionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventSubscriptions()) {
    request.setEventSubscriptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventSubscriptions(), "EventSubscriptions", "json"));
  }

  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasEndpoint()) {
    body["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasEventSubscriptionsShrink()) {
    body["EventSubscriptions"] = request.getEventSubscriptionsShrink();
  }

  if (!!request.hasMqInstanceId()) {
    body["MqInstanceId"] = request.getMqInstanceId();
  }

  if (!!request.hasMqType()) {
    body["MqType"] = request.getMqType();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasProducerId()) {
    body["ProducerId"] = request.getProducerId();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSubscription"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscriptionResponse>();
}

/**
 * @summary 创建或更新MQ配置
 *
 * @param request UpdateSubscriptionRequest
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscription(const UpdateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 更新变量
 *
 * @param request UpdateVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVariableResponse
 */
UpdateVariableResponse Client::updateVariableWithOptions(const UpdateVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasVariableId()) {
    body["VariableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVariable"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVariableResponse>();
}

/**
 * @summary 更新变量
 *
 * @param request UpdateVariableRequest
 * @return UpdateVariableResponse
 */
UpdateVariableResponse Client::updateVariable(const UpdateVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVariableWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param tmpReq UpdateVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVocabularyResponse
 */
UpdateVocabularyResponse Client::updateVocabularyWithOptions(const UpdateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateVocabularyShrinkRequest request = UpdateVocabularyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWords()) {
    request.setWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWords(), "Words", "json"));
  }

  json body = {};
  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasVocabularyId()) {
    body["VocabularyId"] = request.getVocabularyId();
  }

  if (!!request.hasWordsShrink()) {
    body["Words"] = request.getWordsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVocabulary"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVocabularyResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateVocabularyRequest
 * @return UpdateVocabularyResponse
 */
UpdateVocabularyResponse Client::updateVocabulary(const UpdateVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVocabularyWithOptions(request, runtime);
}

/**
 * @summary 更新三方语音配置
 *
 * @param tmpReq UpdateVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVoiceAccessProfileResponse
 */
UpdateVoiceAccessProfileResponse Client::updateVoiceAccessProfileWithOptions(const UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateVoiceAccessProfileShrinkRequest request = UpdateVoiceAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasBusinessUnitId()) {
    body["BusinessUnitId"] = request.getBusinessUnitId();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVoiceAccessProfile"},
    {"version" , "2025-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVoiceAccessProfileResponse>();
}

/**
 * @summary 更新三方语音配置
 *
 * @param request UpdateVoiceAccessProfileRequest
 * @return UpdateVoiceAccessProfileResponse
 */
UpdateVoiceAccessProfileResponse Client::updateVoiceAccessProfile(const UpdateVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVoiceAccessProfileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101