// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/yundun_dbaudit_20210416.hpp>
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

using namespace Alibabacloud_Yundun-dbaudit20210416;

Alibabacloud_Yundun-dbaudit20210416::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("yundun-dbaudit"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Yundun-dbaudit20210416::Client::getEndpoint(shared_ptr<string> productId,
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

ClearInstanceStorageResponse Alibabacloud_Yundun-dbaudit20210416::Client::clearInstanceStorageWithOptions(shared_ptr<ClearInstanceStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearInstanceStorageResponse(doRPCRequest(make_shared<string>("ClearInstanceStorage"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearInstanceStorageResponse Alibabacloud_Yundun-dbaudit20210416::Client::clearInstanceStorage(shared_ptr<ClearInstanceStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearInstanceStorageWithOptions(request, runtime);
}

CreateInstanceConnectionResponse Alibabacloud_Yundun-dbaudit20210416::Client::createInstanceConnectionWithOptions(shared_ptr<CreateInstanceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceConnectionResponse(doRPCRequest(make_shared<string>("CreateInstanceConnection"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceConnectionResponse Alibabacloud_Yundun-dbaudit20210416::Client::createInstanceConnection(shared_ptr<CreateInstanceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceConnectionWithOptions(request, runtime);
}

DeleteInstanceConnectionResponse Alibabacloud_Yundun-dbaudit20210416::Client::deleteInstanceConnectionWithOptions(shared_ptr<DeleteInstanceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceConnectionResponse(doRPCRequest(make_shared<string>("DeleteInstanceConnection"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceConnectionResponse Alibabacloud_Yundun-dbaudit20210416::Client::deleteInstanceConnection(shared_ptr<DeleteInstanceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceConnectionWithOptions(request, runtime);
}

DescribeInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAttribute"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAttributeWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancesResponse(doRPCRequest(make_shared<string>("DescribeInstances"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancesResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeInstanceStorageResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeInstanceStorageWithOptions(shared_ptr<DescribeInstanceStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceStorageResponse(doRPCRequest(make_shared<string>("DescribeInstanceStorage"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceStorageResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeInstanceStorage(shared_ptr<DescribeInstanceStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceStorageWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Yundun-dbaudit20210416::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Yundun-dbaudit20210416::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_Yundun-dbaudit20210416::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Yundun-dbaudit20210416::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Yundun-dbaudit20210416::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20210416::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAttribute"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAttributeResponse Alibabacloud_Yundun-dbaudit20210416::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyInstanceStorageResponse Alibabacloud_Yundun-dbaudit20210416::Client::modifyInstanceStorageWithOptions(shared_ptr<ModifyInstanceStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceStorageResponse(doRPCRequest(make_shared<string>("ModifyInstanceStorage"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceStorageResponse Alibabacloud_Yundun-dbaudit20210416::Client::modifyInstanceStorage(shared_ptr<ModifyInstanceStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceStorageWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Yundun-dbaudit20210416::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveResourceGroupResponse(doRPCRequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Yundun-dbaudit20210416::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

RefundInstanceResponse Alibabacloud_Yundun-dbaudit20210416::Client::refundInstanceWithOptions(shared_ptr<RefundInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefundInstanceResponse(doRPCRequest(make_shared<string>("RefundInstance"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefundInstanceResponse Alibabacloud_Yundun-dbaudit20210416::Client::refundInstance(shared_ptr<RefundInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundInstanceWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Yundun-dbaudit20210416::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Yundun-dbaudit20210416::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Yundun-dbaudit20210416::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Yundun-dbaudit20210416::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateInstanceConnectionResponse Alibabacloud_Yundun-dbaudit20210416::Client::updateInstanceConnectionWithOptions(shared_ptr<UpdateInstanceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateInstanceConnectionResponse(doRPCRequest(make_shared<string>("UpdateInstanceConnection"), make_shared<string>("2021-04-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateInstanceConnectionResponse Alibabacloud_Yundun-dbaudit20210416::Client::updateInstanceConnection(shared_ptr<UpdateInstanceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceConnectionWithOptions(request, runtime);
}

