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
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101