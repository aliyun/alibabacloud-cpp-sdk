// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ehpc20180412.hpp>
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

using namespace Alibabacloud_EHPC20180412;

Alibabacloud_EHPC20180412::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ehpc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EHPC20180412::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeJobResponse Alibabacloud_EHPC20180412::Client::describeJobWithOptions(shared_ptr<DescribeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeJobResponse(doRPCRequest(make_shared<string>("DescribeJob"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeJobResponse Alibabacloud_EHPC20180412::Client::describeJob(shared_ptr<DescribeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_EHPC20180412::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteImageResponse(doRPCRequest(make_shared<string>("DeleteImage"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImageResponse Alibabacloud_EHPC20180412::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteGWSClusterResponse Alibabacloud_EHPC20180412::Client::deleteGWSClusterWithOptions(shared_ptr<DeleteGWSClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteGWSClusterResponse(doRPCRequest(make_shared<string>("DeleteGWSCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteGWSClusterResponse Alibabacloud_EHPC20180412::Client::deleteGWSCluster(shared_ptr<DeleteGWSClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGWSClusterWithOptions(request, runtime);
}

DeleteUsersResponse Alibabacloud_EHPC20180412::Client::deleteUsersWithOptions(shared_ptr<DeleteUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteUsersResponse(doRPCRequest(make_shared<string>("DeleteUsers"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUsersResponse Alibabacloud_EHPC20180412::Client::deleteUsers(shared_ptr<DeleteUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUsersWithOptions(request, runtime);
}

DescribeClusterResponse Alibabacloud_EHPC20180412::Client::describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeClusterResponse(doRPCRequest(make_shared<string>("DescribeCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterResponse Alibabacloud_EHPC20180412::Client::describeCluster(shared_ptr<DescribeClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_EHPC20180412::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_EHPC20180412::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

DescribeContainerAppResponse Alibabacloud_EHPC20180412::Client::describeContainerAppWithOptions(shared_ptr<DescribeContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeContainerAppResponse(doRPCRequest(make_shared<string>("DescribeContainerApp"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeContainerAppResponse Alibabacloud_EHPC20180412::Client::describeContainerApp(shared_ptr<DescribeContainerAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerAppWithOptions(request, runtime);
}

PullImageResponse Alibabacloud_EHPC20180412::Client::pullImageWithOptions(shared_ptr<PullImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return PullImageResponse(doRPCRequest(make_shared<string>("PullImage"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PullImageResponse Alibabacloud_EHPC20180412::Client::pullImage(shared_ptr<PullImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pullImageWithOptions(request, runtime);
}

StopNodesResponse Alibabacloud_EHPC20180412::Client::stopNodesWithOptions(shared_ptr<StopNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StopNodesResponse(doRPCRequest(make_shared<string>("StopNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopNodesResponse Alibabacloud_EHPC20180412::Client::stopNodes(shared_ptr<StopNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopNodesWithOptions(request, runtime);
}

ListNodesByQueueResponse Alibabacloud_EHPC20180412::Client::listNodesByQueueWithOptions(shared_ptr<ListNodesByQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListNodesByQueueResponse(doRPCRequest(make_shared<string>("ListNodesByQueue"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodesByQueueResponse Alibabacloud_EHPC20180412::Client::listNodesByQueue(shared_ptr<ListNodesByQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByQueueWithOptions(request, runtime);
}

ModifyContainerAppAttributesResponse Alibabacloud_EHPC20180412::Client::modifyContainerAppAttributesWithOptions(shared_ptr<ModifyContainerAppAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ModifyContainerAppAttributesResponse(doRPCRequest(make_shared<string>("ModifyContainerAppAttributes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyContainerAppAttributesResponse Alibabacloud_EHPC20180412::Client::modifyContainerAppAttributes(shared_ptr<ModifyContainerAppAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyContainerAppAttributesWithOptions(request, runtime);
}

SetSchedulerInfoResponse Alibabacloud_EHPC20180412::Client::setSchedulerInfoWithOptions(shared_ptr<SetSchedulerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetSchedulerInfoResponse(doRPCRequest(make_shared<string>("SetSchedulerInfo"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetSchedulerInfoResponse Alibabacloud_EHPC20180412::Client::setSchedulerInfo(shared_ptr<SetSchedulerInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSchedulerInfoWithOptions(request, runtime);
}

GetCloudMetricProfilingResponse Alibabacloud_EHPC20180412::Client::getCloudMetricProfilingWithOptions(shared_ptr<GetCloudMetricProfilingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetCloudMetricProfilingResponse(doRPCRequest(make_shared<string>("GetCloudMetricProfiling"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCloudMetricProfilingResponse Alibabacloud_EHPC20180412::Client::getCloudMetricProfiling(shared_ptr<GetCloudMetricProfilingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudMetricProfilingWithOptions(request, runtime);
}

DescribeImagePriceResponse Alibabacloud_EHPC20180412::Client::describeImagePriceWithOptions(shared_ptr<DescribeImagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeImagePriceResponse(doRPCRequest(make_shared<string>("DescribeImagePrice"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImagePriceResponse Alibabacloud_EHPC20180412::Client::describeImagePrice(shared_ptr<DescribeImagePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagePriceWithOptions(request, runtime);
}

StopGWSInstanceResponse Alibabacloud_EHPC20180412::Client::stopGWSInstanceWithOptions(shared_ptr<StopGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StopGWSInstanceResponse(doRPCRequest(make_shared<string>("StopGWSInstance"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopGWSInstanceResponse Alibabacloud_EHPC20180412::Client::stopGWSInstance(shared_ptr<StopGWSInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopGWSInstanceWithOptions(request, runtime);
}

GetAutoScaleConfigResponse Alibabacloud_EHPC20180412::Client::getAutoScaleConfigWithOptions(shared_ptr<GetAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAutoScaleConfigResponse(doRPCRequest(make_shared<string>("GetAutoScaleConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAutoScaleConfigResponse Alibabacloud_EHPC20180412::Client::getAutoScaleConfig(shared_ptr<GetAutoScaleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutoScaleConfigWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_EHPC20180412::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListNodesResponse(doRPCRequest(make_shared<string>("ListNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodesResponse Alibabacloud_EHPC20180412::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListCommandsResponse Alibabacloud_EHPC20180412::Client::listCommandsWithOptions(shared_ptr<ListCommandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListCommandsResponse(doRPCRequest(make_shared<string>("ListCommands"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCommandsResponse Alibabacloud_EHPC20180412::Client::listCommands(shared_ptr<ListCommandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCommandsWithOptions(request, runtime);
}

CreateGWSImageResponse Alibabacloud_EHPC20180412::Client::createGWSImageWithOptions(shared_ptr<CreateGWSImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateGWSImageResponse(doRPCRequest(make_shared<string>("CreateGWSImage"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGWSImageResponse Alibabacloud_EHPC20180412::Client::createGWSImage(shared_ptr<CreateGWSImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGWSImageWithOptions(request, runtime);
}

InvokeShellCommandResponse Alibabacloud_EHPC20180412::Client::invokeShellCommandWithOptions(shared_ptr<InvokeShellCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return InvokeShellCommandResponse(doRPCRequest(make_shared<string>("InvokeShellCommand"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvokeShellCommandResponse Alibabacloud_EHPC20180412::Client::invokeShellCommand(shared_ptr<InvokeShellCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeShellCommandWithOptions(request, runtime);
}

ListFileSystemWithMountTargetsResponse Alibabacloud_EHPC20180412::Client::listFileSystemWithMountTargetsWithOptions(shared_ptr<ListFileSystemWithMountTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListFileSystemWithMountTargetsResponse(doRPCRequest(make_shared<string>("ListFileSystemWithMountTargets"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFileSystemWithMountTargetsResponse Alibabacloud_EHPC20180412::Client::listFileSystemWithMountTargets(shared_ptr<ListFileSystemWithMountTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileSystemWithMountTargetsWithOptions(request, runtime);
}

ModifyClusterAttributesResponse Alibabacloud_EHPC20180412::Client::modifyClusterAttributesWithOptions(shared_ptr<ModifyClusterAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ModifyClusterAttributesResponse(doRPCRequest(make_shared<string>("ModifyClusterAttributes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyClusterAttributesResponse Alibabacloud_EHPC20180412::Client::modifyClusterAttributes(shared_ptr<ModifyClusterAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterAttributesWithOptions(request, runtime);
}

DeleteJobTemplatesResponse Alibabacloud_EHPC20180412::Client::deleteJobTemplatesWithOptions(shared_ptr<DeleteJobTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteJobTemplatesResponse(doRPCRequest(make_shared<string>("DeleteJobTemplates"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteJobTemplatesResponse Alibabacloud_EHPC20180412::Client::deleteJobTemplates(shared_ptr<DeleteJobTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobTemplatesWithOptions(request, runtime);
}

GetCloudMetricLogsResponse Alibabacloud_EHPC20180412::Client::getCloudMetricLogsWithOptions(shared_ptr<GetCloudMetricLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetCloudMetricLogsResponse(doRPCRequest(make_shared<string>("GetCloudMetricLogs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCloudMetricLogsResponse Alibabacloud_EHPC20180412::Client::getCloudMetricLogs(shared_ptr<GetCloudMetricLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudMetricLogsWithOptions(request, runtime);
}

CreateJobTemplateResponse Alibabacloud_EHPC20180412::Client::createJobTemplateWithOptions(shared_ptr<CreateJobTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateJobTemplateResponse(doRPCRequest(make_shared<string>("CreateJobTemplate"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateJobTemplateResponse Alibabacloud_EHPC20180412::Client::createJobTemplate(shared_ptr<CreateJobTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobTemplateWithOptions(request, runtime);
}

GetHybridClusterConfigResponse Alibabacloud_EHPC20180412::Client::getHybridClusterConfigWithOptions(shared_ptr<GetHybridClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHybridClusterConfigResponse(doRPCRequest(make_shared<string>("GetHybridClusterConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHybridClusterConfigResponse Alibabacloud_EHPC20180412::Client::getHybridClusterConfig(shared_ptr<GetHybridClusterConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHybridClusterConfigWithOptions(request, runtime);
}

DescribeGWSInstancesResponse Alibabacloud_EHPC20180412::Client::describeGWSInstancesWithOptions(shared_ptr<DescribeGWSInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeGWSInstancesResponse(doRPCRequest(make_shared<string>("DescribeGWSInstances"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGWSInstancesResponse Alibabacloud_EHPC20180412::Client::describeGWSInstances(shared_ptr<DescribeGWSInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGWSInstancesWithOptions(request, runtime);
}

ResetNodesResponse Alibabacloud_EHPC20180412::Client::resetNodesWithOptions(shared_ptr<ResetNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ResetNodesResponse(doRPCRequest(make_shared<string>("ResetNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetNodesResponse Alibabacloud_EHPC20180412::Client::resetNodes(shared_ptr<ResetNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetNodesWithOptions(request, runtime);
}

UninstallSoftwareResponse Alibabacloud_EHPC20180412::Client::uninstallSoftwareWithOptions(shared_ptr<UninstallSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return UninstallSoftwareResponse(doRPCRequest(make_shared<string>("UninstallSoftware"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UninstallSoftwareResponse Alibabacloud_EHPC20180412::Client::uninstallSoftware(shared_ptr<UninstallSoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallSoftwareWithOptions(request, runtime);
}

ApplyNodesResponse Alibabacloud_EHPC20180412::Client::applyNodesWithOptions(shared_ptr<ApplyNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ApplyNodesResponse(doRPCRequest(make_shared<string>("ApplyNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyNodesResponse Alibabacloud_EHPC20180412::Client::applyNodes(shared_ptr<ApplyNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyNodesWithOptions(request, runtime);
}

DescribeGWSClustersResponse Alibabacloud_EHPC20180412::Client::describeGWSClustersWithOptions(shared_ptr<DescribeGWSClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeGWSClustersResponse(doRPCRequest(make_shared<string>("DescribeGWSClusters"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGWSClustersResponse Alibabacloud_EHPC20180412::Client::describeGWSClusters(shared_ptr<DescribeGWSClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGWSClustersWithOptions(request, runtime);
}

DeleteJobsResponse Alibabacloud_EHPC20180412::Client::deleteJobsWithOptions(shared_ptr<DeleteJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteJobsResponse(doRPCRequest(make_shared<string>("DeleteJobs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteJobsResponse Alibabacloud_EHPC20180412::Client::deleteJobs(shared_ptr<DeleteJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobsWithOptions(request, runtime);
}

ListContainerImagesResponse Alibabacloud_EHPC20180412::Client::listContainerImagesWithOptions(shared_ptr<ListContainerImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListContainerImagesResponse(doRPCRequest(make_shared<string>("ListContainerImages"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListContainerImagesResponse Alibabacloud_EHPC20180412::Client::listContainerImages(shared_ptr<ListContainerImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listContainerImagesWithOptions(request, runtime);
}

DeleteNodesResponse Alibabacloud_EHPC20180412::Client::deleteNodesWithOptions(shared_ptr<DeleteNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteNodesResponse(doRPCRequest(make_shared<string>("DeleteNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNodesResponse Alibabacloud_EHPC20180412::Client::deleteNodes(shared_ptr<DeleteNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNodesWithOptions(request, runtime);
}

ListJobsResponse Alibabacloud_EHPC20180412::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListJobsResponse(doRPCRequest(make_shared<string>("ListJobs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobsResponse Alibabacloud_EHPC20180412::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsWithOptions(request, runtime);
}

ListCpfsFileSystemsResponse Alibabacloud_EHPC20180412::Client::listCpfsFileSystemsWithOptions(shared_ptr<ListCpfsFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListCpfsFileSystemsResponse(doRPCRequest(make_shared<string>("ListCpfsFileSystems"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCpfsFileSystemsResponse Alibabacloud_EHPC20180412::Client::listCpfsFileSystems(shared_ptr<ListCpfsFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCpfsFileSystemsWithOptions(request, runtime);
}

ListClustersMetaResponse Alibabacloud_EHPC20180412::Client::listClustersMetaWithOptions(shared_ptr<ListClustersMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListClustersMetaResponse(doRPCRequest(make_shared<string>("ListClustersMeta"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClustersMetaResponse Alibabacloud_EHPC20180412::Client::listClustersMeta(shared_ptr<ListClustersMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClustersMetaWithOptions(request, runtime);
}

QueryServicePackAndPriceResponse Alibabacloud_EHPC20180412::Client::queryServicePackAndPriceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return QueryServicePackAndPriceResponse(doRPCRequest(make_shared<string>("QueryServicePackAndPrice"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryServicePackAndPriceResponse Alibabacloud_EHPC20180412::Client::queryServicePackAndPrice() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryServicePackAndPriceWithOptions(runtime);
}

DeleteContainerAppsResponse Alibabacloud_EHPC20180412::Client::deleteContainerAppsWithOptions(shared_ptr<DeleteContainerAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteContainerAppsResponse(doRPCRequest(make_shared<string>("DeleteContainerApps"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteContainerAppsResponse Alibabacloud_EHPC20180412::Client::deleteContainerApps(shared_ptr<DeleteContainerAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContainerAppsWithOptions(request, runtime);
}

ListVolumesResponse Alibabacloud_EHPC20180412::Client::listVolumesWithOptions(shared_ptr<ListVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListVolumesResponse(doRPCRequest(make_shared<string>("ListVolumes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVolumesResponse Alibabacloud_EHPC20180412::Client::listVolumes(shared_ptr<ListVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVolumesWithOptions(request, runtime);
}

ListInvocationStatusResponse Alibabacloud_EHPC20180412::Client::listInvocationStatusWithOptions(shared_ptr<ListInvocationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListInvocationStatusResponse(doRPCRequest(make_shared<string>("ListInvocationStatus"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInvocationStatusResponse Alibabacloud_EHPC20180412::Client::listInvocationStatus(shared_ptr<ListInvocationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInvocationStatusWithOptions(request, runtime);
}

ModifyImageGatewayConfigResponse Alibabacloud_EHPC20180412::Client::modifyImageGatewayConfigWithOptions(shared_ptr<ModifyImageGatewayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ModifyImageGatewayConfigResponse(doRPCRequest(make_shared<string>("ModifyImageGatewayConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageGatewayConfigResponse Alibabacloud_EHPC20180412::Client::modifyImageGatewayConfig(shared_ptr<ModifyImageGatewayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageGatewayConfigWithOptions(request, runtime);
}

ListContainerAppsResponse Alibabacloud_EHPC20180412::Client::listContainerAppsWithOptions(shared_ptr<ListContainerAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListContainerAppsResponse(doRPCRequest(make_shared<string>("ListContainerApps"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListContainerAppsResponse Alibabacloud_EHPC20180412::Client::listContainerApps(shared_ptr<ListContainerAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listContainerAppsWithOptions(request, runtime);
}

DeleteSecurityGroupResponse Alibabacloud_EHPC20180412::Client::deleteSecurityGroupWithOptions(shared_ptr<DeleteSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteSecurityGroupResponse(doRPCRequest(make_shared<string>("DeleteSecurityGroup"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSecurityGroupResponse Alibabacloud_EHPC20180412::Client::deleteSecurityGroup(shared_ptr<DeleteSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityGroupWithOptions(request, runtime);
}

DescribeNFSClientStatusResponse Alibabacloud_EHPC20180412::Client::describeNFSClientStatusWithOptions(shared_ptr<DescribeNFSClientStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeNFSClientStatusResponse(doRPCRequest(make_shared<string>("DescribeNFSClientStatus"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNFSClientStatusResponse Alibabacloud_EHPC20180412::Client::describeNFSClientStatus(shared_ptr<DescribeNFSClientStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNFSClientStatusWithOptions(request, runtime);
}

EcdDeleteDesktopsResponse Alibabacloud_EHPC20180412::Client::ecdDeleteDesktopsWithOptions(shared_ptr<EcdDeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return EcdDeleteDesktopsResponse(doRPCRequest(make_shared<string>("EcdDeleteDesktops"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EcdDeleteDesktopsResponse Alibabacloud_EHPC20180412::Client::ecdDeleteDesktops(shared_ptr<EcdDeleteDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ecdDeleteDesktopsWithOptions(request, runtime);
}

ListClustersResponse Alibabacloud_EHPC20180412::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListClustersResponse(doRPCRequest(make_shared<string>("ListClusters"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClustersResponse Alibabacloud_EHPC20180412::Client::listClusters(shared_ptr<ListClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClustersWithOptions(request, runtime);
}

SubmitJobResponse Alibabacloud_EHPC20180412::Client::submitJobWithOptions(shared_ptr<SubmitJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SubmitJobResponse(doRPCRequest(make_shared<string>("SubmitJob"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitJobResponse Alibabacloud_EHPC20180412::Client::submitJob(shared_ptr<SubmitJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitJobWithOptions(request, runtime);
}

GetAccountingReportResponse Alibabacloud_EHPC20180412::Client::getAccountingReportWithOptions(shared_ptr<GetAccountingReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAccountingReportResponse(doRPCRequest(make_shared<string>("GetAccountingReport"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAccountingReportResponse Alibabacloud_EHPC20180412::Client::getAccountingReport(shared_ptr<GetAccountingReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountingReportWithOptions(request, runtime);
}

DescribeAutoScaleConfigResponse Alibabacloud_EHPC20180412::Client::describeAutoScaleConfigWithOptions(shared_ptr<DescribeAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeAutoScaleConfigResponse(doRPCRequest(make_shared<string>("DescribeAutoScaleConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoScaleConfigResponse Alibabacloud_EHPC20180412::Client::describeAutoScaleConfig(shared_ptr<DescribeAutoScaleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoScaleConfigWithOptions(request, runtime);
}

GetVisualServiceStatusResponse Alibabacloud_EHPC20180412::Client::getVisualServiceStatusWithOptions(shared_ptr<GetVisualServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetVisualServiceStatusResponse(doRPCRequest(make_shared<string>("GetVisualServiceStatus"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVisualServiceStatusResponse Alibabacloud_EHPC20180412::Client::getVisualServiceStatus(shared_ptr<GetVisualServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVisualServiceStatusWithOptions(request, runtime);
}

StartVisualServiceResponse Alibabacloud_EHPC20180412::Client::startVisualServiceWithOptions(shared_ptr<StartVisualServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StartVisualServiceResponse(doRPCRequest(make_shared<string>("StartVisualService"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartVisualServiceResponse Alibabacloud_EHPC20180412::Client::startVisualService(shared_ptr<StartVisualServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startVisualServiceWithOptions(request, runtime);
}

GetIfEcsTypeSupportHtConfigResponse Alibabacloud_EHPC20180412::Client::getIfEcsTypeSupportHtConfigWithOptions(shared_ptr<GetIfEcsTypeSupportHtConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetIfEcsTypeSupportHtConfigResponse(doRPCRequest(make_shared<string>("GetIfEcsTypeSupportHtConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIfEcsTypeSupportHtConfigResponse Alibabacloud_EHPC20180412::Client::getIfEcsTypeSupportHtConfig(shared_ptr<GetIfEcsTypeSupportHtConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIfEcsTypeSupportHtConfigWithOptions(request, runtime);
}

GetSchedulerInfoResponse Alibabacloud_EHPC20180412::Client::getSchedulerInfoWithOptions(shared_ptr<GetSchedulerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSchedulerInfoResponse(doRPCRequest(make_shared<string>("GetSchedulerInfo"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSchedulerInfoResponse Alibabacloud_EHPC20180412::Client::getSchedulerInfo(shared_ptr<GetSchedulerInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSchedulerInfoWithOptions(request, runtime);
}

SetGWSInstanceUserResponse Alibabacloud_EHPC20180412::Client::setGWSInstanceUserWithOptions(shared_ptr<SetGWSInstanceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetGWSInstanceUserResponse(doRPCRequest(make_shared<string>("SetGWSInstanceUser"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGWSInstanceUserResponse Alibabacloud_EHPC20180412::Client::setGWSInstanceUser(shared_ptr<SetGWSInstanceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGWSInstanceUserWithOptions(request, runtime);
}

GetWorkbenchTokenResponse Alibabacloud_EHPC20180412::Client::getWorkbenchTokenWithOptions(shared_ptr<GetWorkbenchTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetWorkbenchTokenResponse(doRPCRequest(make_shared<string>("GetWorkbenchToken"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetWorkbenchTokenResponse Alibabacloud_EHPC20180412::Client::getWorkbenchToken(shared_ptr<GetWorkbenchTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkbenchTokenWithOptions(request, runtime);
}

InstallSoftwareResponse Alibabacloud_EHPC20180412::Client::installSoftwareWithOptions(shared_ptr<InstallSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return InstallSoftwareResponse(doRPCRequest(make_shared<string>("InstallSoftware"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InstallSoftwareResponse Alibabacloud_EHPC20180412::Client::installSoftware(shared_ptr<InstallSoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installSoftwareWithOptions(request, runtime);
}

ListAvailableEcsTypesResponse Alibabacloud_EHPC20180412::Client::listAvailableEcsTypesWithOptions(shared_ptr<ListAvailableEcsTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAvailableEcsTypesResponse(doRPCRequest(make_shared<string>("ListAvailableEcsTypes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAvailableEcsTypesResponse Alibabacloud_EHPC20180412::Client::listAvailableEcsTypes(shared_ptr<ListAvailableEcsTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableEcsTypesWithOptions(request, runtime);
}

MountNFSResponse Alibabacloud_EHPC20180412::Client::mountNFSWithOptions(shared_ptr<MountNFSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return MountNFSResponse(doRPCRequest(make_shared<string>("MountNFS"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MountNFSResponse Alibabacloud_EHPC20180412::Client::mountNFS(shared_ptr<MountNFSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mountNFSWithOptions(request, runtime);
}

AddQueueResponse Alibabacloud_EHPC20180412::Client::addQueueWithOptions(shared_ptr<AddQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddQueueResponse(doRPCRequest(make_shared<string>("AddQueue"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddQueueResponse Alibabacloud_EHPC20180412::Client::addQueue(shared_ptr<AddQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addQueueWithOptions(request, runtime);
}

CreateGWSInstanceResponse Alibabacloud_EHPC20180412::Client::createGWSInstanceWithOptions(shared_ptr<CreateGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateGWSInstanceResponse(doRPCRequest(make_shared<string>("CreateGWSInstance"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGWSInstanceResponse Alibabacloud_EHPC20180412::Client::createGWSInstance(shared_ptr<CreateGWSInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGWSInstanceWithOptions(request, runtime);
}

ListCurrentClientVersionResponse Alibabacloud_EHPC20180412::Client::listCurrentClientVersionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListCurrentClientVersionResponse(doRPCRequest(make_shared<string>("ListCurrentClientVersion"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCurrentClientVersionResponse Alibabacloud_EHPC20180412::Client::listCurrentClientVersion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCurrentClientVersionWithOptions(runtime);
}

UpdateClusterVolumesResponse Alibabacloud_EHPC20180412::Client::updateClusterVolumesWithOptions(shared_ptr<UpdateClusterVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return UpdateClusterVolumesResponse(doRPCRequest(make_shared<string>("UpdateClusterVolumes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateClusterVolumesResponse Alibabacloud_EHPC20180412::Client::updateClusterVolumes(shared_ptr<UpdateClusterVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClusterVolumesWithOptions(request, runtime);
}

StartGWSInstanceResponse Alibabacloud_EHPC20180412::Client::startGWSInstanceWithOptions(shared_ptr<StartGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StartGWSInstanceResponse(doRPCRequest(make_shared<string>("StartGWSInstance"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartGWSInstanceResponse Alibabacloud_EHPC20180412::Client::startGWSInstance(shared_ptr<StartGWSInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startGWSInstanceWithOptions(request, runtime);
}

ListInvocationResultsResponse Alibabacloud_EHPC20180412::Client::listInvocationResultsWithOptions(shared_ptr<ListInvocationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListInvocationResultsResponse(doRPCRequest(make_shared<string>("ListInvocationResults"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInvocationResultsResponse Alibabacloud_EHPC20180412::Client::listInvocationResults(shared_ptr<ListInvocationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInvocationResultsWithOptions(request, runtime);
}

SetAutoScaleConfigResponse Alibabacloud_EHPC20180412::Client::setAutoScaleConfigWithOptions(shared_ptr<SetAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetAutoScaleConfigResponse(doRPCRequest(make_shared<string>("SetAutoScaleConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAutoScaleConfigResponse Alibabacloud_EHPC20180412::Client::setAutoScaleConfig(shared_ptr<SetAutoScaleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAutoScaleConfigWithOptions(request, runtime);
}

AddNodesResponse Alibabacloud_EHPC20180412::Client::addNodesWithOptions(shared_ptr<AddNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddNodesResponse(doRPCRequest(make_shared<string>("AddNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddNodesResponse Alibabacloud_EHPC20180412::Client::addNodes(shared_ptr<AddNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addNodesWithOptions(request, runtime);
}

ListSoftwaresResponse Alibabacloud_EHPC20180412::Client::listSoftwaresWithOptions(shared_ptr<ListSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSoftwaresResponse(doRPCRequest(make_shared<string>("ListSoftwares"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSoftwaresResponse Alibabacloud_EHPC20180412::Client::listSoftwares(shared_ptr<ListSoftwaresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSoftwaresWithOptions(request, runtime);
}

ListSecurityGroupsResponse Alibabacloud_EHPC20180412::Client::listSecurityGroupsWithOptions(shared_ptr<ListSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSecurityGroupsResponse(doRPCRequest(make_shared<string>("ListSecurityGroups"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSecurityGroupsResponse Alibabacloud_EHPC20180412::Client::listSecurityGroups(shared_ptr<ListSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityGroupsWithOptions(request, runtime);
}

DescribeGWSImagesResponse Alibabacloud_EHPC20180412::Client::describeGWSImagesWithOptions(shared_ptr<DescribeGWSImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeGWSImagesResponse(doRPCRequest(make_shared<string>("DescribeGWSImages"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGWSImagesResponse Alibabacloud_EHPC20180412::Client::describeGWSImages(shared_ptr<DescribeGWSImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGWSImagesWithOptions(request, runtime);
}

StopJobsResponse Alibabacloud_EHPC20180412::Client::stopJobsWithOptions(shared_ptr<StopJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StopJobsResponse(doRPCRequest(make_shared<string>("StopJobs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopJobsResponse Alibabacloud_EHPC20180412::Client::stopJobs(shared_ptr<StopJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopJobsWithOptions(request, runtime);
}

StartNodesResponse Alibabacloud_EHPC20180412::Client::startNodesWithOptions(shared_ptr<StartNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StartNodesResponse(doRPCRequest(make_shared<string>("StartNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartNodesResponse Alibabacloud_EHPC20180412::Client::startNodes(shared_ptr<StartNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startNodesWithOptions(request, runtime);
}

ModifyUserGroupsResponse Alibabacloud_EHPC20180412::Client::modifyUserGroupsWithOptions(shared_ptr<ModifyUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ModifyUserGroupsResponse(doRPCRequest(make_shared<string>("ModifyUserGroups"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserGroupsResponse Alibabacloud_EHPC20180412::Client::modifyUserGroups(shared_ptr<ModifyUserGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserGroupsWithOptions(request, runtime);
}

SetQueueResponse Alibabacloud_EHPC20180412::Client::setQueueWithOptions(shared_ptr<SetQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetQueueResponse(doRPCRequest(make_shared<string>("SetQueue"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetQueueResponse Alibabacloud_EHPC20180412::Client::setQueue(shared_ptr<SetQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setQueueWithOptions(request, runtime);
}

StartClusterResponse Alibabacloud_EHPC20180412::Client::startClusterWithOptions(shared_ptr<StartClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StartClusterResponse(doRPCRequest(make_shared<string>("StartCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartClusterResponse Alibabacloud_EHPC20180412::Client::startCluster(shared_ptr<StartClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startClusterWithOptions(request, runtime);
}

ListCustomImagesResponse Alibabacloud_EHPC20180412::Client::listCustomImagesWithOptions(shared_ptr<ListCustomImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListCustomImagesResponse(doRPCRequest(make_shared<string>("ListCustomImages"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCustomImagesResponse Alibabacloud_EHPC20180412::Client::listCustomImages(shared_ptr<ListCustomImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomImagesWithOptions(request, runtime);
}

AddUsersResponse Alibabacloud_EHPC20180412::Client::addUsersWithOptions(shared_ptr<AddUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddUsersResponse(doRPCRequest(make_shared<string>("AddUsers"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUsersResponse Alibabacloud_EHPC20180412::Client::addUsers(shared_ptr<AddUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUsersWithOptions(request, runtime);
}

CreateGWSClusterResponse Alibabacloud_EHPC20180412::Client::createGWSClusterWithOptions(shared_ptr<CreateGWSClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateGWSClusterResponse(doRPCRequest(make_shared<string>("CreateGWSCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGWSClusterResponse Alibabacloud_EHPC20180412::Client::createGWSCluster(shared_ptr<CreateGWSClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGWSClusterWithOptions(request, runtime);
}

ListJobTemplatesResponse Alibabacloud_EHPC20180412::Client::listJobTemplatesWithOptions(shared_ptr<ListJobTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListJobTemplatesResponse(doRPCRequest(make_shared<string>("ListJobTemplates"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobTemplatesResponse Alibabacloud_EHPC20180412::Client::listJobTemplates(shared_ptr<ListJobTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobTemplatesWithOptions(request, runtime);
}

DescribeImageGatewayConfigResponse Alibabacloud_EHPC20180412::Client::describeImageGatewayConfigWithOptions(shared_ptr<DescribeImageGatewayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeImageGatewayConfigResponse(doRPCRequest(make_shared<string>("DescribeImageGatewayConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageGatewayConfigResponse Alibabacloud_EHPC20180412::Client::describeImageGatewayConfig(shared_ptr<DescribeImageGatewayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageGatewayConfigWithOptions(request, runtime);
}

GetGWSConnectTicketResponse Alibabacloud_EHPC20180412::Client::getGWSConnectTicketWithOptions(shared_ptr<GetGWSConnectTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetGWSConnectTicketResponse(doRPCRequest(make_shared<string>("GetGWSConnectTicket"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGWSConnectTicketResponse Alibabacloud_EHPC20180412::Client::getGWSConnectTicket(shared_ptr<GetGWSConnectTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGWSConnectTicketWithOptions(request, runtime);
}

ListTasksResponse Alibabacloud_EHPC20180412::Client::listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListTasksResponse(doRPCRequest(make_shared<string>("ListTasks"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTasksResponse Alibabacloud_EHPC20180412::Client::listTasks(shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTasksWithOptions(request, runtime);
}

StopClusterResponse Alibabacloud_EHPC20180412::Client::stopClusterWithOptions(shared_ptr<StopClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StopClusterResponse(doRPCRequest(make_shared<string>("StopCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopClusterResponse Alibabacloud_EHPC20180412::Client::stopCluster(shared_ptr<StopClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopClusterWithOptions(request, runtime);
}

AddSecurityGroupResponse Alibabacloud_EHPC20180412::Client::addSecurityGroupWithOptions(shared_ptr<AddSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddSecurityGroupResponse(doRPCRequest(make_shared<string>("AddSecurityGroup"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSecurityGroupResponse Alibabacloud_EHPC20180412::Client::addSecurityGroup(shared_ptr<AddSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSecurityGroupWithOptions(request, runtime);
}

ListNodesNoPagingResponse Alibabacloud_EHPC20180412::Client::listNodesNoPagingWithOptions(shared_ptr<ListNodesNoPagingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListNodesNoPagingResponse(doRPCRequest(make_shared<string>("ListNodesNoPaging"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListNodesNoPagingResponse Alibabacloud_EHPC20180412::Client::listNodesNoPaging(shared_ptr<ListNodesNoPagingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesNoPagingWithOptions(request, runtime);
}

SetGWSInstanceNameResponse Alibabacloud_EHPC20180412::Client::setGWSInstanceNameWithOptions(shared_ptr<SetGWSInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetGWSInstanceNameResponse(doRPCRequest(make_shared<string>("SetGWSInstanceName"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGWSInstanceNameResponse Alibabacloud_EHPC20180412::Client::setGWSInstanceName(shared_ptr<SetGWSInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGWSInstanceNameWithOptions(request, runtime);
}

CreateHybridClusterResponse Alibabacloud_EHPC20180412::Client::createHybridClusterWithOptions(shared_ptr<CreateHybridClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateHybridClusterResponse(doRPCRequest(make_shared<string>("CreateHybridCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHybridClusterResponse Alibabacloud_EHPC20180412::Client::createHybridCluster(shared_ptr<CreateHybridClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHybridClusterWithOptions(request, runtime);
}

UpdateQueueConfigResponse Alibabacloud_EHPC20180412::Client::updateQueueConfigWithOptions(shared_ptr<UpdateQueueConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return UpdateQueueConfigResponse(doRPCRequest(make_shared<string>("UpdateQueueConfig"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateQueueConfigResponse Alibabacloud_EHPC20180412::Client::updateQueueConfig(shared_ptr<UpdateQueueConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQueueConfigWithOptions(request, runtime);
}

StopVisualServiceResponse Alibabacloud_EHPC20180412::Client::stopVisualServiceWithOptions(shared_ptr<StopVisualServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return StopVisualServiceResponse(doRPCRequest(make_shared<string>("StopVisualService"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopVisualServiceResponse Alibabacloud_EHPC20180412::Client::stopVisualService(shared_ptr<StopVisualServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopVisualServiceWithOptions(request, runtime);
}

CreateClusterResponse Alibabacloud_EHPC20180412::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateClusterResponse(doRPCRequest(make_shared<string>("CreateCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateClusterResponse Alibabacloud_EHPC20180412::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterWithOptions(request, runtime);
}

DescribeImageResponse Alibabacloud_EHPC20180412::Client::describeImageWithOptions(shared_ptr<DescribeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeImageResponse(doRPCRequest(make_shared<string>("DescribeImage"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageResponse Alibabacloud_EHPC20180412::Client::describeImage(shared_ptr<DescribeImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageWithOptions(request, runtime);
}

ModifyUserPasswordsResponse Alibabacloud_EHPC20180412::Client::modifyUserPasswordsWithOptions(shared_ptr<ModifyUserPasswordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ModifyUserPasswordsResponse(doRPCRequest(make_shared<string>("ModifyUserPasswords"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserPasswordsResponse Alibabacloud_EHPC20180412::Client::modifyUserPasswords(shared_ptr<ModifyUserPasswordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserPasswordsWithOptions(request, runtime);
}

DeleteQueueResponse Alibabacloud_EHPC20180412::Client::deleteQueueWithOptions(shared_ptr<DeleteQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteQueueResponse(doRPCRequest(make_shared<string>("DeleteQueue"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQueueResponse Alibabacloud_EHPC20180412::Client::deleteQueue(shared_ptr<DeleteQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQueueWithOptions(request, runtime);
}

ListInstalledSoftwareResponse Alibabacloud_EHPC20180412::Client::listInstalledSoftwareWithOptions(shared_ptr<ListInstalledSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListInstalledSoftwareResponse(doRPCRequest(make_shared<string>("ListInstalledSoftware"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstalledSoftwareResponse Alibabacloud_EHPC20180412::Client::listInstalledSoftware(shared_ptr<ListInstalledSoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstalledSoftwareWithOptions(request, runtime);
}

GetHealthMonitorLogsResponse Alibabacloud_EHPC20180412::Client::getHealthMonitorLogsWithOptions(shared_ptr<GetHealthMonitorLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHealthMonitorLogsResponse(doRPCRequest(make_shared<string>("GetHealthMonitorLogs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHealthMonitorLogsResponse Alibabacloud_EHPC20180412::Client::getHealthMonitorLogs(shared_ptr<GetHealthMonitorLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHealthMonitorLogsWithOptions(request, runtime);
}

UpgradeClientResponse Alibabacloud_EHPC20180412::Client::upgradeClientWithOptions(shared_ptr<UpgradeClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return UpgradeClientResponse(doRPCRequest(make_shared<string>("UpgradeClient"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeClientResponse Alibabacloud_EHPC20180412::Client::upgradeClient(shared_ptr<UpgradeClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeClientWithOptions(request, runtime);
}

DeleteClusterResponse Alibabacloud_EHPC20180412::Client::deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteClusterResponse(doRPCRequest(make_shared<string>("DeleteCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteClusterResponse Alibabacloud_EHPC20180412::Client::deleteCluster(shared_ptr<DeleteClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClusterWithOptions(request, runtime);
}

ListImagesResponse Alibabacloud_EHPC20180412::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListImagesResponse(doRPCRequest(make_shared<string>("ListImages"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListImagesResponse Alibabacloud_EHPC20180412::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImagesWithOptions(request, runtime);
}

SetGWSClusterPolicyResponse Alibabacloud_EHPC20180412::Client::setGWSClusterPolicyWithOptions(shared_ptr<SetGWSClusterPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetGWSClusterPolicyResponse(doRPCRequest(make_shared<string>("SetGWSClusterPolicy"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGWSClusterPolicyResponse Alibabacloud_EHPC20180412::Client::setGWSClusterPolicy(shared_ptr<SetGWSClusterPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGWSClusterPolicyWithOptions(request, runtime);
}

ListQueuesResponse Alibabacloud_EHPC20180412::Client::listQueuesWithOptions(shared_ptr<ListQueuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListQueuesResponse(doRPCRequest(make_shared<string>("ListQueues"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListQueuesResponse Alibabacloud_EHPC20180412::Client::listQueues(shared_ptr<ListQueuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQueuesWithOptions(request, runtime);
}

CreateJobFileResponse Alibabacloud_EHPC20180412::Client::createJobFileWithOptions(shared_ptr<CreateJobFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateJobFileResponse(doRPCRequest(make_shared<string>("CreateJobFile"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateJobFileResponse Alibabacloud_EHPC20180412::Client::createJobFile(shared_ptr<CreateJobFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobFileWithOptions(request, runtime);
}

ListCloudMetricProfilingsResponse Alibabacloud_EHPC20180412::Client::listCloudMetricProfilingsWithOptions(shared_ptr<ListCloudMetricProfilingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListCloudMetricProfilingsResponse(doRPCRequest(make_shared<string>("ListCloudMetricProfilings"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCloudMetricProfilingsResponse Alibabacloud_EHPC20180412::Client::listCloudMetricProfilings(shared_ptr<ListCloudMetricProfilingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCloudMetricProfilingsWithOptions(request, runtime);
}

GetClusterVolumesResponse Alibabacloud_EHPC20180412::Client::getClusterVolumesWithOptions(shared_ptr<GetClusterVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetClusterVolumesResponse(doRPCRequest(make_shared<string>("GetClusterVolumes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetClusterVolumesResponse Alibabacloud_EHPC20180412::Client::getClusterVolumes(shared_ptr<GetClusterVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClusterVolumesWithOptions(request, runtime);
}

DeleteGWSInstanceResponse Alibabacloud_EHPC20180412::Client::deleteGWSInstanceWithOptions(shared_ptr<DeleteGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteGWSInstanceResponse(doRPCRequest(make_shared<string>("DeleteGWSInstance"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteGWSInstanceResponse Alibabacloud_EHPC20180412::Client::deleteGWSInstance(shared_ptr<DeleteGWSInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGWSInstanceWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_EHPC20180412::Client::listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListRegionsResponse(doRPCRequest(make_shared<string>("ListRegions"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRegionsResponse Alibabacloud_EHPC20180412::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(runtime);
}

InitializeEHPCResponse Alibabacloud_EHPC20180412::Client::initializeEHPCWithOptions(shared_ptr<InitializeEHPCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return InitializeEHPCResponse(doRPCRequest(make_shared<string>("InitializeEHPC"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitializeEHPCResponse Alibabacloud_EHPC20180412::Client::initializeEHPC(shared_ptr<InitializeEHPCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeEHPCWithOptions(request, runtime);
}

RunCloudMetricProfilingResponse Alibabacloud_EHPC20180412::Client::runCloudMetricProfilingWithOptions(shared_ptr<RunCloudMetricProfilingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RunCloudMetricProfilingResponse(doRPCRequest(make_shared<string>("RunCloudMetricProfiling"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunCloudMetricProfilingResponse Alibabacloud_EHPC20180412::Client::runCloudMetricProfiling(shared_ptr<RunCloudMetricProfilingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCloudMetricProfilingWithOptions(request, runtime);
}

AddExistedNodesResponse Alibabacloud_EHPC20180412::Client::addExistedNodesWithOptions(shared_ptr<AddExistedNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddExistedNodesResponse(doRPCRequest(make_shared<string>("AddExistedNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddExistedNodesResponse Alibabacloud_EHPC20180412::Client::addExistedNodes(shared_ptr<AddExistedNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addExistedNodesWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_EHPC20180412::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribePriceResponse(doRPCRequest(make_shared<string>("DescribePrice"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePriceResponse Alibabacloud_EHPC20180412::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

RerunJobsResponse Alibabacloud_EHPC20180412::Client::rerunJobsWithOptions(shared_ptr<RerunJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RerunJobsResponse(doRPCRequest(make_shared<string>("RerunJobs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RerunJobsResponse Alibabacloud_EHPC20180412::Client::rerunJobs(shared_ptr<RerunJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rerunJobsWithOptions(request, runtime);
}

DescribeGWSClusterPolicyResponse Alibabacloud_EHPC20180412::Client::describeGWSClusterPolicyWithOptions(shared_ptr<DescribeGWSClusterPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGWSClusterPolicyResponse(doRPCRequest(make_shared<string>("DescribeGWSClusterPolicy"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGWSClusterPolicyResponse Alibabacloud_EHPC20180412::Client::describeGWSClusterPolicy(shared_ptr<DescribeGWSClusterPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGWSClusterPolicyWithOptions(request, runtime);
}

AddLocalNodesResponse Alibabacloud_EHPC20180412::Client::addLocalNodesWithOptions(shared_ptr<AddLocalNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddLocalNodesResponse(doRPCRequest(make_shared<string>("AddLocalNodes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddLocalNodesResponse Alibabacloud_EHPC20180412::Client::addLocalNodes(shared_ptr<AddLocalNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLocalNodesWithOptions(request, runtime);
}

EditJobTemplateResponse Alibabacloud_EHPC20180412::Client::editJobTemplateWithOptions(shared_ptr<EditJobTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return EditJobTemplateResponse(doRPCRequest(make_shared<string>("EditJobTemplate"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditJobTemplateResponse Alibabacloud_EHPC20180412::Client::editJobTemplate(shared_ptr<EditJobTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editJobTemplateWithOptions(request, runtime);
}

ModifyVisualServicePasswdResponse Alibabacloud_EHPC20180412::Client::modifyVisualServicePasswdWithOptions(shared_ptr<ModifyVisualServicePasswdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ModifyVisualServicePasswdResponse(doRPCRequest(make_shared<string>("ModifyVisualServicePasswd"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVisualServicePasswdResponse Alibabacloud_EHPC20180412::Client::modifyVisualServicePasswd(shared_ptr<ModifyVisualServicePasswdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVisualServicePasswdWithOptions(request, runtime);
}

ListPreferredEcsTypesResponse Alibabacloud_EHPC20180412::Client::listPreferredEcsTypesWithOptions(shared_ptr<ListPreferredEcsTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListPreferredEcsTypesResponse(doRPCRequest(make_shared<string>("ListPreferredEcsTypes"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPreferredEcsTypesResponse Alibabacloud_EHPC20180412::Client::listPreferredEcsTypes(shared_ptr<ListPreferredEcsTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPreferredEcsTypesWithOptions(request, runtime);
}

AddContainerAppResponse Alibabacloud_EHPC20180412::Client::addContainerAppWithOptions(shared_ptr<AddContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddContainerAppResponse(doRPCRequest(make_shared<string>("AddContainerApp"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddContainerAppResponse Alibabacloud_EHPC20180412::Client::addContainerApp(shared_ptr<AddContainerAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addContainerAppWithOptions(request, runtime);
}

ListClusterLogsResponse Alibabacloud_EHPC20180412::Client::listClusterLogsWithOptions(shared_ptr<ListClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListClusterLogsResponse(doRPCRequest(make_shared<string>("ListClusterLogs"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterLogsResponse Alibabacloud_EHPC20180412::Client::listClusterLogs(shared_ptr<ListClusterLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterLogsWithOptions(request, runtime);
}

RecoverClusterResponse Alibabacloud_EHPC20180412::Client::recoverClusterWithOptions(shared_ptr<RecoverClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecoverClusterResponse(doRPCRequest(make_shared<string>("RecoverCluster"), make_shared<string>("2018-04-12"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecoverClusterResponse Alibabacloud_EHPC20180412::Client::recoverCluster(shared_ptr<RecoverClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoverClusterWithOptions(request, runtime);
}

