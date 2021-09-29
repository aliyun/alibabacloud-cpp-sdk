// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/iovcc_20180501.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Iovcc20180501;

Alibabacloud_Iovcc20180501::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iovcc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Iovcc20180501::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ListDeviceBrandsResponse Alibabacloud_Iovcc20180501::Client::listDeviceBrandsWithOptions(shared_ptr<ListDeviceBrandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDeviceBrandsResponse(doRPCRequest(make_shared<string>("ListDeviceBrands"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceBrandsResponse Alibabacloud_Iovcc20180501::Client::listDeviceBrands(shared_ptr<ListDeviceBrandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceBrandsWithOptions(request, runtime);
}

ListFunctionExecuteLogResponse Alibabacloud_Iovcc20180501::Client::listFunctionExecuteLogWithOptions(shared_ptr<ListFunctionExecuteLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFunctionExecuteLogResponse(doRPCRequest(make_shared<string>("ListFunctionExecuteLog"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFunctionExecuteLogResponse Alibabacloud_Iovcc20180501::Client::listFunctionExecuteLog(shared_ptr<ListFunctionExecuteLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionExecuteLogWithOptions(request, runtime);
}

ListDeviceModelsResponse Alibabacloud_Iovcc20180501::Client::listDeviceModelsWithOptions(shared_ptr<ListDeviceModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDeviceModelsResponse(doRPCRequest(make_shared<string>("ListDeviceModels"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceModelsResponse Alibabacloud_Iovcc20180501::Client::listDeviceModels(shared_ptr<ListDeviceModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceModelsWithOptions(request, runtime);
}

ListMqttMessageLogsResponse Alibabacloud_Iovcc20180501::Client::listMqttMessageLogsWithOptions(shared_ptr<ListMqttMessageLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMqttMessageLogsResponse(doRPCRequest(make_shared<string>("ListMqttMessageLogs"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMqttMessageLogsResponse Alibabacloud_Iovcc20180501::Client::listMqttMessageLogs(shared_ptr<ListMqttMessageLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMqttMessageLogsWithOptions(request, runtime);
}

DeleteNamespaceResponse Alibabacloud_Iovcc20180501::Client::deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNamespaceResponse(doRPCRequest(make_shared<string>("DeleteNamespace"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNamespaceResponse Alibabacloud_Iovcc20180501::Client::deleteNamespace(shared_ptr<DeleteNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNamespaceWithOptions(request, runtime);
}

ListOfflineMessagesResponse Alibabacloud_Iovcc20180501::Client::listOfflineMessagesWithOptions(shared_ptr<ListOfflineMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOfflineMessagesResponse(doRPCRequest(make_shared<string>("ListOfflineMessages"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOfflineMessagesResponse Alibabacloud_Iovcc20180501::Client::listOfflineMessages(shared_ptr<ListOfflineMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfflineMessagesWithOptions(request, runtime);
}

PushMessageResponse Alibabacloud_Iovcc20180501::Client::pushMessageWithOptions(shared_ptr<PushMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushMessageResponse(doRPCRequest(make_shared<string>("PushMessage"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushMessageResponse Alibabacloud_Iovcc20180501::Client::pushMessage(shared_ptr<PushMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMessageWithOptions(request, runtime);
}

DeleteCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::deleteCustomizedFilterWithOptions(shared_ptr<DeleteCustomizedFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCustomizedFilterResponse(doRPCRequest(make_shared<string>("DeleteCustomizedFilter"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::deleteCustomizedFilter(shared_ptr<DeleteCustomizedFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizedFilterWithOptions(request, runtime);
}

DescribeMqttClientStatusResponse Alibabacloud_Iovcc20180501::Client::describeMqttClientStatusWithOptions(shared_ptr<DescribeMqttClientStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMqttClientStatusResponse(doRPCRequest(make_shared<string>("DescribeMqttClientStatus"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMqttClientStatusResponse Alibabacloud_Iovcc20180501::Client::describeMqttClientStatus(shared_ptr<DescribeMqttClientStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMqttClientStatusWithOptions(request, runtime);
}

DeleteDeviceResponse Alibabacloud_Iovcc20180501::Client::deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeviceResponse(doRPCRequest(make_shared<string>("DeleteDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeviceResponse Alibabacloud_Iovcc20180501::Client::deleteDevice(shared_ptr<DeleteDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceWithOptions(request, runtime);
}

UpdateDeviceModelResponse Alibabacloud_Iovcc20180501::Client::updateDeviceModelWithOptions(shared_ptr<UpdateDeviceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDeviceModelResponse(doRPCRequest(make_shared<string>("UpdateDeviceModel"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDeviceModelResponse Alibabacloud_Iovcc20180501::Client::updateDeviceModel(shared_ptr<UpdateDeviceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceModelWithOptions(request, runtime);
}

UpdateApiGatewayAppStatusResponse Alibabacloud_Iovcc20180501::Client::updateApiGatewayAppStatusWithOptions(shared_ptr<UpdateApiGatewayAppStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateApiGatewayAppStatusResponse(doRPCRequest(make_shared<string>("UpdateApiGatewayAppStatus"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateApiGatewayAppStatusResponse Alibabacloud_Iovcc20180501::Client::updateApiGatewayAppStatus(shared_ptr<UpdateApiGatewayAppStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApiGatewayAppStatusWithOptions(request, runtime);
}

ListCameraShootingAttachmentsResponse Alibabacloud_Iovcc20180501::Client::listCameraShootingAttachmentsWithOptions(shared_ptr<ListCameraShootingAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCameraShootingAttachmentsResponse(doRPCRequest(make_shared<string>("ListCameraShootingAttachments"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCameraShootingAttachmentsResponse Alibabacloud_Iovcc20180501::Client::listCameraShootingAttachments(shared_ptr<ListCameraShootingAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCameraShootingAttachmentsWithOptions(request, runtime);
}

ListAssistHistoriesResponse Alibabacloud_Iovcc20180501::Client::listAssistHistoriesWithOptions(shared_ptr<ListAssistHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAssistHistoriesResponse(doRPCRequest(make_shared<string>("ListAssistHistories"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAssistHistoriesResponse Alibabacloud_Iovcc20180501::Client::listAssistHistories(shared_ptr<ListAssistHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAssistHistoriesWithOptions(request, runtime);
}

GetDeviceSystemUpdateFunnelEventsResponse Alibabacloud_Iovcc20180501::Client::getDeviceSystemUpdateFunnelEventsWithOptions(shared_ptr<GetDeviceSystemUpdateFunnelEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceSystemUpdateFunnelEventsResponse(doRPCRequest(make_shared<string>("GetDeviceSystemUpdateFunnelEvents"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceSystemUpdateFunnelEventsResponse Alibabacloud_Iovcc20180501::Client::getDeviceSystemUpdateFunnelEvents(shared_ptr<GetDeviceSystemUpdateFunnelEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceSystemUpdateFunnelEventsWithOptions(request, runtime);
}

DeleteAllCustomizedFiltersResponse Alibabacloud_Iovcc20180501::Client::deleteAllCustomizedFiltersWithOptions(shared_ptr<DeleteAllCustomizedFiltersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAllCustomizedFiltersResponse(doRPCRequest(make_shared<string>("DeleteAllCustomizedFilters"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAllCustomizedFiltersResponse Alibabacloud_Iovcc20180501::Client::deleteAllCustomizedFilters(shared_ptr<DeleteAllCustomizedFiltersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllCustomizedFiltersWithOptions(request, runtime);
}

GenerateAssistFileUploadUrlResponse Alibabacloud_Iovcc20180501::Client::generateAssistFileUploadUrlWithOptions(shared_ptr<GenerateAssistFileUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateAssistFileUploadUrlResponse(doRPCRequest(make_shared<string>("GenerateAssistFileUploadUrl"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateAssistFileUploadUrlResponse Alibabacloud_Iovcc20180501::Client::generateAssistFileUploadUrl(shared_ptr<GenerateAssistFileUploadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAssistFileUploadUrlWithOptions(request, runtime);
}

DescribeAssistWSServerAddressResponse Alibabacloud_Iovcc20180501::Client::describeAssistWSServerAddressWithOptions(shared_ptr<DescribeAssistWSServerAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeAssistWSServerAddressResponse(doRPCRequest(make_shared<string>("DescribeAssistWSServerAddress"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAssistWSServerAddressResponse Alibabacloud_Iovcc20180501::Client::describeAssistWSServerAddress(shared_ptr<DescribeAssistWSServerAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssistWSServerAddressWithOptions(request, runtime);
}

FindPrepublishesByVersionIdResponse Alibabacloud_Iovcc20180501::Client::findPrepublishesByVersionIdWithOptions(shared_ptr<FindPrepublishesByVersionIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindPrepublishesByVersionIdResponse(doRPCRequest(make_shared<string>("FindPrepublishesByVersionId"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindPrepublishesByVersionIdResponse Alibabacloud_Iovcc20180501::Client::findPrepublishesByVersionId(shared_ptr<FindPrepublishesByVersionIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findPrepublishesByVersionIdWithOptions(request, runtime);
}

FindVersionMessagesResponse Alibabacloud_Iovcc20180501::Client::findVersionMessagesWithOptions(shared_ptr<FindVersionMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionMessagesResponse(doRPCRequest(make_shared<string>("FindVersionMessages"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionMessagesResponse Alibabacloud_Iovcc20180501::Client::findVersionMessages(shared_ptr<FindVersionMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionMessagesWithOptions(request, runtime);
}

UpdateUpstreamAppServerResponse Alibabacloud_Iovcc20180501::Client::updateUpstreamAppServerWithOptions(shared_ptr<UpdateUpstreamAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateUpstreamAppServerResponse(doRPCRequest(make_shared<string>("UpdateUpstreamAppServer"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateUpstreamAppServerResponse Alibabacloud_Iovcc20180501::Client::updateUpstreamAppServer(shared_ptr<UpdateUpstreamAppServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUpstreamAppServerWithOptions(request, runtime);
}

GetVehicleTrackResponse Alibabacloud_Iovcc20180501::Client::getVehicleTrackWithOptions(shared_ptr<GetVehicleTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetVehicleTrackResponse(doRPCRequest(make_shared<string>("GetVehicleTrack"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVehicleTrackResponse Alibabacloud_Iovcc20180501::Client::getVehicleTrack(shared_ptr<GetVehicleTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVehicleTrackWithOptions(request, runtime);
}

CreateVersionTestResponse Alibabacloud_Iovcc20180501::Client::createVersionTestWithOptions(shared_ptr<CreateVersionTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVersionTestResponse(doRPCRequest(make_shared<string>("CreateVersionTest"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVersionTestResponse Alibabacloud_Iovcc20180501::Client::createVersionTest(shared_ptr<CreateVersionTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVersionTestWithOptions(request, runtime);
}

ListDeployedFunctionsResponse Alibabacloud_Iovcc20180501::Client::listDeployedFunctionsWithOptions(shared_ptr<ListDeployedFunctionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeployedFunctionsResponse(doRPCRequest(make_shared<string>("ListDeployedFunctions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeployedFunctionsResponse Alibabacloud_Iovcc20180501::Client::listDeployedFunctions(shared_ptr<ListDeployedFunctionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeployedFunctionsWithOptions(request, runtime);
}

ListDeviceModelResponse Alibabacloud_Iovcc20180501::Client::listDeviceModelWithOptions(shared_ptr<ListDeviceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDeviceModelResponse(doRPCRequest(make_shared<string>("ListDeviceModel"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceModelResponse Alibabacloud_Iovcc20180501::Client::listDeviceModel(shared_ptr<ListDeviceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceModelWithOptions(request, runtime);
}

CreateSchemaSubscribeResponse Alibabacloud_Iovcc20180501::Client::createSchemaSubscribeWithOptions(shared_ptr<CreateSchemaSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSchemaSubscribeResponse(doRPCRequest(make_shared<string>("CreateSchemaSubscribe"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSchemaSubscribeResponse Alibabacloud_Iovcc20180501::Client::createSchemaSubscribe(shared_ptr<CreateSchemaSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSchemaSubscribeWithOptions(request, runtime);
}

DescribeAssistRTMPServerAddressResponse Alibabacloud_Iovcc20180501::Client::describeAssistRTMPServerAddressWithOptions(shared_ptr<DescribeAssistRTMPServerAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeAssistRTMPServerAddressResponse(doRPCRequest(make_shared<string>("DescribeAssistRTMPServerAddress"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAssistRTMPServerAddressResponse Alibabacloud_Iovcc20180501::Client::describeAssistRTMPServerAddress(shared_ptr<DescribeAssistRTMPServerAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssistRTMPServerAddressWithOptions(request, runtime);
}

DeleteShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::deleteShadowSchemaWithOptions(shared_ptr<DeleteShadowSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteShadowSchemaResponse(doRPCRequest(make_shared<string>("DeleteShadowSchema"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::deleteShadowSchema(shared_ptr<DeleteShadowSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteShadowSchemaWithOptions(request, runtime);
}

DescribeProjectAppSecurityResponse Alibabacloud_Iovcc20180501::Client::describeProjectAppSecurityWithOptions(shared_ptr<DescribeProjectAppSecurityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProjectAppSecurityResponse(doRPCRequest(make_shared<string>("DescribeProjectAppSecurity"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProjectAppSecurityResponse Alibabacloud_Iovcc20180501::Client::describeProjectAppSecurity(shared_ptr<DescribeProjectAppSecurityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectAppSecurityWithOptions(request, runtime);
}

CreateDeviceBrandResponse Alibabacloud_Iovcc20180501::Client::createDeviceBrandWithOptions(shared_ptr<CreateDeviceBrandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceBrandResponse(doRPCRequest(make_shared<string>("CreateDeviceBrand"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceBrandResponse Alibabacloud_Iovcc20180501::Client::createDeviceBrand(shared_ptr<CreateDeviceBrandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceBrandWithOptions(request, runtime);
}

CreateMqttRootTopicResponse Alibabacloud_Iovcc20180501::Client::createMqttRootTopicWithOptions(shared_ptr<CreateMqttRootTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMqttRootTopicResponse(doRPCRequest(make_shared<string>("CreateMqttRootTopic"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMqttRootTopicResponse Alibabacloud_Iovcc20180501::Client::createMqttRootTopic(shared_ptr<CreateMqttRootTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMqttRootTopicWithOptions(request, runtime);
}

DelayPublishOsVersionResponse Alibabacloud_Iovcc20180501::Client::delayPublishOsVersionWithOptions(shared_ptr<DelayPublishOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DelayPublishOsVersionResponse(doRPCRequest(make_shared<string>("DelayPublishOsVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DelayPublishOsVersionResponse Alibabacloud_Iovcc20180501::Client::delayPublishOsVersion(shared_ptr<DelayPublishOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delayPublishOsVersionWithOptions(request, runtime);
}

ListPreChecksResponse Alibabacloud_Iovcc20180501::Client::listPreChecksWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListPreChecksResponse(doRPCRequest(make_shared<string>("ListPreChecks"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPreChecksResponse Alibabacloud_Iovcc20180501::Client::listPreChecks() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPreChecksWithOptions(runtime);
}

ListAppsResponse Alibabacloud_Iovcc20180501::Client::listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppsResponse(doRPCRequest(make_shared<string>("ListApps"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppsResponse Alibabacloud_Iovcc20180501::Client::listApps(shared_ptr<ListAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppsWithOptions(request, runtime);
}

DeleteCameraShootingRecordResponse Alibabacloud_Iovcc20180501::Client::deleteCameraShootingRecordWithOptions(shared_ptr<DeleteCameraShootingRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCameraShootingRecordResponse(doRPCRequest(make_shared<string>("DeleteCameraShootingRecord"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCameraShootingRecordResponse Alibabacloud_Iovcc20180501::Client::deleteCameraShootingRecord(shared_ptr<DeleteCameraShootingRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCameraShootingRecordWithOptions(request, runtime);
}

DescribeDeviceResponse Alibabacloud_Iovcc20180501::Client::describeDeviceWithOptions(shared_ptr<DescribeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceResponse(doRPCRequest(make_shared<string>("DescribeDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceResponse Alibabacloud_Iovcc20180501::Client::describeDevice(shared_ptr<DescribeDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceWithOptions(request, runtime);
}

AddVersionGroupDevicesResponse Alibabacloud_Iovcc20180501::Client::addVersionGroupDevicesWithOptions(shared_ptr<AddVersionGroupDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVersionGroupDevicesResponse(doRPCRequest(make_shared<string>("AddVersionGroupDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVersionGroupDevicesResponse Alibabacloud_Iovcc20180501::Client::addVersionGroupDevices(shared_ptr<AddVersionGroupDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVersionGroupDevicesWithOptions(request, runtime);
}

ListProjectAppsResponse Alibabacloud_Iovcc20180501::Client::listProjectAppsWithOptions(shared_ptr<ListProjectAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectAppsResponse(doRPCRequest(make_shared<string>("ListProjectApps"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectAppsResponse Alibabacloud_Iovcc20180501::Client::listProjectApps(shared_ptr<ListProjectAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectAppsWithOptions(request, runtime);
}

ConnectAssistDeviceResponse Alibabacloud_Iovcc20180501::Client::connectAssistDeviceWithOptions(shared_ptr<ConnectAssistDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConnectAssistDeviceResponse(doRPCRequest(make_shared<string>("ConnectAssistDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConnectAssistDeviceResponse Alibabacloud_Iovcc20180501::Client::connectAssistDevice(shared_ptr<ConnectAssistDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return connectAssistDeviceWithOptions(request, runtime);
}

ListApiGatewayAppsResponse Alibabacloud_Iovcc20180501::Client::listApiGatewayAppsWithOptions(shared_ptr<ListApiGatewayAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListApiGatewayAppsResponse(doRPCRequest(make_shared<string>("ListApiGatewayApps"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListApiGatewayAppsResponse Alibabacloud_Iovcc20180501::Client::listApiGatewayApps(shared_ptr<ListApiGatewayAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApiGatewayAppsWithOptions(request, runtime);
}

DeleteRpcServiceResponse Alibabacloud_Iovcc20180501::Client::deleteRpcServiceWithOptions(shared_ptr<DeleteRpcServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRpcServiceResponse(doRPCRequest(make_shared<string>("DeleteRpcService"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRpcServiceResponse Alibabacloud_Iovcc20180501::Client::deleteRpcService(shared_ptr<DeleteRpcServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRpcServiceWithOptions(request, runtime);
}

FindPrepublishPassedDevicesResponse Alibabacloud_Iovcc20180501::Client::findPrepublishPassedDevicesWithOptions(shared_ptr<FindPrepublishPassedDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindPrepublishPassedDevicesResponse(doRPCRequest(make_shared<string>("FindPrepublishPassedDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindPrepublishPassedDevicesResponse Alibabacloud_Iovcc20180501::Client::findPrepublishPassedDevices(shared_ptr<FindPrepublishPassedDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findPrepublishPassedDevicesWithOptions(request, runtime);
}

DeleteVersionBlackDevicesByIdResponse Alibabacloud_Iovcc20180501::Client::deleteVersionBlackDevicesByIdWithOptions(shared_ptr<DeleteVersionBlackDevicesByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionBlackDevicesByIdResponse(doRPCRequest(make_shared<string>("DeleteVersionBlackDevicesById"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionBlackDevicesByIdResponse Alibabacloud_Iovcc20180501::Client::deleteVersionBlackDevicesById(shared_ptr<DeleteVersionBlackDevicesByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionBlackDevicesByIdWithOptions(request, runtime);
}

DescribeOpenAccountResponse Alibabacloud_Iovcc20180501::Client::describeOpenAccountWithOptions(shared_ptr<DescribeOpenAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeOpenAccountResponse(doRPCRequest(make_shared<string>("DescribeOpenAccount"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOpenAccountResponse Alibabacloud_Iovcc20180501::Client::describeOpenAccount(shared_ptr<DescribeOpenAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOpenAccountWithOptions(request, runtime);
}

FindCustomizedFiltersResponse Alibabacloud_Iovcc20180501::Client::findCustomizedFiltersWithOptions(shared_ptr<FindCustomizedFiltersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindCustomizedFiltersResponse(doRPCRequest(make_shared<string>("FindCustomizedFilters"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindCustomizedFiltersResponse Alibabacloud_Iovcc20180501::Client::findCustomizedFilters(shared_ptr<FindCustomizedFiltersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findCustomizedFiltersWithOptions(request, runtime);
}

DeployFunctionFileResponse Alibabacloud_Iovcc20180501::Client::deployFunctionFileWithOptions(shared_ptr<DeployFunctionFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeployFunctionFileResponse(doRPCRequest(make_shared<string>("DeployFunctionFile"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeployFunctionFileResponse Alibabacloud_Iovcc20180501::Client::deployFunctionFile(shared_ptr<DeployFunctionFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployFunctionFileWithOptions(request, runtime);
}

ListAssistActionDetailsResponse Alibabacloud_Iovcc20180501::Client::listAssistActionDetailsWithOptions(shared_ptr<ListAssistActionDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAssistActionDetailsResponse(doRPCRequest(make_shared<string>("ListAssistActionDetails"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAssistActionDetailsResponse Alibabacloud_Iovcc20180501::Client::listAssistActionDetails(shared_ptr<ListAssistActionDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAssistActionDetailsWithOptions(request, runtime);
}

DescribeMqttTopicSubscriptionResponse Alibabacloud_Iovcc20180501::Client::describeMqttTopicSubscriptionWithOptions(shared_ptr<DescribeMqttTopicSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMqttTopicSubscriptionResponse(doRPCRequest(make_shared<string>("DescribeMqttTopicSubscription"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMqttTopicSubscriptionResponse Alibabacloud_Iovcc20180501::Client::describeMqttTopicSubscription(shared_ptr<DescribeMqttTopicSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMqttTopicSubscriptionWithOptions(request, runtime);
}

PushVersionMessageResponse Alibabacloud_Iovcc20180501::Client::pushVersionMessageWithOptions(shared_ptr<PushVersionMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushVersionMessageResponse(doRPCRequest(make_shared<string>("PushVersionMessage"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushVersionMessageResponse Alibabacloud_Iovcc20180501::Client::pushVersionMessage(shared_ptr<PushVersionMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushVersionMessageWithOptions(request, runtime);
}

CountDeviceModelsResponse Alibabacloud_Iovcc20180501::Client::countDeviceModelsWithOptions(shared_ptr<CountDeviceModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CountDeviceModelsResponse(doRPCRequest(make_shared<string>("CountDeviceModels"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CountDeviceModelsResponse Alibabacloud_Iovcc20180501::Client::countDeviceModels(shared_ptr<CountDeviceModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countDeviceModelsWithOptions(request, runtime);
}

CreateDeviceResponse Alibabacloud_Iovcc20180501::Client::createDeviceWithOptions(shared_ptr<CreateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceResponse(doRPCRequest(make_shared<string>("CreateDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceResponse Alibabacloud_Iovcc20180501::Client::createDevice(shared_ptr<CreateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceWithOptions(request, runtime);
}

CreateNamespaceResponse Alibabacloud_Iovcc20180501::Client::createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNamespaceResponse(doRPCRequest(make_shared<string>("CreateNamespace"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNamespaceResponse Alibabacloud_Iovcc20180501::Client::createNamespace(shared_ptr<CreateNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNamespaceWithOptions(request, runtime);
}

FindVersionDeviceGroupsResponse Alibabacloud_Iovcc20180501::Client::findVersionDeviceGroupsWithOptions(shared_ptr<FindVersionDeviceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionDeviceGroupsResponse(doRPCRequest(make_shared<string>("FindVersionDeviceGroups"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionDeviceGroupsResponse Alibabacloud_Iovcc20180501::Client::findVersionDeviceGroups(shared_ptr<FindVersionDeviceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionDeviceGroupsWithOptions(request, runtime);
}

ExecuteRemoteCommandResponse Alibabacloud_Iovcc20180501::Client::executeRemoteCommandWithOptions(shared_ptr<ExecuteRemoteCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteRemoteCommandResponse(doRPCRequest(make_shared<string>("ExecuteRemoteCommand"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteRemoteCommandResponse Alibabacloud_Iovcc20180501::Client::executeRemoteCommand(shared_ptr<ExecuteRemoteCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeRemoteCommandWithOptions(request, runtime);
}

CreateVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::createVersionDeviceGroupWithOptions(shared_ptr<CreateVersionDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVersionDeviceGroupResponse(doRPCRequest(make_shared<string>("CreateVersionDeviceGroup"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::createVersionDeviceGroup(shared_ptr<CreateVersionDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVersionDeviceGroupWithOptions(request, runtime);
}

DescribeAssistReportResponse Alibabacloud_Iovcc20180501::Client::describeAssistReportWithOptions(shared_ptr<DescribeAssistReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeAssistReportResponse(doRPCRequest(make_shared<string>("DescribeAssistReport"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAssistReportResponse Alibabacloud_Iovcc20180501::Client::describeAssistReport(shared_ptr<DescribeAssistReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssistReportWithOptions(request, runtime);
}

ListConnectLogsResponse Alibabacloud_Iovcc20180501::Client::listConnectLogsWithOptions(shared_ptr<ListConnectLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConnectLogsResponse(doRPCRequest(make_shared<string>("ListConnectLogs"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConnectLogsResponse Alibabacloud_Iovcc20180501::Client::listConnectLogs(shared_ptr<ListConnectLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectLogsWithOptions(request, runtime);
}

ListClientPluginsResponse Alibabacloud_Iovcc20180501::Client::listClientPluginsWithOptions(shared_ptr<ListClientPluginsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClientPluginsResponse(doRPCRequest(make_shared<string>("ListClientPlugins"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClientPluginsResponse Alibabacloud_Iovcc20180501::Client::listClientPlugins(shared_ptr<ListClientPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientPluginsWithOptions(request, runtime);
}

DescribeShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::describeShadowSchemaWithOptions(shared_ptr<DescribeShadowSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeShadowSchemaResponse(doRPCRequest(make_shared<string>("DescribeShadowSchema"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::describeShadowSchema(shared_ptr<DescribeShadowSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShadowSchemaWithOptions(request, runtime);
}

FindVersionBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::findVersionBlackDevicesWithOptions(shared_ptr<FindVersionBlackDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionBlackDevicesResponse(doRPCRequest(make_shared<string>("FindVersionBlackDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::findVersionBlackDevices(shared_ptr<FindVersionBlackDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionBlackDevicesWithOptions(request, runtime);
}

ListFunctionFilesResponse Alibabacloud_Iovcc20180501::Client::listFunctionFilesWithOptions(shared_ptr<ListFunctionFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFunctionFilesResponse(doRPCRequest(make_shared<string>("ListFunctionFiles"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFunctionFilesResponse Alibabacloud_Iovcc20180501::Client::listFunctionFiles(shared_ptr<ListFunctionFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionFilesWithOptions(request, runtime);
}

UpdateNamespaceDataResponse Alibabacloud_Iovcc20180501::Client::updateNamespaceDataWithOptions(shared_ptr<UpdateNamespaceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateNamespaceDataResponse(doRPCRequest(make_shared<string>("UpdateNamespaceData"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateNamespaceDataResponse Alibabacloud_Iovcc20180501::Client::updateNamespaceData(shared_ptr<UpdateNamespaceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNamespaceDataWithOptions(request, runtime);
}

ListEdgeDevicesResponse Alibabacloud_Iovcc20180501::Client::listEdgeDevicesWithOptions(shared_ptr<ListEdgeDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListEdgeDevicesResponse(doRPCRequest(make_shared<string>("ListEdgeDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListEdgeDevicesResponse Alibabacloud_Iovcc20180501::Client::listEdgeDevices(shared_ptr<ListEdgeDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeDevicesWithOptions(request, runtime);
}

DeleteCustomizedPropertyResponse Alibabacloud_Iovcc20180501::Client::deleteCustomizedPropertyWithOptions(shared_ptr<DeleteCustomizedPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCustomizedPropertyResponse(doRPCRequest(make_shared<string>("DeleteCustomizedProperty"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCustomizedPropertyResponse Alibabacloud_Iovcc20180501::Client::deleteCustomizedProperty(shared_ptr<DeleteCustomizedPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizedPropertyWithOptions(request, runtime);
}

UpdateAppVersionReleaseNoteResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionReleaseNoteWithOptions(shared_ptr<UpdateAppVersionReleaseNoteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppVersionReleaseNoteResponse(doRPCRequest(make_shared<string>("UpdateAppVersionReleaseNote"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppVersionReleaseNoteResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionReleaseNote(shared_ptr<UpdateAppVersionReleaseNoteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppVersionReleaseNoteWithOptions(request, runtime);
}

CreateTriggerResponse Alibabacloud_Iovcc20180501::Client::createTriggerWithOptions(shared_ptr<CreateTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTriggerResponse(doRPCRequest(make_shared<string>("CreateTrigger"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTriggerResponse Alibabacloud_Iovcc20180501::Client::createTrigger(shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTriggerWithOptions(request, runtime);
}

DiagnosisVersionResponse Alibabacloud_Iovcc20180501::Client::diagnosisVersionWithOptions(shared_ptr<DiagnosisVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DiagnosisVersionResponse(doRPCRequest(make_shared<string>("DiagnosisVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DiagnosisVersionResponse Alibabacloud_Iovcc20180501::Client::diagnosisVersion(shared_ptr<DiagnosisVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return diagnosisVersionWithOptions(request, runtime);
}

ListShadowSchemaDeviceModelsResponse Alibabacloud_Iovcc20180501::Client::listShadowSchemaDeviceModelsWithOptions(shared_ptr<ListShadowSchemaDeviceModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListShadowSchemaDeviceModelsResponse(doRPCRequest(make_shared<string>("ListShadowSchemaDeviceModels"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListShadowSchemaDeviceModelsResponse Alibabacloud_Iovcc20180501::Client::listShadowSchemaDeviceModels(shared_ptr<ListShadowSchemaDeviceModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listShadowSchemaDeviceModelsWithOptions(request, runtime);
}

PushConfigInfoResponse Alibabacloud_Iovcc20180501::Client::pushConfigInfoWithOptions(shared_ptr<PushConfigInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PushConfigInfoResponse(doRPCRequest(make_shared<string>("PushConfigInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PushConfigInfoResponse Alibabacloud_Iovcc20180501::Client::pushConfigInfo(shared_ptr<PushConfigInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushConfigInfoWithOptions(request, runtime);
}

GenerateOssUploadMetaResponse Alibabacloud_Iovcc20180501::Client::generateOssUploadMetaWithOptions(shared_ptr<GenerateOssUploadMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateOssUploadMetaResponse(doRPCRequest(make_shared<string>("GenerateOssUploadMeta"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateOssUploadMetaResponse Alibabacloud_Iovcc20180501::Client::generateOssUploadMeta(shared_ptr<GenerateOssUploadMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateOssUploadMetaWithOptions(request, runtime);
}

AddVersionBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::addVersionBlackDevicesWithOptions(shared_ptr<AddVersionBlackDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVersionBlackDevicesResponse(doRPCRequest(make_shared<string>("AddVersionBlackDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVersionBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::addVersionBlackDevices(shared_ptr<AddVersionBlackDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVersionBlackDevicesWithOptions(request, runtime);
}

DescribeCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::describeCustomizedFilterWithOptions(shared_ptr<DescribeCustomizedFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCustomizedFilterResponse(doRPCRequest(make_shared<string>("DescribeCustomizedFilter"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::describeCustomizedFilter(shared_ptr<DescribeCustomizedFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomizedFilterWithOptions(request, runtime);
}

DescribeDeviceIdByOuterInfoResponse Alibabacloud_Iovcc20180501::Client::describeDeviceIdByOuterInfoWithOptions(shared_ptr<DescribeDeviceIdByOuterInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDeviceIdByOuterInfoResponse(doRPCRequest(make_shared<string>("DescribeDeviceIdByOuterInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceIdByOuterInfoResponse Alibabacloud_Iovcc20180501::Client::describeDeviceIdByOuterInfo(shared_ptr<DescribeDeviceIdByOuterInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceIdByOuterInfoWithOptions(request, runtime);
}

CreateAppVersionResponse Alibabacloud_Iovcc20180501::Client::createAppVersionWithOptions(shared_ptr<CreateAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppVersionResponse(doRPCRequest(make_shared<string>("CreateAppVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppVersionResponse Alibabacloud_Iovcc20180501::Client::createAppVersion(shared_ptr<CreateAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppVersionWithOptions(request, runtime);
}

CountActivatedOrNewRegistrationDeviceResponse Alibabacloud_Iovcc20180501::Client::countActivatedOrNewRegistrationDeviceWithOptions(shared_ptr<CountActivatedOrNewRegistrationDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CountActivatedOrNewRegistrationDeviceResponse(doRPCRequest(make_shared<string>("CountActivatedOrNewRegistrationDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CountActivatedOrNewRegistrationDeviceResponse Alibabacloud_Iovcc20180501::Client::countActivatedOrNewRegistrationDevice(shared_ptr<CountActivatedOrNewRegistrationDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countActivatedOrNewRegistrationDeviceWithOptions(request, runtime);
}

ListDevicesResponse Alibabacloud_Iovcc20180501::Client::listDevicesWithOptions(shared_ptr<ListDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDevicesResponse(doRPCRequest(make_shared<string>("ListDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevicesResponse Alibabacloud_Iovcc20180501::Client::listDevices(shared_ptr<ListDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicesWithOptions(request, runtime);
}

FindVersionTestsResponse Alibabacloud_Iovcc20180501::Client::findVersionTestsWithOptions(shared_ptr<FindVersionTestsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionTestsResponse(doRPCRequest(make_shared<string>("FindVersionTests"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionTestsResponse Alibabacloud_Iovcc20180501::Client::findVersionTests(shared_ptr<FindVersionTestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionTestsWithOptions(request, runtime);
}

PublishOsVersionResponse Alibabacloud_Iovcc20180501::Client::publishOsVersionWithOptions(shared_ptr<PublishOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishOsVersionResponse(doRPCRequest(make_shared<string>("PublishOsVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishOsVersionResponse Alibabacloud_Iovcc20180501::Client::publishOsVersion(shared_ptr<PublishOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishOsVersionWithOptions(request, runtime);
}

CreateUpstreamAppKeyRelationsResponse Alibabacloud_Iovcc20180501::Client::createUpstreamAppKeyRelationsWithOptions(shared_ptr<CreateUpstreamAppKeyRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUpstreamAppKeyRelationsResponse(doRPCRequest(make_shared<string>("CreateUpstreamAppKeyRelations"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUpstreamAppKeyRelationsResponse Alibabacloud_Iovcc20180501::Client::createUpstreamAppKeyRelations(shared_ptr<CreateUpstreamAppKeyRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUpstreamAppKeyRelationsWithOptions(request, runtime);
}

UpdateOsVersionReleaseNoteResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionReleaseNoteWithOptions(shared_ptr<UpdateOsVersionReleaseNoteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOsVersionReleaseNoteResponse(doRPCRequest(make_shared<string>("UpdateOsVersionReleaseNote"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOsVersionReleaseNoteResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionReleaseNote(shared_ptr<UpdateOsVersionReleaseNoteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOsVersionReleaseNoteWithOptions(request, runtime);
}

PublishAppVersionResponse Alibabacloud_Iovcc20180501::Client::publishAppVersionWithOptions(shared_ptr<PublishAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishAppVersionResponse(doRPCRequest(make_shared<string>("PublishAppVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishAppVersionResponse Alibabacloud_Iovcc20180501::Client::publishAppVersion(shared_ptr<PublishAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishAppVersionWithOptions(request, runtime);
}

PublishMqttMessageResponse Alibabacloud_Iovcc20180501::Client::publishMqttMessageWithOptions(shared_ptr<PublishMqttMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishMqttMessageResponse(doRPCRequest(make_shared<string>("PublishMqttMessage"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishMqttMessageResponse Alibabacloud_Iovcc20180501::Client::publishMqttMessage(shared_ptr<PublishMqttMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishMqttMessageWithOptions(request, runtime);
}

DeleteVersionGroupDeviceResponse Alibabacloud_Iovcc20180501::Client::deleteVersionGroupDeviceWithOptions(shared_ptr<DeleteVersionGroupDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionGroupDeviceResponse(doRPCRequest(make_shared<string>("DeleteVersionGroupDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionGroupDeviceResponse Alibabacloud_Iovcc20180501::Client::deleteVersionGroupDevice(shared_ptr<DeleteVersionGroupDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionGroupDeviceWithOptions(request, runtime);
}

DeleteFunctionFileResponse Alibabacloud_Iovcc20180501::Client::deleteFunctionFileWithOptions(shared_ptr<DeleteFunctionFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFunctionFileResponse(doRPCRequest(make_shared<string>("DeleteFunctionFile"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFunctionFileResponse Alibabacloud_Iovcc20180501::Client::deleteFunctionFile(shared_ptr<DeleteFunctionFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFunctionFileWithOptions(request, runtime);
}

AddVersionWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::addVersionWhiteDevicesWithOptions(shared_ptr<AddVersionWhiteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVersionWhiteDevicesResponse(doRPCRequest(make_shared<string>("AddVersionWhiteDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVersionWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::addVersionWhiteDevices(shared_ptr<AddVersionWhiteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVersionWhiteDevicesWithOptions(request, runtime);
}

ListAssistHistoryDetailsResponse Alibabacloud_Iovcc20180501::Client::listAssistHistoryDetailsWithOptions(shared_ptr<ListAssistHistoryDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAssistHistoryDetailsResponse(doRPCRequest(make_shared<string>("ListAssistHistoryDetails"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAssistHistoryDetailsResponse Alibabacloud_Iovcc20180501::Client::listAssistHistoryDetails(shared_ptr<ListAssistHistoryDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAssistHistoryDetailsWithOptions(request, runtime);
}

CreateCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::createCustomizedFilterWithOptions(shared_ptr<CreateCustomizedFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomizedFilterResponse(doRPCRequest(make_shared<string>("CreateCustomizedFilter"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::createCustomizedFilter(shared_ptr<CreateCustomizedFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomizedFilterWithOptions(request, runtime);
}

DeleteUpstreamAppKeyRelationResponse Alibabacloud_Iovcc20180501::Client::deleteUpstreamAppKeyRelationWithOptions(shared_ptr<DeleteUpstreamAppKeyRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUpstreamAppKeyRelationResponse(doRPCRequest(make_shared<string>("DeleteUpstreamAppKeyRelation"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUpstreamAppKeyRelationResponse Alibabacloud_Iovcc20180501::Client::deleteUpstreamAppKeyRelation(shared_ptr<DeleteUpstreamAppKeyRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUpstreamAppKeyRelationWithOptions(request, runtime);
}

DescribeAppVersionResponse Alibabacloud_Iovcc20180501::Client::describeAppVersionWithOptions(shared_ptr<DescribeAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppVersionResponse(doRPCRequest(make_shared<string>("DescribeAppVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppVersionResponse Alibabacloud_Iovcc20180501::Client::describeAppVersion(shared_ptr<DescribeAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppVersionWithOptions(request, runtime);
}

ListVehicleResponse Alibabacloud_Iovcc20180501::Client::listVehicleWithOptions(shared_ptr<ListVehicleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListVehicleResponse(doRPCRequest(make_shared<string>("ListVehicle"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVehicleResponse Alibabacloud_Iovcc20180501::Client::listVehicle(shared_ptr<ListVehicleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVehicleWithOptions(request, runtime);
}

ExecuteCameraShootingCommandResponse Alibabacloud_Iovcc20180501::Client::executeCameraShootingCommandWithOptions(shared_ptr<ExecuteCameraShootingCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteCameraShootingCommandResponse(doRPCRequest(make_shared<string>("ExecuteCameraShootingCommand"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteCameraShootingCommandResponse Alibabacloud_Iovcc20180501::Client::executeCameraShootingCommand(shared_ptr<ExecuteCameraShootingCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeCameraShootingCommandWithOptions(request, runtime);
}

DeleteVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::deleteVersionDeviceGroupWithOptions(shared_ptr<DeleteVersionDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionDeviceGroupResponse(doRPCRequest(make_shared<string>("DeleteVersionDeviceGroup"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::deleteVersionDeviceGroup(shared_ptr<DeleteVersionDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionDeviceGroupWithOptions(request, runtime);
}

ListFunctionFilesByProjectIdResponse Alibabacloud_Iovcc20180501::Client::listFunctionFilesByProjectIdWithOptions(shared_ptr<ListFunctionFilesByProjectIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFunctionFilesByProjectIdResponse(doRPCRequest(make_shared<string>("ListFunctionFilesByProjectId"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFunctionFilesByProjectIdResponse Alibabacloud_Iovcc20180501::Client::listFunctionFilesByProjectId(shared_ptr<ListFunctionFilesByProjectIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionFilesByProjectIdWithOptions(request, runtime);
}

FindVersionWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::findVersionWhiteDevicesWithOptions(shared_ptr<FindVersionWhiteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionWhiteDevicesResponse(doRPCRequest(make_shared<string>("FindVersionWhiteDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::findVersionWhiteDevices(shared_ptr<FindVersionWhiteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionWhiteDevicesWithOptions(request, runtime);
}

CreateUpstreamAppServerResponse Alibabacloud_Iovcc20180501::Client::createUpstreamAppServerWithOptions(shared_ptr<CreateUpstreamAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUpstreamAppServerResponse(doRPCRequest(make_shared<string>("CreateUpstreamAppServer"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUpstreamAppServerResponse Alibabacloud_Iovcc20180501::Client::createUpstreamAppServer(shared_ptr<CreateUpstreamAppServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUpstreamAppServerWithOptions(request, runtime);
}

DescribeVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::describeVersionDeviceGroupWithOptions(shared_ptr<DescribeVersionDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVersionDeviceGroupResponse(doRPCRequest(make_shared<string>("DescribeVersionDeviceGroup"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::describeVersionDeviceGroup(shared_ptr<DescribeVersionDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVersionDeviceGroupWithOptions(request, runtime);
}

UpdateAppVersionResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionWithOptions(shared_ptr<UpdateAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppVersionResponse(doRPCRequest(make_shared<string>("UpdateAppVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppVersionResponse Alibabacloud_Iovcc20180501::Client::updateAppVersion(shared_ptr<UpdateAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppVersionWithOptions(request, runtime);
}

CreateCustomizedPropertyResponse Alibabacloud_Iovcc20180501::Client::createCustomizedPropertyWithOptions(shared_ptr<CreateCustomizedPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomizedPropertyResponse(doRPCRequest(make_shared<string>("CreateCustomizedProperty"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomizedPropertyResponse Alibabacloud_Iovcc20180501::Client::createCustomizedProperty(shared_ptr<CreateCustomizedPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomizedPropertyWithOptions(request, runtime);
}

ListSchemaSubscribesResponse Alibabacloud_Iovcc20180501::Client::listSchemaSubscribesWithOptions(shared_ptr<ListSchemaSubscribesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSchemaSubscribesResponse(doRPCRequest(make_shared<string>("ListSchemaSubscribes"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSchemaSubscribesResponse Alibabacloud_Iovcc20180501::Client::listSchemaSubscribes(shared_ptr<ListSchemaSubscribesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSchemaSubscribesWithOptions(request, runtime);
}

UpdateSchemaSubscribeResponse Alibabacloud_Iovcc20180501::Client::updateSchemaSubscribeWithOptions(shared_ptr<UpdateSchemaSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSchemaSubscribeResponse(doRPCRequest(make_shared<string>("UpdateSchemaSubscribe"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSchemaSubscribeResponse Alibabacloud_Iovcc20180501::Client::updateSchemaSubscribe(shared_ptr<UpdateSchemaSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSchemaSubscribeWithOptions(request, runtime);
}

DeleteAllVersionGroupDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteAllVersionGroupDevicesWithOptions(shared_ptr<DeleteAllVersionGroupDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAllVersionGroupDevicesResponse(doRPCRequest(make_shared<string>("DeleteAllVersionGroupDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAllVersionGroupDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteAllVersionGroupDevices(shared_ptr<DeleteAllVersionGroupDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllVersionGroupDevicesWithOptions(request, runtime);
}

DeleteVersionWhiteDevicesByIdResponse Alibabacloud_Iovcc20180501::Client::deleteVersionWhiteDevicesByIdWithOptions(shared_ptr<DeleteVersionWhiteDevicesByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionWhiteDevicesByIdResponse(doRPCRequest(make_shared<string>("DeleteVersionWhiteDevicesById"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionWhiteDevicesByIdResponse Alibabacloud_Iovcc20180501::Client::deleteVersionWhiteDevicesById(shared_ptr<DeleteVersionWhiteDevicesByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionWhiteDevicesByIdWithOptions(request, runtime);
}

UpdateOsVersionResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionWithOptions(shared_ptr<UpdateOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOsVersionResponse(doRPCRequest(make_shared<string>("UpdateOsVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOsVersionResponse Alibabacloud_Iovcc20180501::Client::updateOsVersion(shared_ptr<UpdateOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOsVersionWithOptions(request, runtime);
}

GenerateOssPostPolicyResponse Alibabacloud_Iovcc20180501::Client::generateOssPostPolicyWithOptions(shared_ptr<GenerateOssPostPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateOssPostPolicyResponse(doRPCRequest(make_shared<string>("GenerateOssPostPolicy"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateOssPostPolicyResponse Alibabacloud_Iovcc20180501::Client::generateOssPostPolicy(shared_ptr<GenerateOssPostPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateOssPostPolicyWithOptions(request, runtime);
}

FindVersionGroupDevicesResponse Alibabacloud_Iovcc20180501::Client::findVersionGroupDevicesWithOptions(shared_ptr<FindVersionGroupDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionGroupDevicesResponse(doRPCRequest(make_shared<string>("FindVersionGroupDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionGroupDevicesResponse Alibabacloud_Iovcc20180501::Client::findVersionGroupDevices(shared_ptr<FindVersionGroupDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionGroupDevicesWithOptions(request, runtime);
}

DeleteOpenAccountResponse Alibabacloud_Iovcc20180501::Client::deleteOpenAccountWithOptions(shared_ptr<DeleteOpenAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteOpenAccountResponse(doRPCRequest(make_shared<string>("DeleteOpenAccount"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOpenAccountResponse Alibabacloud_Iovcc20180501::Client::deleteOpenAccount(shared_ptr<DeleteOpenAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOpenAccountWithOptions(request, runtime);
}

DescribeDefaultSchemaResponse Alibabacloud_Iovcc20180501::Client::describeDefaultSchemaWithOptions(shared_ptr<DescribeDefaultSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDefaultSchemaResponse(doRPCRequest(make_shared<string>("DescribeDefaultSchema"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDefaultSchemaResponse Alibabacloud_Iovcc20180501::Client::describeDefaultSchema(shared_ptr<DescribeDefaultSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefaultSchemaWithOptions(request, runtime);
}

ListUpstreamAppServersResponse Alibabacloud_Iovcc20180501::Client::listUpstreamAppServersWithOptions(shared_ptr<ListUpstreamAppServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUpstreamAppServersResponse(doRPCRequest(make_shared<string>("ListUpstreamAppServers"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUpstreamAppServersResponse Alibabacloud_Iovcc20180501::Client::listUpstreamAppServers(shared_ptr<ListUpstreamAppServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUpstreamAppServersWithOptions(request, runtime);
}

DeleteVersionTestResponse Alibabacloud_Iovcc20180501::Client::deleteVersionTestWithOptions(shared_ptr<DeleteVersionTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionTestResponse(doRPCRequest(make_shared<string>("DeleteVersionTest"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionTestResponse Alibabacloud_Iovcc20180501::Client::deleteVersionTest(shared_ptr<DeleteVersionTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionTestWithOptions(request, runtime);
}

CreateUpstreamAppKeyRelationResponse Alibabacloud_Iovcc20180501::Client::createUpstreamAppKeyRelationWithOptions(shared_ptr<CreateUpstreamAppKeyRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUpstreamAppKeyRelationResponse(doRPCRequest(make_shared<string>("CreateUpstreamAppKeyRelation"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUpstreamAppKeyRelationResponse Alibabacloud_Iovcc20180501::Client::createUpstreamAppKeyRelation(shared_ptr<CreateUpstreamAppKeyRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUpstreamAppKeyRelationWithOptions(request, runtime);
}

FindAppVersionsResponse Alibabacloud_Iovcc20180501::Client::findAppVersionsWithOptions(shared_ptr<FindAppVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindAppVersionsResponse(doRPCRequest(make_shared<string>("FindAppVersions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindAppVersionsResponse Alibabacloud_Iovcc20180501::Client::findAppVersions(shared_ptr<FindAppVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findAppVersionsWithOptions(request, runtime);
}

ListMqttRootTopicsResponse Alibabacloud_Iovcc20180501::Client::listMqttRootTopicsWithOptions(shared_ptr<ListMqttRootTopicsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMqttRootTopicsResponse(doRPCRequest(make_shared<string>("ListMqttRootTopics"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMqttRootTopicsResponse Alibabacloud_Iovcc20180501::Client::listMqttRootTopics(shared_ptr<ListMqttRootTopicsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMqttRootTopicsWithOptions(request, runtime);
}

ListAssistDevicesResponse Alibabacloud_Iovcc20180501::Client::listAssistDevicesWithOptions(shared_ptr<ListAssistDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAssistDevicesResponse(doRPCRequest(make_shared<string>("ListAssistDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAssistDevicesResponse Alibabacloud_Iovcc20180501::Client::listAssistDevices(shared_ptr<ListAssistDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAssistDevicesWithOptions(request, runtime);
}

DeleteUpstreamAppServerResponse Alibabacloud_Iovcc20180501::Client::deleteUpstreamAppServerWithOptions(shared_ptr<DeleteUpstreamAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUpstreamAppServerResponse(doRPCRequest(make_shared<string>("DeleteUpstreamAppServer"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUpstreamAppServerResponse Alibabacloud_Iovcc20180501::Client::deleteUpstreamAppServer(shared_ptr<DeleteUpstreamAppServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUpstreamAppServerWithOptions(request, runtime);
}

UpdateVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::updateVersionDeviceGroupWithOptions(shared_ptr<UpdateVersionDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVersionDeviceGroupResponse(doRPCRequest(make_shared<string>("UpdateVersionDeviceGroup"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVersionDeviceGroupResponse Alibabacloud_Iovcc20180501::Client::updateVersionDeviceGroup(shared_ptr<UpdateVersionDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVersionDeviceGroupWithOptions(request, runtime);
}

ListOpenAccountsResponse Alibabacloud_Iovcc20180501::Client::listOpenAccountsWithOptions(shared_ptr<ListOpenAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListOpenAccountsResponse(doRPCRequest(make_shared<string>("ListOpenAccounts"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOpenAccountsResponse Alibabacloud_Iovcc20180501::Client::listOpenAccounts(shared_ptr<ListOpenAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOpenAccountsWithOptions(request, runtime);
}

UpdateOsVersionStatusResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionStatusWithOptions(shared_ptr<UpdateOsVersionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOsVersionStatusResponse(doRPCRequest(make_shared<string>("UpdateOsVersionStatus"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOsVersionStatusResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionStatus(shared_ptr<UpdateOsVersionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOsVersionStatusWithOptions(request, runtime);
}

CountProjectsResponse Alibabacloud_Iovcc20180501::Client::countProjectsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return CountProjectsResponse(doRPCRequest(make_shared<string>("CountProjects"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CountProjectsResponse Alibabacloud_Iovcc20180501::Client::countProjects() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countProjectsWithOptions(runtime);
}

ListCommercialVehicleDevicesResponse Alibabacloud_Iovcc20180501::Client::listCommercialVehicleDevicesWithOptions(shared_ptr<ListCommercialVehicleDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCommercialVehicleDevicesResponse(doRPCRequest(make_shared<string>("ListCommercialVehicleDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCommercialVehicleDevicesResponse Alibabacloud_Iovcc20180501::Client::listCommercialVehicleDevices(shared_ptr<ListCommercialVehicleDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCommercialVehicleDevicesWithOptions(request, runtime);
}

ListMessageReceiversResponse Alibabacloud_Iovcc20180501::Client::listMessageReceiversWithOptions(shared_ptr<ListMessageReceiversRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMessageReceiversResponse(doRPCRequest(make_shared<string>("ListMessageReceivers"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMessageReceiversResponse Alibabacloud_Iovcc20180501::Client::listMessageReceivers(shared_ptr<ListMessageReceiversRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageReceiversWithOptions(request, runtime);
}

CountDevicesResponse Alibabacloud_Iovcc20180501::Client::countDevicesWithOptions(shared_ptr<CountDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CountDevicesResponse(doRPCRequest(make_shared<string>("CountDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CountDevicesResponse Alibabacloud_Iovcc20180501::Client::countDevices(shared_ptr<CountDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countDevicesWithOptions(request, runtime);
}

UpdateOsBlackWhiteVersionsResponse Alibabacloud_Iovcc20180501::Client::updateOsBlackWhiteVersionsWithOptions(shared_ptr<UpdateOsBlackWhiteVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOsBlackWhiteVersionsResponse(doRPCRequest(make_shared<string>("UpdateOsBlackWhiteVersions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOsBlackWhiteVersionsResponse Alibabacloud_Iovcc20180501::Client::updateOsBlackWhiteVersions(shared_ptr<UpdateOsBlackWhiteVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOsBlackWhiteVersionsWithOptions(request, runtime);
}

GetNamespaceDataResponse Alibabacloud_Iovcc20180501::Client::getNamespaceDataWithOptions(shared_ptr<GetNamespaceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNamespaceDataResponse(doRPCRequest(make_shared<string>("GetNamespaceData"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNamespaceDataResponse Alibabacloud_Iovcc20180501::Client::getNamespaceData(shared_ptr<GetNamespaceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNamespaceDataWithOptions(request, runtime);
}

UpdateOsVersionRemarkResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionRemarkWithOptions(shared_ptr<UpdateOsVersionRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOsVersionRemarkResponse(doRPCRequest(make_shared<string>("UpdateOsVersionRemark"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOsVersionRemarkResponse Alibabacloud_Iovcc20180501::Client::updateOsVersionRemark(shared_ptr<UpdateOsVersionRemarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOsVersionRemarkWithOptions(request, runtime);
}

QueryPrepublishPassedDeviceCountResponse Alibabacloud_Iovcc20180501::Client::queryPrepublishPassedDeviceCountWithOptions(shared_ptr<QueryPrepublishPassedDeviceCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPrepublishPassedDeviceCountResponse(doRPCRequest(make_shared<string>("QueryPrepublishPassedDeviceCount"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPrepublishPassedDeviceCountResponse Alibabacloud_Iovcc20180501::Client::queryPrepublishPassedDeviceCount(shared_ptr<QueryPrepublishPassedDeviceCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPrepublishPassedDeviceCountWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_Iovcc20180501::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProjectResponse(doRPCRequest(make_shared<string>("CreateProject"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProjectResponse Alibabacloud_Iovcc20180501::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

ListNamespacesResponse Alibabacloud_Iovcc20180501::Client::listNamespacesWithOptions(shared_ptr<ListNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListNamespacesResponse(doRPCRequest(make_shared<string>("ListNamespaces"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNamespacesResponse Alibabacloud_Iovcc20180501::Client::listNamespaces(shared_ptr<ListNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNamespacesWithOptions(request, runtime);
}

ListSupportFeaturesResponse Alibabacloud_Iovcc20180501::Client::listSupportFeaturesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListSupportFeaturesResponse(doRPCRequest(make_shared<string>("ListSupportFeatures"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSupportFeaturesResponse Alibabacloud_Iovcc20180501::Client::listSupportFeatures() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSupportFeaturesWithOptions(runtime);
}

DeleteMqttRootTopicResponse Alibabacloud_Iovcc20180501::Client::deleteMqttRootTopicWithOptions(shared_ptr<DeleteMqttRootTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMqttRootTopicResponse(doRPCRequest(make_shared<string>("DeleteMqttRootTopic"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMqttRootTopicResponse Alibabacloud_Iovcc20180501::Client::deleteMqttRootTopic(shared_ptr<DeleteMqttRootTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMqttRootTopicWithOptions(request, runtime);
}

DeleteVersionGroupDeviceByIdResponse Alibabacloud_Iovcc20180501::Client::deleteVersionGroupDeviceByIdWithOptions(shared_ptr<DeleteVersionGroupDeviceByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionGroupDeviceByIdResponse(doRPCRequest(make_shared<string>("DeleteVersionGroupDeviceById"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionGroupDeviceByIdResponse Alibabacloud_Iovcc20180501::Client::deleteVersionGroupDeviceById(shared_ptr<DeleteVersionGroupDeviceByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionGroupDeviceByIdWithOptions(request, runtime);
}

ListClientPluginVersionsResponse Alibabacloud_Iovcc20180501::Client::listClientPluginVersionsWithOptions(shared_ptr<ListClientPluginVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClientPluginVersionsResponse(doRPCRequest(make_shared<string>("ListClientPluginVersions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClientPluginVersionsResponse Alibabacloud_Iovcc20180501::Client::listClientPluginVersions(shared_ptr<ListClientPluginVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientPluginVersionsWithOptions(request, runtime);
}

FindVersionMessageSendRecordsResponse Alibabacloud_Iovcc20180501::Client::findVersionMessageSendRecordsWithOptions(shared_ptr<FindVersionMessageSendRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindVersionMessageSendRecordsResponse(doRPCRequest(make_shared<string>("FindVersionMessageSendRecords"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindVersionMessageSendRecordsResponse Alibabacloud_Iovcc20180501::Client::findVersionMessageSendRecords(shared_ptr<FindVersionMessageSendRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findVersionMessageSendRecordsWithOptions(request, runtime);
}

GenerateSysAppDownloadInfoResponse Alibabacloud_Iovcc20180501::Client::generateSysAppDownloadInfoWithOptions(shared_ptr<GenerateSysAppDownloadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateSysAppDownloadInfoResponse(doRPCRequest(make_shared<string>("GenerateSysAppDownloadInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateSysAppDownloadInfoResponse Alibabacloud_Iovcc20180501::Client::generateSysAppDownloadInfo(shared_ptr<GenerateSysAppDownloadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateSysAppDownloadInfoWithOptions(request, runtime);
}

DeleteTriggerResponse Alibabacloud_Iovcc20180501::Client::deleteTriggerWithOptions(shared_ptr<DeleteTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTriggerResponse(doRPCRequest(make_shared<string>("DeleteTrigger"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTriggerResponse Alibabacloud_Iovcc20180501::Client::deleteTrigger(shared_ptr<DeleteTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTriggerWithOptions(request, runtime);
}

DescribeDeviceInfoResponse Alibabacloud_Iovcc20180501::Client::describeDeviceInfoWithOptions(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDeviceInfoResponse(doRPCRequest(make_shared<string>("DescribeDeviceInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceInfoResponse Alibabacloud_Iovcc20180501::Client::describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceInfoWithOptions(request, runtime);
}

CreateDeviceModelResponse Alibabacloud_Iovcc20180501::Client::createDeviceModelWithOptions(shared_ptr<CreateDeviceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceModelResponse(doRPCRequest(make_shared<string>("CreateDeviceModel"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceModelResponse Alibabacloud_Iovcc20180501::Client::createDeviceModel(shared_ptr<CreateDeviceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceModelWithOptions(request, runtime);
}

UpdateAppVersionStatusResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionStatusWithOptions(shared_ptr<UpdateAppVersionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppVersionStatusResponse(doRPCRequest(make_shared<string>("UpdateAppVersionStatus"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppVersionStatusResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionStatus(shared_ptr<UpdateAppVersionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppVersionStatusWithOptions(request, runtime);
}

UpdateShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::updateShadowSchemaWithOptions(shared_ptr<UpdateShadowSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateShadowSchemaResponse(doRPCRequest(make_shared<string>("UpdateShadowSchema"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::updateShadowSchema(shared_ptr<UpdateShadowSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateShadowSchemaWithOptions(request, runtime);
}

DescribeDeviceShadowResponse Alibabacloud_Iovcc20180501::Client::describeDeviceShadowWithOptions(shared_ptr<DescribeDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceShadowResponse(doRPCRequest(make_shared<string>("DescribeDeviceShadow"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceShadowResponse Alibabacloud_Iovcc20180501::Client::describeDeviceShadow(shared_ptr<DescribeDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceShadowWithOptions(request, runtime);
}

ListTriggersResponse Alibabacloud_Iovcc20180501::Client::listTriggersWithOptions(shared_ptr<ListTriggersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTriggersResponse(doRPCRequest(make_shared<string>("ListTriggers"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTriggersResponse Alibabacloud_Iovcc20180501::Client::listTriggers(shared_ptr<ListTriggersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTriggersWithOptions(request, runtime);
}

UpdateCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::updateCustomizedFilterWithOptions(shared_ptr<UpdateCustomizedFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCustomizedFilterResponse(doRPCRequest(make_shared<string>("UpdateCustomizedFilter"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCustomizedFilterResponse Alibabacloud_Iovcc20180501::Client::updateCustomizedFilter(shared_ptr<UpdateCustomizedFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomizedFilterWithOptions(request, runtime);
}

CreateVersionPrepublishResponse Alibabacloud_Iovcc20180501::Client::createVersionPrepublishWithOptions(shared_ptr<CreateVersionPrepublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVersionPrepublishResponse(doRPCRequest(make_shared<string>("CreateVersionPrepublish"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVersionPrepublishResponse Alibabacloud_Iovcc20180501::Client::createVersionPrepublish(shared_ptr<CreateVersionPrepublishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVersionPrepublishWithOptions(request, runtime);
}

UpdateAppVersionRemarkResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionRemarkWithOptions(shared_ptr<UpdateAppVersionRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppVersionRemarkResponse(doRPCRequest(make_shared<string>("UpdateAppVersionRemark"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppVersionRemarkResponse Alibabacloud_Iovcc20180501::Client::updateAppVersionRemark(shared_ptr<UpdateAppVersionRemarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppVersionRemarkWithOptions(request, runtime);
}

DescribeDeviceModelResponse Alibabacloud_Iovcc20180501::Client::describeDeviceModelWithOptions(shared_ptr<DescribeDeviceModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDeviceModelResponse(doRPCRequest(make_shared<string>("DescribeDeviceModel"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceModelResponse Alibabacloud_Iovcc20180501::Client::describeDeviceModel(shared_ptr<DescribeDeviceModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceModelWithOptions(request, runtime);
}

ListDeviceTypesResponse Alibabacloud_Iovcc20180501::Client::listDeviceTypesWithOptions(shared_ptr<ListDeviceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDeviceTypesResponse(doRPCRequest(make_shared<string>("ListDeviceTypes"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceTypesResponse Alibabacloud_Iovcc20180501::Client::listDeviceTypes(shared_ptr<ListDeviceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceTypesWithOptions(request, runtime);
}

GenerateSdkDownloadInfoResponse Alibabacloud_Iovcc20180501::Client::generateSdkDownloadInfoWithOptions(shared_ptr<GenerateSdkDownloadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateSdkDownloadInfoResponse(doRPCRequest(make_shared<string>("GenerateSdkDownloadInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateSdkDownloadInfoResponse Alibabacloud_Iovcc20180501::Client::generateSdkDownloadInfo(shared_ptr<GenerateSdkDownloadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateSdkDownloadInfoWithOptions(request, runtime);
}

ExecuteVehicleControlResponse Alibabacloud_Iovcc20180501::Client::executeVehicleControlWithOptions(shared_ptr<ExecuteVehicleControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteVehicleControlResponse(doRPCRequest(make_shared<string>("ExecuteVehicleControl"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteVehicleControlResponse Alibabacloud_Iovcc20180501::Client::executeVehicleControl(shared_ptr<ExecuteVehicleControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeVehicleControlWithOptions(request, runtime);
}

DescribeApiGatewayAppSecurityResponse Alibabacloud_Iovcc20180501::Client::describeApiGatewayAppSecurityWithOptions(shared_ptr<DescribeApiGatewayAppSecurityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeApiGatewayAppSecurityResponse(doRPCRequest(make_shared<string>("DescribeApiGatewayAppSecurity"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeApiGatewayAppSecurityResponse Alibabacloud_Iovcc20180501::Client::describeApiGatewayAppSecurity(shared_ptr<DescribeApiGatewayAppSecurityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGatewayAppSecurityWithOptions(request, runtime);
}

DescribeDeviceOnlineInfoResponse Alibabacloud_Iovcc20180501::Client::describeDeviceOnlineInfoWithOptions(shared_ptr<DescribeDeviceOnlineInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceOnlineInfoResponse(doRPCRequest(make_shared<string>("DescribeDeviceOnlineInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceOnlineInfoResponse Alibabacloud_Iovcc20180501::Client::describeDeviceOnlineInfo(shared_ptr<DescribeDeviceOnlineInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceOnlineInfoWithOptions(request, runtime);
}

CreateRpcServiceResponse Alibabacloud_Iovcc20180501::Client::createRpcServiceWithOptions(shared_ptr<CreateRpcServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRpcServiceResponse(doRPCRequest(make_shared<string>("CreateRpcService"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRpcServiceResponse Alibabacloud_Iovcc20180501::Client::createRpcService(shared_ptr<CreateRpcServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRpcServiceWithOptions(request, runtime);
}

DeleteVersionWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionWhiteDevicesWithOptions(shared_ptr<DeleteVersionWhiteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionWhiteDevicesResponse(doRPCRequest(make_shared<string>("DeleteVersionWhiteDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionWhiteDevices(shared_ptr<DeleteVersionWhiteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionWhiteDevicesWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Iovcc20180501::Client::listProjectsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListProjectsResponse(doRPCRequest(make_shared<string>("ListProjects"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectsResponse Alibabacloud_Iovcc20180501::Client::listProjects() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(runtime);
}

GenerateFunctionFileUploadMetaResponse Alibabacloud_Iovcc20180501::Client::generateFunctionFileUploadMetaWithOptions(shared_ptr<GenerateFunctionFileUploadMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateFunctionFileUploadMetaResponse(doRPCRequest(make_shared<string>("GenerateFunctionFileUploadMeta"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateFunctionFileUploadMetaResponse Alibabacloud_Iovcc20180501::Client::generateFunctionFileUploadMeta(shared_ptr<GenerateFunctionFileUploadMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateFunctionFileUploadMetaWithOptions(request, runtime);
}

DescribeProjectResponse Alibabacloud_Iovcc20180501::Client::describeProjectWithOptions(shared_ptr<DescribeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProjectResponse(doRPCRequest(make_shared<string>("DescribeProject"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProjectResponse Alibabacloud_Iovcc20180501::Client::describeProject(shared_ptr<DescribeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectWithOptions(request, runtime);
}

DescribeMqttMessageResponse Alibabacloud_Iovcc20180501::Client::describeMqttMessageWithOptions(shared_ptr<DescribeMqttMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMqttMessageResponse(doRPCRequest(make_shared<string>("DescribeMqttMessage"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMqttMessageResponse Alibabacloud_Iovcc20180501::Client::describeMqttMessage(shared_ptr<DescribeMqttMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMqttMessageWithOptions(request, runtime);
}

ListCameraShootingRecordsResponse Alibabacloud_Iovcc20180501::Client::listCameraShootingRecordsWithOptions(shared_ptr<ListCameraShootingRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCameraShootingRecordsResponse(doRPCRequest(make_shared<string>("ListCameraShootingRecords"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCameraShootingRecordsResponse Alibabacloud_Iovcc20180501::Client::listCameraShootingRecords(shared_ptr<ListCameraShootingRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCameraShootingRecordsWithOptions(request, runtime);
}

DeleteVersionBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionBlackDevicesWithOptions(shared_ptr<DeleteVersionBlackDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionBlackDevicesResponse(doRPCRequest(make_shared<string>("DeleteVersionBlackDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionBlackDevices(shared_ptr<DeleteVersionBlackDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionBlackDevicesWithOptions(request, runtime);
}

DescribeOsVersionResponse Alibabacloud_Iovcc20180501::Client::describeOsVersionWithOptions(shared_ptr<DescribeOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeOsVersionResponse(doRPCRequest(make_shared<string>("DescribeOsVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOsVersionResponse Alibabacloud_Iovcc20180501::Client::describeOsVersion(shared_ptr<DescribeOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOsVersionWithOptions(request, runtime);
}

ListRpcServicesResponse Alibabacloud_Iovcc20180501::Client::listRpcServicesWithOptions(shared_ptr<ListRpcServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRpcServicesResponse(doRPCRequest(make_shared<string>("ListRpcServices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRpcServicesResponse Alibabacloud_Iovcc20180501::Client::listRpcServices(shared_ptr<ListRpcServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRpcServicesWithOptions(request, runtime);
}

DeleteSchemaSubscribeResponse Alibabacloud_Iovcc20180501::Client::deleteSchemaSubscribeWithOptions(shared_ptr<DeleteSchemaSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSchemaSubscribeResponse(doRPCRequest(make_shared<string>("DeleteSchemaSubscribe"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSchemaSubscribeResponse Alibabacloud_Iovcc20180501::Client::deleteSchemaSubscribe(shared_ptr<DeleteSchemaSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSchemaSubscribeWithOptions(request, runtime);
}

AddUploadedFunctionFileInfoResponse Alibabacloud_Iovcc20180501::Client::addUploadedFunctionFileInfoWithOptions(shared_ptr<AddUploadedFunctionFileInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUploadedFunctionFileInfoResponse(doRPCRequest(make_shared<string>("AddUploadedFunctionFileInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUploadedFunctionFileInfoResponse Alibabacloud_Iovcc20180501::Client::addUploadedFunctionFileInfo(shared_ptr<AddUploadedFunctionFileInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUploadedFunctionFileInfoWithOptions(request, runtime);
}

CreateProjectAppResponse Alibabacloud_Iovcc20180501::Client::createProjectAppWithOptions(shared_ptr<CreateProjectAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProjectAppResponse(doRPCRequest(make_shared<string>("CreateProjectApp"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProjectAppResponse Alibabacloud_Iovcc20180501::Client::createProjectApp(shared_ptr<CreateProjectAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectAppWithOptions(request, runtime);
}

ListServicesResponse Alibabacloud_Iovcc20180501::Client::listServicesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListServicesResponse(doRPCRequest(make_shared<string>("ListServices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServicesResponse Alibabacloud_Iovcc20180501::Client::listServices() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServicesWithOptions(runtime);
}

FindOsVersionsResponse Alibabacloud_Iovcc20180501::Client::findOsVersionsWithOptions(shared_ptr<FindOsVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindOsVersionsResponse(doRPCRequest(make_shared<string>("FindOsVersions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindOsVersionsResponse Alibabacloud_Iovcc20180501::Client::findOsVersions(shared_ptr<FindOsVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findOsVersionsWithOptions(request, runtime);
}

UpdateVersionPrepublishActiveStatusResponse Alibabacloud_Iovcc20180501::Client::updateVersionPrepublishActiveStatusWithOptions(shared_ptr<UpdateVersionPrepublishActiveStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVersionPrepublishActiveStatusResponse(doRPCRequest(make_shared<string>("UpdateVersionPrepublishActiveStatus"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVersionPrepublishActiveStatusResponse Alibabacloud_Iovcc20180501::Client::updateVersionPrepublishActiveStatus(shared_ptr<UpdateVersionPrepublishActiveStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVersionPrepublishActiveStatusWithOptions(request, runtime);
}

CreateOsVersionResponse Alibabacloud_Iovcc20180501::Client::createOsVersionWithOptions(shared_ptr<CreateOsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOsVersionResponse(doRPCRequest(make_shared<string>("CreateOsVersion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOsVersionResponse Alibabacloud_Iovcc20180501::Client::createOsVersion(shared_ptr<CreateOsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOsVersionWithOptions(request, runtime);
}

CountDeviceBrandsResponse Alibabacloud_Iovcc20180501::Client::countDeviceBrandsWithOptions(shared_ptr<CountDeviceBrandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CountDeviceBrandsResponse(doRPCRequest(make_shared<string>("CountDeviceBrands"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CountDeviceBrandsResponse Alibabacloud_Iovcc20180501::Client::countDeviceBrands(shared_ptr<CountDeviceBrandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countDeviceBrandsWithOptions(request, runtime);
}

DescribeDeviceBrandResponse Alibabacloud_Iovcc20180501::Client::describeDeviceBrandWithOptions(shared_ptr<DescribeDeviceBrandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDeviceBrandResponse(doRPCRequest(make_shared<string>("DescribeDeviceBrand"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceBrandResponse Alibabacloud_Iovcc20180501::Client::describeDeviceBrand(shared_ptr<DescribeDeviceBrandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceBrandWithOptions(request, runtime);
}

CreateShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::createShadowSchemaWithOptions(shared_ptr<CreateShadowSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateShadowSchemaResponse(doRPCRequest(make_shared<string>("CreateShadowSchema"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateShadowSchemaResponse Alibabacloud_Iovcc20180501::Client::createShadowSchema(shared_ptr<CreateShadowSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createShadowSchemaWithOptions(request, runtime);
}

DescribeDeviceValiditySchemaResponse Alibabacloud_Iovcc20180501::Client::describeDeviceValiditySchemaWithOptions(shared_ptr<DescribeDeviceValiditySchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceValiditySchemaResponse(doRPCRequest(make_shared<string>("DescribeDeviceValiditySchema"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceValiditySchemaResponse Alibabacloud_Iovcc20180501::Client::describeDeviceValiditySchema(shared_ptr<DescribeDeviceValiditySchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceValiditySchemaWithOptions(request, runtime);
}

GetOssUploadMetaResponse Alibabacloud_Iovcc20180501::Client::getOssUploadMetaWithOptions(shared_ptr<GetOssUploadMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOssUploadMetaResponse(doRPCRequest(make_shared<string>("GetOssUploadMeta"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOssUploadMetaResponse Alibabacloud_Iovcc20180501::Client::getOssUploadMeta(shared_ptr<GetOssUploadMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssUploadMetaWithOptions(request, runtime);
}

ListUpstreamAppKeyRelationsResponse Alibabacloud_Iovcc20180501::Client::listUpstreamAppKeyRelationsWithOptions(shared_ptr<ListUpstreamAppKeyRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUpstreamAppKeyRelationsResponse(doRPCRequest(make_shared<string>("ListUpstreamAppKeyRelations"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUpstreamAppKeyRelationsResponse Alibabacloud_Iovcc20180501::Client::listUpstreamAppKeyRelations(shared_ptr<ListUpstreamAppKeyRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUpstreamAppKeyRelationsWithOptions(request, runtime);
}

ListShadowSchemasResponse Alibabacloud_Iovcc20180501::Client::listShadowSchemasWithOptions(shared_ptr<ListShadowSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListShadowSchemasResponse(doRPCRequest(make_shared<string>("ListShadowSchemas"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListShadowSchemasResponse Alibabacloud_Iovcc20180501::Client::listShadowSchemas(shared_ptr<ListShadowSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listShadowSchemasWithOptions(request, runtime);
}

DeleteProjectAppResponse Alibabacloud_Iovcc20180501::Client::deleteProjectAppWithOptions(shared_ptr<DeleteProjectAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProjectAppResponse(doRPCRequest(make_shared<string>("DeleteProjectApp"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProjectAppResponse Alibabacloud_Iovcc20180501::Client::deleteProjectApp(shared_ptr<DeleteProjectAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectAppWithOptions(request, runtime);
}

CountYunIdInfoResponse Alibabacloud_Iovcc20180501::Client::countYunIdInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return CountYunIdInfoResponse(doRPCRequest(make_shared<string>("CountYunIdInfo"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CountYunIdInfoResponse Alibabacloud_Iovcc20180501::Client::countYunIdInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countYunIdInfoWithOptions(runtime);
}

FindPrepublishesByParentIdResponse Alibabacloud_Iovcc20180501::Client::findPrepublishesByParentIdWithOptions(shared_ptr<FindPrepublishesByParentIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindPrepublishesByParentIdResponse(doRPCRequest(make_shared<string>("FindPrepublishesByParentId"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindPrepublishesByParentIdResponse Alibabacloud_Iovcc20180501::Client::findPrepublishesByParentId(shared_ptr<FindPrepublishesByParentIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findPrepublishesByParentIdWithOptions(request, runtime);
}

GetVehicleControlResultResponse Alibabacloud_Iovcc20180501::Client::getVehicleControlResultWithOptions(shared_ptr<GetVehicleControlResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetVehicleControlResultResponse(doRPCRequest(make_shared<string>("GetVehicleControlResult"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVehicleControlResultResponse Alibabacloud_Iovcc20180501::Client::getVehicleControlResult(shared_ptr<GetVehicleControlResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVehicleControlResultWithOptions(request, runtime);
}

UpdateTriggerResponse Alibabacloud_Iovcc20180501::Client::updateTriggerWithOptions(shared_ptr<UpdateTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTriggerResponse(doRPCRequest(make_shared<string>("UpdateTrigger"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTriggerResponse Alibabacloud_Iovcc20180501::Client::updateTrigger(shared_ptr<UpdateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTriggerWithOptions(request, runtime);
}

ListClientSdksResponse Alibabacloud_Iovcc20180501::Client::listClientSdksWithOptions(shared_ptr<ListClientSdksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClientSdksResponse(doRPCRequest(make_shared<string>("ListClientSdks"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClientSdksResponse Alibabacloud_Iovcc20180501::Client::listClientSdks(shared_ptr<ListClientSdksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientSdksWithOptions(request, runtime);
}

ListVersionDeviceGroupsResponse Alibabacloud_Iovcc20180501::Client::listVersionDeviceGroupsWithOptions(shared_ptr<ListVersionDeviceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVersionDeviceGroupsResponse(doRPCRequest(make_shared<string>("ListVersionDeviceGroups"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVersionDeviceGroupsResponse Alibabacloud_Iovcc20180501::Client::listVersionDeviceGroups(shared_ptr<ListVersionDeviceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVersionDeviceGroupsWithOptions(request, runtime);
}

GetCommercialVehicleDeviceResponse Alibabacloud_Iovcc20180501::Client::getCommercialVehicleDeviceWithOptions(shared_ptr<GetCommercialVehicleDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCommercialVehicleDeviceResponse(doRPCRequest(make_shared<string>("GetCommercialVehicleDevice"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCommercialVehicleDeviceResponse Alibabacloud_Iovcc20180501::Client::getCommercialVehicleDevice(shared_ptr<GetCommercialVehicleDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommercialVehicleDeviceWithOptions(request, runtime);
}

SubmitAssistReportResponse Alibabacloud_Iovcc20180501::Client::submitAssistReportWithOptions(shared_ptr<SubmitAssistReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAssistReportResponse(doRPCRequest(make_shared<string>("SubmitAssistReport"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAssistReportResponse Alibabacloud_Iovcc20180501::Client::submitAssistReport(shared_ptr<SubmitAssistReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAssistReportWithOptions(request, runtime);
}

DeleteVersionAllBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionAllBlackDevicesWithOptions(shared_ptr<DeleteVersionAllBlackDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionAllBlackDevicesResponse(doRPCRequest(make_shared<string>("DeleteVersionAllBlackDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionAllBlackDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionAllBlackDevices(shared_ptr<DeleteVersionAllBlackDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionAllBlackDevicesWithOptions(request, runtime);
}

ListOpenAccountLinksResponse Alibabacloud_Iovcc20180501::Client::listOpenAccountLinksWithOptions(shared_ptr<ListOpenAccountLinksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListOpenAccountLinksResponse(doRPCRequest(make_shared<string>("ListOpenAccountLinks"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOpenAccountLinksResponse Alibabacloud_Iovcc20180501::Client::listOpenAccountLinks(shared_ptr<ListOpenAccountLinksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOpenAccountLinksWithOptions(request, runtime);
}

AddVersionWhiteDevicesByDeviceGroupsResponse Alibabacloud_Iovcc20180501::Client::addVersionWhiteDevicesByDeviceGroupsWithOptions(shared_ptr<AddVersionWhiteDevicesByDeviceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVersionWhiteDevicesByDeviceGroupsResponse(doRPCRequest(make_shared<string>("AddVersionWhiteDevicesByDeviceGroups"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVersionWhiteDevicesByDeviceGroupsResponse Alibabacloud_Iovcc20180501::Client::addVersionWhiteDevicesByDeviceGroups(shared_ptr<AddVersionWhiteDevicesByDeviceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVersionWhiteDevicesByDeviceGroupsWithOptions(request, runtime);
}

FindCustomizedPropertiesResponse Alibabacloud_Iovcc20180501::Client::findCustomizedPropertiesWithOptions(shared_ptr<FindCustomizedPropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindCustomizedPropertiesResponse(doRPCRequest(make_shared<string>("FindCustomizedProperties"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindCustomizedPropertiesResponse Alibabacloud_Iovcc20180501::Client::findCustomizedProperties(shared_ptr<FindCustomizedPropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findCustomizedPropertiesWithOptions(request, runtime);
}

ListMessageAcksResponse Alibabacloud_Iovcc20180501::Client::listMessageAcksWithOptions(shared_ptr<ListMessageAcksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMessageAcksResponse(doRPCRequest(make_shared<string>("ListMessageAcks"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMessageAcksResponse Alibabacloud_Iovcc20180501::Client::listMessageAcks(shared_ptr<ListMessageAcksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageAcksWithOptions(request, runtime);
}

GetCommercialVehicleTrackResponse Alibabacloud_Iovcc20180501::Client::getCommercialVehicleTrackWithOptions(shared_ptr<GetCommercialVehicleTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCommercialVehicleTrackResponse(doRPCRequest(make_shared<string>("GetCommercialVehicleTrack"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCommercialVehicleTrackResponse Alibabacloud_Iovcc20180501::Client::getCommercialVehicleTrack(shared_ptr<GetCommercialVehicleTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommercialVehicleTrackWithOptions(request, runtime);
}

ListHostDevicesResponse Alibabacloud_Iovcc20180501::Client::listHostDevicesWithOptions(shared_ptr<ListHostDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostDevicesResponse(doRPCRequest(make_shared<string>("ListHostDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostDevicesResponse Alibabacloud_Iovcc20180501::Client::listHostDevices(shared_ptr<ListHostDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostDevicesWithOptions(request, runtime);
}

ListMqttClientSubscriptionsResponse Alibabacloud_Iovcc20180501::Client::listMqttClientSubscriptionsWithOptions(shared_ptr<ListMqttClientSubscriptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMqttClientSubscriptionsResponse(doRPCRequest(make_shared<string>("ListMqttClientSubscriptions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMqttClientSubscriptionsResponse Alibabacloud_Iovcc20180501::Client::listMqttClientSubscriptions(shared_ptr<ListMqttClientSubscriptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMqttClientSubscriptionsWithOptions(request, runtime);
}

InvokeFunctionResponse Alibabacloud_Iovcc20180501::Client::invokeFunctionWithOptions(shared_ptr<InvokeFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InvokeFunctionResponse(doRPCRequest(make_shared<string>("InvokeFunction"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvokeFunctionResponse Alibabacloud_Iovcc20180501::Client::invokeFunction(shared_ptr<InvokeFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeFunctionWithOptions(request, runtime);
}

DeleteVersionAllWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionAllWhiteDevicesWithOptions(shared_ptr<DeleteVersionAllWhiteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVersionAllWhiteDevicesResponse(doRPCRequest(make_shared<string>("DeleteVersionAllWhiteDevices"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVersionAllWhiteDevicesResponse Alibabacloud_Iovcc20180501::Client::deleteVersionAllWhiteDevices(shared_ptr<DeleteVersionAllWhiteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVersionAllWhiteDevicesWithOptions(request, runtime);
}

DescribeMessageResponse Alibabacloud_Iovcc20180501::Client::describeMessageWithOptions(shared_ptr<DescribeMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMessageResponse(doRPCRequest(make_shared<string>("DescribeMessage"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMessageResponse Alibabacloud_Iovcc20180501::Client::describeMessage(shared_ptr<DescribeMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMessageWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Iovcc20180501::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProjectResponse(doRPCRequest(make_shared<string>("UpdateProject"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProjectResponse Alibabacloud_Iovcc20180501::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateAppBlackWhiteVersionsResponse Alibabacloud_Iovcc20180501::Client::updateAppBlackWhiteVersionsWithOptions(shared_ptr<UpdateAppBlackWhiteVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppBlackWhiteVersionsResponse(doRPCRequest(make_shared<string>("UpdateAppBlackWhiteVersions"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppBlackWhiteVersionsResponse Alibabacloud_Iovcc20180501::Client::updateAppBlackWhiteVersions(shared_ptr<UpdateAppBlackWhiteVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppBlackWhiteVersionsWithOptions(request, runtime);
}

GetDeviceAppUpdateFunnelEventsResponse Alibabacloud_Iovcc20180501::Client::getDeviceAppUpdateFunnelEventsWithOptions(shared_ptr<GetDeviceAppUpdateFunnelEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceAppUpdateFunnelEventsResponse(doRPCRequest(make_shared<string>("GetDeviceAppUpdateFunnelEvents"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceAppUpdateFunnelEventsResponse Alibabacloud_Iovcc20180501::Client::getDeviceAppUpdateFunnelEvents(shared_ptr<GetDeviceAppUpdateFunnelEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceAppUpdateFunnelEventsWithOptions(request, runtime);
}

GetNamespaceStatisticsDataResponse Alibabacloud_Iovcc20180501::Client::getNamespaceStatisticsDataWithOptions(shared_ptr<GetNamespaceStatisticsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNamespaceStatisticsDataResponse(doRPCRequest(make_shared<string>("GetNamespaceStatisticsData"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNamespaceStatisticsDataResponse Alibabacloud_Iovcc20180501::Client::getNamespaceStatisticsData(shared_ptr<GetNamespaceStatisticsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNamespaceStatisticsDataWithOptions(request, runtime);
}

