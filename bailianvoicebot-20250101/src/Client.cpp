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
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101