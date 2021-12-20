// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/vod_20170321.hpp>
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

using namespace Alibabacloud_Vod20170321;

Alibabacloud_Vod20170321::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "vod.aliyuncs.com"},
    {"ap-southeast-2", "vod.aliyuncs.com"},
    {"ap-southeast-3", "vod.aliyuncs.com"},
    {"cn-beijing-finance-1", "vod.aliyuncs.com"},
    {"cn-beijing-finance-pop", "vod.aliyuncs.com"},
    {"cn-beijing-gov-1", "vod.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "vod.aliyuncs.com"},
    {"cn-chengdu", "vod.aliyuncs.com"},
    {"cn-edge-1", "vod.aliyuncs.com"},
    {"cn-fujian", "vod.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "vod.aliyuncs.com"},
    {"cn-hangzhou", "vod.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "vod.aliyuncs.com"},
    {"cn-hangzhou-finance", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "vod.aliyuncs.com"},
    {"cn-hangzhou-test-306", "vod.aliyuncs.com"},
    {"cn-hongkong", "vod.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "vod.aliyuncs.com"},
    {"cn-huhehaote", "vod.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "vod.aliyuncs.com"},
    {"cn-qingdao", "vod.aliyuncs.com"},
    {"cn-qingdao-nebula", "vod.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "vod.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "vod.aliyuncs.com"},
    {"cn-shanghai-finance-1", "vod.aliyuncs.com"},
    {"cn-shanghai-inner", "vod.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "vod.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "vod.aliyuncs.com"},
    {"cn-shenzhen-inner", "vod.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "vod.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "vod.aliyuncs.com"},
    {"cn-wuhan", "vod.aliyuncs.com"},
    {"cn-wulanchabu", "vod.aliyuncs.com"},
    {"cn-yushanfang", "vod.aliyuncs.com"},
    {"cn-zhangbei", "vod.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "vod.aliyuncs.com"},
    {"cn-zhangjiakou", "vod.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "vod.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "vod.aliyuncs.com"},
    {"eu-west-1", "vod.aliyuncs.com"},
    {"eu-west-1-oxs", "vod.aliyuncs.com"},
    {"me-east-1", "vod.aliyuncs.com"},
    {"rus-west-1-pop", "vod.aliyuncs.com"},
    {"us-east-1", "vod.aliyuncs.com"},
    {"us-west-1", "vod.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("vod"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Vod20170321::Client::getEndpoint(shared_ptr<string> productId,
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

AddAITemplateResponse Alibabacloud_Vod20170321::Client::addAITemplateWithOptions(shared_ptr<AddAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  query->insert(pair<string, string>("TemplateName", *request->templateName));
  query->insert(pair<string, string>("TemplateType", *request->templateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAITemplateResponse(callApi(params, req, runtime));
}

AddAITemplateResponse Alibabacloud_Vod20170321::Client::addAITemplate(shared_ptr<AddAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAITemplateWithOptions(request, runtime);
}

AddCategoryResponse Alibabacloud_Vod20170321::Client::addCategoryWithOptions(shared_ptr<AddCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CateName", *request->cateName));
  query->insert(pair<string, long>("ParentId", *request->parentId));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCategory"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCategoryResponse(callApi(params, req, runtime));
}

AddCategoryResponse Alibabacloud_Vod20170321::Client::addCategory(shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCategoryWithOptions(request, runtime);
}

AddEditingProjectResponse Alibabacloud_Vod20170321::Client::addEditingProjectWithOptions(shared_ptr<AddEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Division", *request->division));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Timeline", *request->timeline));
  query->insert(pair<string, string>("Title", *request->title));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEditingProject"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEditingProjectResponse(callApi(params, req, runtime));
}

AddEditingProjectResponse Alibabacloud_Vod20170321::Client::addEditingProject(shared_ptr<AddEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEditingProjectWithOptions(request, runtime);
}

AddTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::addTranscodeTemplateGroupWithOptions(shared_ptr<AddTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("TranscodeTemplateGroupId", *request->transcodeTemplateGroupId));
  query->insert(pair<string, string>("TranscodeTemplateList", *request->transcodeTemplateList));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTranscodeTemplateGroup"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTranscodeTemplateGroupResponse(callApi(params, req, runtime));
}

AddTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::addTranscodeTemplateGroup(shared_ptr<AddTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTranscodeTemplateGroupWithOptions(request, runtime);
}

AddVodDomainResponse Alibabacloud_Vod20170321::Client::addVodDomainWithOptions(shared_ptr<AddVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CheckUrl", *request->checkUrl));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("Scope", *request->scope));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("Sources", *request->sources));
  query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddVodDomain"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddVodDomainResponse(callApi(params, req, runtime));
}

AddVodDomainResponse Alibabacloud_Vod20170321::Client::addVodDomain(shared_ptr<AddVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVodDomainWithOptions(request, runtime);
}

AddVodTemplateResponse Alibabacloud_Vod20170321::Client::addVodTemplateWithOptions(shared_ptr<AddVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  query->insert(pair<string, string>("TemplateType", *request->templateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddVodTemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddVodTemplateResponse(callApi(params, req, runtime));
}

AddVodTemplateResponse Alibabacloud_Vod20170321::Client::addVodTemplate(shared_ptr<AddVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVodTemplateWithOptions(request, runtime);
}

AddWatermarkResponse Alibabacloud_Vod20170321::Client::addWatermarkWithOptions(shared_ptr<AddWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("FileUrl", *request->fileUrl));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("Type", *request->type));
  query->insert(pair<string, string>("WatermarkConfig", *request->watermarkConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWatermark"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWatermarkResponse(callApi(params, req, runtime));
}

AddWatermarkResponse Alibabacloud_Vod20170321::Client::addWatermark(shared_ptr<AddWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addWatermarkWithOptions(request, runtime);
}

AttachAppPolicyToIdentityResponse Alibabacloud_Vod20170321::Client::attachAppPolicyToIdentityWithOptions(shared_ptr<AttachAppPolicyToIdentityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("IdentityName", *request->identityName));
  query->insert(pair<string, string>("IdentityType", *request->identityType));
  query->insert(pair<string, string>("PolicyNames", *request->policyNames));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachAppPolicyToIdentity"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachAppPolicyToIdentityResponse(callApi(params, req, runtime));
}

AttachAppPolicyToIdentityResponse Alibabacloud_Vod20170321::Client::attachAppPolicyToIdentity(shared_ptr<AttachAppPolicyToIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachAppPolicyToIdentityWithOptions(request, runtime);
}

BatchSetVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::batchSetVodDomainConfigsWithOptions(shared_ptr<BatchSetVodDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainNames", *request->domainNames));
  query->insert(pair<string, string>("Functions", *request->functions));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetVodDomainConfigs"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetVodDomainConfigsResponse(callApi(params, req, runtime));
}

BatchSetVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::batchSetVodDomainConfigs(shared_ptr<BatchSetVodDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetVodDomainConfigsWithOptions(request, runtime);
}

BatchStartVodDomainResponse Alibabacloud_Vod20170321::Client::batchStartVodDomainWithOptions(shared_ptr<BatchStartVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainNames", *request->domainNames));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchStartVodDomain"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchStartVodDomainResponse(callApi(params, req, runtime));
}

BatchStartVodDomainResponse Alibabacloud_Vod20170321::Client::batchStartVodDomain(shared_ptr<BatchStartVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStartVodDomainWithOptions(request, runtime);
}

BatchStopVodDomainResponse Alibabacloud_Vod20170321::Client::batchStopVodDomainWithOptions(shared_ptr<BatchStopVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainNames", *request->domainNames));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchStopVodDomain"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchStopVodDomainResponse(callApi(params, req, runtime));
}

BatchStopVodDomainResponse Alibabacloud_Vod20170321::Client::batchStopVodDomain(shared_ptr<BatchStopVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStopVodDomainWithOptions(request, runtime);
}

CancelUrlUploadJobsResponse Alibabacloud_Vod20170321::Client::cancelUrlUploadJobsWithOptions(shared_ptr<CancelUrlUploadJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobIds", *request->jobIds));
  query->insert(pair<string, string>("UploadUrls", *request->uploadUrls));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelUrlUploadJobs"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelUrlUploadJobsResponse(callApi(params, req, runtime));
}

CancelUrlUploadJobsResponse Alibabacloud_Vod20170321::Client::cancelUrlUploadJobs(shared_ptr<CancelUrlUploadJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelUrlUploadJobsWithOptions(request, runtime);
}

CreateAppInfoResponse Alibabacloud_Vod20170321::Client::createAppInfoWithOptions(shared_ptr<CreateAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, string>("Description", *request->description));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppInfoResponse(callApi(params, req, runtime));
}

CreateAppInfoResponse Alibabacloud_Vod20170321::Client::createAppInfo(shared_ptr<CreateAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppInfoWithOptions(request, runtime);
}

CreateAuditResponse Alibabacloud_Vod20170321::Client::createAuditWithOptions(shared_ptr<CreateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuditContent", *request->auditContent));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAudit"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuditResponse(callApi(params, req, runtime));
}

CreateAuditResponse Alibabacloud_Vod20170321::Client::createAudit(shared_ptr<CreateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuditWithOptions(request, runtime);
}

CreateUploadAttachedMediaResponse Alibabacloud_Vod20170321::Client::createUploadAttachedMediaWithOptions(shared_ptr<CreateUploadAttachedMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("BusinessType", *request->businessType));
  query->insert(pair<string, string>("CateIds", *request->cateIds));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("FileName", *request->fileName));
  query->insert(pair<string, string>("FileSize", *request->fileSize));
  query->insert(pair<string, string>("MediaExt", *request->mediaExt));
  query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadAttachedMedia"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadAttachedMediaResponse(callApi(params, req, runtime));
}

CreateUploadAttachedMediaResponse Alibabacloud_Vod20170321::Client::createUploadAttachedMedia(shared_ptr<CreateUploadAttachedMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadAttachedMediaWithOptions(request, runtime);
}

CreateUploadImageResponse Alibabacloud_Vod20170321::Client::createUploadImageWithOptions(shared_ptr<CreateUploadImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, long>("CateId", *request->cateId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("ImageExt", *request->imageExt));
  query->insert(pair<string, string>("ImageType", *request->imageType));
  query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadImage"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadImageResponse(callApi(params, req, runtime));
}

CreateUploadImageResponse Alibabacloud_Vod20170321::Client::createUploadImage(shared_ptr<CreateUploadImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadImageWithOptions(request, runtime);
}

CreateUploadVideoResponse Alibabacloud_Vod20170321::Client::createUploadVideoWithOptions(shared_ptr<CreateUploadVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, long>("CateId", *request->cateId));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("FileName", *request->fileName));
  query->insert(pair<string, long>("FileSize", *request->fileSize));
  query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("TemplateGroupId", *request->templateGroupId));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadVideo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadVideoResponse(callApi(params, req, runtime));
}

CreateUploadVideoResponse Alibabacloud_Vod20170321::Client::createUploadVideo(shared_ptr<CreateUploadVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadVideoWithOptions(request, runtime);
}

CreateVodRealTimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::createVodRealTimeLogDeliveryWithOptions(shared_ptr<CreateVodRealTimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVodRealTimeLogDelivery"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVodRealTimeLogDeliveryResponse(callApi(params, req, runtime));
}

CreateVodRealTimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::createVodRealTimeLogDelivery(shared_ptr<CreateVodRealTimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVodRealTimeLogDeliveryWithOptions(request, runtime);
}

DeleteAIImageInfosResponse Alibabacloud_Vod20170321::Client::deleteAIImageInfosWithOptions(shared_ptr<DeleteAIImageInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AIImageInfoIds", *request->AIImageInfoIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAIImageInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAIImageInfosResponse(callApi(params, req, runtime));
}

DeleteAIImageInfosResponse Alibabacloud_Vod20170321::Client::deleteAIImageInfos(shared_ptr<DeleteAIImageInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAIImageInfosWithOptions(request, runtime);
}

DeleteAITemplateResponse Alibabacloud_Vod20170321::Client::deleteAITemplateWithOptions(shared_ptr<DeleteAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAITemplateResponse(callApi(params, req, runtime));
}

DeleteAITemplateResponse Alibabacloud_Vod20170321::Client::deleteAITemplate(shared_ptr<DeleteAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAITemplateWithOptions(request, runtime);
}

DeleteAppInfoResponse Alibabacloud_Vod20170321::Client::deleteAppInfoWithOptions(shared_ptr<DeleteAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppInfoResponse(callApi(params, req, runtime));
}

DeleteAppInfoResponse Alibabacloud_Vod20170321::Client::deleteAppInfo(shared_ptr<DeleteAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppInfoWithOptions(request, runtime);
}

DeleteAttachedMediaResponse Alibabacloud_Vod20170321::Client::deleteAttachedMediaWithOptions(shared_ptr<DeleteAttachedMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAttachedMedia"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAttachedMediaResponse(callApi(params, req, runtime));
}

DeleteAttachedMediaResponse Alibabacloud_Vod20170321::Client::deleteAttachedMedia(shared_ptr<DeleteAttachedMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAttachedMediaWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_Vod20170321::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CateId", *request->cateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCategory"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCategoryResponse(callApi(params, req, runtime));
}

DeleteCategoryResponse Alibabacloud_Vod20170321::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

DeleteDynamicImageResponse Alibabacloud_Vod20170321::Client::deleteDynamicImageWithOptions(shared_ptr<DeleteDynamicImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DynamicImageIds", *request->dynamicImageIds));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDynamicImage"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDynamicImageResponse(callApi(params, req, runtime));
}

DeleteDynamicImageResponse Alibabacloud_Vod20170321::Client::deleteDynamicImage(shared_ptr<DeleteDynamicImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDynamicImageWithOptions(request, runtime);
}

DeleteEditingProjectResponse Alibabacloud_Vod20170321::Client::deleteEditingProjectWithOptions(shared_ptr<DeleteEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProjectIds", *request->projectIds));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProject"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEditingProjectResponse(callApi(params, req, runtime));
}

DeleteEditingProjectResponse Alibabacloud_Vod20170321::Client::deleteEditingProject(shared_ptr<DeleteEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_Vod20170321::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DeleteImageType", *request->deleteImageType));
  query->insert(pair<string, string>("ImageIds", *request->imageIds));
  query->insert(pair<string, string>("ImageType", *request->imageType));
  query->insert(pair<string, string>("ImageURLs", *request->imageURLs));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImage"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteImageResponse(callApi(params, req, runtime));
}

DeleteImageResponse Alibabacloud_Vod20170321::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteMessageCallbackResponse Alibabacloud_Vod20170321::Client::deleteMessageCallbackWithOptions(shared_ptr<DeleteMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMessageCallback"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMessageCallbackResponse(callApi(params, req, runtime));
}

DeleteMessageCallbackResponse Alibabacloud_Vod20170321::Client::deleteMessageCallback(shared_ptr<DeleteMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMessageCallbackWithOptions(request, runtime);
}

DeleteMezzaninesResponse Alibabacloud_Vod20170321::Client::deleteMezzaninesWithOptions(shared_ptr<DeleteMezzaninesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("Force", *request->force));
  query->insert(pair<string, string>("VideoIds", *request->videoIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMezzanines"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMezzaninesResponse(callApi(params, req, runtime));
}

DeleteMezzaninesResponse Alibabacloud_Vod20170321::Client::deleteMezzanines(shared_ptr<DeleteMezzaninesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMezzaninesWithOptions(request, runtime);
}

DeleteMultipartUploadResponse Alibabacloud_Vod20170321::Client::deleteMultipartUploadWithOptions(shared_ptr<DeleteMultipartUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("MediaType", *request->mediaType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMultipartUpload"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMultipartUploadResponse(callApi(params, req, runtime));
}

DeleteMultipartUploadResponse Alibabacloud_Vod20170321::Client::deleteMultipartUpload(shared_ptr<DeleteMultipartUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMultipartUploadWithOptions(request, runtime);
}

DeleteStreamResponse Alibabacloud_Vod20170321::Client::deleteStreamWithOptions(shared_ptr<DeleteStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobIds", *request->jobIds));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStream"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStreamResponse(callApi(params, req, runtime));
}

DeleteStreamResponse Alibabacloud_Vod20170321::Client::deleteStream(shared_ptr<DeleteStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStreamWithOptions(request, runtime);
}

DeleteTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::deleteTranscodeTemplateGroupWithOptions(shared_ptr<DeleteTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ForceDelGroup", *request->forceDelGroup));
  query->insert(pair<string, string>("TranscodeTemplateGroupId", *request->transcodeTemplateGroupId));
  query->insert(pair<string, string>("TranscodeTemplateIds", *request->transcodeTemplateIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTranscodeTemplateGroup"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTranscodeTemplateGroupResponse(callApi(params, req, runtime));
}

DeleteTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::deleteTranscodeTemplateGroup(shared_ptr<DeleteTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTranscodeTemplateGroupWithOptions(request, runtime);
}

DeleteVideoResponse Alibabacloud_Vod20170321::Client::deleteVideoWithOptions(shared_ptr<DeleteVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VideoIds", *request->videoIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVideo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVideoResponse(callApi(params, req, runtime));
}

DeleteVideoResponse Alibabacloud_Vod20170321::Client::deleteVideo(shared_ptr<DeleteVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVideoWithOptions(request, runtime);
}

DeleteVodDomainResponse Alibabacloud_Vod20170321::Client::deleteVodDomainWithOptions(shared_ptr<DeleteVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodDomain"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVodDomainResponse(callApi(params, req, runtime));
}

DeleteVodDomainResponse Alibabacloud_Vod20170321::Client::deleteVodDomain(shared_ptr<DeleteVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodDomainWithOptions(request, runtime);
}

DeleteVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::deleteVodRealtimeLogDeliveryWithOptions(shared_ptr<DeleteVodRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodRealtimeLogDelivery"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVodRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DeleteVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::deleteVodRealtimeLogDelivery(shared_ptr<DeleteVodRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodRealtimeLogDeliveryWithOptions(request, runtime);
}

DeleteVodSpecificConfigResponse Alibabacloud_Vod20170321::Client::deleteVodSpecificConfigWithOptions(shared_ptr<DeleteVodSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConfigId", *request->configId));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodSpecificConfig"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVodSpecificConfigResponse(callApi(params, req, runtime));
}

DeleteVodSpecificConfigResponse Alibabacloud_Vod20170321::Client::deleteVodSpecificConfig(shared_ptr<DeleteVodSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodSpecificConfigWithOptions(request, runtime);
}

DeleteVodTemplateResponse Alibabacloud_Vod20170321::Client::deleteVodTemplateWithOptions(shared_ptr<DeleteVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VodTemplateId", *request->vodTemplateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodTemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVodTemplateResponse(callApi(params, req, runtime));
}

DeleteVodTemplateResponse Alibabacloud_Vod20170321::Client::deleteVodTemplate(shared_ptr<DeleteVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodTemplateWithOptions(request, runtime);
}

DeleteWatermarkResponse Alibabacloud_Vod20170321::Client::deleteWatermarkWithOptions(shared_ptr<DeleteWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("WatermarkId", *request->watermarkId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWatermark"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWatermarkResponse(callApi(params, req, runtime));
}

DeleteWatermarkResponse Alibabacloud_Vod20170321::Client::deleteWatermark(shared_ptr<DeleteWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWatermarkWithOptions(request, runtime);
}

DescribePlayTopVideosResponse Alibabacloud_Vod20170321::Client::describePlayTopVideosWithOptions(shared_ptr<DescribePlayTopVideosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BizDate", *request->bizDate));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayTopVideos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayTopVideosResponse(callApi(params, req, runtime));
}

DescribePlayTopVideosResponse Alibabacloud_Vod20170321::Client::describePlayTopVideos(shared_ptr<DescribePlayTopVideosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayTopVideosWithOptions(request, runtime);
}

DescribePlayUserAvgResponse Alibabacloud_Vod20170321::Client::describePlayUserAvgWithOptions(shared_ptr<DescribePlayUserAvgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayUserAvg"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayUserAvgResponse(callApi(params, req, runtime));
}

DescribePlayUserAvgResponse Alibabacloud_Vod20170321::Client::describePlayUserAvg(shared_ptr<DescribePlayUserAvgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayUserAvgWithOptions(request, runtime);
}

DescribePlayUserTotalResponse Alibabacloud_Vod20170321::Client::describePlayUserTotalWithOptions(shared_ptr<DescribePlayUserTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayUserTotal"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayUserTotalResponse(callApi(params, req, runtime));
}

DescribePlayUserTotalResponse Alibabacloud_Vod20170321::Client::describePlayUserTotal(shared_ptr<DescribePlayUserTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayUserTotalWithOptions(request, runtime);
}

DescribePlayVideoStatisResponse Alibabacloud_Vod20170321::Client::describePlayVideoStatisWithOptions(shared_ptr<DescribePlayVideoStatisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayVideoStatis"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayVideoStatisResponse(callApi(params, req, runtime));
}

DescribePlayVideoStatisResponse Alibabacloud_Vod20170321::Client::describePlayVideoStatis(shared_ptr<DescribePlayVideoStatisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayVideoStatisWithOptions(request, runtime);
}

DescribeVodAIDataResponse Alibabacloud_Vod20170321::Client::describeVodAIDataWithOptions(shared_ptr<DescribeVodAIDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AIType", *request->AIType));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("Region", *request->region));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodAIData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodAIDataResponse(callApi(params, req, runtime));
}

DescribeVodAIDataResponse Alibabacloud_Vod20170321::Client::describeVodAIData(shared_ptr<DescribeVodAIDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodAIDataWithOptions(request, runtime);
}

DescribeVodCertificateListResponse Alibabacloud_Vod20170321::Client::describeVodCertificateListWithOptions(shared_ptr<DescribeVodCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodCertificateList"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodCertificateListResponse(callApi(params, req, runtime));
}

DescribeVodCertificateListResponse Alibabacloud_Vod20170321::Client::describeVodCertificateList(shared_ptr<DescribeVodCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodCertificateListWithOptions(request, runtime);
}

DescribeVodDomainBpsDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainBpsDataWithOptions(shared_ptr<DescribeVodDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Interval", *request->interval));
  query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainBpsData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainBpsDataResponse(callApi(params, req, runtime));
}

DescribeVodDomainBpsDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainBpsData(shared_ptr<DescribeVodDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainBpsDataWithOptions(request, runtime);
}

DescribeVodDomainCertificateInfoResponse Alibabacloud_Vod20170321::Client::describeVodDomainCertificateInfoWithOptions(shared_ptr<DescribeVodDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainCertificateInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainCertificateInfoResponse(callApi(params, req, runtime));
}

DescribeVodDomainCertificateInfoResponse Alibabacloud_Vod20170321::Client::describeVodDomainCertificateInfo(shared_ptr<DescribeVodDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainCertificateInfoWithOptions(request, runtime);
}

DescribeVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::describeVodDomainConfigsWithOptions(shared_ptr<DescribeVodDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainConfigs"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainConfigsResponse(callApi(params, req, runtime));
}

DescribeVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::describeVodDomainConfigs(shared_ptr<DescribeVodDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainConfigsWithOptions(request, runtime);
}

DescribeVodDomainDetailResponse Alibabacloud_Vod20170321::Client::describeVodDomainDetailWithOptions(shared_ptr<DescribeVodDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainDetail"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainDetailResponse(callApi(params, req, runtime));
}

DescribeVodDomainDetailResponse Alibabacloud_Vod20170321::Client::describeVodDomainDetail(shared_ptr<DescribeVodDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainDetailWithOptions(request, runtime);
}

DescribeVodDomainLogResponse Alibabacloud_Vod20170321::Client::describeVodDomainLogWithOptions(shared_ptr<DescribeVodDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainLog"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainLogResponse(callApi(params, req, runtime));
}

DescribeVodDomainLogResponse Alibabacloud_Vod20170321::Client::describeVodDomainLog(shared_ptr<DescribeVodDomainLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainLogWithOptions(request, runtime);
}

DescribeVodDomainRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::describeVodDomainRealtimeLogDeliveryWithOptions(shared_ptr<DescribeVodDomainRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainRealtimeLogDelivery"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DescribeVodDomainRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::describeVodDomainRealtimeLogDelivery(shared_ptr<DescribeVodDomainRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainRealtimeLogDeliveryWithOptions(request, runtime);
}

DescribeVodDomainSrcBpsDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainSrcBpsDataWithOptions(shared_ptr<DescribeVodDomainSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Interval", *request->interval));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainSrcBpsData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainSrcBpsDataResponse(callApi(params, req, runtime));
}

DescribeVodDomainSrcBpsDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainSrcBpsData(shared_ptr<DescribeVodDomainSrcBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainSrcBpsDataWithOptions(request, runtime);
}

DescribeVodDomainTrafficDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainTrafficDataWithOptions(shared_ptr<DescribeVodDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Interval", *request->interval));
  query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainTrafficData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainTrafficDataResponse(callApi(params, req, runtime));
}

DescribeVodDomainTrafficDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainTrafficData(shared_ptr<DescribeVodDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainTrafficDataWithOptions(request, runtime);
}

DescribeVodDomainUsageDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainUsageDataWithOptions(shared_ptr<DescribeVodDomainUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Area", *request->area));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Field", *request->field));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodDomainUsageData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodDomainUsageDataResponse(callApi(params, req, runtime));
}

DescribeVodDomainUsageDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainUsageData(shared_ptr<DescribeVodDomainUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainUsageDataWithOptions(request, runtime);
}

DescribeVodRefreshQuotaResponse Alibabacloud_Vod20170321::Client::describeVodRefreshQuotaWithOptions(shared_ptr<DescribeVodRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodRefreshQuota"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodRefreshQuotaResponse(callApi(params, req, runtime));
}

DescribeVodRefreshQuotaResponse Alibabacloud_Vod20170321::Client::describeVodRefreshQuota(shared_ptr<DescribeVodRefreshQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodRefreshQuotaWithOptions(request, runtime);
}

DescribeVodRefreshTasksResponse Alibabacloud_Vod20170321::Client::describeVodRefreshTasksWithOptions(shared_ptr<DescribeVodRefreshTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  query->insert(pair<string, string>("ObjectType", *request->objectType));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodRefreshTasks"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodRefreshTasksResponse(callApi(params, req, runtime));
}

DescribeVodRefreshTasksResponse Alibabacloud_Vod20170321::Client::describeVodRefreshTasks(shared_ptr<DescribeVodRefreshTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodRefreshTasksWithOptions(request, runtime);
}

DescribeVodStorageDataResponse Alibabacloud_Vod20170321::Client::describeVodStorageDataWithOptions(shared_ptr<DescribeVodStorageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("Region", *request->region));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Storage", *request->storage));
  query->insert(pair<string, string>("StorageType", *request->storageType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodStorageData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodStorageDataResponse(callApi(params, req, runtime));
}

DescribeVodStorageDataResponse Alibabacloud_Vod20170321::Client::describeVodStorageData(shared_ptr<DescribeVodStorageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodStorageDataWithOptions(request, runtime);
}

DescribeVodTagResourcesResponse Alibabacloud_Vod20170321::Client::describeVodTagResourcesWithOptions(shared_ptr<DescribeVodTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<DescribeVodTagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodTagResources"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodTagResourcesResponse(callApi(params, req, runtime));
}

DescribeVodTagResourcesResponse Alibabacloud_Vod20170321::Client::describeVodTagResources(shared_ptr<DescribeVodTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodTagResourcesWithOptions(request, runtime);
}

DescribeVodTranscodeDataResponse Alibabacloud_Vod20170321::Client::describeVodTranscodeDataWithOptions(shared_ptr<DescribeVodTranscodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Interval", *request->interval));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("Region", *request->region));
  query->insert(pair<string, string>("Specification", *request->specification));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Storage", *request->storage));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodTranscodeData"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodTranscodeDataResponse(callApi(params, req, runtime));
}

DescribeVodTranscodeDataResponse Alibabacloud_Vod20170321::Client::describeVodTranscodeData(shared_ptr<DescribeVodTranscodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodTranscodeDataWithOptions(request, runtime);
}

DescribeVodUserDomainsResponse Alibabacloud_Vod20170321::Client::describeVodUserDomainsWithOptions(shared_ptr<DescribeVodUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("DomainSearchType", *request->domainSearchType));
  query->insert(pair<string, string>("DomainStatus", *request->domainStatus));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DescribeVodUserDomainsRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodUserDomains"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodUserDomainsResponse(callApi(params, req, runtime));
}

DescribeVodUserDomainsResponse Alibabacloud_Vod20170321::Client::describeVodUserDomains(shared_ptr<DescribeVodUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodUserDomainsWithOptions(request, runtime);
}

DescribeVodUserTagsResponse Alibabacloud_Vod20170321::Client::describeVodUserTagsWithOptions(shared_ptr<DescribeVodUserTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodUserTags"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodUserTagsResponse(callApi(params, req, runtime));
}

DescribeVodUserTagsResponse Alibabacloud_Vod20170321::Client::describeVodUserTags(shared_ptr<DescribeVodUserTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodUserTagsWithOptions(request, runtime);
}

DescribeVodVerifyContentResponse Alibabacloud_Vod20170321::Client::describeVodVerifyContentWithOptions(shared_ptr<DescribeVodVerifyContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVodVerifyContent"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVodVerifyContentResponse(callApi(params, req, runtime));
}

DescribeVodVerifyContentResponse Alibabacloud_Vod20170321::Client::describeVodVerifyContent(shared_ptr<DescribeVodVerifyContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodVerifyContentWithOptions(request, runtime);
}

DetachAppPolicyFromIdentityResponse Alibabacloud_Vod20170321::Client::detachAppPolicyFromIdentityWithOptions(shared_ptr<DetachAppPolicyFromIdentityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("IdentityName", *request->identityName));
  query->insert(pair<string, string>("IdentityType", *request->identityType));
  query->insert(pair<string, string>("PolicyNames", *request->policyNames));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachAppPolicyFromIdentity"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachAppPolicyFromIdentityResponse(callApi(params, req, runtime));
}

DetachAppPolicyFromIdentityResponse Alibabacloud_Vod20170321::Client::detachAppPolicyFromIdentity(shared_ptr<DetachAppPolicyFromIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachAppPolicyFromIdentityWithOptions(request, runtime);
}

DisableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::disableVodRealtimeLogDeliveryWithOptions(shared_ptr<DisableVodRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableVodRealtimeLogDelivery"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableVodRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DisableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::disableVodRealtimeLogDelivery(shared_ptr<DisableVodRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableVodRealtimeLogDeliveryWithOptions(request, runtime);
}

EnableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::enableVodRealtimeLogDeliveryWithOptions(shared_ptr<EnableVodRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableVodRealtimeLogDelivery"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableVodRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

EnableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::enableVodRealtimeLogDelivery(shared_ptr<EnableVodRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableVodRealtimeLogDeliveryWithOptions(request, runtime);
}

GetAIImageJobsResponse Alibabacloud_Vod20170321::Client::getAIImageJobsWithOptions(shared_ptr<GetAIImageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobIds", *request->jobIds));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAIImageJobs"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAIImageJobsResponse(callApi(params, req, runtime));
}

GetAIImageJobsResponse Alibabacloud_Vod20170321::Client::getAIImageJobs(shared_ptr<GetAIImageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAIImageJobsWithOptions(request, runtime);
}

GetAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::getAIMediaAuditJobWithOptions(shared_ptr<GetAIMediaAuditJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobId", *request->jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAIMediaAuditJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAIMediaAuditJobResponse(callApi(params, req, runtime));
}

GetAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::getAIMediaAuditJob(shared_ptr<GetAIMediaAuditJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAIMediaAuditJobWithOptions(request, runtime);
}

GetAITemplateResponse Alibabacloud_Vod20170321::Client::getAITemplateWithOptions(shared_ptr<GetAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAITemplateResponse(callApi(params, req, runtime));
}

GetAITemplateResponse Alibabacloud_Vod20170321::Client::getAITemplate(shared_ptr<GetAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAITemplateWithOptions(request, runtime);
}

GetAIVideoTagResultResponse Alibabacloud_Vod20170321::Client::getAIVideoTagResultWithOptions(shared_ptr<GetAIVideoTagResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAIVideoTagResult"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAIVideoTagResultResponse(callApi(params, req, runtime));
}

GetAIVideoTagResultResponse Alibabacloud_Vod20170321::Client::getAIVideoTagResult(shared_ptr<GetAIVideoTagResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAIVideoTagResultWithOptions(request, runtime);
}

GetAppInfosResponse Alibabacloud_Vod20170321::Client::getAppInfosWithOptions(shared_ptr<GetAppInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppIds", *request->appIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppInfosResponse(callApi(params, req, runtime));
}

GetAppInfosResponse Alibabacloud_Vod20170321::Client::getAppInfos(shared_ptr<GetAppInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppInfosWithOptions(request, runtime);
}

GetAttachedMediaInfoResponse Alibabacloud_Vod20170321::Client::getAttachedMediaInfoWithOptions(shared_ptr<GetAttachedMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AuthTimeout", *request->authTimeout));
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  query->insert(pair<string, string>("OutputType", *request->outputType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAttachedMediaInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAttachedMediaInfoResponse(callApi(params, req, runtime));
}

GetAttachedMediaInfoResponse Alibabacloud_Vod20170321::Client::getAttachedMediaInfo(shared_ptr<GetAttachedMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAttachedMediaInfoWithOptions(request, runtime);
}

GetAuditHistoryResponse Alibabacloud_Vod20170321::Client::getAuditHistoryWithOptions(shared_ptr<GetAuditHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuditHistory"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuditHistoryResponse(callApi(params, req, runtime));
}

GetAuditHistoryResponse Alibabacloud_Vod20170321::Client::getAuditHistory(shared_ptr<GetAuditHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuditHistoryWithOptions(request, runtime);
}

GetCategoriesResponse Alibabacloud_Vod20170321::Client::getCategoriesWithOptions(shared_ptr<GetCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CateId", *request->cateId));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategories"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCategoriesResponse(callApi(params, req, runtime));
}

GetCategoriesResponse Alibabacloud_Vod20170321::Client::getCategories(shared_ptr<GetCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoriesWithOptions(request, runtime);
}

GetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::getDefaultAITemplateWithOptions(shared_ptr<GetDefaultAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateType", *request->templateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultAITemplateResponse(callApi(params, req, runtime));
}

GetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::getDefaultAITemplate(shared_ptr<GetDefaultAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultAITemplateWithOptions(request, runtime);
}

GetEditingProjectResponse Alibabacloud_Vod20170321::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProject"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingProjectResponse(callApi(params, req, runtime));
}

GetEditingProjectResponse Alibabacloud_Vod20170321::Client::getEditingProject(shared_ptr<GetEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectWithOptions(request, runtime);
}

GetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MaterialType", *request->materialType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProjectMaterials"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

GetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

GetImageInfoResponse Alibabacloud_Vod20170321::Client::getImageInfoWithOptions(shared_ptr<GetImageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AuthTimeout", *request->authTimeout));
  query->insert(pair<string, string>("ImageId", *request->imageId));
  query->insert(pair<string, string>("OutputType", *request->outputType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageInfoResponse(callApi(params, req, runtime));
}

GetImageInfoResponse Alibabacloud_Vod20170321::Client::getImageInfo(shared_ptr<GetImageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageInfoWithOptions(request, runtime);
}

GetMediaAuditAudioResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditAudioResultDetailWithOptions(shared_ptr<GetMediaAuditAudioResultDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaAuditAudioResultDetail"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaAuditAudioResultDetailResponse(callApi(params, req, runtime));
}

GetMediaAuditAudioResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditAudioResultDetail(shared_ptr<GetMediaAuditAudioResultDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditAudioResultDetailWithOptions(request, runtime);
}

GetMediaAuditResultResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultWithOptions(shared_ptr<GetMediaAuditResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaAuditResult"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaAuditResultResponse(callApi(params, req, runtime));
}

GetMediaAuditResultResponse Alibabacloud_Vod20170321::Client::getMediaAuditResult(shared_ptr<GetMediaAuditResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultWithOptions(request, runtime);
}

GetMediaAuditResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultDetailWithOptions(shared_ptr<GetMediaAuditResultDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaAuditResultDetail"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaAuditResultDetailResponse(callApi(params, req, runtime));
}

GetMediaAuditResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultDetail(shared_ptr<GetMediaAuditResultDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultDetailWithOptions(request, runtime);
}

GetMediaAuditResultTimelineResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultTimelineWithOptions(shared_ptr<GetMediaAuditResultTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaAuditResultTimeline"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaAuditResultTimelineResponse(callApi(params, req, runtime));
}

GetMediaAuditResultTimelineResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultTimeline(shared_ptr<GetMediaAuditResultTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultTimelineWithOptions(request, runtime);
}

GetMediaDNAResultResponse Alibabacloud_Vod20170321::Client::getMediaDNAResultWithOptions(shared_ptr<GetMediaDNAResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaDNAResult"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaDNAResultResponse(callApi(params, req, runtime));
}

GetMediaDNAResultResponse Alibabacloud_Vod20170321::Client::getMediaDNAResult(shared_ptr<GetMediaDNAResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaDNAResultWithOptions(request, runtime);
}

GetMessageCallbackResponse Alibabacloud_Vod20170321::Client::getMessageCallbackWithOptions(shared_ptr<GetMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageCallback"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMessageCallbackResponse(callApi(params, req, runtime));
}

GetMessageCallbackResponse Alibabacloud_Vod20170321::Client::getMessageCallback(shared_ptr<GetMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageCallbackWithOptions(request, runtime);
}

GetMezzanineInfoResponse Alibabacloud_Vod20170321::Client::getMezzanineInfoWithOptions(shared_ptr<GetMezzanineInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AdditionType", *request->additionType));
  query->insert(pair<string, long>("AuthTimeout", *request->authTimeout));
  query->insert(pair<string, string>("OutputType", *request->outputType));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMezzanineInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMezzanineInfoResponse(callApi(params, req, runtime));
}

GetMezzanineInfoResponse Alibabacloud_Vod20170321::Client::getMezzanineInfo(shared_ptr<GetMezzanineInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMezzanineInfoWithOptions(request, runtime);
}

GetPlayInfoResponse Alibabacloud_Vod20170321::Client::getPlayInfoWithOptions(shared_ptr<GetPlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AdditionType", *request->additionType));
  query->insert(pair<string, long>("AuthTimeout", *request->authTimeout));
  query->insert(pair<string, string>("Definition", *request->definition));
  query->insert(pair<string, string>("Formats", *request->formats));
  query->insert(pair<string, string>("OutputType", *request->outputType));
  query->insert(pair<string, string>("PlayConfig", *request->playConfig));
  query->insert(pair<string, string>("ReAuthInfo", *request->reAuthInfo));
  query->insert(pair<string, string>("ResultType", *request->resultType));
  query->insert(pair<string, string>("StreamType", *request->streamType));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPlayInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPlayInfoResponse(callApi(params, req, runtime));
}

GetPlayInfoResponse Alibabacloud_Vod20170321::Client::getPlayInfo(shared_ptr<GetPlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPlayInfoWithOptions(request, runtime);
}

GetTranscodeSummaryResponse Alibabacloud_Vod20170321::Client::getTranscodeSummaryWithOptions(shared_ptr<GetTranscodeSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VideoIds", *request->videoIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranscodeSummary"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranscodeSummaryResponse(callApi(params, req, runtime));
}

GetTranscodeSummaryResponse Alibabacloud_Vod20170321::Client::getTranscodeSummary(shared_ptr<GetTranscodeSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeSummaryWithOptions(request, runtime);
}

GetTranscodeTaskResponse Alibabacloud_Vod20170321::Client::getTranscodeTaskWithOptions(shared_ptr<GetTranscodeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TranscodeTaskId", *request->transcodeTaskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranscodeTask"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranscodeTaskResponse(callApi(params, req, runtime));
}

GetTranscodeTaskResponse Alibabacloud_Vod20170321::Client::getTranscodeTask(shared_ptr<GetTranscodeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeTaskWithOptions(request, runtime);
}

GetTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::getTranscodeTemplateGroupWithOptions(shared_ptr<GetTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TranscodeTemplateGroupId", *request->transcodeTemplateGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranscodeTemplateGroup"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranscodeTemplateGroupResponse(callApi(params, req, runtime));
}

GetTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::getTranscodeTemplateGroup(shared_ptr<GetTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeTemplateGroupWithOptions(request, runtime);
}

GetURLUploadInfosResponse Alibabacloud_Vod20170321::Client::getURLUploadInfosWithOptions(shared_ptr<GetURLUploadInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobIds", *request->jobIds));
  query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetURLUploadInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetURLUploadInfosResponse(callApi(params, req, runtime));
}

GetURLUploadInfosResponse Alibabacloud_Vod20170321::Client::getURLUploadInfos(shared_ptr<GetURLUploadInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getURLUploadInfosWithOptions(request, runtime);
}

GetUploadDetailsResponse Alibabacloud_Vod20170321::Client::getUploadDetailsWithOptions(shared_ptr<GetUploadDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  query->insert(pair<string, string>("MediaType", *request->mediaType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUploadDetails"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUploadDetailsResponse(callApi(params, req, runtime));
}

GetUploadDetailsResponse Alibabacloud_Vod20170321::Client::getUploadDetails(shared_ptr<GetUploadDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUploadDetailsWithOptions(request, runtime);
}

GetVideoInfoResponse Alibabacloud_Vod20170321::Client::getVideoInfoWithOptions(shared_ptr<GetVideoInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoInfoResponse(callApi(params, req, runtime));
}

GetVideoInfoResponse Alibabacloud_Vod20170321::Client::getVideoInfo(shared_ptr<GetVideoInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoInfoWithOptions(request, runtime);
}

GetVideoInfosResponse Alibabacloud_Vod20170321::Client::getVideoInfosWithOptions(shared_ptr<GetVideoInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VideoIds", *request->videoIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoInfosResponse(callApi(params, req, runtime));
}

GetVideoInfosResponse Alibabacloud_Vod20170321::Client::getVideoInfos(shared_ptr<GetVideoInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoInfosWithOptions(request, runtime);
}

GetVideoListResponse Alibabacloud_Vod20170321::Client::getVideoListWithOptions(shared_ptr<GetVideoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CateId", *request->cateId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoList"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoListResponse(callApi(params, req, runtime));
}

GetVideoListResponse Alibabacloud_Vod20170321::Client::getVideoList(shared_ptr<GetVideoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoListWithOptions(request, runtime);
}

GetVideoPlayAuthResponse Alibabacloud_Vod20170321::Client::getVideoPlayAuthWithOptions(shared_ptr<GetVideoPlayAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  query->insert(pair<string, long>("AuthInfoTimeout", *request->authInfoTimeout));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoPlayAuth"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoPlayAuthResponse(callApi(params, req, runtime));
}

GetVideoPlayAuthResponse Alibabacloud_Vod20170321::Client::getVideoPlayAuth(shared_ptr<GetVideoPlayAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoPlayAuthWithOptions(request, runtime);
}

GetVodTemplateResponse Alibabacloud_Vod20170321::Client::getVodTemplateWithOptions(shared_ptr<GetVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VodTemplateId", *request->vodTemplateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVodTemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVodTemplateResponse(callApi(params, req, runtime));
}

GetVodTemplateResponse Alibabacloud_Vod20170321::Client::getVodTemplate(shared_ptr<GetVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVodTemplateWithOptions(request, runtime);
}

GetWatermarkResponse Alibabacloud_Vod20170321::Client::getWatermarkWithOptions(shared_ptr<GetWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("WatermarkId", *request->watermarkId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWatermark"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWatermarkResponse(callApi(params, req, runtime));
}

GetWatermarkResponse Alibabacloud_Vod20170321::Client::getWatermark(shared_ptr<GetWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWatermarkWithOptions(request, runtime);
}

ListAIImageInfoResponse Alibabacloud_Vod20170321::Client::listAIImageInfoWithOptions(shared_ptr<ListAIImageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAIImageInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAIImageInfoResponse(callApi(params, req, runtime));
}

ListAIImageInfoResponse Alibabacloud_Vod20170321::Client::listAIImageInfo(shared_ptr<ListAIImageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAIImageInfoWithOptions(request, runtime);
}

ListAIJobResponse Alibabacloud_Vod20170321::Client::listAIJobWithOptions(shared_ptr<ListAIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobIds", *request->jobIds));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAIJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAIJobResponse(callApi(params, req, runtime));
}

ListAIJobResponse Alibabacloud_Vod20170321::Client::listAIJob(shared_ptr<ListAIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAIJobWithOptions(request, runtime);
}

ListAITemplateResponse Alibabacloud_Vod20170321::Client::listAITemplateWithOptions(shared_ptr<ListAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateType", *request->templateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAITemplateResponse(callApi(params, req, runtime));
}

ListAITemplateResponse Alibabacloud_Vod20170321::Client::listAITemplate(shared_ptr<ListAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAITemplateWithOptions(request, runtime);
}

ListAppInfoResponse Alibabacloud_Vod20170321::Client::listAppInfoWithOptions(shared_ptr<ListAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppInfoResponse(callApi(params, req, runtime));
}

ListAppInfoResponse Alibabacloud_Vod20170321::Client::listAppInfo(shared_ptr<ListAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppInfoWithOptions(request, runtime);
}

ListAppPoliciesForIdentityResponse Alibabacloud_Vod20170321::Client::listAppPoliciesForIdentityWithOptions(shared_ptr<ListAppPoliciesForIdentityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("IdentityName", *request->identityName));
  query->insert(pair<string, string>("IdentityType", *request->identityType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppPoliciesForIdentity"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppPoliciesForIdentityResponse(callApi(params, req, runtime));
}

ListAppPoliciesForIdentityResponse Alibabacloud_Vod20170321::Client::listAppPoliciesForIdentity(shared_ptr<ListAppPoliciesForIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppPoliciesForIdentityWithOptions(request, runtime);
}

ListAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::listAuditSecurityIpWithOptions(shared_ptr<ListAuditSecurityIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuditSecurityIp"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuditSecurityIpResponse(callApi(params, req, runtime));
}

ListAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::listAuditSecurityIp(shared_ptr<ListAuditSecurityIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuditSecurityIpWithOptions(request, runtime);
}

ListDynamicImageResponse Alibabacloud_Vod20170321::Client::listDynamicImageWithOptions(shared_ptr<ListDynamicImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicImage"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDynamicImageResponse(callApi(params, req, runtime));
}

ListDynamicImageResponse Alibabacloud_Vod20170321::Client::listDynamicImage(shared_ptr<ListDynamicImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicImageWithOptions(request, runtime);
}

ListLiveRecordVideoResponse Alibabacloud_Vod20170321::Client::listLiveRecordVideoWithOptions(shared_ptr<ListLiveRecordVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("StreamName", *request->streamName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordVideo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRecordVideoResponse(callApi(params, req, runtime));
}

ListLiveRecordVideoResponse Alibabacloud_Vod20170321::Client::listLiveRecordVideo(shared_ptr<ListLiveRecordVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordVideoWithOptions(request, runtime);
}

ListMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::listMediaDNADeleteJobWithOptions(shared_ptr<ListMediaDNADeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobIds", *request->jobIds));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaDNADeleteJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaDNADeleteJobResponse(callApi(params, req, runtime));
}

ListMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::listMediaDNADeleteJob(shared_ptr<ListMediaDNADeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaDNADeleteJobWithOptions(request, runtime);
}

ListSnapshotsResponse Alibabacloud_Vod20170321::Client::listSnapshotsWithOptions(shared_ptr<ListSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AuthTimeout", *request->authTimeout));
  query->insert(pair<string, string>("PageNo", *request->pageNo));
  query->insert(pair<string, string>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SnapshotType", *request->snapshotType));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshots"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSnapshotsResponse(callApi(params, req, runtime));
}

ListSnapshotsResponse Alibabacloud_Vod20170321::Client::listSnapshots(shared_ptr<ListSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotsWithOptions(request, runtime);
}

ListTranscodeTaskResponse Alibabacloud_Vod20170321::Client::listTranscodeTaskWithOptions(shared_ptr<ListTranscodeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTranscodeTask"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTranscodeTaskResponse(callApi(params, req, runtime));
}

ListTranscodeTaskResponse Alibabacloud_Vod20170321::Client::listTranscodeTask(shared_ptr<ListTranscodeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeTaskWithOptions(request, runtime);
}

ListTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::listTranscodeTemplateGroupWithOptions(shared_ptr<ListTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTranscodeTemplateGroup"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTranscodeTemplateGroupResponse(callApi(params, req, runtime));
}

ListTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::listTranscodeTemplateGroup(shared_ptr<ListTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeTemplateGroupWithOptions(request, runtime);
}

ListVodRealtimeLogDeliveryDomainsResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryDomainsWithOptions(shared_ptr<ListVodRealtimeLogDeliveryDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVodRealtimeLogDeliveryDomains"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVodRealtimeLogDeliveryDomainsResponse(callApi(params, req, runtime));
}

ListVodRealtimeLogDeliveryDomainsResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryDomains(shared_ptr<ListVodRealtimeLogDeliveryDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodRealtimeLogDeliveryDomainsWithOptions(request, runtime);
}

ListVodRealtimeLogDeliveryInfosResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryInfosWithOptions(shared_ptr<ListVodRealtimeLogDeliveryInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVodRealtimeLogDeliveryInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVodRealtimeLogDeliveryInfosResponse(callApi(params, req, runtime));
}

ListVodRealtimeLogDeliveryInfosResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryInfos(shared_ptr<ListVodRealtimeLogDeliveryInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodRealtimeLogDeliveryInfosWithOptions(request, runtime);
}

ListVodTemplateResponse Alibabacloud_Vod20170321::Client::listVodTemplateWithOptions(shared_ptr<ListVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("TemplateType", *request->templateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVodTemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVodTemplateResponse(callApi(params, req, runtime));
}

ListVodTemplateResponse Alibabacloud_Vod20170321::Client::listVodTemplate(shared_ptr<ListVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodTemplateWithOptions(request, runtime);
}

ListWatermarkResponse Alibabacloud_Vod20170321::Client::listWatermarkWithOptions(shared_ptr<ListWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWatermark"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWatermarkResponse(callApi(params, req, runtime));
}

ListWatermarkResponse Alibabacloud_Vod20170321::Client::listWatermark(shared_ptr<ListWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWatermarkWithOptions(request, runtime);
}

MoveAppResourceResponse Alibabacloud_Vod20170321::Client::moveAppResourceWithOptions(shared_ptr<MoveAppResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, string>("TargetAppId", *request->targetAppId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveAppResource"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveAppResourceResponse(callApi(params, req, runtime));
}

MoveAppResourceResponse Alibabacloud_Vod20170321::Client::moveAppResource(shared_ptr<MoveAppResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveAppResourceWithOptions(request, runtime);
}

PreloadVodObjectCachesResponse Alibabacloud_Vod20170321::Client::preloadVodObjectCachesWithOptions(shared_ptr<PreloadVodObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreloadVodObjectCaches"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreloadVodObjectCachesResponse(callApi(params, req, runtime));
}

PreloadVodObjectCachesResponse Alibabacloud_Vod20170321::Client::preloadVodObjectCaches(shared_ptr<PreloadVodObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadVodObjectCachesWithOptions(request, runtime);
}

ProduceEditingProjectVideoResponse Alibabacloud_Vod20170321::Client::produceEditingProjectVideoWithOptions(shared_ptr<ProduceEditingProjectVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("MediaMetadata", *request->mediaMetadata));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProduceConfig", *request->produceConfig));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Timeline", *request->timeline));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProduceEditingProjectVideo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProduceEditingProjectVideoResponse(callApi(params, req, runtime));
}

ProduceEditingProjectVideoResponse Alibabacloud_Vod20170321::Client::produceEditingProjectVideo(shared_ptr<ProduceEditingProjectVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return produceEditingProjectVideoWithOptions(request, runtime);
}

RefreshUploadVideoResponse Alibabacloud_Vod20170321::Client::refreshUploadVideoWithOptions(shared_ptr<RefreshUploadVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshUploadVideo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshUploadVideoResponse(callApi(params, req, runtime));
}

RefreshUploadVideoResponse Alibabacloud_Vod20170321::Client::refreshUploadVideo(shared_ptr<RefreshUploadVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshUploadVideoWithOptions(request, runtime);
}

RefreshVodObjectCachesResponse Alibabacloud_Vod20170321::Client::refreshVodObjectCachesWithOptions(shared_ptr<RefreshVodObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  query->insert(pair<string, string>("ObjectType", *request->objectType));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshVodObjectCaches"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshVodObjectCachesResponse(callApi(params, req, runtime));
}

RefreshVodObjectCachesResponse Alibabacloud_Vod20170321::Client::refreshVodObjectCaches(shared_ptr<RefreshVodObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshVodObjectCachesWithOptions(request, runtime);
}

RegisterMediaResponse Alibabacloud_Vod20170321::Client::registerMediaWithOptions(shared_ptr<RegisterMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegisterMetadatas", *request->registerMetadatas));
  query->insert(pair<string, string>("TemplateGroupId", *request->templateGroupId));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMedia"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMediaResponse(callApi(params, req, runtime));
}

RegisterMediaResponse Alibabacloud_Vod20170321::Client::registerMedia(shared_ptr<RegisterMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_Vod20170321::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("Title", *request->title));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEditingProject"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEditingProjectResponse(callApi(params, req, runtime));
}

SearchEditingProjectResponse Alibabacloud_Vod20170321::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

SearchMediaResponse Alibabacloud_Vod20170321::Client::searchMediaWithOptions(shared_ptr<SearchMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Fields", *request->fields));
  query->insert(pair<string, string>("Match", *request->match));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ScrollToken", *request->scrollToken));
  query->insert(pair<string, string>("SearchType", *request->searchType));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMedia"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaResponse(callApi(params, req, runtime));
}

SearchMediaResponse Alibabacloud_Vod20170321::Client::searchMedia(shared_ptr<SearchMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWithOptions(request, runtime);
}

SetAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::setAuditSecurityIpWithOptions(shared_ptr<SetAuditSecurityIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Ips", *request->ips));
  query->insert(pair<string, string>("OperateMode", *request->operateMode));
  query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAuditSecurityIp"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAuditSecurityIpResponse(callApi(params, req, runtime));
}

SetAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::setAuditSecurityIp(shared_ptr<SetAuditSecurityIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAuditSecurityIpWithOptions(request, runtime);
}

SetCrossdomainContentResponse Alibabacloud_Vod20170321::Client::setCrossdomainContentWithOptions(shared_ptr<SetCrossdomainContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Content", *request->content));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceRealOwnerId", *request->resourceRealOwnerId));
  query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCrossdomainContent"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCrossdomainContentResponse(callApi(params, req, runtime));
}

SetCrossdomainContentResponse Alibabacloud_Vod20170321::Client::setCrossdomainContent(shared_ptr<SetCrossdomainContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCrossdomainContentWithOptions(request, runtime);
}

SetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::setDefaultAITemplateWithOptions(shared_ptr<SetDefaultAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultAITemplateResponse(callApi(params, req, runtime));
}

SetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::setDefaultAITemplate(shared_ptr<SetDefaultAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultAITemplateWithOptions(request, runtime);
}

SetDefaultTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::setDefaultTranscodeTemplateGroupWithOptions(shared_ptr<SetDefaultTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TranscodeTemplateGroupId", *request->transcodeTemplateGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultTranscodeTemplateGroup"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultTranscodeTemplateGroupResponse(callApi(params, req, runtime));
}

SetDefaultTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::setDefaultTranscodeTemplateGroup(shared_ptr<SetDefaultTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultTranscodeTemplateGroupWithOptions(request, runtime);
}

SetDefaultWatermarkResponse Alibabacloud_Vod20170321::Client::setDefaultWatermarkWithOptions(shared_ptr<SetDefaultWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("WatermarkId", *request->watermarkId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultWatermark"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultWatermarkResponse(callApi(params, req, runtime));
}

SetDefaultWatermarkResponse Alibabacloud_Vod20170321::Client::setDefaultWatermark(shared_ptr<SetDefaultWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultWatermarkWithOptions(request, runtime);
}

SetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::setEditingProjectMaterialsWithOptions(shared_ptr<SetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MaterialIds", *request->materialIds));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEditingProjectMaterials"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

SetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::setEditingProjectMaterials(shared_ptr<SetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEditingProjectMaterialsWithOptions(request, runtime);
}

SetMessageCallbackResponse Alibabacloud_Vod20170321::Client::setMessageCallbackWithOptions(shared_ptr<SetMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("AuthKey", *request->authKey));
  query->insert(pair<string, string>("AuthSwitch", *request->authSwitch));
  query->insert(pair<string, string>("CallbackType", *request->callbackType));
  query->insert(pair<string, string>("CallbackURL", *request->callbackURL));
  query->insert(pair<string, string>("EventTypeList", *request->eventTypeList));
  query->insert(pair<string, string>("MnsEndpoint", *request->mnsEndpoint));
  query->insert(pair<string, string>("MnsQueueName", *request->mnsQueueName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetMessageCallback"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetMessageCallbackResponse(callApi(params, req, runtime));
}

SetMessageCallbackResponse Alibabacloud_Vod20170321::Client::setMessageCallback(shared_ptr<SetMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMessageCallbackWithOptions(request, runtime);
}

SetVodDomainCertificateResponse Alibabacloud_Vod20170321::Client::setVodDomainCertificateWithOptions(shared_ptr<SetVodDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CertName", *request->certName));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SSLPri", *request->SSLPri));
  query->insert(pair<string, string>("SSLProtocol", *request->SSLProtocol));
  query->insert(pair<string, string>("SSLPub", *request->SSLPub));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetVodDomainCertificate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetVodDomainCertificateResponse(callApi(params, req, runtime));
}

SetVodDomainCertificateResponse Alibabacloud_Vod20170321::Client::setVodDomainCertificate(shared_ptr<SetVodDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVodDomainCertificateWithOptions(request, runtime);
}

SubmitAIImageAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIImageAuditJobWithOptions(shared_ptr<SubmitAIImageAuditJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaAuditConfiguration", *request->mediaAuditConfiguration));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAIImageAuditJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAIImageAuditJobResponse(callApi(params, req, runtime));
}

SubmitAIImageAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIImageAuditJob(shared_ptr<SubmitAIImageAuditJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIImageAuditJobWithOptions(request, runtime);
}

SubmitAIImageJobResponse Alibabacloud_Vod20170321::Client::submitAIImageJobWithOptions(shared_ptr<SubmitAIImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AIPipelineId", *request->AIPipelineId));
  query->insert(pair<string, string>("AITemplateId", *request->AITemplateId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAIImageJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAIImageJobResponse(callApi(params, req, runtime));
}

SubmitAIImageJobResponse Alibabacloud_Vod20170321::Client::submitAIImageJob(shared_ptr<SubmitAIImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIImageJobWithOptions(request, runtime);
}

SubmitAIJobResponse Alibabacloud_Vod20170321::Client::submitAIJobWithOptions(shared_ptr<SubmitAIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Config", *request->config));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Types", *request->types));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAIJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAIJobResponse(callApi(params, req, runtime));
}

SubmitAIJobResponse Alibabacloud_Vod20170321::Client::submitAIJob(shared_ptr<SubmitAIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIJobWithOptions(request, runtime);
}

SubmitAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIMediaAuditJobWithOptions(shared_ptr<SubmitAIMediaAuditJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaAuditConfiguration", *request->mediaAuditConfiguration));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("MediaType", *request->mediaType));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAIMediaAuditJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAIMediaAuditJobResponse(callApi(params, req, runtime));
}

SubmitAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIMediaAuditJob(shared_ptr<SubmitAIMediaAuditJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIMediaAuditJobWithOptions(request, runtime);
}

SubmitDynamicImageJobResponse Alibabacloud_Vod20170321::Client::submitDynamicImageJobWithOptions(shared_ptr<SubmitDynamicImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DynamicImageTemplateId", *request->dynamicImageTemplateId));
  query->insert(pair<string, string>("OverrideParams", *request->overrideParams));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicImageJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDynamicImageJobResponse(callApi(params, req, runtime));
}

SubmitDynamicImageJobResponse Alibabacloud_Vod20170321::Client::submitDynamicImageJob(shared_ptr<SubmitDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicImageJobWithOptions(request, runtime);
}

SubmitLiveEditingResponse Alibabacloud_Vod20170321::Client::submitLiveEditingWithOptions(shared_ptr<SubmitLiveEditingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, string>("Clips", *request->clips));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("MediaMetadata", *request->mediaMetadata));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProduceConfig", *request->produceConfig));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("StreamName", *request->streamName));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveEditing"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveEditingResponse(callApi(params, req, runtime));
}

SubmitLiveEditingResponse Alibabacloud_Vod20170321::Client::submitLiveEditing(shared_ptr<SubmitLiveEditingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingWithOptions(request, runtime);
}

SubmitMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::submitMediaDNADeleteJobWithOptions(shared_ptr<SubmitMediaDNADeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaDNADeleteJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaDNADeleteJobResponse(callApi(params, req, runtime));
}

SubmitMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::submitMediaDNADeleteJob(shared_ptr<SubmitMediaDNADeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaDNADeleteJobWithOptions(request, runtime);
}

SubmitPreprocessJobsResponse Alibabacloud_Vod20170321::Client::submitPreprocessJobsWithOptions(shared_ptr<SubmitPreprocessJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("PreprocessType", *request->preprocessType));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitPreprocessJobs"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitPreprocessJobsResponse(callApi(params, req, runtime));
}

SubmitPreprocessJobsResponse Alibabacloud_Vod20170321::Client::submitPreprocessJobs(shared_ptr<SubmitPreprocessJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPreprocessJobsWithOptions(request, runtime);
}

SubmitSnapshotJobResponse Alibabacloud_Vod20170321::Client::submitSnapshotJobWithOptions(shared_ptr<SubmitSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("Count", *request->count));
  query->insert(pair<string, string>("Height", *request->height));
  query->insert(pair<string, long>("Interval", *request->interval));
  query->insert(pair<string, string>("SnapshotTemplateId", *request->snapshotTemplateId));
  query->insert(pair<string, long>("SpecifiedOffsetTime", *request->specifiedOffsetTime));
  query->insert(pair<string, string>("SpriteSnapshotConfig", *request->spriteSnapshotConfig));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  query->insert(pair<string, string>("Width", *request->width));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSnapshotJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSnapshotJobResponse(callApi(params, req, runtime));
}

SubmitSnapshotJobResponse Alibabacloud_Vod20170321::Client::submitSnapshotJob(shared_ptr<SubmitSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSnapshotJobWithOptions(request, runtime);
}

SubmitTranscodeJobsResponse Alibabacloud_Vod20170321::Client::submitTranscodeJobsWithOptions(shared_ptr<SubmitTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EncryptConfig", *request->encryptConfig));
  query->insert(pair<string, string>("OverrideParams", *request->overrideParams));
  query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  query->insert(pair<string, string>("Priority", *request->priority));
  query->insert(pair<string, string>("TemplateGroupId", *request->templateGroupId));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTranscodeJobs"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTranscodeJobsResponse(callApi(params, req, runtime));
}

SubmitTranscodeJobsResponse Alibabacloud_Vod20170321::Client::submitTranscodeJobs(shared_ptr<SubmitTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTranscodeJobsWithOptions(request, runtime);
}

SubmitWorkflowJobResponse Alibabacloud_Vod20170321::Client::submitWorkflowJobWithOptions(shared_ptr<SubmitWorkflowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitWorkflowJob"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitWorkflowJobResponse(callApi(params, req, runtime));
}

SubmitWorkflowJobResponse Alibabacloud_Vod20170321::Client::submitWorkflowJob(shared_ptr<SubmitWorkflowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitWorkflowJobWithOptions(request, runtime);
}

TagVodResourcesResponse Alibabacloud_Vod20170321::Client::tagVodResourcesWithOptions(shared_ptr<TagVodResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<TagVodResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagVodResources"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagVodResourcesResponse(callApi(params, req, runtime));
}

TagVodResourcesResponse Alibabacloud_Vod20170321::Client::tagVodResources(shared_ptr<TagVodResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagVodResourcesWithOptions(request, runtime);
}

UnTagVodResourcesResponse Alibabacloud_Vod20170321::Client::unTagVodResourcesWithOptions(shared_ptr<UnTagVodResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("All", *request->all));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnTagVodResources"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagVodResourcesResponse(callApi(params, req, runtime));
}

UnTagVodResourcesResponse Alibabacloud_Vod20170321::Client::unTagVodResources(shared_ptr<UnTagVodResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagVodResourcesWithOptions(request, runtime);
}

UpdateAITemplateResponse Alibabacloud_Vod20170321::Client::updateAITemplateWithOptions(shared_ptr<UpdateAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  query->insert(pair<string, string>("TemplateName", *request->templateName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAITemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAITemplateResponse(callApi(params, req, runtime));
}

UpdateAITemplateResponse Alibabacloud_Vod20170321::Client::updateAITemplate(shared_ptr<UpdateAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAITemplateWithOptions(request, runtime);
}

UpdateAppInfoResponse Alibabacloud_Vod20170321::Client::updateAppInfoWithOptions(shared_ptr<UpdateAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAppInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAppInfoResponse(callApi(params, req, runtime));
}

UpdateAppInfoResponse Alibabacloud_Vod20170321::Client::updateAppInfo(shared_ptr<UpdateAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppInfoWithOptions(request, runtime);
}

UpdateAttachedMediaInfosResponse Alibabacloud_Vod20170321::Client::updateAttachedMediaInfosWithOptions(shared_ptr<UpdateAttachedMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("UpdateContent", *request->updateContent));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAttachedMediaInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAttachedMediaInfosResponse(callApi(params, req, runtime));
}

UpdateAttachedMediaInfosResponse Alibabacloud_Vod20170321::Client::updateAttachedMediaInfos(shared_ptr<UpdateAttachedMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAttachedMediaInfosWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_Vod20170321::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CateId", *request->cateId));
  query->insert(pair<string, string>("CateName", *request->cateName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCategory"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCategoryResponse(callApi(params, req, runtime));
}

UpdateCategoryResponse Alibabacloud_Vod20170321::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_Vod20170321::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, string>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Timeline", *request->timeline));
  query->insert(pair<string, string>("Title", *request->title));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEditingProject"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEditingProjectResponse(callApi(params, req, runtime));
}

UpdateEditingProjectResponse Alibabacloud_Vod20170321::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

UpdateImageInfosResponse Alibabacloud_Vod20170321::Client::updateImageInfosWithOptions(shared_ptr<UpdateImageInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("UpdateContent", *request->updateContent));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateImageInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateImageInfosResponse(callApi(params, req, runtime));
}

UpdateImageInfosResponse Alibabacloud_Vod20170321::Client::updateImageInfos(shared_ptr<UpdateImageInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageInfosWithOptions(request, runtime);
}

UpdateStreamInfoResponse Alibabacloud_Vod20170321::Client::updateStreamInfoWithOptions(shared_ptr<UpdateStreamInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobId", *request->jobId));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStreamInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStreamInfoResponse(callApi(params, req, runtime));
}

UpdateStreamInfoResponse Alibabacloud_Vod20170321::Client::updateStreamInfo(shared_ptr<UpdateStreamInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStreamInfoWithOptions(request, runtime);
}

UpdateTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::updateTranscodeTemplateGroupWithOptions(shared_ptr<UpdateTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Locked", *request->locked));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("TranscodeTemplateGroupId", *request->transcodeTemplateGroupId));
  query->insert(pair<string, string>("TranscodeTemplateList", *request->transcodeTemplateList));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTranscodeTemplateGroup"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTranscodeTemplateGroupResponse(callApi(params, req, runtime));
}

UpdateTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::updateTranscodeTemplateGroup(shared_ptr<UpdateTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTranscodeTemplateGroupWithOptions(request, runtime);
}

UpdateVideoInfoResponse Alibabacloud_Vod20170321::Client::updateVideoInfoWithOptions(shared_ptr<UpdateVideoInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CateId", *request->cateId));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("VideoId", *request->videoId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVideoInfo"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVideoInfoResponse(callApi(params, req, runtime));
}

UpdateVideoInfoResponse Alibabacloud_Vod20170321::Client::updateVideoInfo(shared_ptr<UpdateVideoInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVideoInfoWithOptions(request, runtime);
}

UpdateVideoInfosResponse Alibabacloud_Vod20170321::Client::updateVideoInfosWithOptions(shared_ptr<UpdateVideoInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("UpdateContent", *request->updateContent));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVideoInfos"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVideoInfosResponse(callApi(params, req, runtime));
}

UpdateVideoInfosResponse Alibabacloud_Vod20170321::Client::updateVideoInfos(shared_ptr<UpdateVideoInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVideoInfosWithOptions(request, runtime);
}

UpdateVodDomainResponse Alibabacloud_Vod20170321::Client::updateVodDomainWithOptions(shared_ptr<UpdateVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("Sources", *request->sources));
  query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVodDomain"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVodDomainResponse(callApi(params, req, runtime));
}

UpdateVodDomainResponse Alibabacloud_Vod20170321::Client::updateVodDomain(shared_ptr<UpdateVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVodDomainWithOptions(request, runtime);
}

UpdateVodTemplateResponse Alibabacloud_Vod20170321::Client::updateVodTemplateWithOptions(shared_ptr<UpdateVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  query->insert(pair<string, string>("VodTemplateId", *request->vodTemplateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVodTemplate"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVodTemplateResponse(callApi(params, req, runtime));
}

UpdateVodTemplateResponse Alibabacloud_Vod20170321::Client::updateVodTemplate(shared_ptr<UpdateVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVodTemplateWithOptions(request, runtime);
}

UpdateWatermarkResponse Alibabacloud_Vod20170321::Client::updateWatermarkWithOptions(shared_ptr<UpdateWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("WatermarkConfig", *request->watermarkConfig));
  query->insert(pair<string, string>("WatermarkId", *request->watermarkId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWatermark"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWatermarkResponse(callApi(params, req, runtime));
}

UpdateWatermarkResponse Alibabacloud_Vod20170321::Client::updateWatermark(shared_ptr<UpdateWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWatermarkWithOptions(request, runtime);
}

UploadMediaByURLResponse Alibabacloud_Vod20170321::Client::uploadMediaByURLWithOptions(shared_ptr<UploadMediaByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  query->insert(pair<string, string>("TemplateGroupId", *request->templateGroupId));
  query->insert(pair<string, string>("UploadMetadatas", *request->uploadMetadatas));
  query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMediaByURL"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMediaByURLResponse(callApi(params, req, runtime));
}

UploadMediaByURLResponse Alibabacloud_Vod20170321::Client::uploadMediaByURL(shared_ptr<UploadMediaByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMediaByURLWithOptions(request, runtime);
}

UploadStreamByURLResponse Alibabacloud_Vod20170321::Client::uploadStreamByURLWithOptions(shared_ptr<UploadStreamByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Definition", *request->definition));
  query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  query->insert(pair<string, string>("HDRType", *request->HDRType));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("StreamURL", *request->streamURL));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadStreamByURL"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadStreamByURLResponse(callApi(params, req, runtime));
}

UploadStreamByURLResponse Alibabacloud_Vod20170321::Client::uploadStreamByURL(shared_ptr<UploadStreamByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStreamByURLWithOptions(request, runtime);
}

VerifyVodDomainOwnerResponse Alibabacloud_Vod20170321::Client::verifyVodDomainOwnerWithOptions(shared_ptr<VerifyVodDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("VerifyType", *request->verifyType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyVodDomainOwner"))},
    {"version", boost::any(string("2017-03-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyVodDomainOwnerResponse(callApi(params, req, runtime));
}

VerifyVodDomainOwnerResponse Alibabacloud_Vod20170321::Client::verifyVodDomainOwner(shared_ptr<VerifyVodDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyVodDomainOwnerWithOptions(request, runtime);
}

