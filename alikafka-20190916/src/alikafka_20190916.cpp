// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alikafka_20190916.hpp>
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

using namespace Alibabacloud_Alikafka20190916;

Alibabacloud_Alikafka20190916::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "alikafka.aliyuncs.com"},
    {"ap-southeast-2", "alikafka.aliyuncs.com"},
    {"cn-beijing-finance-1", "alikafka.aliyuncs.com"},
    {"cn-beijing-finance-pop", "alikafka.aliyuncs.com"},
    {"cn-beijing-gov-1", "alikafka.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "alikafka.aliyuncs.com"},
    {"cn-edge-1", "alikafka.aliyuncs.com"},
    {"cn-fujian", "alikafka.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "alikafka.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "alikafka.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "alikafka.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "alikafka.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "alikafka.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "alikafka.aliyuncs.com"},
    {"cn-hangzhou-test-306", "alikafka.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "alikafka.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "alikafka.aliyuncs.com"},
    {"cn-qingdao-nebula", "alikafka.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "alikafka.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "alikafka.aliyuncs.com"},
    {"cn-shanghai-inner", "alikafka.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "alikafka.aliyuncs.com"},
    {"cn-shenzhen-inner", "alikafka.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "alikafka.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "alikafka.aliyuncs.com"},
    {"cn-wuhan", "alikafka.aliyuncs.com"},
    {"cn-wulanchabu", "alikafka.aliyuncs.com"},
    {"cn-yushanfang", "alikafka.aliyuncs.com"},
    {"cn-zhangbei", "alikafka.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "alikafka.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "alikafka.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "alikafka.aliyuncs.com"},
    {"eu-west-1-oxs", "alikafka.aliyuncs.com"},
    {"me-east-1", "alikafka.aliyuncs.com"},
    {"rus-west-1-pop", "alikafka.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("alikafka"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Alikafka20190916::Client::getEndpoint(shared_ptr<string> productId,
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

ConvertPostPayOrderResponse Alibabacloud_Alikafka20190916::Client::convertPostPayOrderWithOptions(shared_ptr<ConvertPostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConvertPostPayOrderResponse(doRPCRequest(make_shared<string>("ConvertPostPayOrder"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConvertPostPayOrderResponse Alibabacloud_Alikafka20190916::Client::convertPostPayOrder(shared_ptr<ConvertPostPayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertPostPayOrderWithOptions(request, runtime);
}

CreateAclResponse Alibabacloud_Alikafka20190916::Client::createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAclResponse(doRPCRequest(make_shared<string>("CreateAcl"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAclResponse Alibabacloud_Alikafka20190916::Client::createAcl(shared_ptr<CreateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclWithOptions(request, runtime);
}

CreateConsumerGroupResponse Alibabacloud_Alikafka20190916::Client::createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConsumerGroupResponse(doRPCRequest(make_shared<string>("CreateConsumerGroup"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConsumerGroupResponse Alibabacloud_Alikafka20190916::Client::createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupWithOptions(request, runtime);
}

CreatePostPayOrderResponse Alibabacloud_Alikafka20190916::Client::createPostPayOrderWithOptions(shared_ptr<CreatePostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePostPayOrderResponse(doRPCRequest(make_shared<string>("CreatePostPayOrder"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePostPayOrderResponse Alibabacloud_Alikafka20190916::Client::createPostPayOrder(shared_ptr<CreatePostPayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPostPayOrderWithOptions(request, runtime);
}

CreatePrePayOrderResponse Alibabacloud_Alikafka20190916::Client::createPrePayOrderWithOptions(shared_ptr<CreatePrePayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePrePayOrderResponse(doRPCRequest(make_shared<string>("CreatePrePayOrder"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePrePayOrderResponse Alibabacloud_Alikafka20190916::Client::createPrePayOrder(shared_ptr<CreatePrePayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrePayOrderWithOptions(request, runtime);
}

CreateSaslUserResponse Alibabacloud_Alikafka20190916::Client::createSaslUserWithOptions(shared_ptr<CreateSaslUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSaslUserResponse(doRPCRequest(make_shared<string>("CreateSaslUser"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSaslUserResponse Alibabacloud_Alikafka20190916::Client::createSaslUser(shared_ptr<CreateSaslUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSaslUserWithOptions(request, runtime);
}

CreateTopicResponse Alibabacloud_Alikafka20190916::Client::createTopicWithOptions(shared_ptr<CreateTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTopicResponse(doRPCRequest(make_shared<string>("CreateTopic"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTopicResponse Alibabacloud_Alikafka20190916::Client::createTopic(shared_ptr<CreateTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTopicWithOptions(request, runtime);
}

DeleteAclResponse Alibabacloud_Alikafka20190916::Client::deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAclResponse(doRPCRequest(make_shared<string>("DeleteAcl"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAclResponse Alibabacloud_Alikafka20190916::Client::deleteAcl(shared_ptr<DeleteAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclWithOptions(request, runtime);
}

DeleteConsumerGroupResponse Alibabacloud_Alikafka20190916::Client::deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConsumerGroupResponse(doRPCRequest(make_shared<string>("DeleteConsumerGroup"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConsumerGroupResponse Alibabacloud_Alikafka20190916::Client::deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_Alikafka20190916::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_Alikafka20190916::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteSaslUserResponse Alibabacloud_Alikafka20190916::Client::deleteSaslUserWithOptions(shared_ptr<DeleteSaslUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSaslUserResponse(doRPCRequest(make_shared<string>("DeleteSaslUser"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSaslUserResponse Alibabacloud_Alikafka20190916::Client::deleteSaslUser(shared_ptr<DeleteSaslUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSaslUserWithOptions(request, runtime);
}

DeleteTopicResponse Alibabacloud_Alikafka20190916::Client::deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTopicResponse(doRPCRequest(make_shared<string>("DeleteTopic"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTopicResponse Alibabacloud_Alikafka20190916::Client::deleteTopic(shared_ptr<DeleteTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTopicWithOptions(request, runtime);
}

DescribeAclsResponse Alibabacloud_Alikafka20190916::Client::describeAclsWithOptions(shared_ptr<DescribeAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAclsResponse(doRPCRequest(make_shared<string>("DescribeAcls"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAclsResponse Alibabacloud_Alikafka20190916::Client::describeAcls(shared_ptr<DescribeAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAclsWithOptions(request, runtime);
}

DescribeNodeStatusResponse Alibabacloud_Alikafka20190916::Client::describeNodeStatusWithOptions(shared_ptr<DescribeNodeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNodeStatusResponse(doRPCRequest(make_shared<string>("DescribeNodeStatus"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNodeStatusResponse Alibabacloud_Alikafka20190916::Client::describeNodeStatus(shared_ptr<DescribeNodeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNodeStatusWithOptions(request, runtime);
}

DescribeSaslUsersResponse Alibabacloud_Alikafka20190916::Client::describeSaslUsersWithOptions(shared_ptr<DescribeSaslUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSaslUsersResponse(doRPCRequest(make_shared<string>("DescribeSaslUsers"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSaslUsersResponse Alibabacloud_Alikafka20190916::Client::describeSaslUsers(shared_ptr<DescribeSaslUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSaslUsersWithOptions(request, runtime);
}

GetAllowedIpListResponse Alibabacloud_Alikafka20190916::Client::getAllowedIpListWithOptions(shared_ptr<GetAllowedIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAllowedIpListResponse(doRPCRequest(make_shared<string>("GetAllowedIpList"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAllowedIpListResponse Alibabacloud_Alikafka20190916::Client::getAllowedIpList(shared_ptr<GetAllowedIpListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAllowedIpListWithOptions(request, runtime);
}

GetConsumerListResponse Alibabacloud_Alikafka20190916::Client::getConsumerListWithOptions(shared_ptr<GetConsumerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConsumerListResponse(doRPCRequest(make_shared<string>("GetConsumerList"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConsumerListResponse Alibabacloud_Alikafka20190916::Client::getConsumerList(shared_ptr<GetConsumerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConsumerListWithOptions(request, runtime);
}

GetConsumerProgressResponse Alibabacloud_Alikafka20190916::Client::getConsumerProgressWithOptions(shared_ptr<GetConsumerProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConsumerProgressResponse(doRPCRequest(make_shared<string>("GetConsumerProgress"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConsumerProgressResponse Alibabacloud_Alikafka20190916::Client::getConsumerProgress(shared_ptr<GetConsumerProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConsumerProgressWithOptions(request, runtime);
}

GetInstanceListResponse Alibabacloud_Alikafka20190916::Client::getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceListResponse(doRPCRequest(make_shared<string>("GetInstanceList"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceListResponse Alibabacloud_Alikafka20190916::Client::getInstanceList(shared_ptr<GetInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceListWithOptions(request, runtime);
}

GetMetaProductListResponse Alibabacloud_Alikafka20190916::Client::getMetaProductListWithOptions(shared_ptr<GetMetaProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaProductListResponse(doRPCRequest(make_shared<string>("GetMetaProductList"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaProductListResponse Alibabacloud_Alikafka20190916::Client::getMetaProductList(shared_ptr<GetMetaProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaProductListWithOptions(request, runtime);
}

GetTopicListResponse Alibabacloud_Alikafka20190916::Client::getTopicListWithOptions(shared_ptr<GetTopicListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTopicListResponse(doRPCRequest(make_shared<string>("GetTopicList"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTopicListResponse Alibabacloud_Alikafka20190916::Client::getTopicList(shared_ptr<GetTopicListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicListWithOptions(request, runtime);
}

GetTopicStatusResponse Alibabacloud_Alikafka20190916::Client::getTopicStatusWithOptions(shared_ptr<GetTopicStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTopicStatusResponse(doRPCRequest(make_shared<string>("GetTopicStatus"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTopicStatusResponse Alibabacloud_Alikafka20190916::Client::getTopicStatus(shared_ptr<GetTopicStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicStatusWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Alikafka20190916::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Alikafka20190916::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyInstanceNameResponse Alibabacloud_Alikafka20190916::Client::modifyInstanceNameWithOptions(shared_ptr<ModifyInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceNameResponse(doRPCRequest(make_shared<string>("ModifyInstanceName"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceNameResponse Alibabacloud_Alikafka20190916::Client::modifyInstanceName(shared_ptr<ModifyInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceNameWithOptions(request, runtime);
}

ModifyPartitionNumResponse Alibabacloud_Alikafka20190916::Client::modifyPartitionNumWithOptions(shared_ptr<ModifyPartitionNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPartitionNumResponse(doRPCRequest(make_shared<string>("ModifyPartitionNum"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPartitionNumResponse Alibabacloud_Alikafka20190916::Client::modifyPartitionNum(shared_ptr<ModifyPartitionNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPartitionNumWithOptions(request, runtime);
}

ModifyTopicRemarkResponse Alibabacloud_Alikafka20190916::Client::modifyTopicRemarkWithOptions(shared_ptr<ModifyTopicRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyTopicRemarkResponse(doRPCRequest(make_shared<string>("ModifyTopicRemark"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyTopicRemarkResponse Alibabacloud_Alikafka20190916::Client::modifyTopicRemark(shared_ptr<ModifyTopicRemarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTopicRemarkWithOptions(request, runtime);
}

ReleaseInstanceResponse Alibabacloud_Alikafka20190916::Client::releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstanceResponse(doRPCRequest(make_shared<string>("ReleaseInstance"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstanceResponse Alibabacloud_Alikafka20190916::Client::releaseInstance(shared_ptr<ReleaseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Alikafka20190916::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartInstanceResponse(doRPCRequest(make_shared<string>("StartInstance"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartInstanceResponse Alibabacloud_Alikafka20190916::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Alikafka20190916::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Alikafka20190916::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Alikafka20190916::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Alikafka20190916::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAllowedIpResponse Alibabacloud_Alikafka20190916::Client::updateAllowedIpWithOptions(shared_ptr<UpdateAllowedIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAllowedIpResponse(doRPCRequest(make_shared<string>("UpdateAllowedIp"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAllowedIpResponse Alibabacloud_Alikafka20190916::Client::updateAllowedIp(shared_ptr<UpdateAllowedIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAllowedIpWithOptions(request, runtime);
}

UpdateInstanceConfigResponse Alibabacloud_Alikafka20190916::Client::updateInstanceConfigWithOptions(shared_ptr<UpdateInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateInstanceConfigResponse(doRPCRequest(make_shared<string>("UpdateInstanceConfig"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateInstanceConfigResponse Alibabacloud_Alikafka20190916::Client::updateInstanceConfig(shared_ptr<UpdateInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceConfigWithOptions(request, runtime);
}

UpgradeInstanceVersionResponse Alibabacloud_Alikafka20190916::Client::upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeInstanceVersionResponse(doRPCRequest(make_shared<string>("UpgradeInstanceVersion"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeInstanceVersionResponse Alibabacloud_Alikafka20190916::Client::upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

UpgradePostPayOrderResponse Alibabacloud_Alikafka20190916::Client::upgradePostPayOrderWithOptions(shared_ptr<UpgradePostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradePostPayOrderResponse(doRPCRequest(make_shared<string>("UpgradePostPayOrder"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradePostPayOrderResponse Alibabacloud_Alikafka20190916::Client::upgradePostPayOrder(shared_ptr<UpgradePostPayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradePostPayOrderWithOptions(request, runtime);
}

UpgradePrePayOrderResponse Alibabacloud_Alikafka20190916::Client::upgradePrePayOrderWithOptions(shared_ptr<UpgradePrePayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradePrePayOrderResponse(doRPCRequest(make_shared<string>("UpgradePrePayOrder"), make_shared<string>("2019-09-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradePrePayOrderResponse Alibabacloud_Alikafka20190916::Client::upgradePrePayOrder(shared_ptr<UpgradePrePayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradePrePayOrderWithOptions(request, runtime);
}

