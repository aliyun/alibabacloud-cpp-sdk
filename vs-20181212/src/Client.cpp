#include <darabonba/Core.hpp>
#include <alibabacloud/Vs20181212.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Vs20181212::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Vs20181212
{

AlibabaCloud::Vs20181212::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("vs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVsPullStreamInfoConfigResponse
 */
AddVsPullStreamInfoConfigResponse Client::addVsPullStreamInfoConfigWithOptions(const AddVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlways()) {
    query["Always"] = request.always();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceUrl()) {
    query["SourceUrl"] = request.sourceUrl();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVsPullStreamInfoConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVsPullStreamInfoConfigResponse>();
}

/**
 * @param request AddVsPullStreamInfoConfigRequest
 * @return AddVsPullStreamInfoConfigResponse
 */
AddVsPullStreamInfoConfigResponse Client::addVsPullStreamInfoConfig(const AddVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @summary 云应用服务实例与项目进行关联。
 *
 * @description ## 请求说明
 * - 该接口用于将满足特定条件的实例与指定项目进行关联。
 *
 * @param tmpReq AssociateRenderingProjectInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateRenderingProjectInstancesResponse
 */
AssociateRenderingProjectInstancesResponse Client::associateRenderingProjectInstancesWithOptions(const AssociateRenderingProjectInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AssociateRenderingProjectInstancesShrinkRequest request = AssociateRenderingProjectInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenderingInstanceIds()) {
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.renderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.renderingInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateRenderingProjectInstances"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateRenderingProjectInstancesResponse>();
}

/**
 * @summary 云应用服务实例与项目进行关联。
 *
 * @description ## 请求说明
 * - 该接口用于将满足特定条件的实例与指定项目进行关联。
 *
 * @param request AssociateRenderingProjectInstancesRequest
 * @return AssociateRenderingProjectInstancesResponse
 */
AssociateRenderingProjectInstancesResponse Client::associateRenderingProjectInstances(const AssociateRenderingProjectInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateRenderingProjectInstancesWithOptions(request, runtime);
}

/**
 * @param request BatchBindDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindDirectoriesResponse
 */
BatchBindDirectoriesResponse Client::batchBindDirectoriesWithOptions(const BatchBindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchBindDirectories"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchBindDirectoriesResponse>();
}

/**
 * @param request BatchBindDirectoriesRequest
 * @return BatchBindDirectoriesResponse
 */
BatchBindDirectoriesResponse Client::batchBindDirectories(const BatchBindDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindDirectoriesWithOptions(request, runtime);
}

/**
 * @param request BatchBindParentPlatformDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindParentPlatformDevicesResponse
 */
BatchBindParentPlatformDevicesResponse Client::batchBindParentPlatformDevicesWithOptions(const BatchBindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.parentPlatformId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchBindParentPlatformDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchBindParentPlatformDevicesResponse>();
}

/**
 * @param request BatchBindParentPlatformDevicesRequest
 * @return BatchBindParentPlatformDevicesResponse
 */
BatchBindParentPlatformDevicesResponse Client::batchBindParentPlatformDevices(const BatchBindParentPlatformDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindParentPlatformDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchBindPurchasedDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindPurchasedDevicesResponse
 */
BatchBindPurchasedDevicesResponse Client::batchBindPurchasedDevicesWithOptions(const BatchBindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchBindPurchasedDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchBindPurchasedDevicesResponse>();
}

/**
 * @param request BatchBindPurchasedDevicesRequest
 * @return BatchBindPurchasedDevicesResponse
 */
BatchBindPurchasedDevicesResponse Client::batchBindPurchasedDevices(const BatchBindPurchasedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindPurchasedDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchBindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindTemplateResponse
 */
BatchBindTemplateResponse Client::batchBindTemplateWithOptions(const BatchBindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyAll()) {
    query["ApplyAll"] = request.applyAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.replace();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchBindTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchBindTemplateResponse>();
}

/**
 * @param request BatchBindTemplateRequest
 * @return BatchBindTemplateResponse
 */
BatchBindTemplateResponse Client::batchBindTemplate(const BatchBindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindTemplateWithOptions(request, runtime);
}

/**
 * @param request BatchBindTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindTemplatesResponse
 */
BatchBindTemplatesResponse Client::batchBindTemplatesWithOptions(const BatchBindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyAll()) {
    query["ApplyAll"] = request.applyAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.replace();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchBindTemplates"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchBindTemplatesResponse>();
}

/**
 * @param request BatchBindTemplatesRequest
 * @return BatchBindTemplatesResponse
 */
BatchBindTemplatesResponse Client::batchBindTemplates(const BatchBindTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindTemplatesWithOptions(request, runtime);
}

/**
 * @param request BatchDeleteDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDevicesResponse
 */
BatchDeleteDevicesResponse Client::batchDeleteDevicesWithOptions(const BatchDeleteDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDevicesResponse>();
}

/**
 * @param request BatchDeleteDevicesRequest
 * @return BatchDeleteDevicesResponse
 */
BatchDeleteDevicesResponse Client::batchDeleteDevices(const BatchDeleteDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchDeleteVsDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteVsDomainConfigsResponse
 */
BatchDeleteVsDomainConfigsResponse Client::batchDeleteVsDomainConfigsWithOptions(const BatchDeleteVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.functionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteVsDomainConfigs"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteVsDomainConfigsResponse>();
}

/**
 * @param request BatchDeleteVsDomainConfigsRequest
 * @return BatchDeleteVsDomainConfigsResponse
 */
BatchDeleteVsDomainConfigsResponse Client::batchDeleteVsDomainConfigs(const BatchDeleteVsDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteVsDomainConfigsWithOptions(request, runtime);
}

/**
 * @param request BatchForbidVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchForbidVsStreamResponse
 */
BatchForbidVsStreamResponse Client::batchForbidVsStreamWithOptions(const BatchForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannel()) {
    query["Channel"] = request.channel();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.controlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.liveStreamType();
  }

  if (!!request.hasOneshot()) {
    query["Oneshot"] = request.oneshot();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResumeTime()) {
    query["ResumeTime"] = request.resumeTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchForbidVsStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchForbidVsStreamResponse>();
}

/**
 * @param request BatchForbidVsStreamRequest
 * @return BatchForbidVsStreamResponse
 */
BatchForbidVsStreamResponse Client::batchForbidVsStream(const BatchForbidVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchForbidVsStreamWithOptions(request, runtime);
}

/**
 * @param request BatchResumeVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchResumeVsStreamResponse
 */
BatchResumeVsStreamResponse Client::batchResumeVsStreamWithOptions(const BatchResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannel()) {
    query["Channel"] = request.channel();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.controlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.liveStreamType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchResumeVsStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchResumeVsStreamResponse>();
}

/**
 * @param request BatchResumeVsStreamRequest
 * @return BatchResumeVsStreamResponse
 */
BatchResumeVsStreamResponse Client::batchResumeVsStream(const BatchResumeVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchResumeVsStreamWithOptions(request, runtime);
}

/**
 * @param request BatchSetVsDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetVsDomainConfigsResponse
 */
BatchSetVsDomainConfigsResponse Client::batchSetVsDomainConfigsWithOptions(const BatchSetVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.functions();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSetVsDomainConfigs"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetVsDomainConfigsResponse>();
}

/**
 * @param request BatchSetVsDomainConfigsRequest
 * @return BatchSetVsDomainConfigsResponse
 */
BatchSetVsDomainConfigsResponse Client::batchSetVsDomainConfigs(const BatchSetVsDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetVsDomainConfigsWithOptions(request, runtime);
}

/**
 * @param request BatchStartDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartDevicesResponse
 */
BatchStartDevicesResponse Client::batchStartDevicesWithOptions(const BatchStartDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStartDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStartDevicesResponse>();
}

/**
 * @param request BatchStartDevicesRequest
 * @return BatchStartDevicesResponse
 */
BatchStartDevicesResponse Client::batchStartDevices(const BatchStartDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchStartStreamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartStreamsResponse
 */
BatchStartStreamsResponse Client::batchStartStreamsWithOptions(const BatchStartStreamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStartStreams"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStartStreamsResponse>();
}

/**
 * @param request BatchStartStreamsRequest
 * @return BatchStartStreamsResponse
 */
BatchStartStreamsResponse Client::batchStartStreams(const BatchStartStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartStreamsWithOptions(request, runtime);
}

/**
 * @param request BatchStopDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopDevicesResponse
 */
BatchStopDevicesResponse Client::batchStopDevicesWithOptions(const BatchStopDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStopDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStopDevicesResponse>();
}

/**
 * @param request BatchStopDevicesRequest
 * @return BatchStopDevicesResponse
 */
BatchStopDevicesResponse Client::batchStopDevices(const BatchStopDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchStopStreamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopStreamsResponse
 */
BatchStopStreamsResponse Client::batchStopStreamsWithOptions(const BatchStopStreamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStopStreams"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStopStreamsResponse>();
}

/**
 * @param request BatchStopStreamsRequest
 * @return BatchStopStreamsResponse
 */
BatchStopStreamsResponse Client::batchStopStreams(const BatchStopStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopStreamsWithOptions(request, runtime);
}

/**
 * @param request BatchUnbindDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindDirectoriesResponse
 */
BatchUnbindDirectoriesResponse Client::batchUnbindDirectoriesWithOptions(const BatchUnbindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUnbindDirectories"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUnbindDirectoriesResponse>();
}

/**
 * @param request BatchUnbindDirectoriesRequest
 * @return BatchUnbindDirectoriesResponse
 */
BatchUnbindDirectoriesResponse Client::batchUnbindDirectories(const BatchUnbindDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindDirectoriesWithOptions(request, runtime);
}

/**
 * @param request BatchUnbindParentPlatformDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindParentPlatformDevicesResponse
 */
BatchUnbindParentPlatformDevicesResponse Client::batchUnbindParentPlatformDevicesWithOptions(const BatchUnbindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.parentPlatformId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUnbindParentPlatformDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUnbindParentPlatformDevicesResponse>();
}

/**
 * @param request BatchUnbindParentPlatformDevicesRequest
 * @return BatchUnbindParentPlatformDevicesResponse
 */
BatchUnbindParentPlatformDevicesResponse Client::batchUnbindParentPlatformDevices(const BatchUnbindParentPlatformDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindParentPlatformDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchUnbindPurchasedDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindPurchasedDevicesResponse
 */
BatchUnbindPurchasedDevicesResponse Client::batchUnbindPurchasedDevicesWithOptions(const BatchUnbindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUnbindPurchasedDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUnbindPurchasedDevicesResponse>();
}

/**
 * @param request BatchUnbindPurchasedDevicesRequest
 * @return BatchUnbindPurchasedDevicesResponse
 */
BatchUnbindPurchasedDevicesResponse Client::batchUnbindPurchasedDevices(const BatchUnbindPurchasedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindPurchasedDevicesWithOptions(request, runtime);
}

/**
 * @param request BatchUnbindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindTemplateResponse
 */
BatchUnbindTemplateResponse Client::batchUnbindTemplateWithOptions(const BatchUnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUnbindTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUnbindTemplateResponse>();
}

/**
 * @param request BatchUnbindTemplateRequest
 * @return BatchUnbindTemplateResponse
 */
BatchUnbindTemplateResponse Client::batchUnbindTemplate(const BatchUnbindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindTemplateWithOptions(request, runtime);
}

/**
 * @param request BatchUnbindTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindTemplatesResponse
 */
BatchUnbindTemplatesResponse Client::batchUnbindTemplatesWithOptions(const BatchUnbindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUnbindTemplates"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUnbindTemplatesResponse>();
}

/**
 * @param request BatchUnbindTemplatesRequest
 * @return BatchUnbindTemplatesResponse
 */
BatchUnbindTemplatesResponse Client::batchUnbindTemplates(const BatchUnbindTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindTemplatesWithOptions(request, runtime);
}

/**
 * @param request BindDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDirectoryResponse
 */
BindDirectoryResponse Client::bindDirectoryWithOptions(const BindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindDirectory"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindDirectoryResponse>();
}

/**
 * @param request BindDirectoryRequest
 * @return BindDirectoryResponse
 */
BindDirectoryResponse Client::bindDirectory(const BindDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDirectoryWithOptions(request, runtime);
}

/**
 * @param request BindParentPlatformDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindParentPlatformDeviceResponse
 */
BindParentPlatformDeviceResponse Client::bindParentPlatformDeviceWithOptions(const BindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.parentPlatformId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindParentPlatformDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindParentPlatformDeviceResponse>();
}

/**
 * @param request BindParentPlatformDeviceRequest
 * @return BindParentPlatformDeviceResponse
 */
BindParentPlatformDeviceResponse Client::bindParentPlatformDevice(const BindParentPlatformDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindParentPlatformDeviceWithOptions(request, runtime);
}

/**
 * @param request BindPurchasedDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPurchasedDeviceResponse
 */
BindPurchasedDeviceResponse Client::bindPurchasedDeviceWithOptions(const BindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindPurchasedDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPurchasedDeviceResponse>();
}

/**
 * @param request BindPurchasedDeviceRequest
 * @return BindPurchasedDeviceResponse
 */
BindPurchasedDeviceResponse Client::bindPurchasedDevice(const BindPurchasedDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPurchasedDeviceWithOptions(request, runtime);
}

/**
 * @param request BindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindTemplateResponse
 */
BindTemplateResponse Client::bindTemplateWithOptions(const BindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyAll()) {
    query["ApplyAll"] = request.applyAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.replace();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindTemplateResponse>();
}

/**
 * @param request BindTemplateRequest
 * @return BindTemplateResponse
 */
BindTemplateResponse Client::bindTemplate(const BindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindTemplateWithOptions(request, runtime);
}

/**
 * @param request ContinuousAdjustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuousAdjustResponse
 */
ContinuousAdjustResponse Client::continuousAdjustWithOptions(const ContinuousAdjustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFocus()) {
    query["Focus"] = request.focus();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIris()) {
    query["Iris"] = request.iris();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinuousAdjust"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinuousAdjustResponse>();
}

/**
 * @param request ContinuousAdjustRequest
 * @return ContinuousAdjustResponse
 */
ContinuousAdjustResponse Client::continuousAdjust(const ContinuousAdjustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continuousAdjustWithOptions(request, runtime);
}

/**
 * @param request ContinuousMoveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuousMoveResponse
 */
ContinuousMoveResponse Client::continuousMoveWithOptions(const ContinuousMoveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPan()) {
    query["Pan"] = request.pan();
  }

  if (!!request.hasTilt()) {
    query["Tilt"] = request.tilt();
  }

  if (!!request.hasZoom()) {
    query["Zoom"] = request.zoom();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinuousMove"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinuousMoveResponse>();
}

/**
 * @param request ContinuousMoveRequest
 * @return ContinuousMoveResponse
 */
ContinuousMoveResponse Client::continuousMove(const ContinuousMoveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continuousMoveWithOptions(request, runtime);
}

/**
 * @param request CreateDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeviceResponse
 */
CreateDeviceResponse Client::createDeviceWithOptions(const CreateDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmMethod()) {
    query["AlarmMethod"] = request.alarmMethod();
  }

  if (!!request.hasAutoDirectory()) {
    query["AutoDirectory"] = request.autoDirectory();
  }

  if (!!request.hasAutoPos()) {
    query["AutoPos"] = request.autoPos();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.autoStart();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasDsn()) {
    query["Dsn"] = request.dsn();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.gbId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.latitude();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.longitude();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasPosInterval()) {
    query["PosInterval"] = request.posInterval();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.vendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeviceResponse>();
}

/**
 * @param request CreateDeviceRequest
 * @return CreateDeviceResponse
 */
CreateDeviceResponse Client::createDevice(const CreateDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeviceWithOptions(request, runtime);
}

/**
 * @param request CreateDeviceAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeviceAlarmResponse
 */
CreateDeviceAlarmResponse Client::createDeviceAlarmWithOptions(const CreateDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarm()) {
    query["Alarm"] = request.alarm();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasSubAlarm()) {
    query["SubAlarm"] = request.subAlarm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDeviceAlarm"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeviceAlarmResponse>();
}

/**
 * @param request CreateDeviceAlarmRequest
 * @return CreateDeviceAlarmResponse
 */
CreateDeviceAlarmResponse Client::createDeviceAlarm(const CreateDeviceAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeviceAlarmWithOptions(request, runtime);
}

/**
 * @param request CreateDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectoryWithOptions(const CreateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDirectory"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDirectoryResponse>();
}

/**
 * @param request CreateDirectoryRequest
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectory(const CreateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDirectoryWithOptions(request, runtime);
}

/**
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.app();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInProtocol()) {
    query["InProtocol"] = request.inProtocol();
  }

  if (!!request.hasLazyPull()) {
    query["LazyPull"] = request.lazyPull();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.outProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.playDomain();
  }

  if (!!request.hasPushDomain()) {
    query["PushDomain"] = request.pushDomain();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupResponse>();
}

/**
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @param request CreateParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParentPlatformResponse
 */
CreateParentPlatformResponse Client::createParentPlatformWithOptions(const CreateParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.autoStart();
  }

  if (!!request.hasClientAuth()) {
    query["ClientAuth"] = request.clientAuth();
  }

  if (!!request.hasClientPassword()) {
    query["ClientPassword"] = request.clientPassword();
  }

  if (!!request.hasClientUsername()) {
    query["ClientUsername"] = request.clientUsername();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.gbId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateParentPlatform"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParentPlatformResponse>();
}

/**
 * @param request CreateParentPlatformRequest
 * @return CreateParentPlatformResponse
 */
CreateParentPlatformResponse Client::createParentPlatform(const CreateParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParentPlatformWithOptions(request, runtime);
}

/**
 * @summary 创建云渲染数据包
 *
 * @param request CreateRenderingDataPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRenderingDataPackageResponse
 */
CreateRenderingDataPackageResponse Client::createRenderingDataPackageWithOptions(const CreateRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.instanceBillingCycle();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRenderingDataPackage"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRenderingDataPackageResponse>();
}

/**
 * @summary 创建云渲染数据包
 *
 * @param request CreateRenderingDataPackageRequest
 * @return CreateRenderingDataPackageResponse
 */
CreateRenderingDataPackageResponse Client::createRenderingDataPackage(const CreateRenderingDataPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingDataPackageWithOptions(request, runtime);
}

/**
 * @summary 申请云渲染资源实例
 *
 * @param tmpReq CreateRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRenderingInstanceResponse
 */
CreateRenderingInstanceResponse Client::createRenderingInstanceWithOptions(const CreateRenderingInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRenderingInstanceShrinkRequest request = CreateRenderingInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributes()) {
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attributes(), "Attributes", "json"));
  }

  if (!!tmpReq.hasClientInfo()) {
    request.setClientInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientInfo(), "ClientInfo", "json"));
  }

  json query = {};
  if (!!request.hasAttributesShrink()) {
    query["Attributes"] = request.attributesShrink();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasClientInfoShrink()) {
    query["ClientInfo"] = request.clientInfoShrink();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.instanceBillingCycle();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.instanceChargeType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasInternetMaxBandwidth()) {
    query["InternetMaxBandwidth"] = request.internetMaxBandwidth();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRenderingSpec()) {
    query["RenderingSpec"] = request.renderingSpec();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRenderingInstanceResponse>();
}

/**
 * @summary 申请云渲染资源实例
 *
 * @param request CreateRenderingInstanceRequest
 * @return CreateRenderingInstanceResponse
 */
CreateRenderingInstanceResponse Client::createRenderingInstance(const CreateRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建自定义网关
 *
 * @param request CreateRenderingInstanceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRenderingInstanceGatewayResponse
 */
CreateRenderingInstanceGatewayResponse Client::createRenderingInstanceGatewayWithOptions(const CreateRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayInstanceId()) {
    query["GatewayInstanceId"] = request.gatewayInstanceId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRenderingInstanceGateway"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRenderingInstanceGatewayResponse>();
}

/**
 * @summary 创建自定义网关
 *
 * @param request CreateRenderingInstanceGatewayRequest
 * @return CreateRenderingInstanceGatewayResponse
 */
CreateRenderingInstanceGatewayResponse Client::createRenderingInstanceGateway(const CreateRenderingInstanceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingInstanceGatewayWithOptions(request, runtime);
}

/**
 * @summary 创建一个新的云应用服务项目，并设置相关属性。
 *
 * @param tmpReq CreateRenderingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRenderingProjectResponse
 */
CreateRenderingProjectResponse Client::createRenderingProjectWithOptions(const CreateRenderingProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRenderingProjectShrinkRequest request = CreateRenderingProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionAttribs()) {
    request.setSessionAttribsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sessionAttribs(), "SessionAttribs", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSessionAttribsShrink()) {
    query["SessionAttribs"] = request.sessionAttribsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRenderingProject"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRenderingProjectResponse>();
}

/**
 * @summary 创建一个新的云应用服务项目，并设置相关属性。
 *
 * @param request CreateRenderingProjectRequest
 * @return CreateRenderingProjectResponse
 */
CreateRenderingProjectResponse Client::createRenderingProject(const CreateRenderingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingProjectWithOptions(request, runtime);
}

/**
 * @param request CreateStreamSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamSnapshotResponse
 */
CreateStreamSnapshotResponse Client::createStreamSnapshotWithOptions(const CreateStreamSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.location();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamSnapshot"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamSnapshotResponse>();
}

/**
 * @param request CreateStreamSnapshotRequest
 * @return CreateStreamSnapshotResponse
 */
CreateStreamSnapshotResponse Client::createStreamSnapshot(const CreateStreamSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamSnapshotWithOptions(request, runtime);
}

/**
 * @param request CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.fileFormat();
  }

  if (!!request.hasFlv()) {
    query["Flv"] = request.flv();
  }

  if (!!request.hasHlsM3u8()) {
    query["HlsM3u8"] = request.hlsM3u8();
  }

  if (!!request.hasHlsTs()) {
    query["HlsTs"] = request.hlsTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasJpgOnDemand()) {
    query["JpgOnDemand"] = request.jpgOnDemand();
  }

  if (!!request.hasJpgOverwrite()) {
    query["JpgOverwrite"] = request.jpgOverwrite();
  }

  if (!!request.hasJpgSequence()) {
    query["JpgSequence"] = request.jpgSequence();
  }

  if (!!request.hasMp4()) {
    query["Mp4"] = request.mp4();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.ossFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.retention();
  }

  if (!!request.hasTransConfigsJSON()) {
    query["TransConfigsJSON"] = request.transConfigsJSON();
  }

  if (!!request.hasTrigger()) {
    query["Trigger"] = request.trigger();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @summary 删除云应用
 *
 * @param request DeleteCloudAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudAppResponse
 */
DeleteCloudAppResponse Client::deleteCloudAppWithOptions(const DeleteCloudAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudApp"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudAppResponse>();
}

/**
 * @summary 删除云应用
 *
 * @param request DeleteCloudAppRequest
 * @return DeleteCloudAppResponse
 */
DeleteCloudAppResponse Client::deleteCloudApp(const DeleteCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudAppWithOptions(request, runtime);
}

/**
 * @param request DeleteDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeviceResponse
 */
DeleteDeviceResponse Client::deleteDeviceWithOptions(const DeleteDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeviceResponse>();
}

/**
 * @param request DeleteDeviceRequest
 * @return DeleteDeviceResponse
 */
DeleteDeviceResponse Client::deleteDevice(const DeleteDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDeviceWithOptions(request, runtime);
}

/**
 * @param request DeleteDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectoryWithOptions(const DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDirectory"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDirectoryResponse>();
}

/**
 * @param request DeleteDirectoryRequest
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectory(const DeleteDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDirectoryWithOptions(request, runtime);
}

/**
 * @summary 删除文件对象。
 *
 * @param request DeleteFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFileWithOptions(const DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFile"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileResponse>();
}

/**
 * @summary 删除文件对象。
 *
 * @param request DeleteFileRequest
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFile(const DeleteFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileWithOptions(request, runtime);
}

/**
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupResponse>();
}

/**
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @param request DeleteParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParentPlatformResponse
 */
DeleteParentPlatformResponse Client::deleteParentPlatformWithOptions(const DeleteParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParentPlatform"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParentPlatformResponse>();
}

/**
 * @param request DeleteParentPlatformRequest
 * @return DeleteParentPlatformResponse
 */
DeleteParentPlatformResponse Client::deleteParentPlatform(const DeleteParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParentPlatformWithOptions(request, runtime);
}

/**
 * @param request DeletePresetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePresetResponse
 */
DeletePresetResponse Client::deletePresetWithOptions(const DeletePresetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPresetId()) {
    query["PresetId"] = request.presetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePreset"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePresetResponse>();
}

/**
 * @param request DeletePresetRequest
 * @return DeletePresetResponse
 */
DeletePresetResponse Client::deletePreset(const DeletePresetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePresetWithOptions(request, runtime);
}

/**
 * @summary 删除公钥信息
 *
 * @param request DeletePublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePublicKeyResponse
 */
DeletePublicKeyResponse Client::deletePublicKeyWithOptions(const DeletePublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyName()) {
    query["KeyName"] = request.keyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePublicKey"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePublicKeyResponse>();
}

/**
 * @summary 删除公钥信息
 *
 * @param request DeletePublicKeyRequest
 * @return DeletePublicKeyResponse
 */
DeletePublicKeyResponse Client::deletePublicKey(const DeletePublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePublicKeyWithOptions(request, runtime);
}

/**
 * @summary 删除云渲染实例配置参数
 *
 * @param tmpReq DeleteRenderingInstanceConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRenderingInstanceConfigurationResponse
 */
DeleteRenderingInstanceConfigurationResponse Client::deleteRenderingInstanceConfigurationWithOptions(const DeleteRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRenderingInstanceConfigurationShrinkRequest request = DeleteRenderingInstanceConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfiguration()) {
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configuration(), "Configuration", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  json body = {};
  if (!!request.hasConfigurationShrink()) {
    body["Configuration"] = request.configurationShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRenderingInstanceConfiguration"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRenderingInstanceConfigurationResponse>();
}

/**
 * @summary 删除云渲染实例配置参数
 *
 * @param request DeleteRenderingInstanceConfigurationRequest
 * @return DeleteRenderingInstanceConfigurationResponse
 */
DeleteRenderingInstanceConfigurationResponse Client::deleteRenderingInstanceConfiguration(const DeleteRenderingInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary 删除自定义网关
 *
 * @param request DeleteRenderingInstanceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRenderingInstanceGatewayResponse
 */
DeleteRenderingInstanceGatewayResponse Client::deleteRenderingInstanceGatewayWithOptions(const DeleteRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRenderingInstanceGateway"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRenderingInstanceGatewayResponse>();
}

/**
 * @summary 删除自定义网关
 *
 * @param request DeleteRenderingInstanceGatewayRequest
 * @return DeleteRenderingInstanceGatewayResponse
 */
DeleteRenderingInstanceGatewayResponse Client::deleteRenderingInstanceGateway(const DeleteRenderingInstanceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingInstanceGatewayWithOptions(request, runtime);
}

/**
 * @summary 清除实例设置
 *
 * @param tmpReq DeleteRenderingInstanceSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRenderingInstanceSettingsResponse
 */
DeleteRenderingInstanceSettingsResponse Client::deleteRenderingInstanceSettingsWithOptions(const DeleteRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRenderingInstanceSettingsShrinkRequest request = DeleteRenderingInstanceSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributeNames()) {
    request.setAttributeNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attributeNames(), "AttributeNames", "json"));
  }

  json query = {};
  if (!!request.hasAttributeNamesShrink()) {
    query["AttributeNames"] = request.attributeNamesShrink();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRenderingInstanceSettings"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRenderingInstanceSettingsResponse>();
}

/**
 * @summary 清除实例设置
 *
 * @param request DeleteRenderingInstanceSettingsRequest
 * @return DeleteRenderingInstanceSettingsResponse
 */
DeleteRenderingInstanceSettingsResponse Client::deleteRenderingInstanceSettings(const DeleteRenderingInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingInstanceSettingsWithOptions(request, runtime);
}

/**
 * @summary 删除一个云应用服务项目，有在线会话等业务调度数据的项目不允许删除。
 *
 * @param request DeleteRenderingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRenderingProjectResponse
 */
DeleteRenderingProjectResponse Client::deleteRenderingProjectWithOptions(const DeleteRenderingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRenderingProject"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRenderingProjectResponse>();
}

/**
 * @summary 删除一个云应用服务项目，有在线会话等业务调度数据的项目不允许删除。
 *
 * @param request DeleteRenderingProjectRequest
 * @return DeleteRenderingProjectResponse
 */
DeleteRenderingProjectResponse Client::deleteRenderingProject(const DeleteRenderingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingProjectWithOptions(request, runtime);
}

/**
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @param request DeleteVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVsPullStreamInfoConfigResponse
 */
DeleteVsPullStreamInfoConfigResponse Client::deleteVsPullStreamInfoConfigWithOptions(const DeleteVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVsPullStreamInfoConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVsPullStreamInfoConfigResponse>();
}

/**
 * @param request DeleteVsPullStreamInfoConfigRequest
 * @return DeleteVsPullStreamInfoConfigResponse
 */
DeleteVsPullStreamInfoConfigResponse Client::deleteVsPullStreamInfoConfig(const DeleteVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @param request DeleteVsStreamsNotifyUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVsStreamsNotifyUrlConfigResponse
 */
DeleteVsStreamsNotifyUrlConfigResponse Client::deleteVsStreamsNotifyUrlConfigWithOptions(const DeleteVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVsStreamsNotifyUrlConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVsStreamsNotifyUrlConfigResponse>();
}

/**
 * @param request DeleteVsStreamsNotifyUrlConfigRequest
 * @return DeleteVsStreamsNotifyUrlConfigResponse
 */
DeleteVsStreamsNotifyUrlConfigResponse Client::deleteVsStreamsNotifyUrlConfig(const DeleteVsStreamsNotifyUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

/**
 * @param request DescribeAccountStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountStatResponse
 */
DescribeAccountStatResponse Client::describeAccountStatWithOptions(const DescribeAccountStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountStat"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountStatResponse>();
}

/**
 * @param request DescribeAccountStatRequest
 * @return DescribeAccountStatResponse
 */
DescribeAccountStatResponse Client::describeAccountStat(const DescribeAccountStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountStatWithOptions(request, runtime);
}

/**
 * @param request DescribeDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceResponse
 */
DescribeDeviceResponse Client::describeDeviceWithOptions(const DescribeDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIncludeDirectory()) {
    query["IncludeDirectory"] = request.includeDirectory();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.includeStats();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceResponse>();
}

/**
 * @param request DescribeDeviceRequest
 * @return DescribeDeviceResponse
 */
DescribeDeviceResponse Client::describeDevice(const DescribeDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceWithOptions(request, runtime);
}

/**
 * @param request DescribeDeviceChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceChannelsResponse
 */
DescribeDeviceChannelsResponse Client::describeDeviceChannelsWithOptions(const DescribeDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceChannels"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceChannelsResponse>();
}

/**
 * @param request DescribeDeviceChannelsRequest
 * @return DescribeDeviceChannelsResponse
 */
DescribeDeviceChannelsResponse Client::describeDeviceChannels(const DescribeDeviceChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceChannelsWithOptions(request, runtime);
}

/**
 * @param request DescribeDeviceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceGatewayResponse
 */
DescribeDeviceGatewayResponse Client::describeDeviceGatewayWithOptions(const DescribeDeviceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceGateway"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceGatewayResponse>();
}

/**
 * @param request DescribeDeviceGatewayRequest
 * @return DescribeDeviceGatewayResponse
 */
DescribeDeviceGatewayResponse Client::describeDeviceGateway(const DescribeDeviceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceGatewayWithOptions(request, runtime);
}

/**
 * @param request DescribeDeviceURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceURLResponse
 */
DescribeDeviceURLResponse Client::describeDeviceURLWithOptions(const DescribeDeviceURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuth()) {
    query["Auth"] = request.auth();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.outProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStream()) {
    query["Stream"] = request.stream();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceURL"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceURLResponse>();
}

/**
 * @param request DescribeDeviceURLRequest
 * @return DescribeDeviceURLResponse
 */
DescribeDeviceURLResponse Client::describeDeviceURL(const DescribeDeviceURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceURLWithOptions(request, runtime);
}

/**
 * @param request DescribeDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDevicesResponse
 */
DescribeDevicesResponse Client::describeDevicesWithOptions(const DescribeDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasDsn()) {
    query["Dsn"] = request.dsn();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.gbId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIncludeDirectory()) {
    query["IncludeDirectory"] = request.includeDirectory();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.includeStats();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.vendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDevicesResponse>();
}

/**
 * @param request DescribeDevicesRequest
 * @return DescribeDevicesResponse
 */
DescribeDevicesResponse Client::describeDevices(const DescribeDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDevicesWithOptions(request, runtime);
}

/**
 * @param request DescribeDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectoriesWithOptions(const DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNoPagination()) {
    query["NoPagination"] = request.noPagination();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDirectories"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDirectoriesResponse>();
}

/**
 * @param request DescribeDirectoriesRequest
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectories(const DescribeDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirectoriesWithOptions(request, runtime);
}

/**
 * @param request DescribeDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirectoryResponse
 */
DescribeDirectoryResponse Client::describeDirectoryWithOptions(const DescribeDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDirectory"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDirectoryResponse>();
}

/**
 * @param request DescribeDirectoryRequest
 * @return DescribeDirectoryResponse
 */
DescribeDirectoryResponse Client::describeDirectory(const DescribeDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirectoryWithOptions(request, runtime);
}

/**
 * @param request DescribeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupResponse
 */
DescribeGroupResponse Client::describeGroupWithOptions(const DescribeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.includeStats();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroup"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupResponse>();
}

/**
 * @param request DescribeGroupRequest
 * @return DescribeGroupResponse
 */
DescribeGroupResponse Client::describeGroup(const DescribeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupWithOptions(request, runtime);
}

/**
 * @param request DescribeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroupsWithOptions(const DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInProtocol()) {
    query["InProtocol"] = request.inProtocol();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.includeStats();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroups"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupsResponse>();
}

/**
 * @param request DescribeGroupsRequest
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroups(const DescribeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupsWithOptions(request, runtime);
}

/**
 * @param request DescribeParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentPlatformResponse
 */
DescribeParentPlatformResponse Client::describeParentPlatformWithOptions(const DescribeParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParentPlatform"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParentPlatformResponse>();
}

/**
 * @param request DescribeParentPlatformRequest
 * @return DescribeParentPlatformResponse
 */
DescribeParentPlatformResponse Client::describeParentPlatform(const DescribeParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentPlatformWithOptions(request, runtime);
}

/**
 * @param request DescribeParentPlatformDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentPlatformDevicesResponse
 */
DescribeParentPlatformDevicesResponse Client::describeParentPlatformDevicesWithOptions(const DescribeParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParentPlatformDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParentPlatformDevicesResponse>();
}

/**
 * @param request DescribeParentPlatformDevicesRequest
 * @return DescribeParentPlatformDevicesResponse
 */
DescribeParentPlatformDevicesResponse Client::describeParentPlatformDevices(const DescribeParentPlatformDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentPlatformDevicesWithOptions(request, runtime);
}

/**
 * @param request DescribeParentPlatformsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentPlatformsResponse
 */
DescribeParentPlatformsResponse Client::describeParentPlatformsWithOptions(const DescribeParentPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGbId()) {
    query["GbId"] = request.gbId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParentPlatforms"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParentPlatformsResponse>();
}

/**
 * @param request DescribeParentPlatformsRequest
 * @return DescribeParentPlatformsResponse
 */
DescribeParentPlatformsResponse Client::describeParentPlatforms(const DescribeParentPlatformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentPlatformsWithOptions(request, runtime);
}

/**
 * @param request DescribePresetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePresetsResponse
 */
DescribePresetsResponse Client::describePresetsWithOptions(const DescribePresetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePresets"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePresetsResponse>();
}

/**
 * @param request DescribePresetsRequest
 * @return DescribePresetsResponse
 */
DescribePresetsResponse Client::describePresets(const DescribePresetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePresetsWithOptions(request, runtime);
}

/**
 * @param request DescribePublishStreamStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePublishStreamStatusResponse
 */
DescribePublishStreamStatusResponse Client::describePublishStreamStatusWithOptions(const DescribePublishStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePublishStreamStatus"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePublishStreamStatusResponse>();
}

/**
 * @param request DescribePublishStreamStatusRequest
 * @return DescribePublishStreamStatusResponse
 */
DescribePublishStreamStatusResponse Client::describePublishStreamStatus(const DescribePublishStreamStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePublishStreamStatusWithOptions(request, runtime);
}

/**
 * @param request DescribePurchasedDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedDeviceResponse
 */
DescribePurchasedDeviceResponse Client::describePurchasedDeviceWithOptions(const DescribePurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePurchasedDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePurchasedDeviceResponse>();
}

/**
 * @param request DescribePurchasedDeviceRequest
 * @return DescribePurchasedDeviceResponse
 */
DescribePurchasedDeviceResponse Client::describePurchasedDevice(const DescribePurchasedDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedDeviceWithOptions(request, runtime);
}

/**
 * @param request DescribePurchasedDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedDevicesResponse
 */
DescribePurchasedDevicesResponse Client::describePurchasedDevicesWithOptions(const DescribePurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasSubType()) {
    query["SubType"] = request.subType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.vendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePurchasedDevices"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePurchasedDevicesResponse>();
}

/**
 * @param request DescribePurchasedDevicesRequest
 * @return DescribePurchasedDevicesResponse
 */
DescribePurchasedDevicesResponse Client::describePurchasedDevices(const DescribePurchasedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedDevicesWithOptions(request, runtime);
}

/**
 * @param request DescribeRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordsResponse
 */
DescribeRecordsResponse Client::describeRecordsWithOptions(const DescribeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrivateBucket()) {
    query["PrivateBucket"] = request.privateBucket();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStreamId()) {
    query["StreamId"] = request.streamId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecords"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordsResponse>();
}

/**
 * @param request DescribeRecordsRequest
 * @return DescribeRecordsResponse
 */
DescribeRecordsResponse Client::describeRecords(const DescribeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询云渲染实例详细信息。
 *
 * @param request DescribeRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenderingInstanceResponse
 */
DescribeRenderingInstanceResponse Client::describeRenderingInstanceWithOptions(const DescribeRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenderingInstanceResponse>();
}

/**
 * @summary 查询云渲染实例详细信息。
 *
 * @param request DescribeRenderingInstanceRequest
 * @return DescribeRenderingInstanceResponse
 */
DescribeRenderingInstanceResponse Client::describeRenderingInstance(const DescribeRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询云渲染实例模块配置参数
 *
 * @param tmpReq DescribeRenderingInstanceConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenderingInstanceConfigurationResponse
 */
DescribeRenderingInstanceConfigurationResponse Client::describeRenderingInstanceConfigurationWithOptions(const DescribeRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRenderingInstanceConfigurationShrinkRequest request = DescribeRenderingInstanceConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfiguration()) {
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configuration(), "Configuration", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRenderingInstanceConfiguration"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenderingInstanceConfigurationResponse>();
}

/**
 * @summary 查询云渲染实例模块配置参数
 *
 * @param request DescribeRenderingInstanceConfigurationRequest
 * @return DescribeRenderingInstanceConfigurationResponse
 */
DescribeRenderingInstanceConfigurationResponse Client::describeRenderingInstanceConfiguration(const DescribeRenderingInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary 查询实例配置
 *
 * @param tmpReq DescribeRenderingInstanceSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenderingInstanceSettingsResponse
 */
DescribeRenderingInstanceSettingsResponse Client::describeRenderingInstanceSettingsWithOptions(const DescribeRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRenderingInstanceSettingsShrinkRequest request = DescribeRenderingInstanceSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributeNames()) {
    request.setAttributeNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attributeNames(), "AttributeNames", "json"));
  }

  json query = {};
  if (!!request.hasAttributeNamesShrink()) {
    query["AttributeNames"] = request.attributeNamesShrink();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRenderingInstanceSettings"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenderingInstanceSettingsResponse>();
}

/**
 * @summary 查询实例配置
 *
 * @param request DescribeRenderingInstanceSettingsRequest
 * @return DescribeRenderingInstanceSettingsResponse
 */
DescribeRenderingInstanceSettingsResponse Client::describeRenderingInstanceSettings(const DescribeRenderingInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingInstanceSettingsWithOptions(request, runtime);
}

/**
 * @summary 输出会话的详情信息，包含关联的实例、网络出口等信息。
 *
 * @param request DescribeRenderingSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenderingSessionResponse
 */
DescribeRenderingSessionResponse Client::describeRenderingSessionWithOptions(const DescribeRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRenderingSession"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenderingSessionResponse>();
}

/**
 * @summary 输出会话的详情信息，包含关联的实例、网络出口等信息。
 *
 * @param request DescribeRenderingSessionRequest
 * @return DescribeRenderingSessionResponse
 */
DescribeRenderingSessionResponse Client::describeRenderingSession(const DescribeRenderingSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingSessionWithOptions(request, runtime);
}

/**
 * @param request DescribeStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamResponse
 */
DescribeStreamResponse Client::describeStreamWithOptions(const DescribeStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamResponse>();
}

/**
 * @param request DescribeStreamRequest
 * @return DescribeStreamResponse
 */
DescribeStreamResponse Client::describeStream(const DescribeStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamWithOptions(request, runtime);
}

/**
 * @param request DescribeStreamURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamURLResponse
 */
DescribeStreamURLResponse Client::describeStreamURLWithOptions(const DescribeStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuth()) {
    query["Auth"] = request.auth();
  }

  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.authKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.outProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTranscode()) {
    query["Transcode"] = request.transcode();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreamURL"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamURLResponse>();
}

/**
 * @param request DescribeStreamURLRequest
 * @return DescribeStreamURLResponse
 */
DescribeStreamURLResponse Client::describeStreamURL(const DescribeStreamURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamURLWithOptions(request, runtime);
}

/**
 * @param request DescribeStreamVodListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamVodListResponse
 */
DescribeStreamVodListResponse Client::describeStreamVodListWithOptions(const DescribeStreamVodListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreamVodList"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamVodListResponse>();
}

/**
 * @param request DescribeStreamVodListRequest
 * @return DescribeStreamVodListResponse
 */
DescribeStreamVodListResponse Client::describeStreamVodList(const DescribeStreamVodListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamVodListWithOptions(request, runtime);
}

/**
 * @param request DescribeStreamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamsResponse
 */
DescribeStreamsResponse Client::describeStreamsWithOptions(const DescribeStreamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.app();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreams"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamsResponse>();
}

/**
 * @param request DescribeStreamsRequest
 * @return DescribeStreamsResponse
 */
DescribeStreamsResponse Client::describeStreams(const DescribeStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamsWithOptions(request, runtime);
}

/**
 * @param request DescribeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateResponse
 */
DescribeTemplateResponse Client::describeTemplateWithOptions(const DescribeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateResponse>();
}

/**
 * @param request DescribeTemplateRequest
 * @return DescribeTemplateResponse
 */
DescribeTemplateResponse Client::describeTemplate(const DescribeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateWithOptions(request, runtime);
}

/**
 * @param request DescribeTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplatesWithOptions(const DescribeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplates"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatesResponse>();
}

/**
 * @param request DescribeTemplatesRequest
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplates(const DescribeTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplatesWithOptions(request, runtime);
}

/**
 * @param request DescribeVodStreamURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodStreamURLResponse
 */
DescribeVodStreamURLResponse Client::describeVodStreamURLWithOptions(const DescribeVodStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodStreamURL"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodStreamURLResponse>();
}

/**
 * @param request DescribeVodStreamURLRequest
 * @return DescribeVodStreamURLResponse
 */
DescribeVodStreamURLResponse Client::describeVodStreamURL(const DescribeVodStreamURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodStreamURLWithOptions(request, runtime);
}

/**
 * @param request DescribeVsCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsCertificateDetailResponse
 */
DescribeVsCertificateDetailResponse Client::describeVsCertificateDetailWithOptions(const DescribeVsCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsCertificateDetail"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsCertificateDetailResponse>();
}

/**
 * @param request DescribeVsCertificateDetailRequest
 * @return DescribeVsCertificateDetailResponse
 */
DescribeVsCertificateDetailResponse Client::describeVsCertificateDetail(const DescribeVsCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsCertificateDetailWithOptions(request, runtime);
}

/**
 * @param request DescribeVsCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsCertificateListResponse
 */
DescribeVsCertificateListResponse Client::describeVsCertificateListWithOptions(const DescribeVsCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsCertificateList"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsCertificateListResponse>();
}

/**
 * @param request DescribeVsCertificateListRequest
 * @return DescribeVsCertificateListResponse
 */
DescribeVsCertificateListResponse Client::describeVsCertificateList(const DescribeVsCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsCertificateListWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDevicesDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDevicesDataResponse
 */
DescribeVsDevicesDataResponse Client::describeVsDevicesDataWithOptions(const DescribeVsDevicesDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDevicesData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDevicesDataResponse>();
}

/**
 * @param request DescribeVsDevicesDataRequest
 * @return DescribeVsDevicesDataResponse
 */
DescribeVsDevicesDataResponse Client::describeVsDevicesData(const DescribeVsDevicesDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDevicesDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainBpsDataResponse
 */
DescribeVsDomainBpsDataResponse Client::describeVsDomainBpsDataWithOptions(const DescribeVsDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainBpsData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainBpsDataResponse>();
}

/**
 * @param request DescribeVsDomainBpsDataRequest
 * @return DescribeVsDomainBpsDataResponse
 */
DescribeVsDomainBpsDataResponse Client::describeVsDomainBpsData(const DescribeVsDomainBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainBpsDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainCertificateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainCertificateInfoResponse
 */
DescribeVsDomainCertificateInfoResponse Client::describeVsDomainCertificateInfoWithOptions(const DescribeVsDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainCertificateInfo"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainCertificateInfoResponse>();
}

/**
 * @param request DescribeVsDomainCertificateInfoRequest
 * @return DescribeVsDomainCertificateInfoResponse
 */
DescribeVsDomainCertificateInfoResponse Client::describeVsDomainCertificateInfo(const DescribeVsDomainCertificateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainCertificateInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainConfigsResponse
 */
DescribeVsDomainConfigsResponse Client::describeVsDomainConfigsWithOptions(const DescribeVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.functionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainConfigs"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainConfigsResponse>();
}

/**
 * @param request DescribeVsDomainConfigsRequest
 * @return DescribeVsDomainConfigsResponse
 */
DescribeVsDomainConfigsResponse Client::describeVsDomainConfigs(const DescribeVsDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainConfigsWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainDetailResponse
 */
DescribeVsDomainDetailResponse Client::describeVsDomainDetailWithOptions(const DescribeVsDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainDetail"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainDetailResponse>();
}

/**
 * @param request DescribeVsDomainDetailRequest
 * @return DescribeVsDomainDetailResponse
 */
DescribeVsDomainDetailResponse Client::describeVsDomainDetail(const DescribeVsDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainDetailWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainPvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainPvDataResponse
 */
DescribeVsDomainPvDataResponse Client::describeVsDomainPvDataWithOptions(const DescribeVsDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainPvData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainPvDataResponse>();
}

/**
 * @param request DescribeVsDomainPvDataRequest
 * @return DescribeVsDomainPvDataResponse
 */
DescribeVsDomainPvDataResponse Client::describeVsDomainPvData(const DescribeVsDomainPvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainPvDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainPvUvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainPvUvDataResponse
 */
DescribeVsDomainPvUvDataResponse Client::describeVsDomainPvUvDataWithOptions(const DescribeVsDomainPvUvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainPvUvData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainPvUvDataResponse>();
}

/**
 * @param request DescribeVsDomainPvUvDataRequest
 * @return DescribeVsDomainPvUvDataResponse
 */
DescribeVsDomainPvUvDataResponse Client::describeVsDomainPvUvData(const DescribeVsDomainPvUvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainPvUvDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainRecordDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainRecordDataResponse
 */
DescribeVsDomainRecordDataResponse Client::describeVsDomainRecordDataWithOptions(const DescribeVsDomainRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainRecordData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainRecordDataResponse>();
}

/**
 * @param request DescribeVsDomainRecordDataRequest
 * @return DescribeVsDomainRecordDataResponse
 */
DescribeVsDomainRecordDataResponse Client::describeVsDomainRecordData(const DescribeVsDomainRecordDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainRecordDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainRegionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainRegionDataResponse
 */
DescribeVsDomainRegionDataResponse Client::describeVsDomainRegionDataWithOptions(const DescribeVsDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainRegionData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainRegionDataResponse>();
}

/**
 * @param request DescribeVsDomainRegionDataRequest
 * @return DescribeVsDomainRegionDataResponse
 */
DescribeVsDomainRegionDataResponse Client::describeVsDomainRegionData(const DescribeVsDomainRegionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainRegionDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainReqBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainReqBpsDataResponse
 */
DescribeVsDomainReqBpsDataResponse Client::describeVsDomainReqBpsDataWithOptions(const DescribeVsDomainReqBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainReqBpsData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainReqBpsDataResponse>();
}

/**
 * @param request DescribeVsDomainReqBpsDataRequest
 * @return DescribeVsDomainReqBpsDataResponse
 */
DescribeVsDomainReqBpsDataResponse Client::describeVsDomainReqBpsData(const DescribeVsDomainReqBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainReqBpsDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainReqTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainReqTrafficDataResponse
 */
DescribeVsDomainReqTrafficDataResponse Client::describeVsDomainReqTrafficDataWithOptions(const DescribeVsDomainReqTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainReqTrafficData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainReqTrafficDataResponse>();
}

/**
 * @param request DescribeVsDomainReqTrafficDataRequest
 * @return DescribeVsDomainReqTrafficDataResponse
 */
DescribeVsDomainReqTrafficDataResponse Client::describeVsDomainReqTrafficData(const DescribeVsDomainReqTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainReqTrafficDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainSnapshotDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainSnapshotDataResponse
 */
DescribeVsDomainSnapshotDataResponse Client::describeVsDomainSnapshotDataWithOptions(const DescribeVsDomainSnapshotDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainSnapshotData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainSnapshotDataResponse>();
}

/**
 * @param request DescribeVsDomainSnapshotDataRequest
 * @return DescribeVsDomainSnapshotDataResponse
 */
DescribeVsDomainSnapshotDataResponse Client::describeVsDomainSnapshotData(const DescribeVsDomainSnapshotDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainSnapshotDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainTrafficDataResponse
 */
DescribeVsDomainTrafficDataResponse Client::describeVsDomainTrafficDataWithOptions(const DescribeVsDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainTrafficData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainTrafficDataResponse>();
}

/**
 * @param request DescribeVsDomainTrafficDataRequest
 * @return DescribeVsDomainTrafficDataResponse
 */
DescribeVsDomainTrafficDataResponse Client::describeVsDomainTrafficData(const DescribeVsDomainTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainTrafficDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsDomainUvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainUvDataResponse
 */
DescribeVsDomainUvDataResponse Client::describeVsDomainUvDataWithOptions(const DescribeVsDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsDomainUvData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsDomainUvDataResponse>();
}

/**
 * @param request DescribeVsDomainUvDataRequest
 * @return DescribeVsDomainUvDataResponse
 */
DescribeVsDomainUvDataResponse Client::describeVsDomainUvData(const DescribeVsDomainUvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainUvDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsPullStreamInfoConfigResponse
 */
DescribeVsPullStreamInfoConfigResponse Client::describeVsPullStreamInfoConfigWithOptions(const DescribeVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsPullStreamInfoConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsPullStreamInfoConfigResponse>();
}

/**
 * @param request DescribeVsPullStreamInfoConfigRequest
 * @return DescribeVsPullStreamInfoConfigResponse
 */
DescribeVsPullStreamInfoConfigResponse Client::describeVsPullStreamInfoConfig(const DescribeVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @param request DescribeVsStreamsNotifyUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsStreamsNotifyUrlConfigResponse
 */
DescribeVsStreamsNotifyUrlConfigResponse Client::describeVsStreamsNotifyUrlConfigWithOptions(const DescribeVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsStreamsNotifyUrlConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsStreamsNotifyUrlConfigResponse>();
}

/**
 * @param request DescribeVsStreamsNotifyUrlConfigRequest
 * @return DescribeVsStreamsNotifyUrlConfigResponse
 */
DescribeVsStreamsNotifyUrlConfigResponse Client::describeVsStreamsNotifyUrlConfig(const DescribeVsStreamsNotifyUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

/**
 * @param request DescribeVsStreamsOnlineListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsStreamsOnlineListResponse
 */
DescribeVsStreamsOnlineListResponse Client::describeVsStreamsOnlineListWithOptions(const DescribeVsStreamsOnlineListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsStreamsOnlineList"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsStreamsOnlineListResponse>();
}

/**
 * @param request DescribeVsStreamsOnlineListRequest
 * @return DescribeVsStreamsOnlineListResponse
 */
DescribeVsStreamsOnlineListResponse Client::describeVsStreamsOnlineList(const DescribeVsStreamsOnlineListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsStreamsOnlineListWithOptions(request, runtime);
}

/**
 * @param request DescribeVsStreamsPublishListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsStreamsPublishListResponse
 */
DescribeVsStreamsPublishListResponse Client::describeVsStreamsPublishListWithOptions(const DescribeVsStreamsPublishListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsStreamsPublishList"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsStreamsPublishListResponse>();
}

/**
 * @param request DescribeVsStreamsPublishListRequest
 * @return DescribeVsStreamsPublishListResponse
 */
DescribeVsStreamsPublishListResponse Client::describeVsStreamsPublishList(const DescribeVsStreamsPublishListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsStreamsPublishListWithOptions(request, runtime);
}

/**
 * @param request DescribeVsTopDomainsByFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsTopDomainsByFlowResponse
 */
DescribeVsTopDomainsByFlowResponse Client::describeVsTopDomainsByFlowWithOptions(const DescribeVsTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsTopDomainsByFlow"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsTopDomainsByFlowResponse>();
}

/**
 * @param request DescribeVsTopDomainsByFlowRequest
 * @return DescribeVsTopDomainsByFlowResponse
 */
DescribeVsTopDomainsByFlowResponse Client::describeVsTopDomainsByFlow(const DescribeVsTopDomainsByFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsTopDomainsByFlowWithOptions(request, runtime);
}

/**
 * @param request DescribeVsUpPeakPublishStreamDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsUpPeakPublishStreamDataResponse
 */
DescribeVsUpPeakPublishStreamDataResponse Client::describeVsUpPeakPublishStreamDataWithOptions(const DescribeVsUpPeakPublishStreamDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasDomainSwitch()) {
    query["DomainSwitch"] = request.domainSwitch();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsUpPeakPublishStreamData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsUpPeakPublishStreamDataResponse>();
}

/**
 * @param request DescribeVsUpPeakPublishStreamDataRequest
 * @return DescribeVsUpPeakPublishStreamDataResponse
 */
DescribeVsUpPeakPublishStreamDataResponse Client::describeVsUpPeakPublishStreamData(const DescribeVsUpPeakPublishStreamDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsUpPeakPublishStreamDataWithOptions(request, runtime);
}

/**
 * @param request DescribeVsUserResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsUserResourcePackageResponse
 */
DescribeVsUserResourcePackageResponse Client::describeVsUserResourcePackageWithOptions(const DescribeVsUserResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsUserResourcePackage"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsUserResourcePackageResponse>();
}

/**
 * @param request DescribeVsUserResourcePackageRequest
 * @return DescribeVsUserResourcePackageResponse
 */
DescribeVsUserResourcePackageResponse Client::describeVsUserResourcePackage(const DescribeVsUserResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsUserResourcePackageWithOptions(request, runtime);
}

/**
 * @param request DescribeVsVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsVerifyContentResponse
 */
DescribeVsVerifyContentResponse Client::describeVsVerifyContentWithOptions(const DescribeVsVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVsVerifyContent"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVsVerifyContentResponse>();
}

/**
 * @param request DescribeVsVerifyContentRequest
 * @return DescribeVsVerifyContentResponse
 */
DescribeVsVerifyContentResponse Client::describeVsVerifyContent(const DescribeVsVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsVerifyContentWithOptions(request, runtime);
}

/**
 * @summary 云应用服务实例与项目解除关联
 *
 * @param tmpReq DisassociateRenderingProjectInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateRenderingProjectInstancesResponse
 */
DisassociateRenderingProjectInstancesResponse Client::disassociateRenderingProjectInstancesWithOptions(const DisassociateRenderingProjectInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DisassociateRenderingProjectInstancesShrinkRequest request = DisassociateRenderingProjectInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenderingInstanceIds()) {
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.renderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.renderingInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateRenderingProjectInstances"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateRenderingProjectInstancesResponse>();
}

/**
 * @summary 云应用服务实例与项目解除关联
 *
 * @param request DisassociateRenderingProjectInstancesRequest
 * @return DisassociateRenderingProjectInstancesResponse
 */
DisassociateRenderingProjectInstancesResponse Client::disassociateRenderingProjectInstances(const DisassociateRenderingProjectInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateRenderingProjectInstancesWithOptions(request, runtime);
}

/**
 * @param request ForbidVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForbidVsStreamResponse
 */
ForbidVsStreamResponse Client::forbidVsStreamWithOptions(const ForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.controlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.liveStreamType();
  }

  if (!!request.hasOneshot()) {
    query["Oneshot"] = request.oneshot();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResumeTime()) {
    query["ResumeTime"] = request.resumeTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ForbidVsStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForbidVsStreamResponse>();
}

/**
 * @param request ForbidVsStreamRequest
 * @return ForbidVsStreamResponse
 */
ForbidVsStreamResponse Client::forbidVsStream(const ForbidVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forbidVsStreamWithOptions(request, runtime);
}

/**
 * @summary 查询命令的执行状态与结果。
 *
 * @param request GetRenderingInstanceCommandsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenderingInstanceCommandsStatusResponse
 */
GetRenderingInstanceCommandsStatusResponse Client::getRenderingInstanceCommandsStatusWithOptions(const GetRenderingInstanceCommandsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCmdId()) {
    query["CmdId"] = request.cmdId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRenderingInstanceCommandsStatus"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRenderingInstanceCommandsStatusResponse>();
}

/**
 * @summary 查询命令的执行状态与结果。
 *
 * @param request GetRenderingInstanceCommandsStatusRequest
 * @return GetRenderingInstanceCommandsStatusResponse
 */
GetRenderingInstanceCommandsStatusResponse Client::getRenderingInstanceCommandsStatus(const GetRenderingInstanceCommandsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenderingInstanceCommandsStatusWithOptions(request, runtime);
}

/**
 * @summary 获取云渲染实例流连接信息，每次流化建联前都需要调用此接口获取最新连接信息
 *
 * @param request GetRenderingInstanceStreamingInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenderingInstanceStreamingInfoResponse
 */
GetRenderingInstanceStreamingInfoResponse Client::getRenderingInstanceStreamingInfoWithOptions(const GetRenderingInstanceStreamingInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRenderingInstanceStreamingInfo"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRenderingInstanceStreamingInfoResponse>();
}

/**
 * @summary 获取云渲染实例流连接信息，每次流化建联前都需要调用此接口获取最新连接信息
 *
 * @param request GetRenderingInstanceStreamingInfoRequest
 * @return GetRenderingInstanceStreamingInfoResponse
 */
GetRenderingInstanceStreamingInfoResponse Client::getRenderingInstanceStreamingInfo(const GetRenderingInstanceStreamingInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenderingInstanceStreamingInfoWithOptions(request, runtime);
}

/**
 * @summary 输出满足特定条件的资源各状态数据量统计值。
 *
 * @param request GetRenderingProjectInstanceStateMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenderingProjectInstanceStateMetricsResponse
 */
GetRenderingProjectInstanceStateMetricsResponse Client::getRenderingProjectInstanceStateMetricsWithOptions(const GetRenderingProjectInstanceStateMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRenderingProjectInstanceStateMetrics"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRenderingProjectInstanceStateMetricsResponse>();
}

/**
 * @summary 输出满足特定条件的资源各状态数据量统计值。
 *
 * @param request GetRenderingProjectInstanceStateMetricsRequest
 * @return GetRenderingProjectInstanceStateMetricsResponse
 */
GetRenderingProjectInstanceStateMetricsResponse Client::getRenderingProjectInstanceStateMetrics(const GetRenderingProjectInstanceStateMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenderingProjectInstanceStateMetricsWithOptions(request, runtime);
}

/**
 * @param request GotoPresetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GotoPresetResponse
 */
GotoPresetResponse Client::gotoPresetWithOptions(const GotoPresetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPresetId()) {
    query["PresetId"] = request.presetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GotoPreset"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GotoPresetResponse>();
}

/**
 * @param request GotoPresetRequest
 * @return GotoPresetResponse
 */
GotoPresetResponse Client::gotoPreset(const GotoPresetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return gotoPresetWithOptions(request, runtime);
}

/**
 * @summary 安装云应用
 *
 * @param tmpReq InstallCloudAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallCloudAppResponse
 */
InstallCloudAppResponse Client::installCloudAppWithOptions(const InstallCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallCloudAppShrinkRequest request = InstallCloudAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenderingInstanceIds()) {
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.renderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.patchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.renderingInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallCloudApp"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallCloudAppResponse>();
}

/**
 * @summary 安装云应用
 *
 * @param request InstallCloudAppRequest
 * @return InstallCloudAppResponse
 */
InstallCloudAppResponse Client::installCloudApp(const InstallCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installCloudAppWithOptions(request, runtime);
}

/**
 * @summary 查询云应用安装信息列表
 *
 * @param request ListCloudAppInstallationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAppInstallationsResponse
 */
ListCloudAppInstallationsResponse Client::listCloudAppInstallationsWithOptions(const ListCloudAppInstallationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudAppInstallations"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudAppInstallationsResponse>();
}

/**
 * @summary 查询云应用安装信息列表
 *
 * @param request ListCloudAppInstallationsRequest
 * @return ListCloudAppInstallationsResponse
 */
ListCloudAppInstallationsResponse Client::listCloudAppInstallations(const ListCloudAppInstallationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAppInstallationsWithOptions(request, runtime);
}

/**
 * @summary 查询一个云应用的Patch列表。
 *
 * @param request ListCloudAppPatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAppPatchesResponse
 */
ListCloudAppPatchesResponse Client::listCloudAppPatchesWithOptions(const ListCloudAppPatchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.patchId();
  }

  if (!!request.hasPatchName()) {
    query["PatchName"] = request.patchName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudAppPatches"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudAppPatchesResponse>();
}

/**
 * @summary 查询一个云应用的Patch列表。
 *
 * @param request ListCloudAppPatchesRequest
 * @return ListCloudAppPatchesResponse
 */
ListCloudAppPatchesResponse Client::listCloudAppPatches(const ListCloudAppPatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAppPatchesWithOptions(request, runtime);
}

/**
 * @summary 查询云应用列表
 *
 * @param request ListCloudAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAppsResponse
 */
ListCloudAppsResponse Client::listCloudAppsWithOptions(const ListCloudAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudApps"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudAppsResponse>();
}

/**
 * @summary 查询云应用列表
 *
 * @param request ListCloudAppsRequest
 * @return ListCloudAppsResponse
 */
ListCloudAppsResponse Client::listCloudApps(const ListCloudAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAppsWithOptions(request, runtime);
}

/**
 * @summary 查询文件的实例推送状态信息列表。
 *
 * @param request ListFilePushStatusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFilePushStatusesResponse
 */
ListFilePushStatusesResponse Client::listFilePushStatusesWithOptions(const ListFilePushStatusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFilePushStatuses"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFilePushStatusesResponse>();
}

/**
 * @summary 查询文件的实例推送状态信息列表。
 *
 * @param request ListFilePushStatusesRequest
 * @return ListFilePushStatusesResponse
 */
ListFilePushStatusesResponse Client::listFilePushStatuses(const ListFilePushStatusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilePushStatusesWithOptions(request, runtime);
}

/**
 * @summary 查询可用文件列表。
 *
 * @param request ListFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFilesWithOptions(const ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFiles"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFilesResponse>();
}

/**
 * @summary 查询可用文件列表。
 *
 * @param request ListFilesRequest
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFiles(const ListFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilesWithOptions(request, runtime);
}

/**
 * @summary 查询公钥信息
 *
 * @param request ListPublicKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublicKeysResponse
 */
ListPublicKeysResponse Client::listPublicKeysWithOptions(const ListPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublicKeys"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPublicKeysResponse>();
}

/**
 * @summary 查询公钥信息
 *
 * @param request ListPublicKeysRequest
 * @return ListPublicKeysResponse
 */
ListPublicKeysResponse Client::listPublicKeys(const ListPublicKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublicKeysWithOptions(request, runtime);
}

/**
 * @summary 查询所有云应用数据包信息，支持分页查询。
 *
 * @param request ListRenderingDataPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingDataPackagesResponse
 */
ListRenderingDataPackagesResponse Client::listRenderingDataPackagesWithOptions(const ListRenderingDataPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.dataPackageId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRenderingDataPackages"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRenderingDataPackagesResponse>();
}

/**
 * @summary 查询所有云应用数据包信息，支持分页查询。
 *
 * @param request ListRenderingDataPackagesRequest
 * @return ListRenderingDataPackagesResponse
 */
ListRenderingDataPackagesResponse Client::listRenderingDataPackages(const ListRenderingDataPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingDataPackagesWithOptions(request, runtime);
}

/**
 * @summary 查询自定义网关
 *
 * @param request ListRenderingInstanceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingInstanceGatewayResponse
 */
ListRenderingInstanceGatewayResponse Client::listRenderingInstanceGatewayWithOptions(const ListRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGatewayInstanceId()) {
    query["GatewayInstanceId"] = request.gatewayInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRenderingInstanceGateway"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRenderingInstanceGatewayResponse>();
}

/**
 * @summary 查询自定义网关
 *
 * @param request ListRenderingInstanceGatewayRequest
 * @return ListRenderingInstanceGatewayResponse
 */
ListRenderingInstanceGatewayResponse Client::listRenderingInstanceGateway(const ListRenderingInstanceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingInstanceGatewayWithOptions(request, runtime);
}

/**
 * @summary 查询所有云渲染实例信息，支持分页查询。
 *
 * @param request ListRenderingInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingInstancesResponse
 */
ListRenderingInstancesResponse Client::listRenderingInstancesWithOptions(const ListRenderingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRenderingInstances"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRenderingInstancesResponse>();
}

/**
 * @summary 查询所有云渲染实例信息，支持分页查询。
 *
 * @param request ListRenderingInstancesRequest
 * @return ListRenderingInstancesResponse
 */
ListRenderingInstancesResponse Client::listRenderingInstances(const ListRenderingInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingInstancesWithOptions(request, runtime);
}

/**
 * @summary 分页查询项目关联的云应用服务实例列表。
 *
 * @description ## 请求说明
 * - 该接口支持通过多种筛选条件（如状态、实例ID等）来查询指定项目下的云应用服务实例。
 *
 * @param request ListRenderingProjectInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingProjectInstancesResponse
 */
ListRenderingProjectInstancesResponse Client::listRenderingProjectInstancesWithOptions(const ListRenderingProjectInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRenderingProjectInstances"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRenderingProjectInstancesResponse>();
}

/**
 * @summary 分页查询项目关联的云应用服务实例列表。
 *
 * @description ## 请求说明
 * - 该接口支持通过多种筛选条件（如状态、实例ID等）来查询指定项目下的云应用服务实例。
 *
 * @param request ListRenderingProjectInstancesRequest
 * @return ListRenderingProjectInstancesResponse
 */
ListRenderingProjectInstancesResponse Client::listRenderingProjectInstances(const ListRenderingProjectInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingProjectInstancesWithOptions(request, runtime);
}

/**
 * @summary 分页查询用户下的云应用服务项目基本信息列表。
 *
 * @description ## 请求说明
 * - 该接口用于分页查询指定用户下的渲染项目基本信息列表。
 * - 可通过 `ProjectId` 和 `ProjectName` 进行过滤查询。
 *
 * @param request ListRenderingProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingProjectsResponse
 */
ListRenderingProjectsResponse Client::listRenderingProjectsWithOptions(const ListRenderingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRenderingProjects"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRenderingProjectsResponse>();
}

/**
 * @summary 分页查询用户下的云应用服务项目基本信息列表。
 *
 * @description ## 请求说明
 * - 该接口用于分页查询指定用户下的渲染项目基本信息列表。
 * - 可通过 `ProjectId` 和 `ProjectName` 进行过滤查询。
 *
 * @param request ListRenderingProjectsRequest
 * @return ListRenderingProjectsResponse
 */
ListRenderingProjectsResponse Client::listRenderingProjects(const ListRenderingProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingProjectsWithOptions(request, runtime);
}

/**
 * @summary 分页查询指定条件下的渲染会话列表。
 *
 * @description ## 请求说明
 * - 该接口支持通过多种参数组合来过滤和分页查询用户的渲染会话列表。
 * - `SessionId` 和 `ClientId` 参数至少需要提供一个，但两者都不是必选的。如果同时提供了两个参数，则将根据这两个参数进行更精确的匹配。
 *
 * @param request ListRenderingSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingSessionsResponse
 */
ListRenderingSessionsResponse Client::listRenderingSessionsWithOptions(const ListRenderingSessionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.patchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRenderingSessions"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRenderingSessionsResponse>();
}

/**
 * @summary 分页查询指定条件下的渲染会话列表。
 *
 * @description ## 请求说明
 * - 该接口支持通过多种参数组合来过滤和分页查询用户的渲染会话列表。
 * - `SessionId` 和 `ClientId` 参数至少需要提供一个，但两者都不是必选的。如果同时提供了两个参数，则将根据这两个参数进行更精确的匹配。
 *
 * @param request ListRenderingSessionsRequest
 * @return ListRenderingSessionsResponse
 */
ListRenderingSessionsResponse Client::listRenderingSessions(const ListRenderingSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingSessionsWithOptions(request, runtime);
}

/**
 * @summary 安全登陆管理
 *
 * @param request ManageLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageLoginResponse
 */
ManageLoginResponse Client::manageLoginWithOptions(const ManageLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.actionName();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.keyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.keyName();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ManageLogin"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageLoginResponse>();
}

/**
 * @summary 安全登陆管理
 *
 * @param request ManageLoginRequest
 * @return ManageLoginResponse
 */
ManageLoginResponse Client::manageLogin(const ManageLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manageLoginWithOptions(request, runtime);
}

/**
 * @param request ModifyDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceResponse
 */
ModifyDeviceResponse Client::modifyDeviceWithOptions(const ModifyDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmMethod()) {
    query["AlarmMethod"] = request.alarmMethod();
  }

  if (!!request.hasAutoDirectory()) {
    query["AutoDirectory"] = request.autoDirectory();
  }

  if (!!request.hasAutoPos()) {
    query["AutoPos"] = request.autoPos();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.autoStart();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.gbId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.latitude();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.longitude();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasPosInterval()) {
    query["PosInterval"] = request.posInterval();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.vendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeviceResponse>();
}

/**
 * @param request ModifyDeviceRequest
 * @return ModifyDeviceResponse
 */
ModifyDeviceResponse Client::modifyDevice(const ModifyDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceWithOptions(request, runtime);
}

/**
 * @param request ModifyDeviceAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceAlarmResponse
 */
ModifyDeviceAlarmResponse Client::modifyDeviceAlarmWithOptions(const ModifyDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmId()) {
    query["AlarmId"] = request.alarmId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDeviceAlarm"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeviceAlarmResponse>();
}

/**
 * @param request ModifyDeviceAlarmRequest
 * @return ModifyDeviceAlarmResponse
 */
ModifyDeviceAlarmResponse Client::modifyDeviceAlarm(const ModifyDeviceAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceAlarmWithOptions(request, runtime);
}

/**
 * @param request ModifyDeviceCaptureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceCaptureResponse
 */
ModifyDeviceCaptureResponse Client::modifyDeviceCaptureWithOptions(const ModifyDeviceCaptureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.image();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDeviceCapture"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeviceCaptureResponse>();
}

/**
 * @param request ModifyDeviceCaptureRequest
 * @return ModifyDeviceCaptureResponse
 */
ModifyDeviceCaptureResponse Client::modifyDeviceCapture(const ModifyDeviceCaptureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceCaptureWithOptions(request, runtime);
}

/**
 * @param request ModifyDeviceChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceChannelsResponse
 */
ModifyDeviceChannelsResponse Client::modifyDeviceChannelsWithOptions(const ModifyDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannels()) {
    query["Channels"] = request.channels();
  }

  if (!!request.hasDeviceStatus()) {
    query["DeviceStatus"] = request.deviceStatus();
  }

  if (!!request.hasDsn()) {
    query["Dsn"] = request.dsn();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDeviceChannels"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeviceChannelsResponse>();
}

/**
 * @param request ModifyDeviceChannelsRequest
 * @return ModifyDeviceChannelsResponse
 */
ModifyDeviceChannelsResponse Client::modifyDeviceChannels(const ModifyDeviceChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceChannelsWithOptions(request, runtime);
}

/**
 * @param request ModifyDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDirectoryResponse
 */
ModifyDirectoryResponse Client::modifyDirectoryWithOptions(const ModifyDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDirectory"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDirectoryResponse>();
}

/**
 * @param request ModifyDirectoryRequest
 * @return ModifyDirectoryResponse
 */
ModifyDirectoryResponse Client::modifyDirectory(const ModifyDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDirectoryWithOptions(request, runtime);
}

/**
 * @param request ModifyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroupWithOptions(const ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInProtocol()) {
    query["InProtocol"] = request.inProtocol();
  }

  if (!!request.hasLazyPull()) {
    query["LazyPull"] = request.lazyPull();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.outProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.playDomain();
  }

  if (!!request.hasPushDomain()) {
    query["PushDomain"] = request.pushDomain();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGroup"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGroupResponse>();
}

/**
 * @param request ModifyGroupRequest
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroup(const ModifyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGroupWithOptions(request, runtime);
}

/**
 * @param request ModifyParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParentPlatformResponse
 */
ModifyParentPlatformResponse Client::modifyParentPlatformWithOptions(const ModifyParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.autoStart();
  }

  if (!!request.hasClientAuth()) {
    query["ClientAuth"] = request.clientAuth();
  }

  if (!!request.hasClientPassword()) {
    query["ClientPassword"] = request.clientPassword();
  }

  if (!!request.hasClientUsername()) {
    query["ClientUsername"] = request.clientUsername();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.gbId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyParentPlatform"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParentPlatformResponse>();
}

/**
 * @param request ModifyParentPlatformRequest
 * @return ModifyParentPlatformResponse
 */
ModifyParentPlatformResponse Client::modifyParentPlatform(const ModifyParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParentPlatformWithOptions(request, runtime);
}

/**
 * @summary 变配云渲染资源实例
 *
 * @param request ModifyRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingInstanceResponse
 */
ModifyRenderingInstanceResponse Client::modifyRenderingInstanceWithOptions(const ModifyRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasRenderingSpec()) {
    query["RenderingSpec"] = request.renderingSpec();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRenderingInstanceResponse>();
}

/**
 * @summary 变配云渲染资源实例
 *
 * @param request ModifyRenderingInstanceRequest
 * @return ModifyRenderingInstanceResponse
 */
ModifyRenderingInstanceResponse Client::modifyRenderingInstance(const ModifyRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary 修改云应用服务实例密码
 *
 * @param request ModifyRenderingInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingInstanceAttributeResponse
 */
ModifyRenderingInstanceAttributeResponse Client::modifyRenderingInstanceAttributeWithOptions(const ModifyRenderingInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRenderingInstanceAttribute"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRenderingInstanceAttributeResponse>();
}

/**
 * @summary 修改云应用服务实例密码
 *
 * @param request ModifyRenderingInstanceAttributeRequest
 * @return ModifyRenderingInstanceAttributeResponse
 */
ModifyRenderingInstanceAttributeResponse Client::modifyRenderingInstanceAttribute(const ModifyRenderingInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改云渲染实例限速带宽
 *
 * @param request ModifyRenderingInstanceBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingInstanceBandwidthResponse
 */
ModifyRenderingInstanceBandwidthResponse Client::modifyRenderingInstanceBandwidthWithOptions(const ModifyRenderingInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxEgressBandwidth()) {
    query["MaxEgressBandwidth"] = request.maxEgressBandwidth();
  }

  if (!!request.hasMaxIngressBandwidth()) {
    query["MaxIngressBandwidth"] = request.maxIngressBandwidth();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRenderingInstanceBandwidth"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRenderingInstanceBandwidthResponse>();
}

/**
 * @summary 修改云渲染实例限速带宽
 *
 * @param request ModifyRenderingInstanceBandwidthRequest
 * @return ModifyRenderingInstanceBandwidthResponse
 */
ModifyRenderingInstanceBandwidthResponse Client::modifyRenderingInstanceBandwidth(const ModifyRenderingInstanceBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingInstanceBandwidthWithOptions(request, runtime);
}

/**
 * @param request ModifyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateResponse
 */
ModifyTemplateResponse Client::modifyTemplateWithOptions(const ModifyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.callback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.fileFormat();
  }

  if (!!request.hasFlv()) {
    query["Flv"] = request.flv();
  }

  if (!!request.hasHlsM3u8()) {
    query["HlsM3u8"] = request.hlsM3u8();
  }

  if (!!request.hasHlsTs()) {
    query["HlsTs"] = request.hlsTs();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasJpgOnDemand()) {
    query["JpgOnDemand"] = request.jpgOnDemand();
  }

  if (!!request.hasJpgOverwrite()) {
    query["JpgOverwrite"] = request.jpgOverwrite();
  }

  if (!!request.hasJpgSequence()) {
    query["JpgSequence"] = request.jpgSequence();
  }

  if (!!request.hasMp4()) {
    query["Mp4"] = request.mp4();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.ossFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.retention();
  }

  if (!!request.hasTransConfigsJSON()) {
    query["TransConfigsJSON"] = request.transConfigsJSON();
  }

  if (!!request.hasTrigger()) {
    query["Trigger"] = request.trigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTemplateResponse>();
}

/**
 * @param request ModifyTemplateRequest
 * @return ModifyTemplateResponse
 */
ModifyTemplateResponse Client::modifyTemplate(const ModifyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateWithOptions(request, runtime);
}

/**
 * @param request OpenVsServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenVsServiceResponse
 */
OpenVsServiceResponse Client::openVsServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "OpenVsService"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenVsServiceResponse>();
}

/**
 * @return OpenVsServiceResponse
 */
OpenVsServiceResponse Client::openVsService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openVsServiceWithOptions(runtime);
}

/**
 * @summary 预推文件到云渲染实例。
 *
 * @param request PushFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushFileResponse
 */
PushFileResponse Client::pushFileWithOptions(const PushFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushFile"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushFileResponse>();
}

/**
 * @summary 预推文件到云渲染实例。
 *
 * @param request PushFileRequest
 * @return PushFileResponse
 */
PushFileResponse Client::pushFile(const PushFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushFileWithOptions(request, runtime);
}

/**
 * @summary 重启云渲染实例
 *
 * @param request RebootRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootRenderingInstanceResponse
 */
RebootRenderingInstanceResponse Client::rebootRenderingInstanceWithOptions(const RebootRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootRenderingInstanceResponse>();
}

/**
 * @summary 重启云渲染实例
 *
 * @param request RebootRenderingInstanceRequest
 * @return RebootRenderingInstanceResponse
 */
RebootRenderingInstanceResponse Client::rebootRenderingInstance(const RebootRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary 云应用服务实例主机重启
 *
 * @param tmpReq RebootRenderingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootRenderingServerResponse
 */
RebootRenderingServerResponse Client::rebootRenderingServerWithOptions(const RebootRenderingServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RebootRenderingServerShrinkRequest request = RebootRenderingServerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenderingInstanceIds()) {
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.renderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.renderingInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootRenderingServer"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootRenderingServerResponse>();
}

/**
 * @summary 云应用服务实例主机重启
 *
 * @param request RebootRenderingServerRequest
 * @return RebootRenderingServerResponse
 */
RebootRenderingServerResponse Client::rebootRenderingServer(const RebootRenderingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootRenderingServerWithOptions(request, runtime);
}

/**
 * @summary 恢复数据到云渲染实例
 *
 * @param request RecoverRenderingDataPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverRenderingDataPackageResponse
 */
RecoverRenderingDataPackageResponse Client::recoverRenderingDataPackageWithOptions(const RecoverRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.dataPackageId();
  }

  if (!!request.hasLoadMode()) {
    query["LoadMode"] = request.loadMode();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecoverRenderingDataPackage"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoverRenderingDataPackageResponse>();
}

/**
 * @summary 恢复数据到云渲染实例
 *
 * @param request RecoverRenderingDataPackageRequest
 * @return RecoverRenderingDataPackageResponse
 */
RecoverRenderingDataPackageResponse Client::recoverRenderingDataPackage(const RecoverRenderingDataPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoverRenderingDataPackageWithOptions(request, runtime);
}

/**
 * @summary 更新实例流连接信息
 *
 * @param tmpReq RefreshRenderingInstanceStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshRenderingInstanceStreamingResponse
 */
RefreshRenderingInstanceStreamingResponse Client::refreshRenderingInstanceStreamingWithOptions(const RefreshRenderingInstanceStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RefreshRenderingInstanceStreamingShrinkRequest request = RefreshRenderingInstanceStreamingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientInfo()) {
    request.setClientInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientInfo(), "ClientInfo", "json"));
  }

  json query = {};
  if (!!request.hasClientInfoShrink()) {
    query["ClientInfo"] = request.clientInfoShrink();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshRenderingInstanceStreaming"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshRenderingInstanceStreamingResponse>();
}

/**
 * @summary 更新实例流连接信息
 *
 * @param request RefreshRenderingInstanceStreamingRequest
 * @return RefreshRenderingInstanceStreamingResponse
 */
RefreshRenderingInstanceStreamingResponse Client::refreshRenderingInstanceStreaming(const RefreshRenderingInstanceStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshRenderingInstanceStreamingWithOptions(request, runtime);
}

/**
 * @summary 释放云渲染数据包
 *
 * @param request ReleaseRenderingDataPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseRenderingDataPackageResponse
 */
ReleaseRenderingDataPackageResponse Client::releaseRenderingDataPackageWithOptions(const ReleaseRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.dataPackageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseRenderingDataPackage"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseRenderingDataPackageResponse>();
}

/**
 * @summary 释放云渲染数据包
 *
 * @param request ReleaseRenderingDataPackageRequest
 * @return ReleaseRenderingDataPackageResponse
 */
ReleaseRenderingDataPackageResponse Client::releaseRenderingDataPackage(const ReleaseRenderingDataPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseRenderingDataPackageWithOptions(request, runtime);
}

/**
 * @summary 释放云渲染实例
 *
 * @param request ReleaseRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseRenderingInstanceResponse
 */
ReleaseRenderingInstanceResponse Client::releaseRenderingInstanceWithOptions(const ReleaseRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseRenderingInstanceResponse>();
}

/**
 * @summary 释放云渲染实例
 *
 * @param request ReleaseRenderingInstanceRequest
 * @return ReleaseRenderingInstanceResponse
 */
ReleaseRenderingInstanceResponse Client::releaseRenderingInstance(const ReleaseRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary 续费云渲染资源实例
 *
 * @param request RenewRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewRenderingInstanceResponse
 */
RenewRenderingInstanceResponse Client::renewRenderingInstanceWithOptions(const RenewRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewRenderingInstanceResponse>();
}

/**
 * @summary 续费云渲染资源实例
 *
 * @param request RenewRenderingInstanceRequest
 * @return RenewRenderingInstanceResponse
 */
RenewRenderingInstanceResponse Client::renewRenderingInstance(const RenewRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary 重置云渲染实例
 *
 * @param request ResetRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetRenderingInstanceResponse
 */
ResetRenderingInstanceResponse Client::resetRenderingInstanceWithOptions(const ResetRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.actionName();
  }

  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.dataPackageId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetRenderingInstance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetRenderingInstanceResponse>();
}

/**
 * @summary 重置云渲染实例
 *
 * @param request ResetRenderingInstanceRequest
 * @return ResetRenderingInstanceResponse
 */
ResetRenderingInstanceResponse Client::resetRenderingInstance(const ResetRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetRenderingInstanceWithOptions(request, runtime);
}

/**
 * @param request ResumeVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeVsStreamResponse
 */
ResumeVsStreamResponse Client::resumeVsStreamWithOptions(const ResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.controlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.liveStreamType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeVsStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeVsStreamResponse>();
}

/**
 * @param request ResumeVsStreamRequest
 * @return ResumeVsStreamResponse
 */
ResumeVsStreamResponse Client::resumeVsStream(const ResumeVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeVsStreamWithOptions(request, runtime);
}

/**
 * @summary 下发shell命令，支持同步/异步响应命令。
 *
 * @param request SendRenderingInstanceCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendRenderingInstanceCommandsResponse
 */
SendRenderingInstanceCommandsResponse Client::sendRenderingInstanceCommandsWithOptions(const SendRenderingInstanceCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  json body = {};
  if (!!request.hasCommands()) {
    body["Commands"] = request.commands();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendRenderingInstanceCommands"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendRenderingInstanceCommandsResponse>();
}

/**
 * @summary 下发shell命令，支持同步/异步响应命令。
 *
 * @param request SendRenderingInstanceCommandsRequest
 * @return SendRenderingInstanceCommandsResponse
 */
SendRenderingInstanceCommandsResponse Client::sendRenderingInstanceCommands(const SendRenderingInstanceCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendRenderingInstanceCommandsWithOptions(request, runtime);
}

/**
 * @param request SetPresetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPresetResponse
 */
SetPresetResponse Client::setPresetWithOptions(const SetPresetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPresetId()) {
    query["PresetId"] = request.presetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPreset"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPresetResponse>();
}

/**
 * @param request SetPresetRequest
 * @return SetPresetResponse
 */
SetPresetResponse Client::setPreset(const SetPresetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPresetWithOptions(request, runtime);
}

/**
 * @param request SetVsDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVsDomainCertificateResponse
 */
SetVsDomainCertificateResponse Client::setVsDomainCertificateWithOptions(const SetVsDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.certType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasForceSet()) {
    query["ForceSet"] = request.forceSet();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.SSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.SSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.SSLPub();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVsDomainCertificate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVsDomainCertificateResponse>();
}

/**
 * @param request SetVsDomainCertificateRequest
 * @return SetVsDomainCertificateResponse
 */
SetVsDomainCertificateResponse Client::setVsDomainCertificate(const SetVsDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVsDomainCertificateWithOptions(request, runtime);
}

/**
 * @param request SetVsStreamsNotifyUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVsStreamsNotifyUrlConfigResponse
 */
SetVsStreamsNotifyUrlConfigResponse Client::setVsStreamsNotifyUrlConfigWithOptions(const SetVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.authKey();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.authType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.notifyUrl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVsStreamsNotifyUrlConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVsStreamsNotifyUrlConfigResponse>();
}

/**
 * @param request SetVsStreamsNotifyUrlConfigRequest
 * @return SetVsStreamsNotifyUrlConfigResponse
 */
SetVsStreamsNotifyUrlConfigResponse Client::setVsStreamsNotifyUrlConfig(const SetVsStreamsNotifyUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

/**
 * @param request StartDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDeviceResponse
 */
StartDeviceResponse Client::startDeviceWithOptions(const StartDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDeviceResponse>();
}

/**
 * @param request StartDeviceRequest
 * @return StartDeviceResponse
 */
StartDeviceResponse Client::startDevice(const StartDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDeviceWithOptions(request, runtime);
}

/**
 * @param request StartParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartParentPlatformResponse
 */
StartParentPlatformResponse Client::startParentPlatformWithOptions(const StartParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartParentPlatform"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartParentPlatformResponse>();
}

/**
 * @param request StartParentPlatformRequest
 * @return StartParentPlatformResponse
 */
StartParentPlatformResponse Client::startParentPlatform(const StartParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startParentPlatformWithOptions(request, runtime);
}

/**
 * @param request StartPublishStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPublishStreamResponse
 */
StartPublishStreamResponse Client::startPublishStreamWithOptions(const StartPublishStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPublishUrl()) {
    query["PublishUrl"] = request.publishUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartPublishStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPublishStreamResponse>();
}

/**
 * @param request StartPublishStreamRequest
 * @return StartPublishStreamResponse
 */
StartPublishStreamResponse Client::startPublishStream(const StartPublishStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPublishStreamWithOptions(request, runtime);
}

/**
 * @param request StartRecordStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRecordStreamResponse
 */
StartRecordStreamResponse Client::startRecordStreamWithOptions(const StartRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.app();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.playDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRecordStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRecordStreamResponse>();
}

/**
 * @param request StartRecordStreamRequest
 * @return StartRecordStreamResponse
 */
StartRecordStreamResponse Client::startRecordStream(const StartRecordStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRecordStreamWithOptions(request, runtime);
}

/**
 * @summary 调度一个空闲云应用服务实例，并完成服务启动。
 *
 * @param tmpReq StartRenderingSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRenderingSessionResponse
 */
StartRenderingSessionResponse Client::startRenderingSessionWithOptions(const StartRenderingSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartRenderingSessionShrinkRequest request = StartRenderingSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientParams()) {
    request.setClientParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientParams(), "ClientParams", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientParamsShrink()) {
    query["ClientParams"] = request.clientParamsShrink();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.patchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRenderingSession"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRenderingSessionResponse>();
}

/**
 * @summary 调度一个空闲云应用服务实例，并完成服务启动。
 *
 * @param request StartRenderingSessionRequest
 * @return StartRenderingSessionResponse
 */
StartRenderingSessionResponse Client::startRenderingSession(const StartRenderingSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRenderingSessionWithOptions(request, runtime);
}

/**
 * @param request StartStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartStreamResponse
 */
StartStreamResponse Client::startStreamWithOptions(const StartStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartStreamResponse>();
}

/**
 * @param request StartStreamRequest
 * @return StartStreamResponse
 */
StartStreamResponse Client::startStream(const StartStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startStreamWithOptions(request, runtime);
}

/**
 * @param request StartTransferStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTransferStreamResponse
 */
StartTransferStreamResponse Client::startTransferStreamWithOptions(const StartTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTranscode()) {
    query["Transcode"] = request.transcode();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartTransferStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTransferStreamResponse>();
}

/**
 * @param request StartTransferStreamRequest
 * @return StartTransferStreamResponse
 */
StartTransferStreamResponse Client::startTransferStream(const StartTransferStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTransferStreamWithOptions(request, runtime);
}

/**
 * @param request StopAdjustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAdjustResponse
 */
StopAdjustResponse Client::stopAdjustWithOptions(const StopAdjustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFocus()) {
    query["Focus"] = request.focus();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIris()) {
    query["Iris"] = request.iris();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAdjust"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAdjustResponse>();
}

/**
 * @param request StopAdjustRequest
 * @return StopAdjustResponse
 */
StopAdjustResponse Client::stopAdjust(const StopAdjustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAdjustWithOptions(request, runtime);
}

/**
 * @param request StopDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDeviceResponse
 */
StopDeviceResponse Client::stopDeviceWithOptions(const StopDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDeviceResponse>();
}

/**
 * @param request StopDeviceRequest
 * @return StopDeviceResponse
 */
StopDeviceResponse Client::stopDevice(const StopDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDeviceWithOptions(request, runtime);
}

/**
 * @param request StopMoveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMoveResponse
 */
StopMoveResponse Client::stopMoveWithOptions(const StopMoveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPan()) {
    query["Pan"] = request.pan();
  }

  if (!!request.hasTilt()) {
    query["Tilt"] = request.tilt();
  }

  if (!!request.hasZoom()) {
    query["Zoom"] = request.zoom();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopMove"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMoveResponse>();
}

/**
 * @param request StopMoveRequest
 * @return StopMoveResponse
 */
StopMoveResponse Client::stopMove(const StopMoveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopMoveWithOptions(request, runtime);
}

/**
 * @param request StopPublishStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopPublishStreamResponse
 */
StopPublishStreamResponse Client::stopPublishStreamWithOptions(const StopPublishStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopPublishStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPublishStreamResponse>();
}

/**
 * @param request StopPublishStreamRequest
 * @return StopPublishStreamResponse
 */
StopPublishStreamResponse Client::stopPublishStream(const StopPublishStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopPublishStreamWithOptions(request, runtime);
}

/**
 * @param request StopRecordStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRecordStreamResponse
 */
StopRecordStreamResponse Client::stopRecordStreamWithOptions(const StopRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.app();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.playDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRecordStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRecordStreamResponse>();
}

/**
 * @param request StopRecordStreamRequest
 * @return StopRecordStreamResponse
 */
StopRecordStreamResponse Client::stopRecordStream(const StopRecordStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRecordStreamWithOptions(request, runtime);
}

/**
 * @summary 关闭指定的云应用服务会话并回收相关实例资源。
 *
 * @description ## 请求说明
 *
 * @param request StopRenderingSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRenderingSessionResponse
 */
StopRenderingSessionResponse Client::stopRenderingSessionWithOptions(const StopRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRenderingSession"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRenderingSessionResponse>();
}

/**
 * @summary 关闭指定的云应用服务会话并回收相关实例资源。
 *
 * @description ## 请求说明
 *
 * @param request StopRenderingSessionRequest
 * @return StopRenderingSessionResponse
 */
StopRenderingSessionResponse Client::stopRenderingSession(const StopRenderingSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRenderingSessionWithOptions(request, runtime);
}

/**
 * @param request StopStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopStreamResponse
 */
StopStreamResponse Client::stopStreamWithOptions(const StopStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopStreamResponse>();
}

/**
 * @param request StopStreamRequest
 * @return StopStreamResponse
 */
StopStreamResponse Client::stopStream(const StopStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopStreamWithOptions(request, runtime);
}

/**
 * @param request StopTransferStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTransferStreamResponse
 */
StopTransferStreamResponse Client::stopTransferStreamWithOptions(const StopTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTranscode()) {
    query["Transcode"] = request.transcode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTransferStream"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTransferStreamResponse>();
}

/**
 * @param request StopTransferStreamRequest
 * @return StopTransferStreamResponse
 */
StopTransferStreamResponse Client::stopTransferStream(const StopTransferStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTransferStreamWithOptions(request, runtime);
}

/**
 * @param request SyncCatalogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncCatalogsResponse
 */
SyncCatalogsResponse Client::syncCatalogsWithOptions(const SyncCatalogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncCatalogs"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncCatalogsResponse>();
}

/**
 * @param request SyncCatalogsRequest
 * @return SyncCatalogsResponse
 */
SyncCatalogsResponse Client::syncCatalogs(const SyncCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncCatalogsWithOptions(request, runtime);
}

/**
 * @param request UnbindDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDirectoryResponse
 */
UnbindDirectoryResponse Client::unbindDirectoryWithOptions(const UnbindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindDirectory"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDirectoryResponse>();
}

/**
 * @param request UnbindDirectoryRequest
 * @return UnbindDirectoryResponse
 */
UnbindDirectoryResponse Client::unbindDirectory(const UnbindDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDirectoryWithOptions(request, runtime);
}

/**
 * @param request UnbindParentPlatformDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindParentPlatformDeviceResponse
 */
UnbindParentPlatformDeviceResponse Client::unbindParentPlatformDeviceWithOptions(const UnbindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.parentPlatformId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindParentPlatformDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindParentPlatformDeviceResponse>();
}

/**
 * @param request UnbindParentPlatformDeviceRequest
 * @return UnbindParentPlatformDeviceResponse
 */
UnbindParentPlatformDeviceResponse Client::unbindParentPlatformDevice(const UnbindParentPlatformDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindParentPlatformDeviceWithOptions(request, runtime);
}

/**
 * @param request UnbindPurchasedDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPurchasedDeviceResponse
 */
UnbindPurchasedDeviceResponse Client::unbindPurchasedDeviceWithOptions(const UnbindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindPurchasedDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindPurchasedDeviceResponse>();
}

/**
 * @param request UnbindPurchasedDeviceRequest
 * @return UnbindPurchasedDeviceResponse
 */
UnbindPurchasedDeviceResponse Client::unbindPurchasedDevice(const UnbindPurchasedDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPurchasedDeviceWithOptions(request, runtime);
}

/**
 * @param request UnbindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindTemplateResponse
 */
UnbindTemplateResponse Client::unbindTemplateWithOptions(const UnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindTemplate"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindTemplateResponse>();
}

/**
 * @param request UnbindTemplateRequest
 * @return UnbindTemplateResponse
 */
UnbindTemplateResponse Client::unbindTemplate(const UnbindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindTemplateWithOptions(request, runtime);
}

/**
 * @summary 卸载云应用
 *
 * @param tmpReq UninstallCloudAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallCloudAppResponse
 */
UninstallCloudAppResponse Client::uninstallCloudAppWithOptions(const UninstallCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UninstallCloudAppShrinkRequest request = UninstallCloudAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenderingInstanceIds()) {
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.renderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.patchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.renderingInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallCloudApp"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallCloudAppResponse>();
}

/**
 * @summary 卸载云应用
 *
 * @param request UninstallCloudAppRequest
 * @return UninstallCloudAppResponse
 */
UninstallCloudAppResponse Client::uninstallCloudApp(const UninstallCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallCloudAppWithOptions(request, runtime);
}

/**
 * @param request UnlockDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockDeviceResponse
 */
UnlockDeviceResponse Client::unlockDeviceWithOptions(const UnlockDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockDevice"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockDeviceResponse>();
}

/**
 * @param request UnlockDeviceRequest
 * @return UnlockDeviceResponse
 */
UnlockDeviceResponse Client::unlockDevice(const UnlockDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockDeviceWithOptions(request, runtime);
}

/**
 * @summary 更新云应用信息
 *
 * @param tmpReq UpdateCloudAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudAppInfoResponse
 */
UpdateCloudAppInfoResponse Client::updateCloudAppInfoWithOptions(const UpdateCloudAppInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCloudAppInfoShrinkRequest request = UpdateCloudAppInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPatch()) {
    request.setPatchShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.patch(), "Patch", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPatchShrink()) {
    query["Patch"] = request.patchShrink();
  }

  if (!!request.hasStablePatchId()) {
    query["StablePatchId"] = request.stablePatchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudAppInfo"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudAppInfoResponse>();
}

/**
 * @summary 更新云应用信息
 *
 * @param request UpdateCloudAppInfoRequest
 * @return UpdateCloudAppInfoResponse
 */
UpdateCloudAppInfoResponse Client::updateCloudAppInfo(const UpdateCloudAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudAppInfoWithOptions(request, runtime);
}

/**
 * @summary 更新文件信息。
 *
 * @param request UpdateFileInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileInfoResponse
 */
UpdateFileInfoResponse Client::updateFileInfoWithOptions(const UpdateFileInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFileInfo"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileInfoResponse>();
}

/**
 * @summary 更新文件信息。
 *
 * @param request UpdateFileInfoRequest
 * @return UpdateFileInfoResponse
 */
UpdateFileInfoResponse Client::updateFileInfo(const UpdateFileInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileInfoWithOptions(request, runtime);
}

/**
 * @summary 更新云渲染实例配置参数
 *
 * @param tmpReq UpdateRenderingInstanceConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRenderingInstanceConfigurationResponse
 */
UpdateRenderingInstanceConfigurationResponse Client::updateRenderingInstanceConfigurationWithOptions(const UpdateRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRenderingInstanceConfigurationShrinkRequest request = UpdateRenderingInstanceConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfiguration()) {
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configuration(), "Configuration", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  json body = {};
  if (!!request.hasConfigurationShrink()) {
    body["Configuration"] = request.configurationShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRenderingInstanceConfiguration"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRenderingInstanceConfigurationResponse>();
}

/**
 * @summary 更新云渲染实例配置参数
 *
 * @param request UpdateRenderingInstanceConfigurationRequest
 * @return UpdateRenderingInstanceConfigurationResponse
 */
UpdateRenderingInstanceConfigurationResponse Client::updateRenderingInstanceConfiguration(const UpdateRenderingInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRenderingInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary 更新实例设置
 *
 * @param tmpReq UpdateRenderingInstanceSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRenderingInstanceSettingsResponse
 */
UpdateRenderingInstanceSettingsResponse Client::updateRenderingInstanceSettingsWithOptions(const UpdateRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRenderingInstanceSettingsShrinkRequest request = UpdateRenderingInstanceSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSettings()) {
    request.setSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.settings(), "Settings", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.renderingInstanceId();
  }

  if (!!request.hasSettingsShrink()) {
    query["Settings"] = request.settingsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRenderingInstanceSettings"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRenderingInstanceSettingsResponse>();
}

/**
 * @summary 更新实例设置
 *
 * @param request UpdateRenderingInstanceSettingsRequest
 * @return UpdateRenderingInstanceSettingsResponse
 */
UpdateRenderingInstanceSettingsResponse Client::updateRenderingInstanceSettings(const UpdateRenderingInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRenderingInstanceSettingsWithOptions(request, runtime);
}

/**
 * @summary 更新一个项目的属性信息
 *
 * @param tmpReq UpdateRenderingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRenderingProjectResponse
 */
UpdateRenderingProjectResponse Client::updateRenderingProjectWithOptions(const UpdateRenderingProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRenderingProjectShrinkRequest request = UpdateRenderingProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionAttribs()) {
    request.setSessionAttribsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sessionAttribs(), "SessionAttribs", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSessionAttribsShrink()) {
    query["SessionAttribs"] = request.sessionAttribsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRenderingProject"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRenderingProjectResponse>();
}

/**
 * @summary 更新一个项目的属性信息
 *
 * @param request UpdateRenderingProjectRequest
 * @return UpdateRenderingProjectResponse
 */
UpdateRenderingProjectResponse Client::updateRenderingProject(const UpdateRenderingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRenderingProjectWithOptions(request, runtime);
}

/**
 * @param request UpdateVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVsPullStreamInfoConfigResponse
 */
UpdateVsPullStreamInfoConfigResponse Client::updateVsPullStreamInfoConfigWithOptions(const UpdateVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlways()) {
    query["Always"] = request.always();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceUrl()) {
    query["SourceUrl"] = request.sourceUrl();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVsPullStreamInfoConfig"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVsPullStreamInfoConfigResponse>();
}

/**
 * @param request UpdateVsPullStreamInfoConfigRequest
 * @return UpdateVsPullStreamInfoConfigResponse
 */
UpdateVsPullStreamInfoConfigResponse Client::updateVsPullStreamInfoConfig(const UpdateVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @summary 应用上架
 *
 * @param request UploadCloudAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadCloudAppResponse
 */
UploadCloudAppResponse Client::uploadCloudAppWithOptions(const UploadCloudAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.appVersion();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDownloadUrl()) {
    query["DownloadUrl"] = request.downloadUrl();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.md5();
  }

  if (!!request.hasPkgFormat()) {
    query["PkgFormat"] = request.pkgFormat();
  }

  if (!!request.hasPkgType()) {
    query["PkgType"] = request.pkgType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadCloudApp"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadCloudAppResponse>();
}

/**
 * @summary 应用上架
 *
 * @param request UploadCloudAppRequest
 * @return UploadCloudAppResponse
 */
UploadCloudAppResponse Client::uploadCloudApp(const UploadCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadCloudAppWithOptions(request, runtime);
}

/**
 * @summary 文件上传
 *
 * @param request UploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFileWithOptions(const UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.md5();
  }

  if (!!request.hasOriginUrl()) {
    query["OriginUrl"] = request.originUrl();
  }

  if (!!request.hasTargetPath()) {
    query["TargetPath"] = request.targetPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadFile"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadFileResponse>();
}

/**
 * @summary 文件上传
 *
 * @param request UploadFileRequest
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFile(const UploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadFileWithOptions(request, runtime);
}

/**
 * @summary 上传公钥，用于安全登陆鉴权。
 *
 * @param request UploadPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadPublicKeyResponse
 */
UploadPublicKeyResponse Client::uploadPublicKeyWithOptions(const UploadPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.keyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.keyName();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.keyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadPublicKey"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadPublicKeyResponse>();
}

/**
 * @summary 上传公钥，用于安全登陆鉴权。
 *
 * @param request UploadPublicKeyRequest
 * @return UploadPublicKeyResponse
 */
UploadPublicKeyResponse Client::uploadPublicKey(const UploadPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadPublicKeyWithOptions(request, runtime);
}

/**
 * @param request VerifyVsDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyVsDomainOwnerResponse
 */
VerifyVsDomainOwnerResponse Client::verifyVsDomainOwnerWithOptions(const VerifyVsDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyVsDomainOwner"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyVsDomainOwnerResponse>();
}

/**
 * @param request VerifyVsDomainOwnerRequest
 * @return VerifyVsDomainOwnerResponse
 */
VerifyVsDomainOwnerResponse Client::verifyVsDomainOwner(const VerifyVsDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyVsDomainOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Vs20181212