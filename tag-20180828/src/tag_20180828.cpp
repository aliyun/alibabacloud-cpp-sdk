// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/tag_20180828.hpp>
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

using namespace Alibabacloud_Tag20180828;

Alibabacloud_Tag20180828::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "tag.aliyuncs.com"},
    {"cn-beijing", "tag.aliyuncs.com"},
    {"cn-hangzhou", "tag.aliyuncs.com"},
    {"cn-shanghai", "tag.aliyuncs.com"},
    {"cn-shenzhen", "tag.aliyuncs.com"},
    {"cn-hongkong", "tag.aliyuncs.com"},
    {"ap-southeast-1", "tag.aliyuncs.com"},
    {"us-west-1", "tag.aliyuncs.com"},
    {"us-east-1", "tag.aliyuncs.com"},
    {"cn-hangzhou-finance", "tag.aliyuncs.com"},
    {"cn-shanghai-finance-1", "tag.aliyuncs.com"},
    {"ap-northeast-2-pop", "tag.aliyuncs.com"},
    {"cn-beijing-finance-pop", "tag.aliyuncs.com"},
    {"cn-beijing-gov-1", "tag.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "tag.aliyuncs.com"},
    {"cn-edge-1", "tag.aliyuncs.com"},
    {"cn-fujian", "tag.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "tag.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "tag.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "tag.aliyuncs.com"},
    {"cn-hangzhou-test-306", "tag.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "tag.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "tag.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "tag.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "tag.aliyuncs.com"},
    {"cn-shanghai-inner", "tag.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "tag.aliyuncs.com"},
    {"cn-shenzhen-inner", "tag.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "tag.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "tag.aliyuncs.com"},
    {"cn-wuhan", "tag.aliyuncs.com"},
    {"cn-yushanfang", "tag.aliyuncs.com"},
    {"cn-zhangbei", "tag.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "tag.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "tag.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "tag.aliyuncs.com"},
    {"eu-west-1-oxs", "tag.cn-shenzhen-cloudstone.aliyuncs.com"},
    {"rus-west-1-pop", "tag.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("tag"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Tag20180828::Client::getEndpoint(shared_ptr<string> productId,
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

AttachPolicyResponse Alibabacloud_Tag20180828::Client::attachPolicyWithOptions(shared_ptr<AttachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachPolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachPolicyResponse(callApi(params, req, runtime));
}

AttachPolicyResponse Alibabacloud_Tag20180828::Client::attachPolicy(shared_ptr<AttachPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachPolicyWithOptions(request, runtime);
}

CheckCreatedByEnabledResponse Alibabacloud_Tag20180828::Client::checkCreatedByEnabledWithOptions(shared_ptr<CheckCreatedByEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerId)) {
    query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCreatedByEnabled"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckCreatedByEnabledResponse(callApi(params, req, runtime));
}

CheckCreatedByEnabledResponse Alibabacloud_Tag20180828::Client::checkCreatedByEnabled(shared_ptr<CheckCreatedByEnabledRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCreatedByEnabledWithOptions(request, runtime);
}

CloseCreatedByResponse Alibabacloud_Tag20180828::Client::closeCreatedByWithOptions(shared_ptr<CloseCreatedByRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerId)) {
    query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseCreatedBy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseCreatedByResponse(callApi(params, req, runtime));
}

CloseCreatedByResponse Alibabacloud_Tag20180828::Client::closeCreatedBy(shared_ptr<CloseCreatedByRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeCreatedByWithOptions(request, runtime);
}

CreatePolicyResponse Alibabacloud_Tag20180828::Client::createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyContent)) {
    query->insert(pair<string, string>("PolicyContent", *request->policyContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyDesc)) {
    query->insert(pair<string, string>("PolicyDesc", *request->policyDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolicyResponse(callApi(params, req, runtime));
}

CreatePolicyResponse Alibabacloud_Tag20180828::Client::createPolicy(shared_ptr<CreatePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyWithOptions(request, runtime);
}

CreateTagsResponse Alibabacloud_Tag20180828::Client::createTagsWithOptions(shared_ptr<CreateTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTagsRequestTagKeyValueParamList>>(request->tagKeyValueParamList)) {
    query->insert(pair<string, vector<CreateTagsRequestTagKeyValueParamList>>("TagKeyValueParamList", *request->tagKeyValueParamList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTags"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTagsResponse(callApi(params, req, runtime));
}

CreateTagsResponse Alibabacloud_Tag20180828::Client::createTags(shared_ptr<CreateTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTagsWithOptions(request, runtime);
}

DeletePolicyResponse Alibabacloud_Tag20180828::Client::deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyResponse(callApi(params, req, runtime));
}

DeletePolicyResponse Alibabacloud_Tag20180828::Client::deletePolicy(shared_ptr<DeletePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyWithOptions(request, runtime);
}

DeleteTagResponse Alibabacloud_Tag20180828::Client::deleteTagWithOptions(shared_ptr<DeleteTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTag"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTagResponse(callApi(params, req, runtime));
}

DeleteTagResponse Alibabacloud_Tag20180828::Client::deleteTag(shared_ptr<DeleteTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Tag20180828::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Tag20180828::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetachPolicyResponse Alibabacloud_Tag20180828::Client::detachPolicyWithOptions(shared_ptr<DetachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachPolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachPolicyResponse(callApi(params, req, runtime));
}

DetachPolicyResponse Alibabacloud_Tag20180828::Client::detachPolicy(shared_ptr<DetachPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachPolicyWithOptions(request, runtime);
}

DisablePolicyTypeResponse Alibabacloud_Tag20180828::Client::disablePolicyTypeWithOptions(shared_ptr<DisablePolicyTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerId)) {
    query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisablePolicyType"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisablePolicyTypeResponse(callApi(params, req, runtime));
}

DisablePolicyTypeResponse Alibabacloud_Tag20180828::Client::disablePolicyType(shared_ptr<DisablePolicyTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disablePolicyTypeWithOptions(request, runtime);
}

EnablePolicyTypeResponse Alibabacloud_Tag20180828::Client::enablePolicyTypeWithOptions(shared_ptr<EnablePolicyTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerId)) {
    query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnablePolicyType"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnablePolicyTypeResponse(callApi(params, req, runtime));
}

EnablePolicyTypeResponse Alibabacloud_Tag20180828::Client::enablePolicyType(shared_ptr<EnablePolicyTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enablePolicyTypeWithOptions(request, runtime);
}

GenerateConfigRuleReportResponse Alibabacloud_Tag20180828::Client::generateConfigRuleReportWithOptions(shared_ptr<GenerateConfigRuleReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateConfigRuleReport"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateConfigRuleReportResponse(callApi(params, req, runtime));
}

GenerateConfigRuleReportResponse Alibabacloud_Tag20180828::Client::generateConfigRuleReport(shared_ptr<GenerateConfigRuleReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateConfigRuleReportWithOptions(request, runtime);
}

GetConfigRuleReportResponse Alibabacloud_Tag20180828::Client::getConfigRuleReportWithOptions(shared_ptr<GetConfigRuleReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfigRuleReport"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigRuleReportResponse(callApi(params, req, runtime));
}

GetConfigRuleReportResponse Alibabacloud_Tag20180828::Client::getConfigRuleReport(shared_ptr<GetConfigRuleReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigRuleReportWithOptions(request, runtime);
}

GetEffectivePolicyResponse Alibabacloud_Tag20180828::Client::getEffectivePolicyWithOptions(shared_ptr<GetEffectivePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEffectivePolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEffectivePolicyResponse(callApi(params, req, runtime));
}

GetEffectivePolicyResponse Alibabacloud_Tag20180828::Client::getEffectivePolicy(shared_ptr<GetEffectivePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEffectivePolicyWithOptions(request, runtime);
}

GetPolicyResponse Alibabacloud_Tag20180828::Client::getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPolicyResponse(callApi(params, req, runtime));
}

GetPolicyResponse Alibabacloud_Tag20180828::Client::getPolicy(shared_ptr<GetPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolicyWithOptions(request, runtime);
}

GetPolicyEnableStatusResponse Alibabacloud_Tag20180828::Client::getPolicyEnableStatusWithOptions(shared_ptr<GetPolicyEnableStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerId)) {
    query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPolicyEnableStatus"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPolicyEnableStatusResponse(callApi(params, req, runtime));
}

GetPolicyEnableStatusResponse Alibabacloud_Tag20180828::Client::getPolicyEnableStatus(shared_ptr<GetPolicyEnableStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolicyEnableStatusWithOptions(request, runtime);
}

ListConfigRulesForTargetResponse Alibabacloud_Tag20180828::Client::listConfigRulesForTargetWithOptions(shared_ptr<ListConfigRulesForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    query->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigRulesForTarget"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigRulesForTargetResponse(callApi(params, req, runtime));
}

ListConfigRulesForTargetResponse Alibabacloud_Tag20180828::Client::listConfigRulesForTarget(shared_ptr<ListConfigRulesForTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigRulesForTargetWithOptions(request, runtime);
}

ListPoliciesResponse Alibabacloud_Tag20180828::Client::listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyIds)) {
    query->insert(pair<string, vector<string>>("PolicyIds", *request->policyIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyNames)) {
    query->insert(pair<string, vector<string>>("PolicyNames", *request->policyNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPolicies"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPoliciesResponse(callApi(params, req, runtime));
}

ListPoliciesResponse Alibabacloud_Tag20180828::Client::listPolicies(shared_ptr<ListPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPoliciesWithOptions(request, runtime);
}

ListPoliciesForTargetResponse Alibabacloud_Tag20180828::Client::listPoliciesForTargetWithOptions(shared_ptr<ListPoliciesForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPoliciesForTarget"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPoliciesForTargetResponse(callApi(params, req, runtime));
}

ListPoliciesForTargetResponse Alibabacloud_Tag20180828::Client::listPoliciesForTarget(shared_ptr<ListPoliciesForTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPoliciesForTargetWithOptions(request, runtime);
}

ListResourcesByTagResponse Alibabacloud_Tag20180828::Client::listResourcesByTagWithOptions(shared_ptr<ListResourcesByTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzyType)) {
    query->insert(pair<string, string>("FuzzyType", *request->fuzzyType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeAllTags)) {
    query->insert(pair<string, bool>("IncludeAllTags", *request->includeAllTags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<ListResourcesByTagRequestTagFilter>(request->tagFilter)) {
    query->insert(pair<string, ListResourcesByTagRequestTagFilter>("TagFilter", *request->tagFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourcesByTag"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesByTagResponse(callApi(params, req, runtime));
}

ListResourcesByTagResponse Alibabacloud_Tag20180828::Client::listResourcesByTag(shared_ptr<ListResourcesByTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcesByTagWithOptions(request, runtime);
}

ListSupportResourceTypesResponse Alibabacloud_Tag20180828::Client::listSupportResourceTypesWithOptions(shared_ptr<ListSupportResourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTye)) {
    query->insert(pair<string, string>("ResourceTye", *request->resourceTye));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showItems)) {
    query->insert(pair<string, bool>("ShowItems", *request->showItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supportCode)) {
    query->insert(pair<string, string>("SupportCode", *request->supportCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSupportResourceTypes"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSupportResourceTypesResponse(callApi(params, req, runtime));
}

ListSupportResourceTypesResponse Alibabacloud_Tag20180828::Client::listSupportResourceTypes(shared_ptr<ListSupportResourceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSupportResourceTypesWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Tag20180828::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzyType)) {
    query->insert(pair<string, string>("FuzzyType", *request->fuzzyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<ListTagKeysRequestTagFilter>(request->tagFilter)) {
    query->insert(pair<string, ListTagKeysRequestTagFilter>("TagFilter", *request->tagFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagKeysResponse(callApi(params, req, runtime));
}

ListTagKeysResponse Alibabacloud_Tag20180828::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Tag20180828::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceARN)) {
    query->insert(pair<string, vector<string>>("ResourceARN", *request->resourceARN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Tag20180828::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_Tag20180828::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzyType)) {
    query->insert(pair<string, string>("FuzzyType", *request->fuzzyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<ListTagValuesRequestTagFilter>(request->tagFilter)) {
    query->insert(pair<string, ListTagValuesRequestTagFilter>("TagFilter", *request->tagFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagValuesResponse(callApi(params, req, runtime));
}

ListTagValuesResponse Alibabacloud_Tag20180828::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListTargetsForPolicyResponse Alibabacloud_Tag20180828::Client::listTargetsForPolicyWithOptions(shared_ptr<ListTargetsForPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTargetsForPolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTargetsForPolicyResponse(callApi(params, req, runtime));
}

ListTargetsForPolicyResponse Alibabacloud_Tag20180828::Client::listTargetsForPolicy(shared_ptr<ListTargetsForPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTargetsForPolicyWithOptions(request, runtime);
}

ModifyPolicyResponse Alibabacloud_Tag20180828::Client::modifyPolicyWithOptions(shared_ptr<ModifyPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyContent)) {
    query->insert(pair<string, string>("PolicyContent", *request->policyContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyDesc)) {
    query->insert(pair<string, string>("PolicyDesc", *request->policyDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolicy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPolicyResponse(callApi(params, req, runtime));
}

ModifyPolicyResponse Alibabacloud_Tag20180828::Client::modifyPolicy(shared_ptr<ModifyPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolicyWithOptions(request, runtime);
}

OpenCreatedByResponse Alibabacloud_Tag20180828::Client::openCreatedByWithOptions(shared_ptr<OpenCreatedByRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerId)) {
    query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenCreatedBy"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenCreatedByResponse(callApi(params, req, runtime));
}

OpenCreatedByResponse Alibabacloud_Tag20180828::Client::openCreatedBy(shared_ptr<OpenCreatedByRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openCreatedByWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Tag20180828::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceARN)) {
    query->insert(pair<string, vector<string>>("ResourceARN", *request->resourceARN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Tag20180828::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Tag20180828::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceARN)) {
    query->insert(pair<string, vector<string>>("ResourceARN", *request->resourceARN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2018-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Tag20180828::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

