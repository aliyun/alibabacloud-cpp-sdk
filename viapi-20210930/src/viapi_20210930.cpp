// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/viapi_20210930.hpp>
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

using namespace Alibabacloud_Viapi20210930;

Alibabacloud_Viapi20210930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("viapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Viapi20210930::Client::getEndpoint(shared_ptr<string> productId,
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

GetAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::getAiStoreUserTaskWithOptions(shared_ptr<GetAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAiStoreUserTaskResponse(doRPCRequest(make_shared<string>("GetAiStoreUserTask"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::getAiStoreUserTask(shared_ptr<GetAiStoreUserTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiStoreUserTaskWithOptions(request, runtime);
}

QueryAiStoreUserTaskPageResponse Alibabacloud_Viapi20210930::Client::queryAiStoreUserTaskPageWithOptions(shared_ptr<QueryAiStoreUserTaskPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAiStoreUserTaskPageResponse(doRPCRequest(make_shared<string>("QueryAiStoreUserTaskPage"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAiStoreUserTaskPageResponse Alibabacloud_Viapi20210930::Client::queryAiStoreUserTaskPage(shared_ptr<QueryAiStoreUserTaskPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAiStoreUserTaskPageWithOptions(request, runtime);
}

QueryAiStoreRegionsResponse Alibabacloud_Viapi20210930::Client::queryAiStoreRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return QueryAiStoreRegionsResponse(doRPCRequest(make_shared<string>("QueryAiStoreRegions"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAiStoreRegionsResponse Alibabacloud_Viapi20210930::Client::queryAiStoreRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAiStoreRegionsWithOptions(runtime);
}

ListAiStoreBucketsResponse Alibabacloud_Viapi20210930::Client::listAiStoreBucketsWithOptions(shared_ptr<ListAiStoreBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAiStoreBucketsResponse(doRPCRequest(make_shared<string>("ListAiStoreBuckets"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAiStoreBucketsResponse Alibabacloud_Viapi20210930::Client::listAiStoreBuckets(shared_ptr<ListAiStoreBucketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAiStoreBucketsWithOptions(request, runtime);
}

GetAiStoreUserTaskByNameResponse Alibabacloud_Viapi20210930::Client::getAiStoreUserTaskByNameWithOptions(shared_ptr<GetAiStoreUserTaskByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAiStoreUserTaskByNameResponse(doRPCRequest(make_shared<string>("GetAiStoreUserTaskByName"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAiStoreUserTaskByNameResponse Alibabacloud_Viapi20210930::Client::getAiStoreUserTaskByName(shared_ptr<GetAiStoreUserTaskByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiStoreUserTaskByNameWithOptions(request, runtime);
}

UpdateAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::updateAiStoreUserTaskWithOptions(shared_ptr<UpdateAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAiStoreUserTaskResponse(doRPCRequest(make_shared<string>("UpdateAiStoreUserTask"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::updateAiStoreUserTask(shared_ptr<UpdateAiStoreUserTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAiStoreUserTaskWithOptions(request, runtime);
}

DisableAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::disableAiStoreUserTaskWithOptions(shared_ptr<DisableAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableAiStoreUserTaskResponse(doRPCRequest(make_shared<string>("DisableAiStoreUserTask"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::disableAiStoreUserTask(shared_ptr<DisableAiStoreUserTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAiStoreUserTaskWithOptions(request, runtime);
}

QueryAiStoreApiTreeResponse Alibabacloud_Viapi20210930::Client::queryAiStoreApiTreeWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return QueryAiStoreApiTreeResponse(doRPCRequest(make_shared<string>("QueryAiStoreApiTree"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAiStoreApiTreeResponse Alibabacloud_Viapi20210930::Client::queryAiStoreApiTree() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAiStoreApiTreeWithOptions(runtime);
}

DeleteAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::deleteAiStoreUserTaskWithOptions(shared_ptr<DeleteAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAiStoreUserTaskResponse(doRPCRequest(make_shared<string>("DeleteAiStoreUserTask"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::deleteAiStoreUserTask(shared_ptr<DeleteAiStoreUserTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAiStoreUserTaskWithOptions(request, runtime);
}

CreateAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::createAiStoreUserTaskWithOptions(shared_ptr<CreateAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAiStoreUserTaskResponse(doRPCRequest(make_shared<string>("CreateAiStoreUserTask"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::createAiStoreUserTask(shared_ptr<CreateAiStoreUserTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAiStoreUserTaskWithOptions(request, runtime);
}

CreateAiStoreReceiveConfigResponse Alibabacloud_Viapi20210930::Client::createAiStoreReceiveConfigWithOptions(shared_ptr<CreateAiStoreReceiveConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAiStoreReceiveConfigResponse(doRPCRequest(make_shared<string>("CreateAiStoreReceiveConfig"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAiStoreReceiveConfigResponse Alibabacloud_Viapi20210930::Client::createAiStoreReceiveConfig(shared_ptr<CreateAiStoreReceiveConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAiStoreReceiveConfigWithOptions(request, runtime);
}

GetAiStoreReceiveConfigResponse Alibabacloud_Viapi20210930::Client::getAiStoreReceiveConfigWithOptions(shared_ptr<GetAiStoreReceiveConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAiStoreReceiveConfigResponse(doRPCRequest(make_shared<string>("GetAiStoreReceiveConfig"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAiStoreReceiveConfigResponse Alibabacloud_Viapi20210930::Client::getAiStoreReceiveConfig(shared_ptr<GetAiStoreReceiveConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiStoreReceiveConfigWithOptions(request, runtime);
}

EnableAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::enableAiStoreUserTaskWithOptions(shared_ptr<EnableAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableAiStoreUserTaskResponse(doRPCRequest(make_shared<string>("EnableAiStoreUserTask"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableAiStoreUserTaskResponse Alibabacloud_Viapi20210930::Client::enableAiStoreUserTask(shared_ptr<EnableAiStoreUserTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAiStoreUserTaskWithOptions(request, runtime);
}

CreateAiStoreBucketResponse Alibabacloud_Viapi20210930::Client::createAiStoreBucketWithOptions(shared_ptr<CreateAiStoreBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAiStoreBucketResponse(doRPCRequest(make_shared<string>("CreateAiStoreBucket"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAiStoreBucketResponse Alibabacloud_Viapi20210930::Client::createAiStoreBucket(shared_ptr<CreateAiStoreBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAiStoreBucketWithOptions(request, runtime);
}

CheckServiceLinkedRoleForDeletingResponse Alibabacloud_Viapi20210930::Client::checkServiceLinkedRoleForDeletingWithOptions(shared_ptr<CheckServiceLinkedRoleForDeletingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckServiceLinkedRoleForDeletingResponse(doRPCRequest(make_shared<string>("CheckServiceLinkedRoleForDeleting"), make_shared<string>("2021-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckServiceLinkedRoleForDeletingResponse Alibabacloud_Viapi20210930::Client::checkServiceLinkedRoleForDeleting(shared_ptr<CheckServiceLinkedRoleForDeletingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkServiceLinkedRoleForDeletingWithOptions(request, runtime);
}

