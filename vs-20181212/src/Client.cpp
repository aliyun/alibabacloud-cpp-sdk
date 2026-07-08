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
  this->_endpointMap = json({
    {"cn-shenzhen" , "vs.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "vs.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "vs.cn-qingdao.aliyuncs.com"},
    {"cn-beijing" , "vs.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds one or more instances to a specified cluster.
 *
 * @description ## Usage notes
 * - **HiveId** is a required parameter that specifies the ID of the target cluster.
 * - **InstanceIds** is a required parameter that specifies a list of instance IDs to add.
 * - Adding an instance that already exists in the target cluster returns an error message.
 * - The response includes lists of successful and failed instances. This allows you to verify which instances were added and review the reasons for any failures.
 *
 * @param tmpReq AddHiveEdgeWorkersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHiveEdgeWorkersResponse
 */
AddHiveEdgeWorkersResponse Client::addHiveEdgeWorkersWithOptions(const AddHiveEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddHiveEdgeWorkersShrinkRequest request = AddHiveEdgeWorkersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddHiveEdgeWorkers"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddHiveEdgeWorkersResponse>();
}

/**
 * @summary Adds one or more instances to a specified cluster.
 *
 * @description ## Usage notes
 * - **HiveId** is a required parameter that specifies the ID of the target cluster.
 * - **InstanceIds** is a required parameter that specifies a list of instance IDs to add.
 * - Adding an instance that already exists in the target cluster returns an error message.
 * - The response includes lists of successful and failed instances. This allows you to verify which instances were added and review the reasons for any failures.
 *
 * @param request AddHiveEdgeWorkersRequest
 * @return AddHiveEdgeWorkersResponse
 */
AddHiveEdgeWorkersResponse Client::addHiveEdgeWorkers(const AddHiveEdgeWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHiveEdgeWorkersWithOptions(request, runtime);
}

/**
 * @summary Adds a stream pulling configuration.
 *
 * @param request AddVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVsPullStreamInfoConfigResponse
 */
AddVsPullStreamInfoConfigResponse Client::addVsPullStreamInfoConfigWithOptions(const AddVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlways()) {
    query["Always"] = request.getAlways();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceUrl()) {
    query["SourceUrl"] = request.getSourceUrl();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Adds a stream pulling configuration.
 *
 * @param request AddVsPullStreamInfoConfigRequest
 * @return AddVsPullStreamInfoConfigResponse
 */
AddVsPullStreamInfoConfigResponse Client::addVsPullStreamInfoConfig(const AddVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @summary Associates cloud application service instances with a project.
 *
 * @description ## Request description
 * - This operation associates instances that meet specific conditions with a specified project.
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
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.getRenderingInstanceIdsShrink();
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
 * @summary Associates cloud application service instances with a project.
 *
 * @description ## Request description
 * - This operation associates instances that meet specific conditions with a specified project.
 *
 * @param request AssociateRenderingProjectInstancesRequest
 * @return AssociateRenderingProjectInstancesResponse
 */
AssociateRenderingProjectInstancesResponse Client::associateRenderingProjectInstances(const AssociateRenderingProjectInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateRenderingProjectInstancesWithOptions(request, runtime);
}

/**
 * @summary Binds multiple devices to directories in a single operation.
 *
 * @param request BatchBindDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindDirectoriesResponse
 */
BatchBindDirectoriesResponse Client::batchBindDirectoriesWithOptions(const BatchBindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Binds multiple devices to directories in a single operation.
 *
 * @param request BatchBindDirectoriesRequest
 * @return BatchBindDirectoriesResponse
 */
BatchBindDirectoriesResponse Client::batchBindDirectories(const BatchBindDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Binds multiple devices to a parent platform for push in batches.
 *
 * @param request BatchBindParentPlatformDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindParentPlatformDevicesResponse
 */
BatchBindParentPlatformDevicesResponse Client::batchBindParentPlatformDevicesWithOptions(const BatchBindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.getParentPlatformId();
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
 * @summary Binds multiple devices to a parent platform for push in batches.
 *
 * @param request BatchBindParentPlatformDevicesRequest
 * @return BatchBindParentPlatformDevicesResponse
 */
BatchBindParentPlatformDevicesResponse Client::batchBindParentPlatformDevices(const BatchBindParentPlatformDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindParentPlatformDevicesWithOptions(request, runtime);
}

/**
 * @summary Binds multiple purchased devices.
 *
 * @param request BatchBindPurchasedDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindPurchasedDevicesResponse
 */
BatchBindPurchasedDevicesResponse Client::batchBindPurchasedDevicesWithOptions(const BatchBindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
 * @summary Binds multiple purchased devices.
 *
 * @param request BatchBindPurchasedDevicesRequest
 * @return BatchBindPurchasedDevicesResponse
 */
BatchBindPurchasedDevicesResponse Client::batchBindPurchasedDevices(const BatchBindPurchasedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindPurchasedDevicesWithOptions(request, runtime);
}

/**
 * @summary Bind templates to multiple specified instances, such as instances bound to spaces and streams.
 *
 * @param request BatchBindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindTemplateResponse
 */
BatchBindTemplateResponse Client::batchBindTemplateWithOptions(const BatchBindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyAll()) {
    query["ApplyAll"] = request.getApplyAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.getReplace();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Bind templates to multiple specified instances, such as instances bound to spaces and streams.
 *
 * @param request BatchBindTemplateRequest
 * @return BatchBindTemplateResponse
 */
BatchBindTemplateResponse Client::batchBindTemplate(const BatchBindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindTemplateWithOptions(request, runtime);
}

/**
 * @summary Binds multiple templates in a single operation.
 *
 * @param request BatchBindTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchBindTemplatesResponse
 */
BatchBindTemplatesResponse Client::batchBindTemplatesWithOptions(const BatchBindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyAll()) {
    query["ApplyAll"] = request.getApplyAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.getReplace();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Binds multiple templates in a single operation.
 *
 * @param request BatchBindTemplatesRequest
 * @return BatchBindTemplatesResponse
 */
BatchBindTemplatesResponse Client::batchBindTemplates(const BatchBindTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchBindTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves screenshots of cloud application service instances.
 *
 * @description ## Request description
 * - **Authentication**: Requests must include the `AliUid` parameter for identity verification.
 * - **Instance specification**: Use `RenderingInstanceIds` to specify the instances to capture screenshots from.
 * - **Screenshot quality**: Use the `Quality` parameter to set the image quality of screenshots. The default value is 75 (if not configured). Valid values: 1 to 100.
 * - **Response handling**: The response contains lists of successful and failed instances with related information, including download URLs and screenshot completion times.
 *
 * @param tmpReq BatchCaptureRenderingInstanceScreenshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCaptureRenderingInstanceScreenshotResponse
 */
BatchCaptureRenderingInstanceScreenshotResponse Client::batchCaptureRenderingInstanceScreenshotWithOptions(const BatchCaptureRenderingInstanceScreenshotRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCaptureRenderingInstanceScreenshotShrinkRequest request = BatchCaptureRenderingInstanceScreenshotShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenderingInstanceIds()) {
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasQuality()) {
    query["Quality"] = request.getQuality();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.getRenderingInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCaptureRenderingInstanceScreenshot"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCaptureRenderingInstanceScreenshotResponse>();
}

/**
 * @summary Retrieves screenshots of cloud application service instances.
 *
 * @description ## Request description
 * - **Authentication**: Requests must include the `AliUid` parameter for identity verification.
 * - **Instance specification**: Use `RenderingInstanceIds` to specify the instances to capture screenshots from.
 * - **Screenshot quality**: Use the `Quality` parameter to set the image quality of screenshots. The default value is 75 (if not configured). Valid values: 1 to 100.
 * - **Response handling**: The response contains lists of successful and failed instances with related information, including download URLs and screenshot completion times.
 *
 * @param request BatchCaptureRenderingInstanceScreenshotRequest
 * @return BatchCaptureRenderingInstanceScreenshotResponse
 */
BatchCaptureRenderingInstanceScreenshotResponse Client::batchCaptureRenderingInstanceScreenshot(const BatchCaptureRenderingInstanceScreenshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCaptureRenderingInstanceScreenshotWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple devices in a single operation.
 *
 * @param request BatchDeleteDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDevicesResponse
 */
BatchDeleteDevicesResponse Client::batchDeleteDevicesWithOptions(const BatchDeleteDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes multiple devices in a single operation.
 *
 * @param request BatchDeleteDevicesRequest
 * @return BatchDeleteDevicesResponse
 */
BatchDeleteDevicesResponse Client::batchDeleteDevices(const BatchDeleteDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDevicesWithOptions(request, runtime);
}

/**
 * @summary Deletes domain name configurations in a batch.
 *
 * @param request BatchDeleteVsDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteVsDomainConfigsResponse
 */
BatchDeleteVsDomainConfigsResponse Client::batchDeleteVsDomainConfigsWithOptions(const BatchDeleteVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes domain name configurations in a batch.
 *
 * @param request BatchDeleteVsDomainConfigsRequest
 * @return BatchDeleteVsDomainConfigsResponse
 */
BatchDeleteVsDomainConfigsResponse Client::batchDeleteVsDomainConfigs(const BatchDeleteVsDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteVsDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Stop stream ingest for one or more streams. You can schedule when to resume ingest.
 *
 * @param request BatchForbidVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchForbidVsStreamResponse
 */
BatchForbidVsStreamResponse Client::batchForbidVsStreamWithOptions(const BatchForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.getControlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.getLiveStreamType();
  }

  if (!!request.hasOneshot()) {
    query["Oneshot"] = request.getOneshot();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResumeTime()) {
    query["ResumeTime"] = request.getResumeTime();
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
 * @summary Stop stream ingest for one or more streams. You can schedule when to resume ingest.
 *
 * @param request BatchForbidVsStreamRequest
 * @return BatchForbidVsStreamResponse
 */
BatchForbidVsStreamResponse Client::batchForbidVsStream(const BatchForbidVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchForbidVsStreamWithOptions(request, runtime);
}

/**
 * @summary Resumes stream ingest for one or more streams.
 *
 * @param request BatchResumeVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchResumeVsStreamResponse
 */
BatchResumeVsStreamResponse Client::batchResumeVsStreamWithOptions(const BatchResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.getControlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.getLiveStreamType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Resumes stream ingest for one or more streams.
 *
 * @param request BatchResumeVsStreamRequest
 * @return BatchResumeVsStreamResponse
 */
BatchResumeVsStreamResponse Client::batchResumeVsStream(const BatchResumeVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchResumeVsStreamWithOptions(request, runtime);
}

/**
 * @summary Configure multiple domain names in batch.
 *
 * @param request BatchSetVsDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetVsDomainConfigsResponse
 */
BatchSetVsDomainConfigsResponse Client::batchSetVsDomainConfigsWithOptions(const BatchSetVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.getFunctions();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Configure multiple domain names in batch.
 *
 * @param request BatchSetVsDomainConfigsRequest
 * @return BatchSetVsDomainConfigsResponse
 */
BatchSetVsDomainConfigsResponse Client::batchSetVsDomainConfigs(const BatchSetVsDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetVsDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Start stream pulling for multiple devices at once.
 *
 * @param request BatchStartDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartDevicesResponse
 */
BatchStartDevicesResponse Client::batchStartDevicesWithOptions(const BatchStartDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Start stream pulling for multiple devices at once.
 *
 * @param request BatchStartDevicesRequest
 * @return BatchStartDevicesResponse
 */
BatchStartDevicesResponse Client::batchStartDevices(const BatchStartDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartDevicesWithOptions(request, runtime);
}

/**
 * @summary Starts multiple streams.
 *
 * @param request BatchStartStreamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartStreamsResponse
 */
BatchStartStreamsResponse Client::batchStartStreamsWithOptions(const BatchStartStreamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Starts multiple streams.
 *
 * @param request BatchStartStreamsRequest
 * @return BatchStartStreamsResponse
 */
BatchStartStreamsResponse Client::batchStartStreams(const BatchStartStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartStreamsWithOptions(request, runtime);
}

/**
 * @summary Stops stream pulling for multiple devices.
 *
 * @param request BatchStopDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopDevicesResponse
 */
BatchStopDevicesResponse Client::batchStopDevicesWithOptions(const BatchStopDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Stops stream pulling for multiple devices.
 *
 * @param request BatchStopDevicesRequest
 * @return BatchStopDevicesResponse
 */
BatchStopDevicesResponse Client::batchStopDevices(const BatchStopDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopDevicesWithOptions(request, runtime);
}

/**
 * @summary Stops multiple streams in a batch.
 *
 * @param request BatchStopStreamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopStreamsResponse
 */
BatchStopStreamsResponse Client::batchStopStreamsWithOptions(const BatchStopStreamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Stops multiple streams in a batch.
 *
 * @param request BatchStopStreamsRequest
 * @return BatchStopStreamsResponse
 */
BatchStopStreamsResponse Client::batchStopStreams(const BatchStopStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopStreamsWithOptions(request, runtime);
}

/**
 * @summary Detaches multiple devices from a folder in bulk.
 *
 * @param request BatchUnbindDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindDirectoriesResponse
 */
BatchUnbindDirectoriesResponse Client::batchUnbindDirectoriesWithOptions(const BatchUnbindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Detaches multiple devices from a folder in bulk.
 *
 * @param request BatchUnbindDirectoriesRequest
 * @return BatchUnbindDirectoriesResponse
 */
BatchUnbindDirectoriesResponse Client::batchUnbindDirectories(const BatchUnbindDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Batch unbind multiple devices from parent platform push.
 *
 * @param request BatchUnbindParentPlatformDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindParentPlatformDevicesResponse
 */
BatchUnbindParentPlatformDevicesResponse Client::batchUnbindParentPlatformDevicesWithOptions(const BatchUnbindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.getParentPlatformId();
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
 * @summary Batch unbind multiple devices from parent platform push.
 *
 * @param request BatchUnbindParentPlatformDevicesRequest
 * @return BatchUnbindParentPlatformDevicesResponse
 */
BatchUnbindParentPlatformDevicesResponse Client::batchUnbindParentPlatformDevices(const BatchUnbindParentPlatformDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindParentPlatformDevicesWithOptions(request, runtime);
}

/**
 * @summary Detach multiple purchased devices from a space in a single operation.
 *
 * @param request BatchUnbindPurchasedDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindPurchasedDevicesResponse
 */
BatchUnbindPurchasedDevicesResponse Client::batchUnbindPurchasedDevicesWithOptions(const BatchUnbindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Detach multiple purchased devices from a space in a single operation.
 *
 * @param request BatchUnbindPurchasedDevicesRequest
 * @return BatchUnbindPurchasedDevicesResponse
 */
BatchUnbindPurchasedDevicesResponse Client::batchUnbindPurchasedDevices(const BatchUnbindPurchasedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindPurchasedDevicesWithOptions(request, runtime);
}

/**
 * @summary Detach a template from multiple specified instances, such as space instances or stream instances.
 *
 * @description > Specify at least one of TemplateId or TemplateType.
 *
 * @param request BatchUnbindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindTemplateResponse
 */
BatchUnbindTemplateResponse Client::batchUnbindTemplateWithOptions(const BatchUnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Detach a template from multiple specified instances, such as space instances or stream instances.
 *
 * @description > Specify at least one of TemplateId or TemplateType.
 *
 * @param request BatchUnbindTemplateRequest
 * @return BatchUnbindTemplateResponse
 */
BatchUnbindTemplateResponse Client::batchUnbindTemplate(const BatchUnbindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindTemplateWithOptions(request, runtime);
}

/**
 * @summary Unbind multiple templates simultaneously.
 *
 * @param request BatchUnbindTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUnbindTemplatesResponse
 */
BatchUnbindTemplatesResponse Client::batchUnbindTemplatesWithOptions(const BatchUnbindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Unbind multiple templates simultaneously.
 *
 * @param request BatchUnbindTemplatesRequest
 * @return BatchUnbindTemplatesResponse
 */
BatchUnbindTemplatesResponse Client::batchUnbindTemplates(const BatchUnbindTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUnbindTemplatesWithOptions(request, runtime);
}

/**
 * @summary Attach a device to a folder.
 *
 * @param request BindDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDirectoryResponse
 */
BindDirectoryResponse Client::bindDirectoryWithOptions(const BindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Attach a device to a folder.
 *
 * @param request BindDirectoryRequest
 * @return BindDirectoryResponse
 */
BindDirectoryResponse Client::bindDirectory(const BindDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDirectoryWithOptions(request, runtime);
}

/**
 * @summary Binds a device to push streams to a parent platform.
 *
 * @param request BindParentPlatformDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindParentPlatformDeviceResponse
 */
BindParentPlatformDeviceResponse Client::bindParentPlatformDeviceWithOptions(const BindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.getParentPlatformId();
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
 * @summary Binds a device to push streams to a parent platform.
 *
 * @param request BindParentPlatformDeviceRequest
 * @return BindParentPlatformDeviceResponse
 */
BindParentPlatformDeviceResponse Client::bindParentPlatformDevice(const BindParentPlatformDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindParentPlatformDeviceWithOptions(request, runtime);
}

/**
 * @summary Attach purchased devices to a space.
 *
 * @param request BindPurchasedDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPurchasedDeviceResponse
 */
BindPurchasedDeviceResponse Client::bindPurchasedDeviceWithOptions(const BindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
 * @summary Attach purchased devices to a space.
 *
 * @param request BindPurchasedDeviceRequest
 * @return BindPurchasedDeviceResponse
 */
BindPurchasedDeviceResponse Client::bindPurchasedDevice(const BindPurchasedDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPurchasedDeviceWithOptions(request, runtime);
}

/**
 * @summary Binds a template to a specified instance, such as a group or stream.
 *
 * @param request BindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindTemplateResponse
 */
BindTemplateResponse Client::bindTemplateWithOptions(const BindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyAll()) {
    query["ApplyAll"] = request.getApplyAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.getReplace();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Binds a template to a specified instance, such as a group or stream.
 *
 * @param request BindTemplateRequest
 * @return BindTemplateResponse
 */
BindTemplateResponse Client::bindTemplate(const BindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindTemplateWithOptions(request, runtime);
}

/**
 * @summary Cancels a Comfy task.
 *
 * @description > Stop the parent platform before canceling the task.
 *
 * @param request CancelComfyTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelComfyTaskResponse
 */
CancelComfyTaskResponse Client::cancelComfyTaskWithOptions(const CancelComfyTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelComfyTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelComfyTaskResponse>();
}

/**
 * @summary Cancels a Comfy task.
 *
 * @description > Stop the parent platform before canceling the task.
 *
 * @param request CancelComfyTaskRequest
 * @return CancelComfyTaskResponse
 */
CancelComfyTaskResponse Client::cancelComfyTask(const CancelComfyTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelComfyTaskWithOptions(request, runtime);
}

/**
 * @summary Continuously adjust lens parameters such as aperture and zoom.
 *
 * @param request ContinuousAdjustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuousAdjustResponse
 */
ContinuousAdjustResponse Client::continuousAdjustWithOptions(const ContinuousAdjustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFocus()) {
    query["Focus"] = request.getFocus();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIris()) {
    query["Iris"] = request.getIris();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Continuously adjust lens parameters such as aperture and zoom.
 *
 * @param request ContinuousAdjustRequest
 * @return ContinuousAdjustResponse
 */
ContinuousAdjustResponse Client::continuousAdjust(const ContinuousAdjustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continuousAdjustWithOptions(request, runtime);
}

/**
 * @summary Rotate the camera continuously by panning, tilting, or zooming.
 *
 * @param request ContinuousMoveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinuousMoveResponse
 */
ContinuousMoveResponse Client::continuousMoveWithOptions(const ContinuousMoveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPan()) {
    query["Pan"] = request.getPan();
  }

  if (!!request.hasTilt()) {
    query["Tilt"] = request.getTilt();
  }

  if (!!request.hasZoom()) {
    query["Zoom"] = request.getZoom();
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
 * @summary Rotate the camera continuously by panning, tilting, or zooming.
 *
 * @param request ContinuousMoveRequest
 * @return ContinuousMoveResponse
 */
ContinuousMoveResponse Client::continuousMove(const ContinuousMoveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continuousMoveWithOptions(request, runtime);
}

/**
 * @summary Starts a Comfy task.
 *
 * @description > You must first enable the on-demand screenshot feature in the associated screenshot template.
 *
 * @param request CreateComfyTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComfyTaskResponse
 */
CreateComfyTaskResponse Client::createComfyTaskWithOptions(const CreateComfyTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  if (!!request.hasUserParameters()) {
    query["UserParameters"] = request.getUserParameters();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateComfyTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComfyTaskResponse>();
}

/**
 * @summary Starts a Comfy task.
 *
 * @description > You must first enable the on-demand screenshot feature in the associated screenshot template.
 *
 * @param request CreateComfyTaskRequest
 * @return CreateComfyTaskResponse
 */
CreateComfyTaskResponse Client::createComfyTask(const CreateComfyTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComfyTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a directory for user data.
 *
 * @description > You must specify either a template ID or a template type.
 *
 * @param request CreateComfyUserDataDirRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComfyUserDataDirResponse
 */
CreateComfyUserDataDirResponse Client::createComfyUserDataDirWithOptions(const CreateComfyUserDataDirRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateComfyUserDataDir"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComfyUserDataDirResponse>();
}

/**
 * @summary Creates a directory for user data.
 *
 * @description > You must specify either a template ID or a template type.
 *
 * @param request CreateComfyUserDataDirRequest
 * @return CreateComfyUserDataDirResponse
 */
CreateComfyUserDataDirResponse Client::createComfyUserDataDir(const CreateComfyUserDataDirRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComfyUserDataDirWithOptions(request, runtime);
}

/**
 * @summary Creates a Comfy workflow.
 *
 * @description > You must enable the on-demand screenshot feature in the associated screenshot template before calling this operation.
 *
 * @param request CreateComfyWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComfyWorkflowResponse
 */
CreateComfyWorkflowResponse Client::createComfyWorkflowWithOptions(const CreateComfyWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasWorkflow()) {
    query["Workflow"] = request.getWorkflow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateComfyWorkflow"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComfyWorkflowResponse>();
}

/**
 * @summary Creates a Comfy workflow.
 *
 * @description > You must enable the on-demand screenshot feature in the associated screenshot template before calling this operation.
 *
 * @param request CreateComfyWorkflowRequest
 * @return CreateComfyWorkflowResponse
 */
CreateComfyWorkflowResponse Client::createComfyWorkflow(const CreateComfyWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComfyWorkflowWithOptions(request, runtime);
}

/**
 * @summary Add a new device.
 *
 * @param request CreateDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeviceResponse
 */
CreateDeviceResponse Client::createDeviceWithOptions(const CreateDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmMethod()) {
    query["AlarmMethod"] = request.getAlarmMethod();
  }

  if (!!request.hasAutoDirectory()) {
    query["AutoDirectory"] = request.getAutoDirectory();
  }

  if (!!request.hasAutoPos()) {
    query["AutoPos"] = request.getAutoPos();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDsn()) {
    query["Dsn"] = request.getDsn();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.getLatitude();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.getLongitude();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPosInterval()) {
    query["PosInterval"] = request.getPosInterval();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
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
 * @summary Add a new device.
 *
 * @param request CreateDeviceRequest
 * @return CreateDeviceResponse
 */
CreateDeviceResponse Client::createDevice(const CreateDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeviceWithOptions(request, runtime);
}

/**
 * @summary Reports a device alert.
 *
 * @param request CreateDeviceAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeviceAlarmResponse
 */
CreateDeviceAlarmResponse Client::createDeviceAlarmWithOptions(const CreateDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarm()) {
    query["Alarm"] = request.getAlarm();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.getExpire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSubAlarm()) {
    query["SubAlarm"] = request.getSubAlarm();
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
 * @summary Reports a device alert.
 *
 * @param request CreateDeviceAlarmRequest
 * @return CreateDeviceAlarmResponse
 */
CreateDeviceAlarmResponse Client::createDeviceAlarm(const CreateDeviceAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeviceAlarmWithOptions(request, runtime);
}

/**
 * @summary Creates a new folder.
 *
 * @param request CreateDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectoryWithOptions(const CreateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
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
 * @summary Creates a new folder.
 *
 * @param request CreateDirectoryRequest
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectory(const CreateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDirectoryWithOptions(request, runtime);
}

/**
 * @summary Create a new workspace.
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.getApp();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.getCallback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInProtocol()) {
    query["InProtocol"] = request.getInProtocol();
  }

  if (!!request.hasLazyPull()) {
    query["LazyPull"] = request.getLazyPull();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.getOutProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.getPlayDomain();
  }

  if (!!request.hasPushDomain()) {
    query["PushDomain"] = request.getPushDomain();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
 * @summary Create a new workspace.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a cluster.
 *
 * @description ## Description
 * - This operation creates an empty cluster to manage workloads.
 *
 * @param request CreateHiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHiveResponse
 */
CreateHiveResponse Client::createHiveWithOptions(const CreateHiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "CreateHive"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHiveResponse>();
}

/**
 * @summary Creates a cluster.
 *
 * @description ## Description
 * - This operation creates an empty cluster to manage workloads.
 *
 * @param request CreateHiveRequest
 * @return CreateHiveResponse
 */
CreateHiveResponse Client::createHive(const CreateHiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHiveWithOptions(request, runtime);
}

/**
 * @summary Adds a new parent platform.
 *
 * @param request CreateParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParentPlatformResponse
 */
CreateParentPlatformResponse Client::createParentPlatformWithOptions(const CreateParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasClientAuth()) {
    query["ClientAuth"] = request.getClientAuth();
  }

  if (!!request.hasClientPassword()) {
    query["ClientPassword"] = request.getClientPassword();
  }

  if (!!request.hasClientUsername()) {
    query["ClientUsername"] = request.getClientUsername();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
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
 * @summary Adds a new parent platform.
 *
 * @param request CreateParentPlatformRequest
 * @return CreateParentPlatformResponse
 */
CreateParentPlatformResponse Client::createParentPlatform(const CreateParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParentPlatformWithOptions(request, runtime);
}

/**
 * @summary Creates a data pack for a cloud application service.
 *
 * @param request CreateRenderingDataPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRenderingDataPackageResponse
 */
CreateRenderingDataPackageResponse Client::createRenderingDataPackageWithOptions(const CreateRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Creates a data pack for a cloud application service.
 *
 * @param request CreateRenderingDataPackageRequest
 * @return CreateRenderingDataPackageResponse
 */
CreateRenderingDataPackageResponse Client::createRenderingDataPackage(const CreateRenderingDataPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingDataPackageWithOptions(request, runtime);
}

/**
 * @summary Call CreateRenderingInstance to create a cloud application service instance.
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
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributes(), "Attributes", "json"));
  }

  if (!!tmpReq.hasClientInfo()) {
    request.setClientInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClientInfo(), "ClientInfo", "json"));
  }

  json query = {};
  if (!!request.hasAttributesShrink()) {
    query["Attributes"] = request.getAttributesShrink();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasClientInfoShrink()) {
    query["ClientInfo"] = request.getClientInfoShrink();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidth()) {
    query["InternetMaxBandwidth"] = request.getInternetMaxBandwidth();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRenderingSpec()) {
    query["RenderingSpec"] = request.getRenderingSpec();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.getStorageSize();
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
 * @summary Call CreateRenderingInstance to create a cloud application service instance.
 *
 * @param request CreateRenderingInstanceRequest
 * @return CreateRenderingInstanceResponse
 */
CreateRenderingInstanceResponse Client::createRenderingInstance(const CreateRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a custom gateway.
 *
 * @description > You can specify a template ID or a template type.
 *
 * @param request CreateRenderingInstanceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRenderingInstanceGatewayResponse
 */
CreateRenderingInstanceGatewayResponse Client::createRenderingInstanceGatewayWithOptions(const CreateRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayInstanceId()) {
    query["GatewayInstanceId"] = request.getGatewayInstanceId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Creates a custom gateway.
 *
 * @description > You can specify a template ID or a template type.
 *
 * @param request CreateRenderingInstanceGatewayRequest
 * @return CreateRenderingInstanceGatewayResponse
 */
CreateRenderingInstanceGatewayResponse Client::createRenderingInstanceGateway(const CreateRenderingInstanceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingInstanceGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud application service project and configures its properties, such as session attributes.
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
    request.setSessionAttribsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSessionAttribs(), "SessionAttribs", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSessionAttribsShrink()) {
    query["SessionAttribs"] = request.getSessionAttribsShrink();
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
 * @summary Creates a cloud application service project and configures its properties, such as session attributes.
 *
 * @param request CreateRenderingProjectRequest
 * @return CreateRenderingProjectResponse
 */
CreateRenderingProjectResponse Client::createRenderingProject(const CreateRenderingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRenderingProjectWithOptions(request, runtime);
}

/**
 * @summary Creates an on-demand snapshot for the specified stream.
 *
 * @description > You must first enable the on-demand snapshot feature in the attached snapshot template.
 *
 * @param request CreateStreamSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamSnapshotResponse
 */
CreateStreamSnapshotResponse Client::createStreamSnapshotWithOptions(const CreateStreamSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Creates an on-demand snapshot for the specified stream.
 *
 * @description > You must first enable the on-demand snapshot feature in the attached snapshot template.
 *
 * @param request CreateStreamSnapshotRequest
 * @return CreateStreamSnapshotResponse
 */
CreateStreamSnapshotResponse Client::createStreamSnapshot(const CreateStreamSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamSnapshotWithOptions(request, runtime);
}

/**
 * @summary Create a new template.
 *
 * @param request CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.getCallback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.getFileFormat();
  }

  if (!!request.hasFlv()) {
    query["Flv"] = request.getFlv();
  }

  if (!!request.hasHlsM3u8()) {
    query["HlsM3u8"] = request.getHlsM3u8();
  }

  if (!!request.hasHlsTs()) {
    query["HlsTs"] = request.getHlsTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasJpgOnDemand()) {
    query["JpgOnDemand"] = request.getJpgOnDemand();
  }

  if (!!request.hasJpgOverwrite()) {
    query["JpgOverwrite"] = request.getJpgOverwrite();
  }

  if (!!request.hasJpgSequence()) {
    query["JpgSequence"] = request.getJpgSequence();
  }

  if (!!request.hasMp4()) {
    query["Mp4"] = request.getMp4();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.getOssBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.getOssFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  if (!!request.hasTransConfigsJSON()) {
    query["TransConfigsJSON"] = request.getTransConfigsJSON();
  }

  if (!!request.hasTrigger()) {
    query["Trigger"] = request.getTrigger();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Create a new template.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @summary 从集群删除负载
 *
 * @description ## 请求说明
 * - **HiveId** 是必填参数，表示要操作的集群ID。
 * - **InstanceIds** 是必填参数，需要提供一个负载ID列表，用于指定要从集群中解绑的负载实例。
 * - 解绑操作成功后，会返回成功和失败的负载实例列表及其相关信息。
 *
 * @param tmpReq DelHiveEdgeWorkersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelHiveEdgeWorkersResponse
 */
DelHiveEdgeWorkersResponse Client::delHiveEdgeWorkersWithOptions(const DelHiveEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DelHiveEdgeWorkersShrinkRequest request = DelHiveEdgeWorkersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DelHiveEdgeWorkers"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelHiveEdgeWorkersResponse>();
}

/**
 * @summary 从集群删除负载
 *
 * @description ## 请求说明
 * - **HiveId** 是必填参数，表示要操作的集群ID。
 * - **InstanceIds** 是必填参数，需要提供一个负载ID列表，用于指定要从集群中解绑的负载实例。
 * - 解绑操作成功后，会返回成功和失败的负载实例列表及其相关信息。
 *
 * @param request DelHiveEdgeWorkersRequest
 * @return DelHiveEdgeWorkersResponse
 */
DelHiveEdgeWorkersResponse Client::delHiveEdgeWorkers(const DelHiveEdgeWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delHiveEdgeWorkersWithOptions(request, runtime);
}

/**
 * @summary Deletes a cloud application. You cannot delete a cloud application that is in use.
 *
 * @param request DeleteCloudAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudAppResponse
 */
DeleteCloudAppResponse Client::deleteCloudAppWithOptions(const DeleteCloudAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Deletes a cloud application. You cannot delete a cloud application that is in use.
 *
 * @param request DeleteCloudAppRequest
 * @return DeleteCloudAppResponse
 */
DeleteCloudAppResponse Client::deleteCloudApp(const DeleteCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudAppWithOptions(request, runtime);
}

/**
 * @summary Deleting artifacts
 *
 * @description > Stop the parent platform before you delete a production.
 *
 * @param request DeleteComfyProductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComfyProductionResponse
 */
DeleteComfyProductionResponse Client::deleteComfyProductionWithOptions(const DeleteComfyProductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComfyProduction"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComfyProductionResponse>();
}

/**
 * @summary Deleting artifacts
 *
 * @description > Stop the parent platform before you delete a production.
 *
 * @param request DeleteComfyProductionRequest
 * @return DeleteComfyProductionResponse
 */
DeleteComfyProductionResponse Client::deleteComfyProduction(const DeleteComfyProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComfyProductionWithOptions(request, runtime);
}

/**
 * @summary Deletes a file or directory from user data.
 *
 * @description > You must stop the upper-level platform before performing this operation.
 *
 * @param request DeleteComfyUserDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComfyUserDataResponse
 */
DeleteComfyUserDataResponse Client::deleteComfyUserDataWithOptions(const DeleteComfyUserDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComfyUserData"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComfyUserDataResponse>();
}

/**
 * @summary Deletes a file or directory from user data.
 *
 * @description > You must stop the upper-level platform before performing this operation.
 *
 * @param request DeleteComfyUserDataRequest
 * @return DeleteComfyUserDataResponse
 */
DeleteComfyUserDataResponse Client::deleteComfyUserData(const DeleteComfyUserDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComfyUserDataWithOptions(request, runtime);
}

/**
 * @summary Deletes a Comfy workflow.
 *
 * @description > You must stop the parent platform before you can delete the workflow.
 *
 * @param request DeleteComfyWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComfyWorkflowResponse
 */
DeleteComfyWorkflowResponse Client::deleteComfyWorkflowWithOptions(const DeleteComfyWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComfyWorkflow"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComfyWorkflowResponse>();
}

/**
 * @summary Deletes a Comfy workflow.
 *
 * @description > You must stop the parent platform before you can delete the workflow.
 *
 * @param request DeleteComfyWorkflowRequest
 * @return DeleteComfyWorkflowResponse
 */
DeleteComfyWorkflowResponse Client::deleteComfyWorkflow(const DeleteComfyWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComfyWorkflowWithOptions(request, runtime);
}

/**
 * @summary Deletes a device from a space.
 *
 * @param request DeleteDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeviceResponse
 */
DeleteDeviceResponse Client::deleteDeviceWithOptions(const DeleteDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes a device from a space.
 *
 * @param request DeleteDeviceRequest
 * @return DeleteDeviceResponse
 */
DeleteDeviceResponse Client::deleteDevice(const DeleteDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDeviceWithOptions(request, runtime);
}

/**
 * @summary Deletes a folder.
 *
 * @param request DeleteDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectoryWithOptions(const DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes a folder.
 *
 * @param request DeleteDirectoryRequest
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectory(const DeleteDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDirectoryWithOptions(request, runtime);
}

/**
 * @summary You cannot delete a file while it is uploading or pre-pushing. After deletion, all related push records become invalid. You can push a file with the same name again.
 *
 * @param request DeleteFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFileWithOptions(const DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
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
 * @summary You cannot delete a file while it is uploading or pre-pushing. After deletion, all related push records become invalid. You can push a file with the same name again.
 *
 * @param request DeleteFileRequest
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFile(const DeleteFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileWithOptions(request, runtime);
}

/**
 * @summary Delete a workspace.
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Delete a workspace.
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary 删除集群
 *
 * @description ## 请求说明
 * - 需要确保该集群内所有应用服务已清空，否则无法执行删除操作。
 * - `HiveId` 是必填参数，用于标识待删除的集群。
 *
 * @param request DeleteHiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHiveResponse
 */
DeleteHiveResponse Client::deleteHiveWithOptions(const DeleteHiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHive"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHiveResponse>();
}

/**
 * @summary 删除集群
 *
 * @description ## 请求说明
 * - 需要确保该集群内所有应用服务已清空，否则无法执行删除操作。
 * - `HiveId` 是必填参数，用于标识待删除的集群。
 *
 * @param request DeleteHiveRequest
 * @return DeleteHiveResponse
 */
DeleteHiveResponse Client::deleteHive(const DeleteHiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHiveWithOptions(request, runtime);
}

/**
 * @summary Deletes a parent platform.
 *
 * @description > You must stop the parent platform before you delete it.
 *
 * @param request DeleteParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParentPlatformResponse
 */
DeleteParentPlatformResponse Client::deleteParentPlatformWithOptions(const DeleteParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes a parent platform.
 *
 * @description > You must stop the parent platform before you delete it.
 *
 * @param request DeleteParentPlatformRequest
 * @return DeleteParentPlatformResponse
 */
DeleteParentPlatformResponse Client::deleteParentPlatform(const DeleteParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParentPlatformWithOptions(request, runtime);
}

/**
 * @summary Deletes a preset.
 *
 * @param request DeletePresetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePresetResponse
 */
DeletePresetResponse Client::deletePresetWithOptions(const DeletePresetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPresetId()) {
    query["PresetId"] = request.getPresetId();
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
 * @summary Deletes a preset.
 *
 * @param request DeletePresetRequest
 * @return DeletePresetResponse
 */
DeletePresetResponse Client::deletePreset(const DeletePresetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePresetWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified public key. This action automatically revokes logon authorization for all associated cloud application service instances.
 *
 * @param request DeletePublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePublicKeyResponse
 */
DeletePublicKeyResponse Client::deletePublicKeyWithOptions(const DeletePublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
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
 * @summary Deletes a specified public key. This action automatically revokes logon authorization for all associated cloud application service instances.
 *
 * @param request DeletePublicKeyRequest
 * @return DeletePublicKeyResponse
 */
DeletePublicKeyResponse Client::deletePublicKey(const DeletePublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePublicKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes the configuration of a cloud application service instance. This operation deletes only module properties that are configured using the UpdateRenderingInstanceConfiguration operation.
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
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfiguration(), "Configuration", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  json body = {};
  if (!!request.hasConfigurationShrink()) {
    body["Configuration"] = request.getConfigurationShrink();
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
 * @summary Deletes the configuration of a cloud application service instance. This operation deletes only module properties that are configured using the UpdateRenderingInstanceConfiguration operation.
 *
 * @param request DeleteRenderingInstanceConfigurationRequest
 * @return DeleteRenderingInstanceConfigurationResponse
 */
DeleteRenderingInstanceConfigurationResponse Client::deleteRenderingInstanceConfiguration(const DeleteRenderingInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom gateway.
 *
 * @description > Stop the parent platform before you delete the gateway.
 *
 * @param request DeleteRenderingInstanceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRenderingInstanceGatewayResponse
 */
DeleteRenderingInstanceGatewayResponse Client::deleteRenderingInstanceGatewayWithOptions(const DeleteRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Deletes a custom gateway.
 *
 * @description > Stop the parent platform before you delete the gateway.
 *
 * @param request DeleteRenderingInstanceGatewayRequest
 * @return DeleteRenderingInstanceGatewayResponse
 */
DeleteRenderingInstanceGatewayResponse Client::deleteRenderingInstanceGateway(const DeleteRenderingInstanceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingInstanceGatewayWithOptions(request, runtime);
}

/**
 * @summary You can call DeleteRenderingInstanceSettings to delete the settings of a cloud application service instance.
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
    request.setAttributeNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributeNames(), "AttributeNames", "json"));
  }

  json query = {};
  if (!!request.hasAttributeNamesShrink()) {
    query["AttributeNames"] = request.getAttributeNamesShrink();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary You can call DeleteRenderingInstanceSettings to delete the settings of a cloud application service instance.
 *
 * @param request DeleteRenderingInstanceSettingsRequest
 * @return DeleteRenderingInstanceSettingsResponse
 */
DeleteRenderingInstanceSettingsResponse Client::deleteRenderingInstanceSettings(const DeleteRenderingInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingInstanceSettingsWithOptions(request, runtime);
}

/**
 * @summary Delete a Data Service Project. Projects that have business scheduling data, such as active sessions, cannot be deleted.
 *
 * @param request DeleteRenderingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRenderingProjectResponse
 */
DeleteRenderingProjectResponse Client::deleteRenderingProjectWithOptions(const DeleteRenderingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Delete a Data Service Project. Projects that have business scheduling data, such as active sessions, cannot be deleted.
 *
 * @param request DeleteRenderingProjectRequest
 * @return DeleteRenderingProjectResponse
 */
DeleteRenderingProjectResponse Client::deleteRenderingProject(const DeleteRenderingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRenderingProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes a template.
 *
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes a template.
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @summary Delete stream pulling information.
 *
 * @param request DeleteVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVsPullStreamInfoConfigResponse
 */
DeleteVsPullStreamInfoConfigResponse Client::deleteVsPullStreamInfoConfigWithOptions(const DeleteVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Delete stream pulling information.
 *
 * @param request DeleteVsPullStreamInfoConfigRequest
 * @return DeleteVsPullStreamInfoConfigResponse
 */
DeleteVsPullStreamInfoConfigResponse Client::deleteVsPullStreamInfoConfig(const DeleteVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes the callback configuration for stream ingest.
 *
 * @param request DeleteVsStreamsNotifyUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVsStreamsNotifyUrlConfigResponse
 */
DeleteVsStreamsNotifyUrlConfigResponse Client::deleteVsStreamsNotifyUrlConfigWithOptions(const DeleteVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes the callback configuration for stream ingest.
 *
 * @param request DeleteVsStreamsNotifyUrlConfigRequest
 * @return DeleteVsStreamsNotifyUrlConfigResponse
 */
DeleteVsStreamsNotifyUrlConfigResponse Client::deleteVsStreamsNotifyUrlConfig(const DeleteVsStreamsNotifyUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

/**
 * @summary Query all resource information for an account in a specified region.
 *
 * @param request DescribeAccountStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountStatResponse
 */
DescribeAccountStatResponse Client::describeAccountStatWithOptions(const DescribeAccountStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Query all resource information for an account in a specified region.
 *
 * @param request DescribeAccountStatRequest
 * @return DescribeAccountStatResponse
 */
DescribeAccountStatResponse Client::describeAccountStat(const DescribeAccountStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountStatWithOptions(request, runtime);
}

/**
 * @summary Retrieves a download link for a production.
 *
 * @description > Screenshot queries do not support pagination and must be performed iteratively. To fetch the next page, use the extStartTime value from the response as the StartTime for your subsequent request.
 *
 * @param request DescribeComfyProductionDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyProductionDownloadUrlResponse
 */
DescribeComfyProductionDownloadUrlResponse Client::describeComfyProductionDownloadUrlWithOptions(const DescribeComfyProductionDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyProductionDownloadUrl"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyProductionDownloadUrlResponse>();
}

/**
 * @summary Retrieves a download link for a production.
 *
 * @description > Screenshot queries do not support pagination and must be performed iteratively. To fetch the next page, use the extStartTime value from the response as the StartTime for your subsequent request.
 *
 * @param request DescribeComfyProductionDownloadUrlRequest
 * @return DescribeComfyProductionDownloadUrlResponse
 */
DescribeComfyProductionDownloadUrlResponse Client::describeComfyProductionDownloadUrl(const DescribeComfyProductionDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyProductionDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Lists a user\\"s productions.
 *
 * @description > This API uses pagination. Use the PageNumber and PageSize parameters to navigate through the results.
 *
 * @param request DescribeComfyProductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyProductionsResponse
 */
DescribeComfyProductionsResponse Client::describeComfyProductionsWithOptions(const DescribeComfyProductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyProductions"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyProductionsResponse>();
}

/**
 * @summary Lists a user\\"s productions.
 *
 * @description > This API uses pagination. Use the PageNumber and PageSize parameters to navigate through the results.
 *
 * @param request DescribeComfyProductionsRequest
 * @return DescribeComfyProductionsResponse
 */
DescribeComfyProductionsResponse Client::describeComfyProductions(const DescribeComfyProductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyProductionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Comfy tasks.
 *
 * @description > Querying by screenshot does not support pagination and only supports iteration. To request the next page, use the extStartTime parameter value from the response as the StartTime for the new request.
 *
 * @param request DescribeComfyTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyTasksResponse
 */
DescribeComfyTasksResponse Client::describeComfyTasksWithOptions(const DescribeComfyTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskState()) {
    query["TaskState"] = request.getTaskState();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyTasks"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyTasksResponse>();
}

/**
 * @summary Queries a list of Comfy tasks.
 *
 * @description > Querying by screenshot does not support pagination and only supports iteration. To request the next page, use the extStartTime parameter value from the response as the StartTime for the new request.
 *
 * @param request DescribeComfyTasksRequest
 * @return DescribeComfyTasksResponse
 */
DescribeComfyTasksResponse Client::describeComfyTasks(const DescribeComfyTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyTasksWithOptions(request, runtime);
}

/**
 * @summary Gets a download URL for user data.
 *
 * @param request DescribeComfyUserDataDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyUserDataDownloadUrlResponse
 */
DescribeComfyUserDataDownloadUrlResponse Client::describeComfyUserDataDownloadUrlWithOptions(const DescribeComfyUserDataDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyUserDataDownloadUrl"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyUserDataDownloadUrlResponse>();
}

/**
 * @summary Gets a download URL for user data.
 *
 * @param request DescribeComfyUserDataDownloadUrlRequest
 * @return DescribeComfyUserDataDownloadUrlResponse
 */
DescribeComfyUserDataDownloadUrlResponse Client::describeComfyUserDataDownloadUrl(const DescribeComfyUserDataDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyUserDataDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves a URL to upload a user file.
 *
 * @description You can upload files using the retrieved URL and the Alibaba Cloud OSS software development kit (SDK).
 *
 * @param request DescribeComfyUserDataUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyUserDataUploadUrlResponse
 */
DescribeComfyUserDataUploadUrlResponse Client::describeComfyUserDataUploadUrlWithOptions(const DescribeComfyUserDataUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasFileMd5()) {
    query["FileMd5"] = request.getFileMd5();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileSizeBytes()) {
    query["FileSizeBytes"] = request.getFileSizeBytes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyUserDataUploadUrl"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyUserDataUploadUrlResponse>();
}

/**
 * @summary Retrieves a URL to upload a user file.
 *
 * @description You can upload files using the retrieved URL and the Alibaba Cloud OSS software development kit (SDK).
 *
 * @param request DescribeComfyUserDataUploadUrlRequest
 * @return DescribeComfyUserDataUploadUrlResponse
 */
DescribeComfyUserDataUploadUrlResponse Client::describeComfyUserDataUploadUrl(const DescribeComfyUserDataUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyUserDataUploadUrlWithOptions(request, runtime);
}

/**
 * @summary Lists all files and folders in the user data.
 *
 * @description If StartTime and EndTime are not specified, data from the last 24 hours is read by default. To query a specific time range, you must specify both StartTime and EndTime. The maximum time range for a query is 31 days.
 * - You can query multiple domain names in a batch. Separate the domain names with a comma (,).
 * - You can retrieve data from the last 90 days.
 * - The time granularity is one hour.
 *
 * @param request DescribeComfyUserDatasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyUserDatasResponse
 */
DescribeComfyUserDatasResponse Client::describeComfyUserDatasWithOptions(const DescribeComfyUserDatasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyUserDatas"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyUserDatasResponse>();
}

/**
 * @summary Lists all files and folders in the user data.
 *
 * @description If StartTime and EndTime are not specified, data from the last 24 hours is read by default. To query a specific time range, you must specify both StartTime and EndTime. The maximum time range for a query is 31 days.
 * - You can query multiple domain names in a batch. Separate the domain names with a comma (,).
 * - You can retrieve data from the last 90 days.
 * - The time granularity is one hour.
 *
 * @param request DescribeComfyUserDatasRequest
 * @return DescribeComfyUserDatasResponse
 */
DescribeComfyUserDatasResponse Client::describeComfyUserDatas(const DescribeComfyUserDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyUserDatasWithOptions(request, runtime);
}

/**
 * @summary This operation retrieves a paginated list of your Comfy workflows.
 *
 * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
 *
 * @param request DescribeComfyWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComfyWorkflowsResponse
 */
DescribeComfyWorkflowsResponse Client::describeComfyWorkflowsWithOptions(const DescribeComfyWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComfyWorkflows"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComfyWorkflowsResponse>();
}

/**
 * @summary This operation retrieves a paginated list of your Comfy workflows.
 *
 * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
 *
 * @param request DescribeComfyWorkflowsRequest
 * @return DescribeComfyWorkflowsResponse
 */
DescribeComfyWorkflowsResponse Client::describeComfyWorkflows(const DescribeComfyWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComfyWorkflowsWithOptions(request, runtime);
}

/**
 * @summary Query information about a device.
 *
 * @param request DescribeDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceResponse
 */
DescribeDeviceResponse Client::describeDeviceWithOptions(const DescribeDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIncludeDirectory()) {
    query["IncludeDirectory"] = request.getIncludeDirectory();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.getIncludeStats();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Query information about a device.
 *
 * @param request DescribeDeviceRequest
 * @return DescribeDeviceResponse
 */
DescribeDeviceResponse Client::describeDevice(const DescribeDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries a list of device channels.
 *
 * @param request DescribeDeviceChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceChannelsResponse
 */
DescribeDeviceChannelsResponse Client::describeDeviceChannelsWithOptions(const DescribeDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries a list of device channels.
 *
 * @param request DescribeDeviceChannelsRequest
 * @return DescribeDeviceChannelsResponse
 */
DescribeDeviceChannelsResponse Client::describeDeviceChannels(const DescribeDeviceChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries a device gateway.
 *
 * @param request DescribeDeviceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceGatewayResponse
 */
DescribeDeviceGatewayResponse Client::describeDeviceGatewayWithOptions(const DescribeDeviceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.getExpire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries a device gateway.
 *
 * @param request DescribeDeviceGatewayRequest
 * @return DescribeDeviceGatewayResponse
 */
DescribeDeviceGatewayResponse Client::describeDeviceGateway(const DescribeDeviceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceGatewayWithOptions(request, runtime);
}

/**
 * @summary Queries the URL information for a device stream.
 *
 * @param request DescribeDeviceURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceURLResponse
 */
DescribeDeviceURLResponse Client::describeDeviceURLWithOptions(const DescribeDeviceURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuth()) {
    query["Auth"] = request.getAuth();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.getExpire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.getOutProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStream()) {
    query["Stream"] = request.getStream();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries the URL information for a device stream.
 *
 * @param request DescribeDeviceURLRequest
 * @return DescribeDeviceURLResponse
 */
DescribeDeviceURLResponse Client::describeDeviceURL(const DescribeDeviceURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceURLWithOptions(request, runtime);
}

/**
 * @summary Queries a list of devices.
 *
 * @param request DescribeDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDevicesResponse
 */
DescribeDevicesResponse Client::describeDevicesWithOptions(const DescribeDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDsn()) {
    query["Dsn"] = request.getDsn();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIncludeDirectory()) {
    query["IncludeDirectory"] = request.getIncludeDirectory();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.getIncludeStats();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
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
 * @summary Queries a list of devices.
 *
 * @param request DescribeDevicesRequest
 * @return DescribeDevicesResponse
 */
DescribeDevicesResponse Client::describeDevices(const DescribeDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDevicesWithOptions(request, runtime);
}

/**
 * @summary Query the list of directories.
 *
 * @param request DescribeDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectoriesWithOptions(const DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNoPagination()) {
    query["NoPagination"] = request.getNoPagination();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
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
 * @summary Query the list of directories.
 *
 * @param request DescribeDirectoriesRequest
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectories(const DescribeDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Queries a directory.
 *
 * @param request DescribeDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirectoryResponse
 */
DescribeDirectoryResponse Client::describeDirectoryWithOptions(const DescribeDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries a directory.
 *
 * @param request DescribeDirectoryRequest
 * @return DescribeDirectoryResponse
 */
DescribeDirectoryResponse Client::describeDirectory(const DescribeDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirectoryWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a space.
 *
 * @param request DescribeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupResponse
 */
DescribeGroupResponse Client::describeGroupWithOptions(const DescribeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.getIncludeStats();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieves information about a space.
 *
 * @param request DescribeGroupRequest
 * @return DescribeGroupResponse
 */
DescribeGroupResponse Client::describeGroup(const DescribeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupWithOptions(request, runtime);
}

/**
 * @summary You can query the list of spaces.
 *
 * @param request DescribeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroupsWithOptions(const DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInProtocol()) {
    query["InProtocol"] = request.getInProtocol();
  }

  if (!!request.hasIncludeStats()) {
    query["IncludeStats"] = request.getIncludeStats();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary You can query the list of spaces.
 *
 * @param request DescribeGroupsRequest
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroups(const DescribeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries information about a parent platform.
 *
 * @param request DescribeParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentPlatformResponse
 */
DescribeParentPlatformResponse Client::describeParentPlatformWithOptions(const DescribeParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries information about a parent platform.
 *
 * @param request DescribeParentPlatformRequest
 * @return DescribeParentPlatformResponse
 */
DescribeParentPlatformResponse Client::describeParentPlatform(const DescribeParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentPlatformWithOptions(request, runtime);
}

/**
 * @summary Queries the list of devices under a parent platform.
 *
 * @param request DescribeParentPlatformDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentPlatformDevicesResponse
 */
DescribeParentPlatformDevicesResponse Client::describeParentPlatformDevicesWithOptions(const DescribeParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
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
 * @summary Queries the list of devices under a parent platform.
 *
 * @param request DescribeParentPlatformDevicesRequest
 * @return DescribeParentPlatformDevicesResponse
 */
DescribeParentPlatformDevicesResponse Client::describeParentPlatformDevices(const DescribeParentPlatformDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentPlatformDevicesWithOptions(request, runtime);
}

/**
 * @summary Query the list of parent platforms.
 *
 * @param request DescribeParentPlatformsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParentPlatformsResponse
 */
DescribeParentPlatformsResponse Client::describeParentPlatformsWithOptions(const DescribeParentPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Query the list of parent platforms.
 *
 * @param request DescribeParentPlatformsRequest
 * @return DescribeParentPlatformsResponse
 */
DescribeParentPlatformsResponse Client::describeParentPlatforms(const DescribeParentPlatformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParentPlatformsWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of presets.
 *
 * @param request DescribePresetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePresetsResponse
 */
DescribePresetsResponse Client::describePresetsWithOptions(const DescribePresetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieve the list of presets.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries information about purchased devices.
 *
 * @param request DescribePurchasedDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedDeviceResponse
 */
DescribePurchasedDeviceResponse Client::describePurchasedDeviceWithOptions(const DescribePurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries information about purchased devices.
 *
 * @param request DescribePurchasedDeviceRequest
 * @return DescribePurchasedDeviceResponse
 */
DescribePurchasedDeviceResponse Client::describePurchasedDevice(const DescribePurchasedDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the list of purchased devices.
 *
 * @param request DescribePurchasedDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurchasedDevicesResponse
 */
DescribePurchasedDevicesResponse Client::describePurchasedDevicesWithOptions(const DescribePurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasSubType()) {
    query["SubType"] = request.getSubType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
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
 * @summary Queries the list of purchased devices.
 *
 * @param request DescribePurchasedDevicesRequest
 * @return DescribePurchasedDevicesResponse
 */
DescribePurchasedDevicesResponse Client::describePurchasedDevices(const DescribePurchasedDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurchasedDevicesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of recordings.
 *
 * @description > Paging is not supported for snapshot queries. Only iteration is supported. To request the next page, use the NextStartTime value from the response as the StartTime for the new request.
 *
 * @param request DescribeRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordsResponse
 */
DescribeRecordsResponse Client::describeRecordsWithOptions(const DescribeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateBucket()) {
    query["PrivateBucket"] = request.getPrivateBucket();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStreamId()) {
    query["StreamId"] = request.getStreamId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries a list of recordings.
 *
 * @description > Paging is not supported for snapshot queries. Only iteration is supported. To request the next page, use the NextStartTime value from the response as the StartTime for the new request.
 *
 * @param request DescribeRecordsRequest
 * @return DescribeRecordsResponse
 */
DescribeRecordsResponse Client::describeRecords(const DescribeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cloud application service instance.
 *
 * @param request DescribeRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenderingInstanceResponse
 */
DescribeRenderingInstanceResponse Client::describeRenderingInstanceWithOptions(const DescribeRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Queries the details of a cloud application service instance.
 *
 * @param request DescribeRenderingInstanceRequest
 * @return DescribeRenderingInstanceResponse
 */
DescribeRenderingInstanceResponse Client::describeRenderingInstance(const DescribeRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the real-time configuration of a cloud application service instance.
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
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfiguration(), "Configuration", "json"));
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
 * @summary Queries the real-time configuration of a cloud application service instance.
 *
 * @param request DescribeRenderingInstanceConfigurationRequest
 * @return DescribeRenderingInstanceConfigurationResponse
 */
DescribeRenderingInstanceConfigurationResponse Client::describeRenderingInstanceConfiguration(const DescribeRenderingInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary DescribeRenderingInstanceSettings queries the configuration of a Cloud Application service instance.
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
    request.setAttributeNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributeNames(), "AttributeNames", "json"));
  }

  json query = {};
  if (!!request.hasAttributeNamesShrink()) {
    query["AttributeNames"] = request.getAttributeNamesShrink();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary DescribeRenderingInstanceSettings queries the configuration of a Cloud Application service instance.
 *
 * @param request DescribeRenderingInstanceSettingsRequest
 * @return DescribeRenderingInstanceSettingsResponse
 */
DescribeRenderingInstanceSettingsResponse Client::describeRenderingInstanceSettings(const DescribeRenderingInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingInstanceSettingsWithOptions(request, runtime);
}

/**
 * @summary Retrieve details about a rendering session, including the current session state, network access IP address and port, and the location of the cloud application service instance.
 *
 * @param request DescribeRenderingSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenderingSessionResponse
 */
DescribeRenderingSessionResponse Client::describeRenderingSessionWithOptions(const DescribeRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
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
 * @summary Retrieve details about a rendering session, including the current session state, network access IP address and port, and the location of the cloud application service instance.
 *
 * @param request DescribeRenderingSessionRequest
 * @return DescribeRenderingSessionResponse
 */
DescribeRenderingSessionResponse Client::describeRenderingSession(const DescribeRenderingSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenderingSessionWithOptions(request, runtime);
}

/**
 * @summary Queries information about a stream.
 *
 * @param request DescribeStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamResponse
 */
DescribeStreamResponse Client::describeStreamWithOptions(const DescribeStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries information about a stream.
 *
 * @param request DescribeStreamRequest
 * @return DescribeStreamResponse
 */
DescribeStreamResponse Client::describeStream(const DescribeStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamWithOptions(request, runtime);
}

/**
 * @summary Retrieves the URL of a stream.
 *
 * @param request DescribeStreamURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamURLResponse
 */
DescribeStreamURLResponse Client::describeStreamURLWithOptions(const DescribeStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuth()) {
    query["Auth"] = request.getAuth();
  }

  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.getAuthKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.getExpire();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.getOutProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTranscode()) {
    query["Transcode"] = request.getTranscode();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Retrieves the URL of a stream.
 *
 * @param request DescribeStreamURLRequest
 * @return DescribeStreamURLResponse
 */
DescribeStreamURLResponse Client::describeStreamURL(const DescribeStreamURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamURLWithOptions(request, runtime);
}

/**
 * @summary Get the stream VOD record list, such as historical stream list from NVR.
 *
 * @param request DescribeStreamVodListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamVodListResponse
 */
DescribeStreamVodListResponse Client::describeStreamVodListWithOptions(const DescribeStreamVodListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Get the stream VOD record list, such as historical stream list from NVR.
 *
 * @param request DescribeStreamVodListRequest
 * @return DescribeStreamVodListResponse
 */
DescribeStreamVodListResponse Client::describeStreamVodList(const DescribeStreamVodListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamVodListWithOptions(request, runtime);
}

/**
 * @summary Lists video streams. You can filter the results by stream ID, name, group ID, device ID, or other criteria.
 *
 * @param request DescribeStreamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamsResponse
 */
DescribeStreamsResponse Client::describeStreamsWithOptions(const DescribeStreamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.getApp();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
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
 * @summary Lists video streams. You can filter the results by stream ID, name, group ID, device ID, or other criteria.
 *
 * @param request DescribeStreamsRequest
 * @return DescribeStreamsResponse
 */
DescribeStreamsResponse Client::describeStreams(const DescribeStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamsWithOptions(request, runtime);
}

/**
 * @summary Query information about a template.
 *
 * @param request DescribeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateResponse
 */
DescribeTemplateResponse Client::describeTemplateWithOptions(const DescribeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Query information about a template.
 *
 * @param request DescribeTemplateRequest
 * @return DescribeTemplateResponse
 */
DescribeTemplateResponse Client::describeTemplate(const DescribeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateWithOptions(request, runtime);
}

/**
 * @summary List templates.
 *
 * @param request DescribeTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplatesWithOptions(const DescribeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary List templates.
 *
 * @param request DescribeTemplatesRequest
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplates(const DescribeTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the URL information of a video-on-demand (VOD) stream.
 *
 * @param request DescribeVodStreamURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodStreamURLResponse
 */
DescribeVodStreamURLResponse Client::describeVodStreamURLWithOptions(const DescribeVodStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Retrieves the URL information of a video-on-demand (VOD) stream.
 *
 * @param request DescribeVodStreamURLRequest
 * @return DescribeVodStreamURLResponse
 */
DescribeVodStreamURLResponse Client::describeVodStreamURL(const DescribeVodStreamURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodStreamURLWithOptions(request, runtime);
}

/**
 * @summary Retrieve certificate details.
 *
 * @param request DescribeVsCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsCertificateDetailResponse
 */
DescribeVsCertificateDetailResponse Client::describeVsCertificateDetailWithOptions(const DescribeVsCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieve certificate details.
 *
 * @param request DescribeVsCertificateDetailRequest
 * @return DescribeVsCertificateDetailResponse
 */
DescribeVsCertificateDetailResponse Client::describeVsCertificateDetail(const DescribeVsCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsCertificateDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of domain name certificates.
 *
 * @param request DescribeVsCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsCertificateListResponse
 */
DescribeVsCertificateListResponse Client::describeVsCertificateListWithOptions(const DescribeVsCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieves a list of domain name certificates.
 *
 * @param request DescribeVsCertificateListRequest
 * @return DescribeVsCertificateListResponse
 */
DescribeVsCertificateListResponse Client::describeVsCertificateList(const DescribeVsCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsCertificateListWithOptions(request, runtime);
}

/**
 * @summary Retrieves usage data for connected devices.
 *
 * @description If you do not specify \\`StartTime\\` and \\`EndTime\\`, the API retrieves data from the last 24 hours by default. To query data for a specific time range, you must specify both \\`StartTime\\` and \\`EndTime\\`. The maximum time range for a single query is 31 days.
 * - You can query multiple domain names at once. Separate the domain names with commas.
 * - You can retrieve data from the last 90 days.
 * - The time granularity is one hour.
 *
 * @param request DescribeVsDevicesDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDevicesDataResponse
 */
DescribeVsDevicesDataResponse Client::describeVsDevicesDataWithOptions(const DescribeVsDevicesDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves usage data for connected devices.
 *
 * @description If you do not specify \\`StartTime\\` and \\`EndTime\\`, the API retrieves data from the last 24 hours by default. To query data for a specific time range, you must specify both \\`StartTime\\` and \\`EndTime\\`. The maximum time range for a single query is 31 days.
 * - You can query multiple domain names at once. Separate the domain names with commas.
 * - You can retrieve data from the last 90 days.
 * - The time granularity is one hour.
 *
 * @param request DescribeVsDevicesDataRequest
 * @return DescribeVsDevicesDataResponse
 */
DescribeVsDevicesDataResponse Client::describeVsDevicesData(const DescribeVsDevicesDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDevicesDataWithOptions(request, runtime);
}

/**
 * @summary Queries network bandwidth monitoring data for Domain Names.
 *
 * @param request DescribeVsDomainBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainBpsDataResponse
 */
DescribeVsDomainBpsDataResponse Client::describeVsDomainBpsDataWithOptions(const DescribeVsDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries network bandwidth monitoring data for Domain Names.
 *
 * @param request DescribeVsDomainBpsDataRequest
 * @return DescribeVsDomainBpsDataResponse
 */
DescribeVsDomainBpsDataResponse Client::describeVsDomainBpsData(const DescribeVsDomainBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainBpsDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves the certificate information for a specified accelerated domain name.
 *
 * @param request DescribeVsDomainCertificateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainCertificateInfoResponse
 */
DescribeVsDomainCertificateInfoResponse Client::describeVsDomainCertificateInfoWithOptions(const DescribeVsDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieves the certificate information for a specified accelerated domain name.
 *
 * @param request DescribeVsDomainCertificateInfoRequest
 * @return DescribeVsDomainCertificateInfoResponse
 */
DescribeVsDomainCertificateInfoResponse Client::describeVsDomainCertificateInfo(const DescribeVsDomainCertificateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainCertificateInfoWithOptions(request, runtime);
}

/**
 * @summary Queries domain name configurations. You can query the configurations of multiple features in a single request.
 *
 * @param request DescribeVsDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainConfigsResponse
 */
DescribeVsDomainConfigsResponse Client::describeVsDomainConfigsWithOptions(const DescribeVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries domain name configurations. You can query the configurations of multiple features in a single request.
 *
 * @param request DescribeVsDomainConfigsRequest
 * @return DescribeVsDomainConfigsResponse
 */
DescribeVsDomainConfigsResponse Client::describeVsDomainConfigs(const DescribeVsDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Obtains the basic configuration information for a specified Visual Edge Computing Service domain name.
 *
 * @param request DescribeVsDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainDetailResponse
 */
DescribeVsDomainDetailResponse Client::describeVsDomainDetailWithOptions(const DescribeVsDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Obtains the basic configuration information for a specified Visual Edge Computing Service domain name.
 *
 * @param request DescribeVsDomainDetailRequest
 * @return DescribeVsDomainDetailResponse
 */
DescribeVsDomainDetailResponse Client::describeVsDomainDetail(const DescribeVsDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the page view (PV) data for a domain name.
 *
 * @param request DescribeVsDomainPvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainPvDataResponse
 */
DescribeVsDomainPvDataResponse Client::describeVsDomainPvDataWithOptions(const DescribeVsDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the page view (PV) data for a domain name.
 *
 * @param request DescribeVsDomainPvDataRequest
 * @return DescribeVsDomainPvDataResponse
 */
DescribeVsDomainPvDataResponse Client::describeVsDomainPvData(const DescribeVsDomainPvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainPvDataWithOptions(request, runtime);
}

/**
 * @summary Retrieve page view (PV) and unique visitor (UV) data for a Visual Edge Computing Service domain.
 *
 * @param request DescribeVsDomainPvUvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainPvUvDataResponse
 */
DescribeVsDomainPvUvDataResponse Client::describeVsDomainPvUvDataWithOptions(const DescribeVsDomainPvUvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieve page view (PV) and unique visitor (UV) data for a Visual Edge Computing Service domain.
 *
 * @param request DescribeVsDomainPvUvDataRequest
 * @return DescribeVsDomainPvUvDataResponse
 */
DescribeVsDomainPvUvDataResponse Client::describeVsDomainPvUvData(const DescribeVsDomainPvUvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainPvUvDataWithOptions(request, runtime);
}

/**
 * @summary Retrieve domain name record data.
 *
 * @param request DescribeVsDomainRecordDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainRecordDataResponse
 */
DescribeVsDomainRecordDataResponse Client::describeVsDomainRecordDataWithOptions(const DescribeVsDomainRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieve domain name record data.
 *
 * @param request DescribeVsDomainRecordDataRequest
 * @return DescribeVsDomainRecordDataResponse
 */
DescribeVsDomainRecordDataResponse Client::describeVsDomainRecordData(const DescribeVsDomainRecordDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainRecordDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves domain region data.
 *
 * @param request DescribeVsDomainRegionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainRegionDataResponse
 */
DescribeVsDomainRegionDataResponse Client::describeVsDomainRegionDataWithOptions(const DescribeVsDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves domain region data.
 *
 * @param request DescribeVsDomainRegionDataRequest
 * @return DescribeVsDomainRegionDataResponse
 */
DescribeVsDomainRegionDataResponse Client::describeVsDomainRegionData(const DescribeVsDomainRegionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainRegionDataWithOptions(request, runtime);
}

/**
 * @summary Query network request monitoring data for a domain name.
 *
 * @param request DescribeVsDomainReqBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainReqBpsDataResponse
 */
DescribeVsDomainReqBpsDataResponse Client::describeVsDomainReqBpsDataWithOptions(const DescribeVsDomainReqBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Query network request monitoring data for a domain name.
 *
 * @param request DescribeVsDomainReqBpsDataRequest
 * @return DescribeVsDomainReqBpsDataResponse
 */
DescribeVsDomainReqBpsDataResponse Client::describeVsDomainReqBpsData(const DescribeVsDomainReqBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainReqBpsDataWithOptions(request, runtime);
}

/**
 * @summary Obtain traffic data for domain name requests.
 *
 * @param request DescribeVsDomainReqTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainReqTrafficDataResponse
 */
DescribeVsDomainReqTrafficDataResponse Client::describeVsDomainReqTrafficDataWithOptions(const DescribeVsDomainReqTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Obtain traffic data for domain name requests.
 *
 * @param request DescribeVsDomainReqTrafficDataRequest
 * @return DescribeVsDomainReqTrafficDataResponse
 */
DescribeVsDomainReqTrafficDataResponse Client::describeVsDomainReqTrafficData(const DescribeVsDomainReqTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainReqTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves snapshot data for a domain name.
 *
 * @param request DescribeVsDomainSnapshotDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainSnapshotDataResponse
 */
DescribeVsDomainSnapshotDataResponse Client::describeVsDomainSnapshotDataWithOptions(const DescribeVsDomainSnapshotDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves snapshot data for a domain name.
 *
 * @param request DescribeVsDomainSnapshotDataRequest
 * @return DescribeVsDomainSnapshotDataResponse
 */
DescribeVsDomainSnapshotDataResponse Client::describeVsDomainSnapshotData(const DescribeVsDomainSnapshotDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainSnapshotDataWithOptions(request, runtime);
}

/**
 * @summary Retrieve traffic data for a domain name.
 *
 * @param request DescribeVsDomainTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainTrafficDataResponse
 */
DescribeVsDomainTrafficDataResponse Client::describeVsDomainTrafficDataWithOptions(const DescribeVsDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieve traffic data for a domain name.
 *
 * @param request DescribeVsDomainTrafficDataRequest
 * @return DescribeVsDomainTrafficDataResponse
 */
DescribeVsDomainTrafficDataResponse Client::describeVsDomainTrafficData(const DescribeVsDomainTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Retrieve UV data by domain name.
 *
 * @param request DescribeVsDomainUvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsDomainUvDataResponse
 */
DescribeVsDomainUvDataResponse Client::describeVsDomainUvDataWithOptions(const DescribeVsDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieve UV data by domain name.
 *
 * @param request DescribeVsDomainUvDataRequest
 * @return DescribeVsDomainUvDataResponse
 */
DescribeVsDomainUvDataResponse Client::describeVsDomainUvData(const DescribeVsDomainUvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsDomainUvDataWithOptions(request, runtime);
}

/**
 * @summary Queries the pull stream configurations for a domain name.
 *
 * @param request DescribeVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsPullStreamInfoConfigResponse
 */
DescribeVsPullStreamInfoConfigResponse Client::describeVsPullStreamInfoConfigWithOptions(const DescribeVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the pull stream configurations for a domain name.
 *
 * @param request DescribeVsPullStreamInfoConfigRequest
 * @return DescribeVsPullStreamInfoConfigResponse
 */
DescribeVsPullStreamInfoConfigResponse Client::describeVsPullStreamInfoConfig(const DescribeVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the stream ingest callback configuration.
 *
 * @param request DescribeVsStreamsNotifyUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsStreamsNotifyUrlConfigResponse
 */
DescribeVsStreamsNotifyUrlConfigResponse Client::describeVsStreamsNotifyUrlConfigWithOptions(const DescribeVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the stream ingest callback configuration.
 *
 * @param request DescribeVsStreamsNotifyUrlConfigRequest
 * @return DescribeVsStreamsNotifyUrlConfigResponse
 */
DescribeVsStreamsNotifyUrlConfigResponse Client::describeVsStreamsNotifyUrlConfig(const DescribeVsStreamsNotifyUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about all active streams for a specified domain name or application.
 *
 * @param request DescribeVsStreamsOnlineListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsStreamsOnlineListResponse
 */
DescribeVsStreamsOnlineListResponse Client::describeVsStreamsOnlineListWithOptions(const DescribeVsStreamsOnlineListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
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
 * @summary Retrieves information about all active streams for a specified domain name or application.
 *
 * @param request DescribeVsStreamsOnlineListRequest
 * @return DescribeVsStreamsOnlineListResponse
 */
DescribeVsStreamsOnlineListResponse Client::describeVsStreamsOnlineList(const DescribeVsStreamsOnlineListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsStreamsOnlineListWithOptions(request, runtime);
}

/**
 * @summary Retrieve stream ingest records for a domain, an application under that domain, or a specific stream within a specified time range.
 *
 * @param request DescribeVsStreamsPublishListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsStreamsPublishListResponse
 */
DescribeVsStreamsPublishListResponse Client::describeVsStreamsPublishListWithOptions(const DescribeVsStreamsPublishListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
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
 * @summary Retrieve stream ingest records for a domain, an application under that domain, or a specific stream within a specified time range.
 *
 * @param request DescribeVsStreamsPublishListRequest
 * @return DescribeVsStreamsPublishListResponse
 */
DescribeVsStreamsPublishListResponse Client::describeVsStreamsPublishList(const DescribeVsStreamsPublishListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsStreamsPublishListWithOptions(request, runtime);
}

/**
 * @summary Retrieves a user\\"s domain names ranked by traffic.
 * If you do not specify StartTime and EndTime, data for the current month is retrieved by default. To query data over a specific time range, you must specify both StartTime and EndTime.
 * \\* You can retrieve data for a maximum of 90 days.
 *
 * @param request DescribeVsTopDomainsByFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsTopDomainsByFlowResponse
 */
DescribeVsTopDomainsByFlowResponse Client::describeVsTopDomainsByFlowWithOptions(const DescribeVsTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves a user\\"s domain names ranked by traffic.
 * If you do not specify StartTime and EndTime, data for the current month is retrieved by default. To query data over a specific time range, you must specify both StartTime and EndTime.
 * \\* You can retrieve data for a maximum of 90 days.
 *
 * @param request DescribeVsTopDomainsByFlowRequest
 * @return DescribeVsTopDomainsByFlowResponse
 */
DescribeVsTopDomainsByFlowResponse Client::describeVsTopDomainsByFlow(const DescribeVsTopDomainsByFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsTopDomainsByFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the daily peak number of concurrent stream ingest operations.
 *
 * @param request DescribeVsUpPeakPublishStreamDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsUpPeakPublishStreamDataResponse
 */
DescribeVsUpPeakPublishStreamDataResponse Client::describeVsUpPeakPublishStreamDataWithOptions(const DescribeVsUpPeakPublishStreamDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainSwitch()) {
    query["DomainSwitch"] = request.getDomainSwitch();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the daily peak number of concurrent stream ingest operations.
 *
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary DescribeVsVerifyContent
 *
 * @param request DescribeVsVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVsVerifyContentResponse
 */
DescribeVsVerifyContentResponse Client::describeVsVerifyContentWithOptions(const DescribeVsVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary DescribeVsVerifyContent
 *
 * @param request DescribeVsVerifyContentRequest
 * @return DescribeVsVerifyContentResponse
 */
DescribeVsVerifyContentResponse Client::describeVsVerifyContent(const DescribeVsVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVsVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Disassociate cloud application service instances from a project.
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
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.getRenderingInstanceIdsShrink();
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
 * @summary Disassociate cloud application service instances from a project.
 *
 * @param request DisassociateRenderingProjectInstancesRequest
 * @return DisassociateRenderingProjectInstancesResponse
 */
DisassociateRenderingProjectInstancesResponse Client::disassociateRenderingProjectInstances(const DisassociateRenderingProjectInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateRenderingProjectInstancesWithOptions(request, runtime);
}

/**
 * @summary Forbids pushing a specific stream. You can schedule a time to resume the stream.
 *
 * @param request ForbidVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForbidVsStreamResponse
 */
ForbidVsStreamResponse Client::forbidVsStreamWithOptions(const ForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.getControlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.getLiveStreamType();
  }

  if (!!request.hasOneshot()) {
    query["Oneshot"] = request.getOneshot();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResumeTime()) {
    query["ResumeTime"] = request.getResumeTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Forbids pushing a specific stream. You can schedule a time to resume the stream.
 *
 * @param request ForbidVsStreamRequest
 * @return ForbidVsStreamResponse
 */
ForbidVsStreamResponse Client::forbidVsStream(const ForbidVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forbidVsStreamWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status of a control command to determine whether the command was successful and to retrieve the result string.
 *
 * @param request GetRenderingInstanceCommandsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenderingInstanceCommandsStatusResponse
 */
GetRenderingInstanceCommandsStatusResponse Client::getRenderingInstanceCommandsStatusWithOptions(const GetRenderingInstanceCommandsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCmdId()) {
    query["CmdId"] = request.getCmdId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Queries the execution status of a control command to determine whether the command was successful and to retrieve the result string.
 *
 * @param request GetRenderingInstanceCommandsStatusRequest
 * @return GetRenderingInstanceCommandsStatusResponse
 */
GetRenderingInstanceCommandsStatusResponse Client::getRenderingInstanceCommandsStatus(const GetRenderingInstanceCommandsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenderingInstanceCommandsStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the streaming connection information for a cloud application service instance. Call this operation before establishing each streaming connection to obtain the latest connection details.
 *
 * @param request GetRenderingInstanceStreamingInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenderingInstanceStreamingInfoResponse
 */
GetRenderingInstanceStreamingInfoResponse Client::getRenderingInstanceStreamingInfoWithOptions(const GetRenderingInstanceStreamingInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Retrieves the streaming connection information for a cloud application service instance. Call this operation before establishing each streaming connection to obtain the latest connection details.
 *
 * @param request GetRenderingInstanceStreamingInfoRequest
 * @return GetRenderingInstanceStreamingInfoResponse
 */
GetRenderingInstanceStreamingInfoResponse Client::getRenderingInstanceStreamingInfo(const GetRenderingInstanceStreamingInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenderingInstanceStreamingInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the data volume statistics for the states of project instances that meet specified conditions.
 *
 * @param request GetRenderingProjectInstanceStateMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenderingProjectInstanceStateMetricsResponse
 */
GetRenderingProjectInstanceStateMetricsResponse Client::getRenderingProjectInstanceStateMetricsWithOptions(const GetRenderingProjectInstanceStateMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Queries the data volume statistics for the states of project instances that meet specified conditions.
 *
 * @param request GetRenderingProjectInstanceStateMetricsRequest
 * @return GetRenderingProjectInstanceStateMetricsResponse
 */
GetRenderingProjectInstanceStateMetricsResponse Client::getRenderingProjectInstanceStateMetrics(const GetRenderingProjectInstanceStateMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenderingProjectInstanceStateMetricsWithOptions(request, runtime);
}

/**
 * @summary Moves to a specified preset.
 *
 * @param request GotoPresetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GotoPresetResponse
 */
GotoPresetResponse Client::gotoPresetWithOptions(const GotoPresetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPresetId()) {
    query["PresetId"] = request.getPresetId();
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
 * @summary Moves to a specified preset.
 *
 * @param request GotoPresetRequest
 * @return GotoPresetResponse
 */
GotoPresetResponse Client::gotoPreset(const GotoPresetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return gotoPresetWithOptions(request, runtime);
}

/**
 * @summary Installs a cloud application to a specified cloud application instance. This is an asynchronous interface. To monitor the installation progress, use the ListCloudAppInstallations interface.
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
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.getRenderingInstanceIdsShrink();
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
 * @summary Installs a cloud application to a specified cloud application instance. This is an asynchronous interface. To monitor the installation progress, use the ListCloudAppInstallations interface.
 *
 * @param request InstallCloudAppRequest
 * @return InstallCloudAppResponse
 */
InstallCloudAppResponse Client::installCloudApp(const InstallCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installCloudAppWithOptions(request, runtime);
}

/**
 * @summary Lists cloud application installations. The response includes the installation status of cloud application service instances and supports paged queries.
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
 * @summary Lists cloud application installations. The response includes the installation status of cloud application service instances and supports paged queries.
 *
 * @param request ListCloudAppInstallationsRequest
 * @return ListCloudAppInstallationsResponse
 */
ListCloudAppInstallationsResponse Client::listCloudAppInstallations(const ListCloudAppInstallationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAppInstallationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of patches for a cloud application.
 *
 * @description > Specify at least one of the template ID or the template type.
 *
 * @param request ListCloudAppPatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAppPatchesResponse
 */
ListCloudAppPatchesResponse Client::listCloudAppPatchesWithOptions(const ListCloudAppPatchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasPatchName()) {
    query["PatchName"] = request.getPatchName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the list of patches for a cloud application.
 *
 * @description > Specify at least one of the template ID or the template type.
 *
 * @param request ListCloudAppPatchesRequest
 * @return ListCloudAppPatchesResponse
 */
ListCloudAppPatchesResponse Client::listCloudAppPatches(const ListCloudAppPatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAppPatchesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of cloud applications. This operation supports paged queries.
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
 * @summary Queries a list of cloud applications. This operation supports paged queries.
 *
 * @param request ListCloudAppsRequest
 * @return ListCloudAppsResponse
 */
ListCloudAppsResponse Client::listCloudApps(const ListCloudAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAppsWithOptions(request, runtime);
}

/**
 * @summary Queries payload information for cloud application services. This operation supports paged queries.
 *
 * @description ## Request description
 * - This API queries payload information for cloud application services and supports filtering and paged queries using various parameters.
 * - Optional parameters include `Spec`, `Statuses`, `InstanceIds`, `PlanIds`, and `HiveIds`.
 * - For paged queries, you can use the `PageNumber` and `PageSize` parameters to control the amount of data returned. The default page size is 10 records, and the maximum is 100 records.
 * - You can specify a time range for the query using the `StartTime` and `EndTime` parameters.
 *
 * @param tmpReq ListEdgeWorkersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeWorkersResponse
 */
ListEdgeWorkersResponse Client::listEdgeWorkersWithOptions(const ListEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEdgeWorkersShrinkRequest request = ListEdgeWorkersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHiveIds()) {
    request.setHiveIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHiveIds(), "HiveIds", "json"));
  }

  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasPlanIds()) {
    request.setPlanIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPlanIds(), "PlanIds", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "Statuses", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHiveIdsShrink()) {
    query["HiveIds"] = request.getHiveIdsShrink();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlanIdsShrink()) {
    query["PlanIds"] = request.getPlanIdsShrink();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatusesShrink()) {
    query["Statuses"] = request.getStatusesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeWorkers"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeWorkersResponse>();
}

/**
 * @summary Queries payload information for cloud application services. This operation supports paged queries.
 *
 * @description ## Request description
 * - This API queries payload information for cloud application services and supports filtering and paged queries using various parameters.
 * - Optional parameters include `Spec`, `Statuses`, `InstanceIds`, `PlanIds`, and `HiveIds`.
 * - For paged queries, you can use the `PageNumber` and `PageSize` parameters to control the amount of data returned. The default page size is 10 records, and the maximum is 100 records.
 * - You can specify a time range for the query using the `StartTime` and `EndTime` parameters.
 *
 * @param request ListEdgeWorkersRequest
 * @return ListEdgeWorkersResponse
 */
ListEdgeWorkersResponse Client::listEdgeWorkers(const ListEdgeWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeWorkersWithOptions(request, runtime);
}

/**
 * @summary Lists the push status records for a file pushed to cloud application service instances. It supports paged query.
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
 * @summary Lists the push status records for a file pushed to cloud application service instances. It supports paged query.
 *
 * @param request ListFilePushStatusesRequest
 * @return ListFilePushStatusesResponse
 */
ListFilePushStatusesResponse Client::listFilePushStatuses(const ListFilePushStatusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilePushStatusesWithOptions(request, runtime);
}

/**
 * @summary Lists uploaded files. The response includes the upload status for each file and supports paged queries.
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
 * @summary Lists uploaded files. The response includes the upload status for each file and supports paged queries.
 *
 * @param request ListFilesRequest
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFiles(const ListFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilesWithOptions(request, runtime);
}

/**
 * @summary 查询所有集群信息，支持分页查询。
 *
 * @description ## 请求说明
 * - 该 API 用于查询用户创建的所有集群信息。
 * - 支持通过 `HiveId` 和 `Name` 参数进行过滤查询。
 * - 分页参数 `PageNumber` 和 `PageSize` 可以控制返回结果的数量和页码，默认每页显示10条记录，最大支持100条。
 * - `StartTime` 和 `EndTime` 参数可用于指定时间范围内的集群信息查询，但非必填项。
 *
 * @param request ListHivesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHivesResponse
 */
ListHivesResponse Client::listHivesWithOptions(const ListHivesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHives"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHivesResponse>();
}

/**
 * @summary 查询所有集群信息，支持分页查询。
 *
 * @description ## 请求说明
 * - 该 API 用于查询用户创建的所有集群信息。
 * - 支持通过 `HiveId` 和 `Name` 参数进行过滤查询。
 * - 分页参数 `PageNumber` 和 `PageSize` 可以控制返回结果的数量和页码，默认每页显示10条记录，最大支持100条。
 * - `StartTime` 和 `EndTime` 参数可用于指定时间范围内的集群信息查询，但非必填项。
 *
 * @param request ListHivesRequest
 * @return ListHivesResponse
 */
ListHivesResponse Client::listHives(const ListHivesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHivesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of public keys that match the specified criteria. This operation supports pagination.
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
 * @summary Retrieves a list of public keys that match the specified criteria. This operation supports pagination.
 *
 * @param request ListPublicKeysRequest
 * @return ListPublicKeysResponse
 */
ListPublicKeysResponse Client::listPublicKeys(const ListPublicKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublicKeysWithOptions(request, runtime);
}

/**
 * @summary Queries information about the data packets of cloud applications. Paged queries are supported.
 *
 * @param request ListRenderingDataPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingDataPackagesResponse
 */
ListRenderingDataPackagesResponse Client::listRenderingDataPackagesWithOptions(const ListRenderingDataPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.getDataPackageId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Queries information about the data packets of cloud applications. Paged queries are supported.
 *
 * @param request ListRenderingDataPackagesRequest
 * @return ListRenderingDataPackagesResponse
 */
ListRenderingDataPackagesResponse Client::listRenderingDataPackages(const ListRenderingDataPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingDataPackagesWithOptions(request, runtime);
}

/**
 * @summary Queries custom gateways.
 *
 * @description > Specify at least the template ID or the template type.
 *
 * @param request ListRenderingInstanceGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingInstanceGatewayResponse
 */
ListRenderingInstanceGatewayResponse Client::listRenderingInstanceGatewayWithOptions(const ListRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGatewayInstanceId()) {
    query["GatewayInstanceId"] = request.getGatewayInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries custom gateways.
 *
 * @description > Specify at least the template ID or the template type.
 *
 * @param request ListRenderingInstanceGatewayRequest
 * @return ListRenderingInstanceGatewayResponse
 */
ListRenderingInstanceGatewayResponse Client::listRenderingInstanceGateway(const ListRenderingInstanceGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingInstanceGatewayWithOptions(request, runtime);
}

/**
 * @summary Lists basic information about cloud application service instances and supports paged queries.
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
 * @summary Lists basic information about cloud application service instances and supports paged queries.
 *
 * @param request ListRenderingInstancesRequest
 * @return ListRenderingInstancesResponse
 */
ListRenderingInstancesResponse Client::listRenderingInstances(const ListRenderingInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieve a paginated list of cloud application service instances associated with a project.
 *
 * @description ## Request description
 * - This operation enables you to query cloud application service instances in a project using multiple filter conditions, such as status and instance ID.
 *
 * @param request ListRenderingProjectInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingProjectInstancesResponse
 */
ListRenderingProjectInstancesResponse Client::listRenderingProjectInstancesWithOptions(const ListRenderingProjectInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary Retrieve a paginated list of cloud application service instances associated with a project.
 *
 * @description ## Request description
 * - This operation enables you to query cloud application service instances in a project using multiple filter conditions, such as status and instance ID.
 *
 * @param request ListRenderingProjectInstancesRequest
 * @return ListRenderingProjectInstancesResponse
 */
ListRenderingProjectInstancesResponse Client::listRenderingProjectInstances(const ListRenderingProjectInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingProjectInstancesWithOptions(request, runtime);
}

/**
 * @summary Obtain a paged list of basic information about cloud application projects for the current user.
 *
 * @description ## Request details
 * - This operation returns a paged list of basic information about rendering projects for a specified user.
 * - Filter results by `ProjectId` or `ProjectName`.
 *
 * @param request ListRenderingProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingProjectsResponse
 */
ListRenderingProjectsResponse Client::listRenderingProjectsWithOptions(const ListRenderingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Obtain a paged list of basic information about cloud application projects for the current user.
 *
 * @description ## Request details
 * - This operation returns a paged list of basic information about rendering projects for a specified user.
 * - Filter results by `ProjectId` or `ProjectName`.
 *
 * @param request ListRenderingProjectsRequest
 * @return ListRenderingProjectsResponse
 */
ListRenderingProjectsResponse Client::listRenderingProjects(const ListRenderingProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingProjectsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query for the list of cloud application service sessions based on specified conditions.
 *
 * @description ## Request Description
 * - This API supports filtering and paged query of user rendering session lists with various parameter combinations.
 * - You must provide at least one of the `SessionId` or `ClientId` parameters. Neither parameter is mandatory independently. If both parameters are provided, a more precise match is performed based on these two parameters.
 *
 * @param request ListRenderingSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRenderingSessionsResponse
 */
ListRenderingSessionsResponse Client::listRenderingSessionsWithOptions(const ListRenderingSessionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary Performs a paged query for the list of cloud application service sessions based on specified conditions.
 *
 * @description ## Request Description
 * - This API supports filtering and paged query of user rendering session lists with various parameter combinations.
 * - You must provide at least one of the `SessionId` or `ClientId` parameters. Neither parameter is mandatory independently. If both parameters are provided, a more precise match is performed based on these two parameters.
 *
 * @param request ListRenderingSessionsRequest
 * @return ListRenderingSessionsResponse
 */
ListRenderingSessionsResponse Client::listRenderingSessions(const ListRenderingSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRenderingSessionsWithOptions(request, runtime);
}

/**
 * @summary 查询规格信息，支持分页查询。
 *
 * @description ## 请求说明
 * - 该 API 用于查询所有可用的云应用服务规格信息。
 * - 支持通过 `Specification` 参数过滤特定规格。
 * - 分页查询时，可以通过 `PageNumber` 和 `PageSize` 参数控制返回的数据量。
 *
 * @param request ListSpecificationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSpecificationsResponse
 */
ListSpecificationsResponse Client::listSpecificationsWithOptions(const ListSpecificationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSpecifications"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSpecificationsResponse>();
}

/**
 * @summary 查询规格信息，支持分页查询。
 *
 * @description ## 请求说明
 * - 该 API 用于查询所有可用的云应用服务规格信息。
 * - 支持通过 `Specification` 参数过滤特定规格。
 * - 分页查询时，可以通过 `PageNumber` 和 `PageSize` 参数控制返回的数据量。
 *
 * @param request ListSpecificationsRequest
 * @return ListSpecificationsResponse
 */
ListSpecificationsResponse Client::listSpecifications(const ListSpecificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSpecificationsWithOptions(request, runtime);
}

/**
 * @summary Manages secure logons.
 *
 * @param request ManageLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageLoginResponse
 */
ManageLoginResponse Client::manageLoginWithOptions(const ManageLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.getActionName();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.getKeyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Manages secure logons.
 *
 * @param request ManageLoginRequest
 * @return ManageLoginResponse
 */
ManageLoginResponse Client::manageLogin(const ManageLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manageLoginWithOptions(request, runtime);
}

/**
 * @summary Modifies the metadata of a specified workflow.
 *
 * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
 *
 * @param request ModifyComfyWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyComfyWorkflowResponse
 */
ModifyComfyWorkflowResponse Client::modifyComfyWorkflowWithOptions(const ModifyComfyWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  if (!!request.hasWorkflowName()) {
    query["WorkflowName"] = request.getWorkflowName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyComfyWorkflow"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyComfyWorkflowResponse>();
}

/**
 * @summary Modifies the metadata of a specified workflow.
 *
 * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
 *
 * @param request ModifyComfyWorkflowRequest
 * @return ModifyComfyWorkflowResponse
 */
ModifyComfyWorkflowResponse Client::modifyComfyWorkflow(const ModifyComfyWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyComfyWorkflowWithOptions(request, runtime);
}

/**
 * @summary Update device information.
 *
 * @param request ModifyDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceResponse
 */
ModifyDeviceResponse Client::modifyDeviceWithOptions(const ModifyDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmMethod()) {
    query["AlarmMethod"] = request.getAlarmMethod();
  }

  if (!!request.hasAutoDirectory()) {
    query["AutoDirectory"] = request.getAutoDirectory();
  }

  if (!!request.hasAutoPos()) {
    query["AutoPos"] = request.getAutoPos();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.getLatitude();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.getLongitude();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPosInterval()) {
    query["PosInterval"] = request.getPosInterval();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
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
 * @summary Update device information.
 *
 * @param request ModifyDeviceRequest
 * @return ModifyDeviceResponse
 */
ModifyDeviceResponse Client::modifyDevice(const ModifyDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceWithOptions(request, runtime);
}

/**
 * @summary Updates the alarm status of a device.
 *
 * @param request ModifyDeviceAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceAlarmResponse
 */
ModifyDeviceAlarmResponse Client::modifyDeviceAlarmWithOptions(const ModifyDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmId()) {
    query["AlarmId"] = request.getAlarmId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Updates the alarm status of a device.
 *
 * @param request ModifyDeviceAlarmRequest
 * @return ModifyDeviceAlarmResponse
 */
ModifyDeviceAlarmResponse Client::modifyDeviceAlarm(const ModifyDeviceAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceAlarmWithOptions(request, runtime);
}

/**
 * @summary Modify the device image capture configuration.
 *
 * @param request ModifyDeviceCaptureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceCaptureResponse
 */
ModifyDeviceCaptureResponse Client::modifyDeviceCaptureWithOptions(const ModifyDeviceCaptureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.getImage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.getVideo();
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
 * @summary Modify the device image capture configuration.
 *
 * @param request ModifyDeviceCaptureRequest
 * @return ModifyDeviceCaptureResponse
 */
ModifyDeviceCaptureResponse Client::modifyDeviceCapture(const ModifyDeviceCaptureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceCaptureWithOptions(request, runtime);
}

/**
 * @summary Updates the list of channels for a device.
 *
 * @param request ModifyDeviceChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceChannelsResponse
 */
ModifyDeviceChannelsResponse Client::modifyDeviceChannelsWithOptions(const ModifyDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannels()) {
    query["Channels"] = request.getChannels();
  }

  if (!!request.hasDeviceStatus()) {
    query["DeviceStatus"] = request.getDeviceStatus();
  }

  if (!!request.hasDsn()) {
    query["Dsn"] = request.getDsn();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Updates the list of channels for a device.
 *
 * @param request ModifyDeviceChannelsRequest
 * @return ModifyDeviceChannelsResponse
 */
ModifyDeviceChannelsResponse Client::modifyDeviceChannels(const ModifyDeviceChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceChannelsWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a directory.
 *
 * @param request ModifyDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDirectoryResponse
 */
ModifyDirectoryResponse Client::modifyDirectoryWithOptions(const ModifyDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Modifies the information of a directory.
 *
 * @param request ModifyDirectoryRequest
 * @return ModifyDirectoryResponse
 */
ModifyDirectoryResponse Client::modifyDirectory(const ModifyDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDirectoryWithOptions(request, runtime);
}

/**
 * @summary You can modify the details of a space.
 *
 * @param request ModifyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroupWithOptions(const ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.getCallback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInProtocol()) {
    query["InProtocol"] = request.getInProtocol();
  }

  if (!!request.hasLazyPull()) {
    query["LazyPull"] = request.getLazyPull();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutProtocol()) {
    query["OutProtocol"] = request.getOutProtocol();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.getPlayDomain();
  }

  if (!!request.hasPushDomain()) {
    query["PushDomain"] = request.getPushDomain();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
 * @summary You can modify the details of a space.
 *
 * @param request ModifyGroupRequest
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroup(const ModifyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the name or description of a specified cluster.
 *
 * @description ## Request
 * - This API modifies the name and/or description of an existing cluster.
 * - `HiveId` is a required parameter that identifies the cluster to modify.
 * - The `Name` and `Description` parameters are optional. You can specify either or both to update the corresponding attributes of the cluster.
 *
 * @param request ModifyHiveAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHiveAttributeResponse
 */
ModifyHiveAttributeResponse Client::modifyHiveAttributeWithOptions(const ModifyHiveAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHiveAttribute"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHiveAttributeResponse>();
}

/**
 * @summary Updates the name or description of a specified cluster.
 *
 * @description ## Request
 * - This API modifies the name and/or description of an existing cluster.
 * - `HiveId` is a required parameter that identifies the cluster to modify.
 * - The `Name` and `Description` parameters are optional. You can specify either or both to update the corresponding attributes of the cluster.
 *
 * @param request ModifyHiveAttributeRequest
 * @return ModifyHiveAttributeResponse
 */
ModifyHiveAttributeResponse Client::modifyHiveAttribute(const ModifyHiveAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHiveAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a parent platform.
 *
 * @param request ModifyParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParentPlatformResponse
 */
ModifyParentPlatformResponse Client::modifyParentPlatformWithOptions(const ModifyParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasClientAuth()) {
    query["ClientAuth"] = request.getClientAuth();
  }

  if (!!request.hasClientPassword()) {
    query["ClientPassword"] = request.getClientPassword();
  }

  if (!!request.hasClientUsername()) {
    query["ClientUsername"] = request.getClientUsername();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
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
 * @summary Modifies the information of a parent platform.
 *
 * @param request ModifyParentPlatformRequest
 * @return ModifyParentPlatformResponse
 */
ModifyParentPlatformResponse Client::modifyParentPlatform(const ModifyParentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParentPlatformWithOptions(request, runtime);
}

/**
 * @summary Change the billing method for a Graphic Computing Service instance.
 *
 * @param request ModifyRenderingChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingChargeTypeResponse
 */
ModifyRenderingChargeTypeResponse Client::modifyRenderingChargeTypeWithOptions(const ModifyRenderingChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasInstanceBillingCycle()) {
    query["InstanceBillingCycle"] = request.getInstanceBillingCycle();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRenderingChargeType"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRenderingChargeTypeResponse>();
}

/**
 * @summary Change the billing method for a Graphic Computing Service instance.
 *
 * @param request ModifyRenderingChargeTypeRequest
 * @return ModifyRenderingChargeTypeResponse
 */
ModifyRenderingChargeTypeResponse Client::modifyRenderingChargeType(const ModifyRenderingChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades a cloud application service instance.
 *
 * @param request ModifyRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingInstanceResponse
 */
ModifyRenderingInstanceResponse Client::modifyRenderingInstanceWithOptions(const ModifyRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasRenderingSpec()) {
    query["RenderingSpec"] = request.getRenderingSpec();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.getStorageSize();
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
 * @summary Upgrades or downgrades a cloud application service instance.
 *
 * @param request ModifyRenderingInstanceRequest
 * @return ModifyRenderingInstanceResponse
 */
ModifyRenderingInstanceResponse Client::modifyRenderingInstance(const ModifyRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a cloud application service instance.
 *
 * @param request ModifyRenderingInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingInstanceAttributeResponse
 */
ModifyRenderingInstanceAttributeResponse Client::modifyRenderingInstanceAttributeWithOptions(const ModifyRenderingInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Modifies the attributes of a cloud application service instance.
 *
 * @param request ModifyRenderingInstanceAttributeRequest
 * @return ModifyRenderingInstanceAttributeResponse
 */
ModifyRenderingInstanceAttributeResponse Client::modifyRenderingInstanceAttribute(const ModifyRenderingInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the rate limiting bandwidth for a cloud application service instance. You can call the DescribeRenderingInstance operation to retrieve the current rate limiting value and check the status of the rate limiting update.
 *
 * @param request ModifyRenderingInstanceBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRenderingInstanceBandwidthResponse
 */
ModifyRenderingInstanceBandwidthResponse Client::modifyRenderingInstanceBandwidthWithOptions(const ModifyRenderingInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxEgressBandwidth()) {
    query["MaxEgressBandwidth"] = request.getMaxEgressBandwidth();
  }

  if (!!request.hasMaxIngressBandwidth()) {
    query["MaxIngressBandwidth"] = request.getMaxIngressBandwidth();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Updates the rate limiting bandwidth for a cloud application service instance. You can call the DescribeRenderingInstance operation to retrieve the current rate limiting value and check the status of the rate limiting update.
 *
 * @param request ModifyRenderingInstanceBandwidthRequest
 * @return ModifyRenderingInstanceBandwidthResponse
 */
ModifyRenderingInstanceBandwidthResponse Client::modifyRenderingInstanceBandwidth(const ModifyRenderingInstanceBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRenderingInstanceBandwidthWithOptions(request, runtime);
}

/**
 * @summary Modifies template information.
 *
 * @param request ModifyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateResponse
 */
ModifyTemplateResponse Client::modifyTemplateWithOptions(const ModifyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallback()) {
    query["Callback"] = request.getCallback();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.getFileFormat();
  }

  if (!!request.hasFlv()) {
    query["Flv"] = request.getFlv();
  }

  if (!!request.hasHlsM3u8()) {
    query["HlsM3u8"] = request.getHlsM3u8();
  }

  if (!!request.hasHlsTs()) {
    query["HlsTs"] = request.getHlsTs();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasJpgOnDemand()) {
    query["JpgOnDemand"] = request.getJpgOnDemand();
  }

  if (!!request.hasJpgOverwrite()) {
    query["JpgOverwrite"] = request.getJpgOverwrite();
  }

  if (!!request.hasJpgSequence()) {
    query["JpgSequence"] = request.getJpgSequence();
  }

  if (!!request.hasMp4()) {
    query["Mp4"] = request.getMp4();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.getOssBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.getOssFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  if (!!request.hasTransConfigsJSON()) {
    query["TransConfigsJSON"] = request.getTransConfigsJSON();
  }

  if (!!request.hasTrigger()) {
    query["Trigger"] = request.getTrigger();
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
 * @summary Modifies template information.
 *
 * @param request ModifyTemplateRequest
 * @return ModifyTemplateResponse
 */
ModifyTemplateResponse Client::modifyTemplate(const ModifyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateWithOptions(request, runtime);
}

/**
 * @summary Moves the specified cloud application service instances from their current cluster to the target Hive.
 *
 * @description ## Request
 * - Ensure the target Hive has sufficient resources to accommodate the instances.
 *
 * @param tmpReq MoveHiveEdgeWorkersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveHiveEdgeWorkersResponse
 */
MoveHiveEdgeWorkersResponse Client::moveHiveEdgeWorkersWithOptions(const MoveHiveEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MoveHiveEdgeWorkersShrinkRequest request = MoveHiveEdgeWorkersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasHiveId()) {
    query["HiveId"] = request.getHiveId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveHiveEdgeWorkers"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveHiveEdgeWorkersResponse>();
}

/**
 * @summary Moves the specified cloud application service instances from their current cluster to the target Hive.
 *
 * @description ## Request
 * - Ensure the target Hive has sufficient resources to accommodate the instances.
 *
 * @param request MoveHiveEdgeWorkersRequest
 * @return MoveHiveEdgeWorkersResponse
 */
MoveHiveEdgeWorkersResponse Client::moveHiveEdgeWorkers(const MoveHiveEdgeWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveHiveEdgeWorkersWithOptions(request, runtime);
}

/**
 * @summary Activates the service.
 *
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
 * @summary Activates the service.
 *
 * @return OpenVsServiceResponse
 */
OpenVsServiceResponse Client::openVsService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openVsServiceWithOptions(runtime);
}

/**
 * @summary Push a file to a specified cloud application service instance. This is an asynchronous operation. You can query the push progress using the ListFilePushStatuses operation.
 *
 * @param request PushFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushFileResponse
 */
PushFileResponse Client::pushFileWithOptions(const PushFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Push a file to a specified cloud application service instance. This is an asynchronous operation. You can query the push progress using the ListFilePushStatuses operation.
 *
 * @param request PushFileRequest
 * @return PushFileResponse
 */
PushFileResponse Client::pushFile(const PushFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushFileWithOptions(request, runtime);
}

/**
 * @summary Restarts a cloud application service instance. You can call the DescribeRenderingInstance API to monitor the restart progress.
 *
 * @param request RebootRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootRenderingInstanceResponse
 */
RebootRenderingInstanceResponse Client::rebootRenderingInstanceWithOptions(const RebootRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Restarts a cloud application service instance. You can call the DescribeRenderingInstance API to monitor the restart progress.
 *
 * @param request RebootRenderingInstanceRequest
 * @return RebootRenderingInstanceResponse
 */
RebootRenderingInstanceResponse Client::rebootRenderingInstance(const RebootRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Restarts the host of a cloud application service instance.
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
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.getRenderingInstanceIdsShrink();
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
 * @summary Restarts the host of a cloud application service instance.
 *
 * @param request RebootRenderingServerRequest
 * @return RebootRenderingServerResponse
 */
RebootRenderingServerResponse Client::rebootRenderingServer(const RebootRenderingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootRenderingServerWithOptions(request, runtime);
}

/**
 * @summary Recover data to a Graphic Computing Service instance
 *
 * @param request RecoverRenderingDataPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverRenderingDataPackageResponse
 */
RecoverRenderingDataPackageResponse Client::recoverRenderingDataPackageWithOptions(const RecoverRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.getDataPackageId();
  }

  if (!!request.hasLoadMode()) {
    query["LoadMode"] = request.getLoadMode();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Recover data to a Graphic Computing Service instance
 *
 * @param request RecoverRenderingDataPackageRequest
 * @return RecoverRenderingDataPackageResponse
 */
RecoverRenderingDataPackageResponse Client::recoverRenderingDataPackage(const RecoverRenderingDataPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoverRenderingDataPackageWithOptions(request, runtime);
}

/**
 * @summary Call RefreshRenderingInstanceStreaming to refresh the stream connection for a cloud application service instance.
 *
 * @description > Specify at least one of the template ID or template type.
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
    request.setClientInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClientInfo(), "ClientInfo", "json"));
  }

  json query = {};
  if (!!request.hasClientInfoShrink()) {
    query["ClientInfo"] = request.getClientInfoShrink();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Call RefreshRenderingInstanceStreaming to refresh the stream connection for a cloud application service instance.
 *
 * @description > Specify at least one of the template ID or template type.
 *
 * @param request RefreshRenderingInstanceStreamingRequest
 * @return RefreshRenderingInstanceStreamingResponse
 */
RefreshRenderingInstanceStreamingResponse Client::refreshRenderingInstanceStreaming(const RefreshRenderingInstanceStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshRenderingInstanceStreamingWithOptions(request, runtime);
}

/**
 * @summary Release a cloud application service data pack
 *
 * @param request ReleaseRenderingDataPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseRenderingDataPackageResponse
 */
ReleaseRenderingDataPackageResponse Client::releaseRenderingDataPackageWithOptions(const ReleaseRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.getDataPackageId();
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
 * @summary Release a cloud application service data pack
 *
 * @param request ReleaseRenderingDataPackageRequest
 * @return ReleaseRenderingDataPackageResponse
 */
ReleaseRenderingDataPackageResponse Client::releaseRenderingDataPackage(const ReleaseRenderingDataPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseRenderingDataPackageWithOptions(request, runtime);
}

/**
 * @summary Invoke ReleaseRenderingInstance to release a Graphic Computing Service application instance.
 *
 * @param request ReleaseRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseRenderingInstanceResponse
 */
ReleaseRenderingInstanceResponse Client::releaseRenderingInstanceWithOptions(const ReleaseRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Invoke ReleaseRenderingInstance to release a Graphic Computing Service application instance.
 *
 * @param request ReleaseRenderingInstanceRequest
 * @return ReleaseRenderingInstanceResponse
 */
ReleaseRenderingInstanceResponse Client::releaseRenderingInstance(const ReleaseRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Invoke RenewRenderingInstance to renew a cloud application service instance.
 *
 * @param request RenewRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewRenderingInstanceResponse
 */
RenewRenderingInstanceResponse Client::renewRenderingInstanceWithOptions(const RenewRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Invoke RenewRenderingInstance to renew a cloud application service instance.
 *
 * @param request RenewRenderingInstanceRequest
 * @return RenewRenderingInstanceResponse
 */
RenewRenderingInstanceResponse Client::renewRenderingInstance(const RenewRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets a cloud application service instance. You can query the DescribeRenderingInstance interface to obtain the reset progress.
 *
 * @param request ResetRenderingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetRenderingInstanceResponse
 */
ResetRenderingInstanceResponse Client::resetRenderingInstanceWithOptions(const ResetRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.getActionName();
  }

  if (!!request.hasDataPackageId()) {
    query["DataPackageId"] = request.getDataPackageId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
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
 * @summary Resets a cloud application service instance. You can query the DescribeRenderingInstance interface to obtain the reset progress.
 *
 * @param request ResetRenderingInstanceRequest
 * @return ResetRenderingInstanceResponse
 */
ResetRenderingInstanceResponse Client::resetRenderingInstance(const ResetRenderingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetRenderingInstanceWithOptions(request, runtime);
}

/**
 * @summary Resumes pushing for a stream.
 *
 * @param request ResumeVsStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeVsStreamResponse
 */
ResumeVsStreamResponse Client::resumeVsStreamWithOptions(const ResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasControlStreamAction()) {
    query["ControlStreamAction"] = request.getControlStreamAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLiveStreamType()) {
    query["LiveStreamType"] = request.getLiveStreamType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Resumes pushing for a stream.
 *
 * @param request ResumeVsStreamRequest
 * @return ResumeVsStreamResponse
 */
ResumeVsStreamResponse Client::resumeVsStream(const ResumeVsStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeVsStreamWithOptions(request, runtime);
}

/**
 * @summary Sends shell control instructions to a cloud application service instance. This operation supports both sync and asynchronous command responses. The sync scenario is not suitable for time-consuming commands. The maximum execution time cannot exceed 30 s. In an asynchronous scenario, you can call the GetRenderingInstanceCommandsStatus operation to query the execution status and result of a command.
 *
 * @param request SendRenderingInstanceCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendRenderingInstanceCommandsResponse
 */
SendRenderingInstanceCommandsResponse Client::sendRenderingInstanceCommandsWithOptions(const SendRenderingInstanceCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  json body = {};
  if (!!request.hasCommands()) {
    body["Commands"] = request.getCommands();
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
 * @summary Sends shell control instructions to a cloud application service instance. This operation supports both sync and asynchronous command responses. The sync scenario is not suitable for time-consuming commands. The maximum execution time cannot exceed 30 s. In an asynchronous scenario, you can call the GetRenderingInstanceCommandsStatus operation to query the execution status and result of a command.
 *
 * @param request SendRenderingInstanceCommandsRequest
 * @return SendRenderingInstanceCommandsResponse
 */
SendRenderingInstanceCommandsResponse Client::sendRenderingInstanceCommands(const SendRenderingInstanceCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendRenderingInstanceCommandsWithOptions(request, runtime);
}

/**
 * @summary Set a preset position.
 *
 * @param request SetPresetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPresetResponse
 */
SetPresetResponse Client::setPresetWithOptions(const SetPresetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPresetId()) {
    query["PresetId"] = request.getPresetId();
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
 * @summary Set a preset position.
 *
 * @param request SetPresetRequest
 * @return SetPresetResponse
 */
SetPresetResponse Client::setPreset(const SetPresetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPresetWithOptions(request, runtime);
}

/**
 * @summary Enable or disable the certificate feature for a domain name.
 *
 * @param request SetVsDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVsDomainCertificateResponse
 */
SetVsDomainCertificateResponse Client::setVsDomainCertificateWithOptions(const SetVsDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasForceSet()) {
    query["ForceSet"] = request.getForceSet();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.getSSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.getSSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.getSSLPub();
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
 * @summary Enable or disable the certificate feature for a domain name.
 *
 * @param request SetVsDomainCertificateRequest
 * @return SetVsDomainCertificateResponse
 */
SetVsDomainCertificateResponse Client::setVsDomainCertificate(const SetVsDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVsDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Configure stream ingest callbacks.
 *
 * @param request SetVsStreamsNotifyUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVsStreamsNotifyUrlConfigResponse
 */
SetVsStreamsNotifyUrlConfigResponse Client::setVsStreamsNotifyUrlConfigWithOptions(const SetVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.getAuthKey();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.getNotifyUrl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Configure stream ingest callbacks.
 *
 * @param request SetVsStreamsNotifyUrlConfigRequest
 * @return SetVsStreamsNotifyUrlConfigResponse
 */
SetVsStreamsNotifyUrlConfigResponse Client::setVsStreamsNotifyUrlConfig(const SetVsStreamsNotifyUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

/**
 * @summary Start stream pulling from a device. This action starts all streams on the device.
 *
 * @description Each device currently supports only one ingest endpoint. The effect is the same as StartStream.
 *
 * @param request StartDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDeviceResponse
 */
StartDeviceResponse Client::startDeviceWithOptions(const StartDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Start stream pulling from a device. This action starts all streams on the device.
 *
 * @description Each device currently supports only one ingest endpoint. The effect is the same as StartStream.
 *
 * @param request StartDeviceRequest
 * @return StartDeviceResponse
 */
StartDeviceResponse Client::startDevice(const StartDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDeviceWithOptions(request, runtime);
}

/**
 * @summary Starts interactions with the parent platform, such as registration and keep-alive.
 *
 * @param request StartParentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartParentPlatformResponse
 */
StartParentPlatformResponse Client::startParentPlatformWithOptions(const StartParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Starts interactions with the parent platform, such as registration and keep-alive.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPublishUrl()) {
    query["PublishUrl"] = request.getPublishUrl();
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
 * @summary Starts on-demand recording for the specified stream.
 *
 * @description > - An on-demand record template is required. You must first attach one to the space or stream.
 * >
 * > - You can specify a stream in two ways: using its ID or its PlayDomain/App/Name.
 *
 * @param request StartRecordStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRecordStreamResponse
 */
StartRecordStreamResponse Client::startRecordStreamWithOptions(const StartRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.getApp();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.getPlayDomain();
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
 * @summary Starts on-demand recording for the specified stream.
 *
 * @description > - An on-demand record template is required. You must first attach one to the space or stream.
 * >
 * > - You can specify a stream in two ways: using its ID or its PlayDomain/App/Name.
 *
 * @param request StartRecordStreamRequest
 * @return StartRecordStreamResponse
 */
StartRecordStreamResponse Client::startRecordStream(const StartRecordStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRecordStreamWithOptions(request, runtime);
}

/**
 * @summary Schedules an idle cloud application service instance for the requesting client (ClientId) and starts the service. If the requesting client (ClientId) sends another start request after a successful start and the associated session is in the SessionStartSuspended state, the session is restarted. If the session is in any other state, the session information is returned directly.
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
    request.setClientParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClientParams(), "ClientParams", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientParamsShrink()) {
    query["ClientParams"] = request.getClientParamsShrink();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Schedules an idle cloud application service instance for the requesting client (ClientId) and starts the service. If the requesting client (ClientId) sends another start request after a successful start and the associated session is in the SessionStartSuspended state, the session is restarted. If the session is in any other state, the session information is returned directly.
 *
 * @param request StartRenderingSessionRequest
 * @return StartRenderingSessionResponse
 */
StartRenderingSessionResponse Client::startRenderingSession(const StartRenderingSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRenderingSessionWithOptions(request, runtime);
}

/**
 * @summary Start a stream.
 *
 * @param request StartStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartStreamResponse
 */
StartStreamResponse Client::startStreamWithOptions(const StartStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Start a stream.
 *
 * @param request StartStreamRequest
 * @return StartStreamResponse
 */
StartStreamResponse Client::startStream(const StartStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startStreamWithOptions(request, runtime);
}

/**
 * @summary Starts forwarding a stream to an external address.
 *
 * @param request StartTransferStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTransferStreamResponse
 */
StartTransferStreamResponse Client::startTransferStreamWithOptions(const StartTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTranscode()) {
    query["Transcode"] = request.getTranscode();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Starts forwarding a stream to an external address.
 *
 * @param request StartTransferStreamRequest
 * @return StartTransferStreamResponse
 */
StartTransferStreamResponse Client::startTransferStream(const StartTransferStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTransferStreamWithOptions(request, runtime);
}

/**
 * @summary Stops lens adjustments, such as aperture or zoom changes.
 *
 * @param request StopAdjustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAdjustResponse
 */
StopAdjustResponse Client::stopAdjustWithOptions(const StopAdjustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFocus()) {
    query["Focus"] = request.getFocus();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIris()) {
    query["Iris"] = request.getIris();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Stops lens adjustments, such as aperture or zoom changes.
 *
 * @param request StopAdjustRequest
 * @return StopAdjustResponse
 */
StopAdjustResponse Client::stopAdjust(const StopAdjustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAdjustWithOptions(request, runtime);
}

/**
 * @summary Stops stream pulling for a device. This operation terminates all streams on that device.
 *
 * @description Stops stream pulling for a device. This operation terminates all streams on that device.
 *
 * @param request StopDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDeviceResponse
 */
StopDeviceResponse Client::stopDeviceWithOptions(const StopDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Stops stream pulling for a device. This operation terminates all streams on that device.
 *
 * @description Stops stream pulling for a device. This operation terminates all streams on that device.
 *
 * @param request StopDeviceRequest
 * @return StopDeviceResponse
 */
StopDeviceResponse Client::stopDevice(const StopDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDeviceWithOptions(request, runtime);
}

/**
 * @summary Stops camera movement, such as panning, tilting, and zooming.
 *
 * @param request StopMoveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMoveResponse
 */
StopMoveResponse Client::stopMoveWithOptions(const StopMoveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPan()) {
    query["Pan"] = request.getPan();
  }

  if (!!request.hasTilt()) {
    query["Tilt"] = request.getTilt();
  }

  if (!!request.hasZoom()) {
    query["Zoom"] = request.getZoom();
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
 * @summary Stops camera movement, such as panning, tilting, and zooming.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Stops on-demand recording for a specified stream.
 *
 * @description > You can specify a stream by ID or by PlayDomain/App/Name.
 *
 * @param request StopRecordStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRecordStreamResponse
 */
StopRecordStreamResponse Client::stopRecordStreamWithOptions(const StopRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApp()) {
    query["App"] = request.getApp();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.getPlayDomain();
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
 * @summary Stops on-demand recording for a specified stream.
 *
 * @description > You can specify a stream by ID or by PlayDomain/App/Name.
 *
 * @param request StopRecordStreamRequest
 * @return StopRecordStreamResponse
 */
StopRecordStreamResponse Client::stopRecordStream(const StopRecordStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRecordStreamWithOptions(request, runtime);
}

/**
 * @summary Shut down the specified cloud application service session and revoke the associated instance resources.
 *
 * @description ## Request information
 *
 * @param request StopRenderingSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRenderingSessionResponse
 */
StopRenderingSessionResponse Client::stopRenderingSessionWithOptions(const StopRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
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
 * @summary Shut down the specified cloud application service session and revoke the associated instance resources.
 *
 * @description ## Request information
 *
 * @param request StopRenderingSessionRequest
 * @return StopRenderingSessionResponse
 */
StopRenderingSessionResponse Client::stopRenderingSession(const StopRenderingSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRenderingSessionWithOptions(request, runtime);
}

/**
 * @summary Stops a stream.
 *
 * @param request StopStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopStreamResponse
 */
StopStreamResponse Client::stopStreamWithOptions(const StopStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Stops a stream.
 *
 * @param request StopStreamRequest
 * @return StopStreamResponse
 */
StopStreamResponse Client::stopStream(const StopStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopStreamWithOptions(request, runtime);
}

/**
 * @summary Stops a stream.
 *
 * @param request StopTransferStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTransferStreamResponse
 */
StopTransferStreamResponse Client::stopTransferStreamWithOptions(const StopTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTranscode()) {
    query["Transcode"] = request.getTranscode();
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
 * @summary Stops a stream.
 *
 * @param request StopTransferStreamRequest
 * @return StopTransferStreamResponse
 */
StopTransferStreamResponse Client::stopTransferStream(const StopTransferStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTransferStreamWithOptions(request, runtime);
}

/**
 * @summary Synchronizes platform channel information.
 *
 * @param request SyncCatalogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncCatalogsResponse
 */
SyncCatalogsResponse Client::syncCatalogsWithOptions(const SyncCatalogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Synchronizes platform channel information.
 *
 * @param request SyncCatalogsRequest
 * @return SyncCatalogsResponse
 */
SyncCatalogsResponse Client::syncCatalogs(const SyncCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncCatalogsWithOptions(request, runtime);
}

/**
 * @summary Detach a device from a folder.
 *
 * @param request UnbindDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDirectoryResponse
 */
UnbindDirectoryResponse Client::unbindDirectoryWithOptions(const UnbindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Detach a device from a folder.
 *
 * @param request UnbindDirectoryRequest
 * @return UnbindDirectoryResponse
 */
UnbindDirectoryResponse Client::unbindDirectory(const UnbindDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDirectoryWithOptions(request, runtime);
}

/**
 * @summary Dissociates a device from a parent platform push configuration so that the device is no longer pushed.
 *
 * @param request UnbindParentPlatformDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindParentPlatformDeviceResponse
 */
UnbindParentPlatformDeviceResponse Client::unbindParentPlatformDeviceWithOptions(const UnbindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParentPlatformId()) {
    query["ParentPlatformId"] = request.getParentPlatformId();
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
 * @summary Dissociates a device from a parent platform push configuration so that the device is no longer pushed.
 *
 * @param request UnbindParentPlatformDeviceRequest
 * @return UnbindParentPlatformDeviceResponse
 */
UnbindParentPlatformDeviceResponse Client::unbindParentPlatformDevice(const UnbindParentPlatformDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindParentPlatformDeviceWithOptions(request, runtime);
}

/**
 * @summary Unbinds a purchased device from a space.
 *
 * @param request UnbindPurchasedDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPurchasedDeviceResponse
 */
UnbindPurchasedDeviceResponse Client::unbindPurchasedDeviceWithOptions(const UnbindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Unbinds a purchased device from a space.
 *
 * @param request UnbindPurchasedDeviceRequest
 * @return UnbindPurchasedDeviceResponse
 */
UnbindPurchasedDeviceResponse Client::unbindPurchasedDevice(const UnbindPurchasedDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPurchasedDeviceWithOptions(request, runtime);
}

/**
 * @summary Unbind a template from a specified instance, such as a group instance or a stream.
 *
 * @description > Specify at least one of TemplateId or TemplateType.
 *
 * @param request UnbindTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindTemplateResponse
 */
UnbindTemplateResponse Client::unbindTemplateWithOptions(const UnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Unbind a template from a specified instance, such as a group instance or a stream.
 *
 * @description > Specify at least one of TemplateId or TemplateType.
 *
 * @param request UnbindTemplateRequest
 * @return UnbindTemplateResponse
 */
UnbindTemplateResponse Client::unbindTemplate(const UnbindTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindTemplateWithOptions(request, runtime);
}

/**
 * @summary You can uninstall a specified cloud application from a specified cloud application instance. This operation is asynchronous. You can use the ListCloudAppInstallations operation to check the uninstallation progress. After successful uninstallation, the query operation no longer returns related information.
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
    request.setRenderingInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenderingInstanceIds(), "RenderingInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasRenderingInstanceIdsShrink()) {
    query["RenderingInstanceIds"] = request.getRenderingInstanceIdsShrink();
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
 * @summary You can uninstall a specified cloud application from a specified cloud application instance. This operation is asynchronous. You can use the ListCloudAppInstallations operation to check the uninstallation progress. After successful uninstallation, the query operation no longer returns related information.
 *
 * @param request UninstallCloudAppRequest
 * @return UninstallCloudAppResponse
 */
UninstallCloudAppResponse Client::uninstallCloudApp(const UninstallCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallCloudAppWithOptions(request, runtime);
}

/**
 * @summary Unlock a device.
 *
 * @param request UnlockDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockDeviceResponse
 */
UnlockDeviceResponse Client::unlockDeviceWithOptions(const UnlockDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Unlock a device.
 *
 * @param request UnlockDeviceRequest
 * @return UnlockDeviceResponse
 */
UnlockDeviceResponse Client::unlockDevice(const UnlockDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockDeviceWithOptions(request, runtime);
}

/**
 * @summary Updates information for a cloud application, such as its description and tags. You can upload patch or hotfix packages and create hotfix packages for the Android cloud application marketplace. A cloud application supports up to 20 patch packages, but only one package can be in the uploading state at a time.
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
    request.setPatchShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPatch(), "Patch", "json"));
  }

  if (!!tmpReq.hasPkgLabels()) {
    request.setPkgLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPkgLabels(), "PkgLabels", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPkgLabelsShrink()) {
    query["PkgLabels"] = request.getPkgLabelsShrink();
  }

  if (!!request.hasStablePatchId()) {
    query["StablePatchId"] = request.getStablePatchId();
  }

  json body = {};
  if (!!request.hasPatchShrink()) {
    body["Patch"] = request.getPatchShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Updates information for a cloud application, such as its description and tags. You can upload patch or hotfix packages and create hotfix packages for the Android cloud application marketplace. A cloud application supports up to 20 patch packages, but only one package can be in the uploading state at a time.
 *
 * @param request UpdateCloudAppInfoRequest
 * @return UpdateCloudAppInfoResponse
 */
UpdateCloudAppInfoResponse Client::updateCloudAppInfo(const UpdateCloudAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudAppInfoWithOptions(request, runtime);
}

/**
 * @summary Update basic information for a file, such as its description.
 *
 * @param request UpdateFileInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileInfoResponse
 */
UpdateFileInfoResponse Client::updateFileInfoWithOptions(const UpdateFileInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
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
 * @summary Update basic information for a file, such as its description.
 *
 * @param request UpdateFileInfoRequest
 * @return UpdateFileInfoResponse
 */
UpdateFileInfoResponse Client::updateFileInfo(const UpdateFileInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileInfoWithOptions(request, runtime);
}

/**
 * @summary This operation updates the configuration parameters of a cloud application service instance. It lets you modify various configurations of the Cloud Android system, such as prop, location, and network, to create a real device simulation.
 * You can retrieve the configured values for the real device simulation by calling the DescribeRenderingInstance API.
 * To query the configuration parameters of the real-time environment, see the DescribeRenderingInstanceConfiguration API.
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
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfiguration(), "Configuration", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  json body = {};
  if (!!request.hasConfigurationShrink()) {
    body["Configuration"] = request.getConfigurationShrink();
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
 * @summary This operation updates the configuration parameters of a cloud application service instance. It lets you modify various configurations of the Cloud Android system, such as prop, location, and network, to create a real device simulation.
 * You can retrieve the configured values for the real device simulation by calling the DescribeRenderingInstance API.
 * To query the configuration parameters of the real-time environment, see the DescribeRenderingInstanceConfiguration API.
 *
 * @param request UpdateRenderingInstanceConfigurationRequest
 * @return UpdateRenderingInstanceConfigurationResponse
 */
UpdateRenderingInstanceConfigurationResponse Client::updateRenderingInstanceConfiguration(const UpdateRenderingInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRenderingInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary Updates the settings of a cloud application service instance.
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
    request.setSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSettings(), "Settings", "json"));
  }

  json query = {};
  if (!!request.hasRenderingInstanceId()) {
    query["RenderingInstanceId"] = request.getRenderingInstanceId();
  }

  if (!!request.hasSettingsShrink()) {
    query["Settings"] = request.getSettingsShrink();
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
 * @summary Updates the settings of a cloud application service instance.
 *
 * @param request UpdateRenderingInstanceSettingsRequest
 * @return UpdateRenderingInstanceSettingsResponse
 */
UpdateRenderingInstanceSettingsResponse Client::updateRenderingInstanceSettings(const UpdateRenderingInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRenderingInstanceSettingsWithOptions(request, runtime);
}

/**
 * @summary Updates a project’s properties.
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
    request.setSessionAttribsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSessionAttribs(), "SessionAttribs", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSessionAttribsShrink()) {
    query["SessionAttribs"] = request.getSessionAttribsShrink();
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
 * @summary Updates a project’s properties.
 *
 * @param request UpdateRenderingProjectRequest
 * @return UpdateRenderingProjectResponse
 */
UpdateRenderingProjectResponse Client::updateRenderingProject(const UpdateRenderingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRenderingProjectWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration for stream pulling. You can modify the start and end times of origin server addresses in an existing stream pulling task.
 *
 * @param request UpdateVsPullStreamInfoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVsPullStreamInfoConfigResponse
 */
UpdateVsPullStreamInfoConfigResponse Client::updateVsPullStreamInfoConfigWithOptions(const UpdateVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlways()) {
    query["Always"] = request.getAlways();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceUrl()) {
    query["SourceUrl"] = request.getSourceUrl();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Updates the configuration for stream pulling. You can modify the start and end times of origin server addresses in an existing stream pulling task.
 *
 * @param request UpdateVsPullStreamInfoConfigRequest
 * @return UpdateVsPullStreamInfoConfigResponse
 */
UpdateVsPullStreamInfoConfigResponse Client::updateVsPullStreamInfoConfig(const UpdateVsPullStreamInfoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVsPullStreamInfoConfigWithOptions(request, runtime);
}

/**
 * @summary Upload or list a cloud application package. This is an asynchronous API. Use the ListCloudApps API to check upload progress.
 *
 * @param tmpReq UploadCloudAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadCloudAppResponse
 */
UploadCloudAppResponse Client::uploadCloudAppWithOptions(const UploadCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadCloudAppShrinkRequest request = UploadCloudAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPkgLabels()) {
    request.setPkgLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPkgLabels(), "PkgLabels", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDownloadUrl()) {
    query["DownloadUrl"] = request.getDownloadUrl();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.getMd5();
  }

  if (!!request.hasPkgFormat()) {
    query["PkgFormat"] = request.getPkgFormat();
  }

  if (!!request.hasPkgLabelsShrink()) {
    query["PkgLabels"] = request.getPkgLabelsShrink();
  }

  if (!!request.hasPkgType()) {
    query["PkgType"] = request.getPkgType();
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
 * @summary Upload or list a cloud application package. This is an asynchronous API. Use the ListCloudApps API to check upload progress.
 *
 * @param request UploadCloudAppRequest
 * @return UploadCloudAppResponse
 */
UploadCloudAppResponse Client::uploadCloudApp(const UploadCloudAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadCloudAppWithOptions(request, runtime);
}

/**
 * @summary Uploads a file from a public URL to local or cloud storage. This is an asynchronous operation. You can call the ListFiles operation to monitor the upload progress.
 *
 * @param request UploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFileWithOptions(const UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.getMd5();
  }

  if (!!request.hasOriginUrl()) {
    query["OriginUrl"] = request.getOriginUrl();
  }

  if (!!request.hasTargetPath()) {
    query["TargetPath"] = request.getTargetPath();
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
 * @summary Uploads a file from a public URL to local or cloud storage. This is an asynchronous operation. You can call the ListFiles operation to monitor the upload progress.
 *
 * @param request UploadFileRequest
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFile(const UploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadFileWithOptions(request, runtime);
}

/**
 * @summary Upload a new public key.
 *
 * @param request UploadPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadPublicKeyResponse
 */
UploadPublicKeyResponse Client::uploadPublicKeyWithOptions(const UploadPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKeyGroup()) {
    query["KeyGroup"] = request.getKeyGroup();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasKeyType()) {
    query["KeyType"] = request.getKeyType();
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
 * @summary Upload a new public key.
 *
 * @param request UploadPublicKeyRequest
 * @return UploadPublicKeyResponse
 */
UploadPublicKeyResponse Client::uploadPublicKey(const UploadPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadPublicKeyWithOptions(request, runtime);
}

/**
 * @summary VerifyVsDomainOwner
 *
 * @param request VerifyVsDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyVsDomainOwnerResponse
 */
VerifyVsDomainOwnerResponse Client::verifyVsDomainOwnerWithOptions(const VerifyVsDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
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
 * @summary VerifyVsDomainOwner
 *
 * @param request VerifyVsDomainOwnerRequest
 * @return VerifyVsDomainOwnerResponse
 */
VerifyVsDomainOwnerResponse Client::verifyVsDomainOwner(const VerifyVsDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyVsDomainOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Vs20181212