// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/vs_20181212.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Vs20181212;

Alibabacloud_Vs20181212::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("vs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Vs20181212::Client::getEndpoint(shared_ptr<string> productId,
                                                    shared_ptr<string> regionId,
                                                    shared_ptr<string> endpointRule,
                                                    shared_ptr<string> network,
                                                    shared_ptr<string> suffix,
                                                    shared_ptr<map<string, string>> endpointMap,
                                                    shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::addVsPullStreamInfoConfigWithOptions(shared_ptr<AddVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVsPullStreamInfoConfigResponse(doRPCRequest(make_shared<string>("AddVsPullStreamInfoConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::addVsPullStreamInfoConfig(shared_ptr<AddVsPullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVsPullStreamInfoConfigWithOptions(request, runtime);
}

BatchBindDirectoriesResponse Alibabacloud_Vs20181212::Client::batchBindDirectoriesWithOptions(shared_ptr<BatchBindDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindDirectoriesResponse(doRPCRequest(make_shared<string>("BatchBindDirectories"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindDirectoriesResponse Alibabacloud_Vs20181212::Client::batchBindDirectories(shared_ptr<BatchBindDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDirectoriesWithOptions(request, runtime);
}

BatchBindParentPlatformDevicesResponse Alibabacloud_Vs20181212::Client::batchBindParentPlatformDevicesWithOptions(shared_ptr<BatchBindParentPlatformDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindParentPlatformDevicesResponse(doRPCRequest(make_shared<string>("BatchBindParentPlatformDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindParentPlatformDevicesResponse Alibabacloud_Vs20181212::Client::batchBindParentPlatformDevices(shared_ptr<BatchBindParentPlatformDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindParentPlatformDevicesWithOptions(request, runtime);
}

BatchBindPurchasedDevicesResponse Alibabacloud_Vs20181212::Client::batchBindPurchasedDevicesWithOptions(shared_ptr<BatchBindPurchasedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindPurchasedDevicesResponse(doRPCRequest(make_shared<string>("BatchBindPurchasedDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindPurchasedDevicesResponse Alibabacloud_Vs20181212::Client::batchBindPurchasedDevices(shared_ptr<BatchBindPurchasedDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindPurchasedDevicesWithOptions(request, runtime);
}

BatchBindTemplateResponse Alibabacloud_Vs20181212::Client::batchBindTemplateWithOptions(shared_ptr<BatchBindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindTemplateResponse(doRPCRequest(make_shared<string>("BatchBindTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindTemplateResponse Alibabacloud_Vs20181212::Client::batchBindTemplate(shared_ptr<BatchBindTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindTemplateWithOptions(request, runtime);
}

BatchBindTemplatesResponse Alibabacloud_Vs20181212::Client::batchBindTemplatesWithOptions(shared_ptr<BatchBindTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindTemplatesResponse(doRPCRequest(make_shared<string>("BatchBindTemplates"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindTemplatesResponse Alibabacloud_Vs20181212::Client::batchBindTemplates(shared_ptr<BatchBindTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindTemplatesWithOptions(request, runtime);
}

BatchDeleteDevicesResponse Alibabacloud_Vs20181212::Client::batchDeleteDevicesWithOptions(shared_ptr<BatchDeleteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteDevicesResponse(doRPCRequest(make_shared<string>("BatchDeleteDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeleteDevicesResponse Alibabacloud_Vs20181212::Client::batchDeleteDevices(shared_ptr<BatchDeleteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDevicesWithOptions(request, runtime);
}

BatchDeleteVsDomainConfigsResponse Alibabacloud_Vs20181212::Client::batchDeleteVsDomainConfigsWithOptions(shared_ptr<BatchDeleteVsDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteVsDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchDeleteVsDomainConfigs"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeleteVsDomainConfigsResponse Alibabacloud_Vs20181212::Client::batchDeleteVsDomainConfigs(shared_ptr<BatchDeleteVsDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteVsDomainConfigsWithOptions(request, runtime);
}

BatchForbidVsStreamResponse Alibabacloud_Vs20181212::Client::batchForbidVsStreamWithOptions(shared_ptr<BatchForbidVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchForbidVsStreamResponse(doRPCRequest(make_shared<string>("BatchForbidVsStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchForbidVsStreamResponse Alibabacloud_Vs20181212::Client::batchForbidVsStream(shared_ptr<BatchForbidVsStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchForbidVsStreamWithOptions(request, runtime);
}

BatchResumeVsStreamResponse Alibabacloud_Vs20181212::Client::batchResumeVsStreamWithOptions(shared_ptr<BatchResumeVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchResumeVsStreamResponse(doRPCRequest(make_shared<string>("BatchResumeVsStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchResumeVsStreamResponse Alibabacloud_Vs20181212::Client::batchResumeVsStream(shared_ptr<BatchResumeVsStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchResumeVsStreamWithOptions(request, runtime);
}

BatchSetVsDomainConfigsResponse Alibabacloud_Vs20181212::Client::batchSetVsDomainConfigsWithOptions(shared_ptr<BatchSetVsDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetVsDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchSetVsDomainConfigs"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetVsDomainConfigsResponse Alibabacloud_Vs20181212::Client::batchSetVsDomainConfigs(shared_ptr<BatchSetVsDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetVsDomainConfigsWithOptions(request, runtime);
}

BatchStartDevicesResponse Alibabacloud_Vs20181212::Client::batchStartDevicesWithOptions(shared_ptr<BatchStartDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStartDevicesResponse(doRPCRequest(make_shared<string>("BatchStartDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStartDevicesResponse Alibabacloud_Vs20181212::Client::batchStartDevices(shared_ptr<BatchStartDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStartDevicesWithOptions(request, runtime);
}

BatchStartStreamsResponse Alibabacloud_Vs20181212::Client::batchStartStreamsWithOptions(shared_ptr<BatchStartStreamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStartStreamsResponse(doRPCRequest(make_shared<string>("BatchStartStreams"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStartStreamsResponse Alibabacloud_Vs20181212::Client::batchStartStreams(shared_ptr<BatchStartStreamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStartStreamsWithOptions(request, runtime);
}

BatchStopDevicesResponse Alibabacloud_Vs20181212::Client::batchStopDevicesWithOptions(shared_ptr<BatchStopDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStopDevicesResponse(doRPCRequest(make_shared<string>("BatchStopDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStopDevicesResponse Alibabacloud_Vs20181212::Client::batchStopDevices(shared_ptr<BatchStopDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStopDevicesWithOptions(request, runtime);
}

BatchStopStreamsResponse Alibabacloud_Vs20181212::Client::batchStopStreamsWithOptions(shared_ptr<BatchStopStreamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStopStreamsResponse(doRPCRequest(make_shared<string>("BatchStopStreams"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStopStreamsResponse Alibabacloud_Vs20181212::Client::batchStopStreams(shared_ptr<BatchStopStreamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStopStreamsWithOptions(request, runtime);
}

BatchUnbindDirectoriesResponse Alibabacloud_Vs20181212::Client::batchUnbindDirectoriesWithOptions(shared_ptr<BatchUnbindDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindDirectoriesResponse(doRPCRequest(make_shared<string>("BatchUnbindDirectories"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindDirectoriesResponse Alibabacloud_Vs20181212::Client::batchUnbindDirectories(shared_ptr<BatchUnbindDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindDirectoriesWithOptions(request, runtime);
}

BatchUnbindParentPlatformDevicesResponse Alibabacloud_Vs20181212::Client::batchUnbindParentPlatformDevicesWithOptions(shared_ptr<BatchUnbindParentPlatformDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindParentPlatformDevicesResponse(doRPCRequest(make_shared<string>("BatchUnbindParentPlatformDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindParentPlatformDevicesResponse Alibabacloud_Vs20181212::Client::batchUnbindParentPlatformDevices(shared_ptr<BatchUnbindParentPlatformDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindParentPlatformDevicesWithOptions(request, runtime);
}

BatchUnbindPurchasedDevicesResponse Alibabacloud_Vs20181212::Client::batchUnbindPurchasedDevicesWithOptions(shared_ptr<BatchUnbindPurchasedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindPurchasedDevicesResponse(doRPCRequest(make_shared<string>("BatchUnbindPurchasedDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindPurchasedDevicesResponse Alibabacloud_Vs20181212::Client::batchUnbindPurchasedDevices(shared_ptr<BatchUnbindPurchasedDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindPurchasedDevicesWithOptions(request, runtime);
}

BatchUnbindTemplateResponse Alibabacloud_Vs20181212::Client::batchUnbindTemplateWithOptions(shared_ptr<BatchUnbindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindTemplateResponse(doRPCRequest(make_shared<string>("BatchUnbindTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindTemplateResponse Alibabacloud_Vs20181212::Client::batchUnbindTemplate(shared_ptr<BatchUnbindTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindTemplateWithOptions(request, runtime);
}

BatchUnbindTemplatesResponse Alibabacloud_Vs20181212::Client::batchUnbindTemplatesWithOptions(shared_ptr<BatchUnbindTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindTemplatesResponse(doRPCRequest(make_shared<string>("BatchUnbindTemplates"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindTemplatesResponse Alibabacloud_Vs20181212::Client::batchUnbindTemplates(shared_ptr<BatchUnbindTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindTemplatesWithOptions(request, runtime);
}

BindDirectoryResponse Alibabacloud_Vs20181212::Client::bindDirectoryWithOptions(shared_ptr<BindDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindDirectoryResponse(doRPCRequest(make_shared<string>("BindDirectory"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindDirectoryResponse Alibabacloud_Vs20181212::Client::bindDirectory(shared_ptr<BindDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDirectoryWithOptions(request, runtime);
}

BindParentPlatformDeviceResponse Alibabacloud_Vs20181212::Client::bindParentPlatformDeviceWithOptions(shared_ptr<BindParentPlatformDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindParentPlatformDeviceResponse(doRPCRequest(make_shared<string>("BindParentPlatformDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindParentPlatformDeviceResponse Alibabacloud_Vs20181212::Client::bindParentPlatformDevice(shared_ptr<BindParentPlatformDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindParentPlatformDeviceWithOptions(request, runtime);
}

BindPurchasedDeviceResponse Alibabacloud_Vs20181212::Client::bindPurchasedDeviceWithOptions(shared_ptr<BindPurchasedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindPurchasedDeviceResponse(doRPCRequest(make_shared<string>("BindPurchasedDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindPurchasedDeviceResponse Alibabacloud_Vs20181212::Client::bindPurchasedDevice(shared_ptr<BindPurchasedDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindPurchasedDeviceWithOptions(request, runtime);
}

BindTemplateResponse Alibabacloud_Vs20181212::Client::bindTemplateWithOptions(shared_ptr<BindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindTemplateResponse(doRPCRequest(make_shared<string>("BindTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindTemplateResponse Alibabacloud_Vs20181212::Client::bindTemplate(shared_ptr<BindTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindTemplateWithOptions(request, runtime);
}

ContinuousAdjustResponse Alibabacloud_Vs20181212::Client::continuousAdjustWithOptions(shared_ptr<ContinuousAdjustRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ContinuousAdjustResponse(doRPCRequest(make_shared<string>("ContinuousAdjust"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ContinuousAdjustResponse Alibabacloud_Vs20181212::Client::continuousAdjust(shared_ptr<ContinuousAdjustRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continuousAdjustWithOptions(request, runtime);
}

ContinuousMoveResponse Alibabacloud_Vs20181212::Client::continuousMoveWithOptions(shared_ptr<ContinuousMoveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ContinuousMoveResponse(doRPCRequest(make_shared<string>("ContinuousMove"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ContinuousMoveResponse Alibabacloud_Vs20181212::Client::continuousMove(shared_ptr<ContinuousMoveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continuousMoveWithOptions(request, runtime);
}

CreateDeviceResponse Alibabacloud_Vs20181212::Client::createDeviceWithOptions(shared_ptr<CreateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceResponse(doRPCRequest(make_shared<string>("CreateDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceResponse Alibabacloud_Vs20181212::Client::createDevice(shared_ptr<CreateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceWithOptions(request, runtime);
}

CreateDeviceAlarmResponse Alibabacloud_Vs20181212::Client::createDeviceAlarmWithOptions(shared_ptr<CreateDeviceAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceAlarmResponse(doRPCRequest(make_shared<string>("CreateDeviceAlarm"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceAlarmResponse Alibabacloud_Vs20181212::Client::createDeviceAlarm(shared_ptr<CreateDeviceAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceAlarmWithOptions(request, runtime);
}

CreateDirectoryResponse Alibabacloud_Vs20181212::Client::createDirectoryWithOptions(shared_ptr<CreateDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDirectoryResponse(doRPCRequest(make_shared<string>("CreateDirectory"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDirectoryResponse Alibabacloud_Vs20181212::Client::createDirectory(shared_ptr<CreateDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDirectoryWithOptions(request, runtime);
}

CreateGroupResponse Alibabacloud_Vs20181212::Client::createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGroupResponse(doRPCRequest(make_shared<string>("CreateGroup"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGroupResponse Alibabacloud_Vs20181212::Client::createGroup(shared_ptr<CreateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupWithOptions(request, runtime);
}

CreateParentPlatformResponse Alibabacloud_Vs20181212::Client::createParentPlatformWithOptions(shared_ptr<CreateParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateParentPlatformResponse(doRPCRequest(make_shared<string>("CreateParentPlatform"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateParentPlatformResponse Alibabacloud_Vs20181212::Client::createParentPlatform(shared_ptr<CreateParentPlatformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createParentPlatformWithOptions(request, runtime);
}

CreateStreamSnapshotResponse Alibabacloud_Vs20181212::Client::createStreamSnapshotWithOptions(shared_ptr<CreateStreamSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateStreamSnapshotResponse(doRPCRequest(make_shared<string>("CreateStreamSnapshot"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateStreamSnapshotResponse Alibabacloud_Vs20181212::Client::createStreamSnapshot(shared_ptr<CreateStreamSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStreamSnapshotWithOptions(request, runtime);
}

CreateTemplateResponse Alibabacloud_Vs20181212::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTemplateResponse(doRPCRequest(make_shared<string>("CreateTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTemplateResponse Alibabacloud_Vs20181212::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateWithOptions(request, runtime);
}

DeleteDeviceResponse Alibabacloud_Vs20181212::Client::deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeviceResponse(doRPCRequest(make_shared<string>("DeleteDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeviceResponse Alibabacloud_Vs20181212::Client::deleteDevice(shared_ptr<DeleteDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceWithOptions(request, runtime);
}

DeleteDirectoryResponse Alibabacloud_Vs20181212::Client::deleteDirectoryWithOptions(shared_ptr<DeleteDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDirectoryResponse(doRPCRequest(make_shared<string>("DeleteDirectory"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDirectoryResponse Alibabacloud_Vs20181212::Client::deleteDirectory(shared_ptr<DeleteDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDirectoryWithOptions(request, runtime);
}

DeleteGroupResponse Alibabacloud_Vs20181212::Client::deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteGroupResponse(doRPCRequest(make_shared<string>("DeleteGroup"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteGroupResponse Alibabacloud_Vs20181212::Client::deleteGroup(shared_ptr<DeleteGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupWithOptions(request, runtime);
}

DeleteParentPlatformResponse Alibabacloud_Vs20181212::Client::deleteParentPlatformWithOptions(shared_ptr<DeleteParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteParentPlatformResponse(doRPCRequest(make_shared<string>("DeleteParentPlatform"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteParentPlatformResponse Alibabacloud_Vs20181212::Client::deleteParentPlatform(shared_ptr<DeleteParentPlatformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteParentPlatformWithOptions(request, runtime);
}

DeletePresetResponse Alibabacloud_Vs20181212::Client::deletePresetWithOptions(shared_ptr<DeletePresetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePresetResponse(doRPCRequest(make_shared<string>("DeletePreset"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePresetResponse Alibabacloud_Vs20181212::Client::deletePreset(shared_ptr<DeletePresetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePresetWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_Vs20181212::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTemplateResponse(doRPCRequest(make_shared<string>("DeleteTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTemplateResponse Alibabacloud_Vs20181212::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DeleteVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::deleteVsPullStreamInfoConfigWithOptions(shared_ptr<DeleteVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVsPullStreamInfoConfigResponse(doRPCRequest(make_shared<string>("DeleteVsPullStreamInfoConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::deleteVsPullStreamInfoConfig(shared_ptr<DeleteVsPullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVsPullStreamInfoConfigWithOptions(request, runtime);
}

DeleteVsStreamsNotifyUrlConfigResponse Alibabacloud_Vs20181212::Client::deleteVsStreamsNotifyUrlConfigWithOptions(shared_ptr<DeleteVsStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVsStreamsNotifyUrlConfigResponse(doRPCRequest(make_shared<string>("DeleteVsStreamsNotifyUrlConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVsStreamsNotifyUrlConfigResponse Alibabacloud_Vs20181212::Client::deleteVsStreamsNotifyUrlConfig(shared_ptr<DeleteVsStreamsNotifyUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

DescribeAccountStatResponse Alibabacloud_Vs20181212::Client::describeAccountStatWithOptions(shared_ptr<DescribeAccountStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountStatResponse(doRPCRequest(make_shared<string>("DescribeAccountStat"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountStatResponse Alibabacloud_Vs20181212::Client::describeAccountStat(shared_ptr<DescribeAccountStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountStatWithOptions(request, runtime);
}

DescribeDeviceResponse Alibabacloud_Vs20181212::Client::describeDeviceWithOptions(shared_ptr<DescribeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceResponse(doRPCRequest(make_shared<string>("DescribeDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceResponse Alibabacloud_Vs20181212::Client::describeDevice(shared_ptr<DescribeDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceWithOptions(request, runtime);
}

DescribeDeviceChannelsResponse Alibabacloud_Vs20181212::Client::describeDeviceChannelsWithOptions(shared_ptr<DescribeDeviceChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceChannelsResponse(doRPCRequest(make_shared<string>("DescribeDeviceChannels"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceChannelsResponse Alibabacloud_Vs20181212::Client::describeDeviceChannels(shared_ptr<DescribeDeviceChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceChannelsWithOptions(request, runtime);
}

DescribeDeviceGatewayResponse Alibabacloud_Vs20181212::Client::describeDeviceGatewayWithOptions(shared_ptr<DescribeDeviceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceGatewayResponse(doRPCRequest(make_shared<string>("DescribeDeviceGateway"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceGatewayResponse Alibabacloud_Vs20181212::Client::describeDeviceGateway(shared_ptr<DescribeDeviceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceGatewayWithOptions(request, runtime);
}

DescribeDevicesResponse Alibabacloud_Vs20181212::Client::describeDevicesWithOptions(shared_ptr<DescribeDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDevicesResponse(doRPCRequest(make_shared<string>("DescribeDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDevicesResponse Alibabacloud_Vs20181212::Client::describeDevices(shared_ptr<DescribeDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDevicesWithOptions(request, runtime);
}

DescribeDeviceURLResponse Alibabacloud_Vs20181212::Client::describeDeviceURLWithOptions(shared_ptr<DescribeDeviceURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceURLResponse(doRPCRequest(make_shared<string>("DescribeDeviceURL"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceURLResponse Alibabacloud_Vs20181212::Client::describeDeviceURL(shared_ptr<DescribeDeviceURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceURLWithOptions(request, runtime);
}

DescribeDirectoriesResponse Alibabacloud_Vs20181212::Client::describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDirectoriesResponse(doRPCRequest(make_shared<string>("DescribeDirectories"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDirectoriesResponse Alibabacloud_Vs20181212::Client::describeDirectories(shared_ptr<DescribeDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirectoriesWithOptions(request, runtime);
}

DescribeDirectoryResponse Alibabacloud_Vs20181212::Client::describeDirectoryWithOptions(shared_ptr<DescribeDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDirectoryResponse(doRPCRequest(make_shared<string>("DescribeDirectory"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDirectoryResponse Alibabacloud_Vs20181212::Client::describeDirectory(shared_ptr<DescribeDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirectoryWithOptions(request, runtime);
}

DescribeGroupResponse Alibabacloud_Vs20181212::Client::describeGroupWithOptions(shared_ptr<DescribeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupResponse(doRPCRequest(make_shared<string>("DescribeGroup"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupResponse Alibabacloud_Vs20181212::Client::describeGroup(shared_ptr<DescribeGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupWithOptions(request, runtime);
}

DescribeGroupsResponse Alibabacloud_Vs20181212::Client::describeGroupsWithOptions(shared_ptr<DescribeGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupsResponse(doRPCRequest(make_shared<string>("DescribeGroups"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupsResponse Alibabacloud_Vs20181212::Client::describeGroups(shared_ptr<DescribeGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupsWithOptions(request, runtime);
}

DescribeParentPlatformResponse Alibabacloud_Vs20181212::Client::describeParentPlatformWithOptions(shared_ptr<DescribeParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParentPlatformResponse(doRPCRequest(make_shared<string>("DescribeParentPlatform"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParentPlatformResponse Alibabacloud_Vs20181212::Client::describeParentPlatform(shared_ptr<DescribeParentPlatformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParentPlatformWithOptions(request, runtime);
}

DescribeParentPlatformDevicesResponse Alibabacloud_Vs20181212::Client::describeParentPlatformDevicesWithOptions(shared_ptr<DescribeParentPlatformDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParentPlatformDevicesResponse(doRPCRequest(make_shared<string>("DescribeParentPlatformDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParentPlatformDevicesResponse Alibabacloud_Vs20181212::Client::describeParentPlatformDevices(shared_ptr<DescribeParentPlatformDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParentPlatformDevicesWithOptions(request, runtime);
}

DescribeParentPlatformsResponse Alibabacloud_Vs20181212::Client::describeParentPlatformsWithOptions(shared_ptr<DescribeParentPlatformsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParentPlatformsResponse(doRPCRequest(make_shared<string>("DescribeParentPlatforms"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParentPlatformsResponse Alibabacloud_Vs20181212::Client::describeParentPlatforms(shared_ptr<DescribeParentPlatformsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParentPlatformsWithOptions(request, runtime);
}

DescribePresetsResponse Alibabacloud_Vs20181212::Client::describePresetsWithOptions(shared_ptr<DescribePresetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePresetsResponse(doRPCRequest(make_shared<string>("DescribePresets"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePresetsResponse Alibabacloud_Vs20181212::Client::describePresets(shared_ptr<DescribePresetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePresetsWithOptions(request, runtime);
}

DescribePurchasedDeviceResponse Alibabacloud_Vs20181212::Client::describePurchasedDeviceWithOptions(shared_ptr<DescribePurchasedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePurchasedDeviceResponse(doRPCRequest(make_shared<string>("DescribePurchasedDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePurchasedDeviceResponse Alibabacloud_Vs20181212::Client::describePurchasedDevice(shared_ptr<DescribePurchasedDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedDeviceWithOptions(request, runtime);
}

DescribePurchasedDevicesResponse Alibabacloud_Vs20181212::Client::describePurchasedDevicesWithOptions(shared_ptr<DescribePurchasedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePurchasedDevicesResponse(doRPCRequest(make_shared<string>("DescribePurchasedDevices"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePurchasedDevicesResponse Alibabacloud_Vs20181212::Client::describePurchasedDevices(shared_ptr<DescribePurchasedDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedDevicesWithOptions(request, runtime);
}

DescribeRecordsResponse Alibabacloud_Vs20181212::Client::describeRecordsWithOptions(shared_ptr<DescribeRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecordsResponse(doRPCRequest(make_shared<string>("DescribeRecords"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecordsResponse Alibabacloud_Vs20181212::Client::describeRecords(shared_ptr<DescribeRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordsWithOptions(request, runtime);
}

DescribeStreamResponse Alibabacloud_Vs20181212::Client::describeStreamWithOptions(shared_ptr<DescribeStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStreamResponse(doRPCRequest(make_shared<string>("DescribeStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStreamResponse Alibabacloud_Vs20181212::Client::describeStream(shared_ptr<DescribeStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStreamWithOptions(request, runtime);
}

DescribeStreamsResponse Alibabacloud_Vs20181212::Client::describeStreamsWithOptions(shared_ptr<DescribeStreamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStreamsResponse(doRPCRequest(make_shared<string>("DescribeStreams"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStreamsResponse Alibabacloud_Vs20181212::Client::describeStreams(shared_ptr<DescribeStreamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStreamsWithOptions(request, runtime);
}

DescribeStreamURLResponse Alibabacloud_Vs20181212::Client::describeStreamURLWithOptions(shared_ptr<DescribeStreamURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStreamURLResponse(doRPCRequest(make_shared<string>("DescribeStreamURL"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStreamURLResponse Alibabacloud_Vs20181212::Client::describeStreamURL(shared_ptr<DescribeStreamURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStreamURLWithOptions(request, runtime);
}

DescribeStreamVodListResponse Alibabacloud_Vs20181212::Client::describeStreamVodListWithOptions(shared_ptr<DescribeStreamVodListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStreamVodListResponse(doRPCRequest(make_shared<string>("DescribeStreamVodList"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStreamVodListResponse Alibabacloud_Vs20181212::Client::describeStreamVodList(shared_ptr<DescribeStreamVodListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStreamVodListWithOptions(request, runtime);
}

DescribeTemplateResponse Alibabacloud_Vs20181212::Client::describeTemplateWithOptions(shared_ptr<DescribeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTemplateResponse(doRPCRequest(make_shared<string>("DescribeTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTemplateResponse Alibabacloud_Vs20181212::Client::describeTemplate(shared_ptr<DescribeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateWithOptions(request, runtime);
}

DescribeTemplatesResponse Alibabacloud_Vs20181212::Client::describeTemplatesWithOptions(shared_ptr<DescribeTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTemplatesResponse(doRPCRequest(make_shared<string>("DescribeTemplates"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTemplatesResponse Alibabacloud_Vs20181212::Client::describeTemplates(shared_ptr<DescribeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplatesWithOptions(request, runtime);
}

DescribeVodStreamURLResponse Alibabacloud_Vs20181212::Client::describeVodStreamURLWithOptions(shared_ptr<DescribeVodStreamURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodStreamURLResponse(doRPCRequest(make_shared<string>("DescribeVodStreamURL"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodStreamURLResponse Alibabacloud_Vs20181212::Client::describeVodStreamURL(shared_ptr<DescribeVodStreamURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodStreamURLWithOptions(request, runtime);
}

DescribeVsCertificateDetailResponse Alibabacloud_Vs20181212::Client::describeVsCertificateDetailWithOptions(shared_ptr<DescribeVsCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsCertificateDetailResponse(doRPCRequest(make_shared<string>("DescribeVsCertificateDetail"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsCertificateDetailResponse Alibabacloud_Vs20181212::Client::describeVsCertificateDetail(shared_ptr<DescribeVsCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsCertificateDetailWithOptions(request, runtime);
}

DescribeVsCertificateListResponse Alibabacloud_Vs20181212::Client::describeVsCertificateListWithOptions(shared_ptr<DescribeVsCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsCertificateListResponse(doRPCRequest(make_shared<string>("DescribeVsCertificateList"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsCertificateListResponse Alibabacloud_Vs20181212::Client::describeVsCertificateList(shared_ptr<DescribeVsCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsCertificateListWithOptions(request, runtime);
}

DescribeVsDomainBpsDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainBpsDataWithOptions(shared_ptr<DescribeVsDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainBpsDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainBpsData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainBpsDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainBpsData(shared_ptr<DescribeVsDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainBpsDataWithOptions(request, runtime);
}

DescribeVsDomainCertificateInfoResponse Alibabacloud_Vs20181212::Client::describeVsDomainCertificateInfoWithOptions(shared_ptr<DescribeVsDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainCertificateInfoResponse(doRPCRequest(make_shared<string>("DescribeVsDomainCertificateInfo"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainCertificateInfoResponse Alibabacloud_Vs20181212::Client::describeVsDomainCertificateInfo(shared_ptr<DescribeVsDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainCertificateInfoWithOptions(request, runtime);
}

DescribeVsDomainConfigsResponse Alibabacloud_Vs20181212::Client::describeVsDomainConfigsWithOptions(shared_ptr<DescribeVsDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainConfigsResponse(doRPCRequest(make_shared<string>("DescribeVsDomainConfigs"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainConfigsResponse Alibabacloud_Vs20181212::Client::describeVsDomainConfigs(shared_ptr<DescribeVsDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainConfigsWithOptions(request, runtime);
}

DescribeVsDomainDetailResponse Alibabacloud_Vs20181212::Client::describeVsDomainDetailWithOptions(shared_ptr<DescribeVsDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainDetailResponse(doRPCRequest(make_shared<string>("DescribeVsDomainDetail"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainDetailResponse Alibabacloud_Vs20181212::Client::describeVsDomainDetail(shared_ptr<DescribeVsDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainDetailWithOptions(request, runtime);
}

DescribeVsDomainPvDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainPvDataWithOptions(shared_ptr<DescribeVsDomainPvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainPvDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainPvData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainPvDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainPvData(shared_ptr<DescribeVsDomainPvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainPvDataWithOptions(request, runtime);
}

DescribeVsDomainPvUvDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainPvUvDataWithOptions(shared_ptr<DescribeVsDomainPvUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainPvUvDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainPvUvData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainPvUvDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainPvUvData(shared_ptr<DescribeVsDomainPvUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainPvUvDataWithOptions(request, runtime);
}

DescribeVsDomainRecordDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainRecordDataWithOptions(shared_ptr<DescribeVsDomainRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainRecordDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainRecordData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainRecordDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainRecordData(shared_ptr<DescribeVsDomainRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainRecordDataWithOptions(request, runtime);
}

DescribeVsDomainRegionDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainRegionDataWithOptions(shared_ptr<DescribeVsDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainRegionDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainRegionData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainRegionDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainRegionData(shared_ptr<DescribeVsDomainRegionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainRegionDataWithOptions(request, runtime);
}

DescribeVsDomainReqBpsDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainReqBpsDataWithOptions(shared_ptr<DescribeVsDomainReqBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainReqBpsDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainReqBpsData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainReqBpsDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainReqBpsData(shared_ptr<DescribeVsDomainReqBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainReqBpsDataWithOptions(request, runtime);
}

DescribeVsDomainReqTrafficDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainReqTrafficDataWithOptions(shared_ptr<DescribeVsDomainReqTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainReqTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainReqTrafficData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainReqTrafficDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainReqTrafficData(shared_ptr<DescribeVsDomainReqTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainReqTrafficDataWithOptions(request, runtime);
}

DescribeVsDomainSnapshotDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainSnapshotDataWithOptions(shared_ptr<DescribeVsDomainSnapshotDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainSnapshotDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainSnapshotData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainSnapshotDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainSnapshotData(shared_ptr<DescribeVsDomainSnapshotDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainSnapshotDataWithOptions(request, runtime);
}

DescribeVsDomainTrafficDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainTrafficDataWithOptions(shared_ptr<DescribeVsDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainTrafficData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainTrafficDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainTrafficData(shared_ptr<DescribeVsDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainTrafficDataWithOptions(request, runtime);
}

DescribeVsDomainUvDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainUvDataWithOptions(shared_ptr<DescribeVsDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsDomainUvDataResponse(doRPCRequest(make_shared<string>("DescribeVsDomainUvData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsDomainUvDataResponse Alibabacloud_Vs20181212::Client::describeVsDomainUvData(shared_ptr<DescribeVsDomainUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsDomainUvDataWithOptions(request, runtime);
}

DescribeVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::describeVsPullStreamInfoConfigWithOptions(shared_ptr<DescribeVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsPullStreamInfoConfigResponse(doRPCRequest(make_shared<string>("DescribeVsPullStreamInfoConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::describeVsPullStreamInfoConfig(shared_ptr<DescribeVsPullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsPullStreamInfoConfigWithOptions(request, runtime);
}

DescribeVsStreamsNotifyUrlConfigResponse Alibabacloud_Vs20181212::Client::describeVsStreamsNotifyUrlConfigWithOptions(shared_ptr<DescribeVsStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsStreamsNotifyUrlConfigResponse(doRPCRequest(make_shared<string>("DescribeVsStreamsNotifyUrlConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsStreamsNotifyUrlConfigResponse Alibabacloud_Vs20181212::Client::describeVsStreamsNotifyUrlConfig(shared_ptr<DescribeVsStreamsNotifyUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

DescribeVsStreamsOnlineListResponse Alibabacloud_Vs20181212::Client::describeVsStreamsOnlineListWithOptions(shared_ptr<DescribeVsStreamsOnlineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsStreamsOnlineListResponse(doRPCRequest(make_shared<string>("DescribeVsStreamsOnlineList"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsStreamsOnlineListResponse Alibabacloud_Vs20181212::Client::describeVsStreamsOnlineList(shared_ptr<DescribeVsStreamsOnlineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsStreamsOnlineListWithOptions(request, runtime);
}

DescribeVsStreamsPublishListResponse Alibabacloud_Vs20181212::Client::describeVsStreamsPublishListWithOptions(shared_ptr<DescribeVsStreamsPublishListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsStreamsPublishListResponse(doRPCRequest(make_shared<string>("DescribeVsStreamsPublishList"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsStreamsPublishListResponse Alibabacloud_Vs20181212::Client::describeVsStreamsPublishList(shared_ptr<DescribeVsStreamsPublishListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsStreamsPublishListWithOptions(request, runtime);
}

DescribeVsTopDomainsByFlowResponse Alibabacloud_Vs20181212::Client::describeVsTopDomainsByFlowWithOptions(shared_ptr<DescribeVsTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsTopDomainsByFlowResponse(doRPCRequest(make_shared<string>("DescribeVsTopDomainsByFlow"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsTopDomainsByFlowResponse Alibabacloud_Vs20181212::Client::describeVsTopDomainsByFlow(shared_ptr<DescribeVsTopDomainsByFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsTopDomainsByFlowWithOptions(request, runtime);
}

DescribeVsUpPeakPublishStreamDataResponse Alibabacloud_Vs20181212::Client::describeVsUpPeakPublishStreamDataWithOptions(shared_ptr<DescribeVsUpPeakPublishStreamDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsUpPeakPublishStreamDataResponse(doRPCRequest(make_shared<string>("DescribeVsUpPeakPublishStreamData"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsUpPeakPublishStreamDataResponse Alibabacloud_Vs20181212::Client::describeVsUpPeakPublishStreamData(shared_ptr<DescribeVsUpPeakPublishStreamDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsUpPeakPublishStreamDataWithOptions(request, runtime);
}

DescribeVsUserResourcePackageResponse Alibabacloud_Vs20181212::Client::describeVsUserResourcePackageWithOptions(shared_ptr<DescribeVsUserResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVsUserResourcePackageResponse(doRPCRequest(make_shared<string>("DescribeVsUserResourcePackage"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVsUserResourcePackageResponse Alibabacloud_Vs20181212::Client::describeVsUserResourcePackage(shared_ptr<DescribeVsUserResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVsUserResourcePackageWithOptions(request, runtime);
}

ForbidVsStreamResponse Alibabacloud_Vs20181212::Client::forbidVsStreamWithOptions(shared_ptr<ForbidVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ForbidVsStreamResponse(doRPCRequest(make_shared<string>("ForbidVsStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ForbidVsStreamResponse Alibabacloud_Vs20181212::Client::forbidVsStream(shared_ptr<ForbidVsStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return forbidVsStreamWithOptions(request, runtime);
}

GotoPresetResponse Alibabacloud_Vs20181212::Client::gotoPresetWithOptions(shared_ptr<GotoPresetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GotoPresetResponse(doRPCRequest(make_shared<string>("GotoPreset"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GotoPresetResponse Alibabacloud_Vs20181212::Client::gotoPreset(shared_ptr<GotoPresetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return gotoPresetWithOptions(request, runtime);
}

ModifyDeviceResponse Alibabacloud_Vs20181212::Client::modifyDeviceWithOptions(shared_ptr<ModifyDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeviceResponse(doRPCRequest(make_shared<string>("ModifyDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeviceResponse Alibabacloud_Vs20181212::Client::modifyDevice(shared_ptr<ModifyDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceWithOptions(request, runtime);
}

ModifyDeviceAlarmResponse Alibabacloud_Vs20181212::Client::modifyDeviceAlarmWithOptions(shared_ptr<ModifyDeviceAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeviceAlarmResponse(doRPCRequest(make_shared<string>("ModifyDeviceAlarm"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeviceAlarmResponse Alibabacloud_Vs20181212::Client::modifyDeviceAlarm(shared_ptr<ModifyDeviceAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceAlarmWithOptions(request, runtime);
}

ModifyDeviceCaptureResponse Alibabacloud_Vs20181212::Client::modifyDeviceCaptureWithOptions(shared_ptr<ModifyDeviceCaptureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeviceCaptureResponse(doRPCRequest(make_shared<string>("ModifyDeviceCapture"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeviceCaptureResponse Alibabacloud_Vs20181212::Client::modifyDeviceCapture(shared_ptr<ModifyDeviceCaptureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceCaptureWithOptions(request, runtime);
}

ModifyDeviceChannelsResponse Alibabacloud_Vs20181212::Client::modifyDeviceChannelsWithOptions(shared_ptr<ModifyDeviceChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeviceChannelsResponse(doRPCRequest(make_shared<string>("ModifyDeviceChannels"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeviceChannelsResponse Alibabacloud_Vs20181212::Client::modifyDeviceChannels(shared_ptr<ModifyDeviceChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceChannelsWithOptions(request, runtime);
}

ModifyDirectoryResponse Alibabacloud_Vs20181212::Client::modifyDirectoryWithOptions(shared_ptr<ModifyDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDirectoryResponse(doRPCRequest(make_shared<string>("ModifyDirectory"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDirectoryResponse Alibabacloud_Vs20181212::Client::modifyDirectory(shared_ptr<ModifyDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDirectoryWithOptions(request, runtime);
}

ModifyGroupResponse Alibabacloud_Vs20181212::Client::modifyGroupWithOptions(shared_ptr<ModifyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyGroupResponse(doRPCRequest(make_shared<string>("ModifyGroup"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyGroupResponse Alibabacloud_Vs20181212::Client::modifyGroup(shared_ptr<ModifyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGroupWithOptions(request, runtime);
}

ModifyParentPlatformResponse Alibabacloud_Vs20181212::Client::modifyParentPlatformWithOptions(shared_ptr<ModifyParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyParentPlatformResponse(doRPCRequest(make_shared<string>("ModifyParentPlatform"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyParentPlatformResponse Alibabacloud_Vs20181212::Client::modifyParentPlatform(shared_ptr<ModifyParentPlatformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParentPlatformWithOptions(request, runtime);
}

ModifyTemplateResponse Alibabacloud_Vs20181212::Client::modifyTemplateWithOptions(shared_ptr<ModifyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyTemplateResponse(doRPCRequest(make_shared<string>("ModifyTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyTemplateResponse Alibabacloud_Vs20181212::Client::modifyTemplate(shared_ptr<ModifyTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTemplateWithOptions(request, runtime);
}

OpenVsServiceResponse Alibabacloud_Vs20181212::Client::openVsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return OpenVsServiceResponse(doRPCRequest(make_shared<string>("OpenVsService"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenVsServiceResponse Alibabacloud_Vs20181212::Client::openVsService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openVsServiceWithOptions(runtime);
}

ResumeVsStreamResponse Alibabacloud_Vs20181212::Client::resumeVsStreamWithOptions(shared_ptr<ResumeVsStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeVsStreamResponse(doRPCRequest(make_shared<string>("ResumeVsStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeVsStreamResponse Alibabacloud_Vs20181212::Client::resumeVsStream(shared_ptr<ResumeVsStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeVsStreamWithOptions(request, runtime);
}

SetPresetResponse Alibabacloud_Vs20181212::Client::setPresetWithOptions(shared_ptr<SetPresetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetPresetResponse(doRPCRequest(make_shared<string>("SetPreset"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetPresetResponse Alibabacloud_Vs20181212::Client::setPreset(shared_ptr<SetPresetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setPresetWithOptions(request, runtime);
}

SetVsDomainCertificateResponse Alibabacloud_Vs20181212::Client::setVsDomainCertificateWithOptions(shared_ptr<SetVsDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetVsDomainCertificateResponse(doRPCRequest(make_shared<string>("SetVsDomainCertificate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetVsDomainCertificateResponse Alibabacloud_Vs20181212::Client::setVsDomainCertificate(shared_ptr<SetVsDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVsDomainCertificateWithOptions(request, runtime);
}

SetVsStreamsNotifyUrlConfigResponse Alibabacloud_Vs20181212::Client::setVsStreamsNotifyUrlConfigWithOptions(shared_ptr<SetVsStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetVsStreamsNotifyUrlConfigResponse(doRPCRequest(make_shared<string>("SetVsStreamsNotifyUrlConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetVsStreamsNotifyUrlConfigResponse Alibabacloud_Vs20181212::Client::setVsStreamsNotifyUrlConfig(shared_ptr<SetVsStreamsNotifyUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVsStreamsNotifyUrlConfigWithOptions(request, runtime);
}

StartDeviceResponse Alibabacloud_Vs20181212::Client::startDeviceWithOptions(shared_ptr<StartDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDeviceResponse(doRPCRequest(make_shared<string>("StartDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDeviceResponse Alibabacloud_Vs20181212::Client::startDevice(shared_ptr<StartDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDeviceWithOptions(request, runtime);
}

StartParentPlatformResponse Alibabacloud_Vs20181212::Client::startParentPlatformWithOptions(shared_ptr<StartParentPlatformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartParentPlatformResponse(doRPCRequest(make_shared<string>("StartParentPlatform"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartParentPlatformResponse Alibabacloud_Vs20181212::Client::startParentPlatform(shared_ptr<StartParentPlatformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startParentPlatformWithOptions(request, runtime);
}

StartRecordStreamResponse Alibabacloud_Vs20181212::Client::startRecordStreamWithOptions(shared_ptr<StartRecordStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartRecordStreamResponse(doRPCRequest(make_shared<string>("StartRecordStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartRecordStreamResponse Alibabacloud_Vs20181212::Client::startRecordStream(shared_ptr<StartRecordStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRecordStreamWithOptions(request, runtime);
}

StartStreamResponse Alibabacloud_Vs20181212::Client::startStreamWithOptions(shared_ptr<StartStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartStreamResponse(doRPCRequest(make_shared<string>("StartStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartStreamResponse Alibabacloud_Vs20181212::Client::startStream(shared_ptr<StartStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startStreamWithOptions(request, runtime);
}

StartTransferStreamResponse Alibabacloud_Vs20181212::Client::startTransferStreamWithOptions(shared_ptr<StartTransferStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartTransferStreamResponse(doRPCRequest(make_shared<string>("StartTransferStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartTransferStreamResponse Alibabacloud_Vs20181212::Client::startTransferStream(shared_ptr<StartTransferStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTransferStreamWithOptions(request, runtime);
}

StopAdjustResponse Alibabacloud_Vs20181212::Client::stopAdjustWithOptions(shared_ptr<StopAdjustRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopAdjustResponse(doRPCRequest(make_shared<string>("StopAdjust"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopAdjustResponse Alibabacloud_Vs20181212::Client::stopAdjust(shared_ptr<StopAdjustRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAdjustWithOptions(request, runtime);
}

StopDeviceResponse Alibabacloud_Vs20181212::Client::stopDeviceWithOptions(shared_ptr<StopDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDeviceResponse(doRPCRequest(make_shared<string>("StopDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDeviceResponse Alibabacloud_Vs20181212::Client::stopDevice(shared_ptr<StopDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDeviceWithOptions(request, runtime);
}

StopMoveResponse Alibabacloud_Vs20181212::Client::stopMoveWithOptions(shared_ptr<StopMoveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopMoveResponse(doRPCRequest(make_shared<string>("StopMove"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopMoveResponse Alibabacloud_Vs20181212::Client::stopMove(shared_ptr<StopMoveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMoveWithOptions(request, runtime);
}

StopRecordStreamResponse Alibabacloud_Vs20181212::Client::stopRecordStreamWithOptions(shared_ptr<StopRecordStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopRecordStreamResponse(doRPCRequest(make_shared<string>("StopRecordStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopRecordStreamResponse Alibabacloud_Vs20181212::Client::stopRecordStream(shared_ptr<StopRecordStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRecordStreamWithOptions(request, runtime);
}

StopStreamResponse Alibabacloud_Vs20181212::Client::stopStreamWithOptions(shared_ptr<StopStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopStreamResponse(doRPCRequest(make_shared<string>("StopStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopStreamResponse Alibabacloud_Vs20181212::Client::stopStream(shared_ptr<StopStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopStreamWithOptions(request, runtime);
}

StopTransferStreamResponse Alibabacloud_Vs20181212::Client::stopTransferStreamWithOptions(shared_ptr<StopTransferStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopTransferStreamResponse(doRPCRequest(make_shared<string>("StopTransferStream"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopTransferStreamResponse Alibabacloud_Vs20181212::Client::stopTransferStream(shared_ptr<StopTransferStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTransferStreamWithOptions(request, runtime);
}

SyncCatalogsResponse Alibabacloud_Vs20181212::Client::syncCatalogsWithOptions(shared_ptr<SyncCatalogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncCatalogsResponse(doRPCRequest(make_shared<string>("SyncCatalogs"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncCatalogsResponse Alibabacloud_Vs20181212::Client::syncCatalogs(shared_ptr<SyncCatalogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncCatalogsWithOptions(request, runtime);
}

UnbindDirectoryResponse Alibabacloud_Vs20181212::Client::unbindDirectoryWithOptions(shared_ptr<UnbindDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindDirectoryResponse(doRPCRequest(make_shared<string>("UnbindDirectory"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindDirectoryResponse Alibabacloud_Vs20181212::Client::unbindDirectory(shared_ptr<UnbindDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDirectoryWithOptions(request, runtime);
}

UnbindParentPlatformDeviceResponse Alibabacloud_Vs20181212::Client::unbindParentPlatformDeviceWithOptions(shared_ptr<UnbindParentPlatformDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindParentPlatformDeviceResponse(doRPCRequest(make_shared<string>("UnbindParentPlatformDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindParentPlatformDeviceResponse Alibabacloud_Vs20181212::Client::unbindParentPlatformDevice(shared_ptr<UnbindParentPlatformDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindParentPlatformDeviceWithOptions(request, runtime);
}

UnbindPurchasedDeviceResponse Alibabacloud_Vs20181212::Client::unbindPurchasedDeviceWithOptions(shared_ptr<UnbindPurchasedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindPurchasedDeviceResponse(doRPCRequest(make_shared<string>("UnbindPurchasedDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindPurchasedDeviceResponse Alibabacloud_Vs20181212::Client::unbindPurchasedDevice(shared_ptr<UnbindPurchasedDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindPurchasedDeviceWithOptions(request, runtime);
}

UnbindTemplateResponse Alibabacloud_Vs20181212::Client::unbindTemplateWithOptions(shared_ptr<UnbindTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindTemplateResponse(doRPCRequest(make_shared<string>("UnbindTemplate"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindTemplateResponse Alibabacloud_Vs20181212::Client::unbindTemplate(shared_ptr<UnbindTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindTemplateWithOptions(request, runtime);
}

UnlockDeviceResponse Alibabacloud_Vs20181212::Client::unlockDeviceWithOptions(shared_ptr<UnlockDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnlockDeviceResponse(doRPCRequest(make_shared<string>("UnlockDevice"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnlockDeviceResponse Alibabacloud_Vs20181212::Client::unlockDevice(shared_ptr<UnlockDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockDeviceWithOptions(request, runtime);
}

UpdateVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::updateVsPullStreamInfoConfigWithOptions(shared_ptr<UpdateVsPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVsPullStreamInfoConfigResponse(doRPCRequest(make_shared<string>("UpdateVsPullStreamInfoConfig"), make_shared<string>("2018-12-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVsPullStreamInfoConfigResponse Alibabacloud_Vs20181212::Client::updateVsPullStreamInfoConfig(shared_ptr<UpdateVsPullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVsPullStreamInfoConfigWithOptions(request, runtime);
}

